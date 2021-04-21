// Fill out your copyright notice in the Description page of Project Settings.


#include "MyBlueprintAsyncActionBase.h"
#include "Modules/ModuleManager.h"
#include "Engine/Texture2D.h"
#include "Engine/Texture2DDynamic.h"
#include "IImageWrapper.h"
#include "IImageWrapperModule.h"
#include "Interfaces/IHttpResponse.h"
#include "HttpModule.h"


//----------------------------------------------------------------------//
// UAsyncTaskDownloadImage
//----------------------------------------------------------------------//

#if !UE_SERVER

static void WriteRawToTexture_RenderThread(FTexture2DDynamicResource* TextureResource, const TArray<uint8>& RawData, bool bUseSRGB = true)
{
    check(IsInRenderingThread());

    FRHITexture2D* TextureRHI = TextureResource->GetTexture2DRHI();

    int32 Width = TextureRHI->GetSizeX();
    int32 Height = TextureRHI->GetSizeY();

    uint32 DestStride = 0;
    uint8* DestData = reinterpret_cast<uint8*>(RHILockTexture2D(TextureRHI, 0, RLM_WriteOnly, DestStride, false, false));

    for (int32 y = 0; y < Height; y++)
    {
        uint8* DestPtr = &DestData[(Height - 1 - y) * DestStride];

        const FColor* SrcPtr = &((FColor*)(RawData.GetData()))[(Height - 1 - y) * Width];
        for (int32 x = 0; x < Width; x++)
        {
            *DestPtr++ = SrcPtr->B;
            *DestPtr++ = SrcPtr->G;
            *DestPtr++ = SrcPtr->R;
            *DestPtr++ = SrcPtr->A;
            SrcPtr++;
        }
    }

    RHIUnlockTexture2D(TextureRHI, 0, false, false);
}

#endif

UMyBlueprintAsyncActionBase::UMyBlueprintAsyncActionBase(const FObjectInitializer& ObjectInitializer)
    : Super(ObjectInitializer)
{
    if ( HasAnyFlags(RF_ClassDefaultObject) == false )
    {
        AddToRoot();
    }
}

UMyBlueprintAsyncActionBase* UMyBlueprintAsyncActionBase::DownloadImageFromURL(FString URL)
{
    UMyBlueprintAsyncActionBase* DownloadTask = NewObject<UMyBlueprintAsyncActionBase>();
    DownloadTask->Start(URL);

    return DownloadTask;
}

void UMyBlueprintAsyncActionBase::Start(FString URL)
{
#if !UE_SERVER
    // Create the Http request and add to pending request list
    TSharedRef<IHttpRequest> HttpRequest = FHttpModule::Get().CreateRequest();

    HttpRequest->OnProcessRequestComplete().BindUObject(this, &UMyBlueprintAsyncActionBase::HandleImageRequest);
    HttpRequest->OnRequestProgress().BindUObject(this, &UMyBlueprintAsyncActionBase::HandleFileRequestProgress);

    HttpRequest->SetURL(URL);
    HttpRequest->SetVerb(TEXT("GET"));
    HttpRequest->ProcessRequest();
#else
    // On the server we don't execute fail or success we just don't fire the request.
    RemoveFromRoot();
#endif
}

void UMyBlueprintAsyncActionBase::HandleImageRequest(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded)
{
#if !UE_SERVER

    RemoveFromRoot();

    if ( bSucceeded && HttpResponse.IsValid() && HttpResponse->GetContentLength() > 0 )
    {
        IImageWrapperModule& ImageWrapperModule = FModuleManager::LoadModuleChecked<IImageWrapperModule>(FName("ImageWrapper"));
        TSharedPtr<IImageWrapper> ImageWrappers[3] =
        {
            ImageWrapperModule.CreateImageWrapper(EImageFormat::PNG),
            ImageWrapperModule.CreateImageWrapper(EImageFormat::JPEG),
            ImageWrapperModule.CreateImageWrapper(EImageFormat::BMP),
        };

        for ( auto ImageWrapper : ImageWrappers )
        {
            if ( ImageWrapper.IsValid() && ImageWrapper->SetCompressed(HttpResponse->GetContent().GetData(), HttpResponse->GetContentLength()) )
            {
                const TArray<uint8>* RawData = NULL;
                const ERGBFormat InFormat = (GShaderPlatformForFeatureLevel[GMaxRHIFeatureLevel] == SP_OPENGL_ES2_WEBGL) ? ERGBFormat::RGBA : ERGBFormat::BGRA;
                if ( ImageWrapper->GetRaw(InFormat, 8, RawData) )
                {
                    if ( UTexture2DDynamic* Texture = UTexture2DDynamic::Create(ImageWrapper->GetWidth(), ImageWrapper->GetHeight()) )
                    {
                        Texture->SRGB = true;
                        Texture->UpdateResource();

                        FTexture2DDynamicResource* TextureResource = static_cast<FTexture2DDynamicResource*>(Texture->Resource);
                        TArray<uint8> RawDataCopy = *RawData;
                        ENQUEUE_RENDER_COMMAND(FWriteRawDataToTexture)(
                            [TextureResource, RawDataCopy](FRHICommandListImmediate& RHICmdList)
                            {
                                WriteRawToTexture_RenderThread(TextureResource, RawDataCopy);
                            });
                        
                        OnSuccess.Broadcast(Texture);
                        MyTexture = Texture;
                        return;
                    }
                }
            }
        }
    }

    OnFail.Broadcast(nullptr);

#endif
}
void UMyBlueprintAsyncActionBase::HandleFileRequestProgress(FHttpRequestPtr HttpRequest, int32 BytesSent, int32 BytesReceived)
{
#if !UE_SERVER
    if (HttpRequest->GetResponse()->GetContentLength() > 0)
    {
        TArray<uint8> EmptyData;
        OnUpdateProgress.Broadcast(BytesReceived, HttpRequest->GetResponse()->GetContentLength(), EmptyData,MyTexture);
    }
#endif
}