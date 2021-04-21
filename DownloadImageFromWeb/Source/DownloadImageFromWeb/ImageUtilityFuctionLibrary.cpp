// Fill out your copyright notice in the Description page of Project Settings.


#include "ImageUtilityFuctionLibrary.h"
#include "ImageUtils.h"
#include "IImageWrapper.h"
#include "Modules/ModuleManager.h"
#include "HttpModule.h"
#include "RunTime/UMG/Public/Blueprint/AsyncTaskDownloadImage.h"
#include "Blueprint/AsyncTaskDownloadImage.h"
#include "Modules/ModuleManager.h"
#include "Interfaces/IHttpResponse.h"
#include "IImageWrapperModule.h"
#include "GenericPlatform/GenericPlatformFile.h"
#include "HAL/FileManager.h"
#include "Misc/FileHelper.h"

UTexture2D* UImageUtilityFuctionLibrary::LoadImageFromPath(const FString& FullFilePath, bool& IsValid,int32& Width, int32& Height)
{
    
    
    IsValid = false;
    UTexture2D* LoadedT2D = NULL;
    
    IImageWrapperModule& ImageWrapperModule = FModuleManager::LoadModuleChecked<IImageWrapperModule>(FName("ImageWrapper"));
    TSharedPtr<IImageWrapper> ImageWrapper = ImageWrapperModule.CreateImageWrapper(EImageFormat::PNG);
 
    //Load From File
    TArray<uint8> RawFileData;
    if (!FFileHelper::LoadFileToArray(RawFileData, *FullFilePath)) return NULL;
    //~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
      
    //Create T2D!
    if (ImageWrapper.IsValid() && ImageWrapper->SetCompressed(RawFileData.GetData(), RawFileData.Num()))
    {
        const TArray<uint8>* UncompressedBGRA = NULL;
        if (ImageWrapper->GetRaw(ERGBFormat::BGRA, 8, UncompressedBGRA))
        {
            LoadedT2D = UTexture2D::CreateTransient(ImageWrapper->GetWidth(), ImageWrapper->GetHeight(), PF_B8G8R8A8);
            
            //Valid?
            if(!LoadedT2D) return NULL;
            //~~~~~~~~~~~~~~
            
            //Out!
            Width = ImageWrapper->GetWidth();
            Height = ImageWrapper->GetHeight();
             
            //Copy!
            void* TextureData = LoadedT2D->PlatformData->Mips[0].BulkData.Lock(LOCK_READ_WRITE);
            FMemory::Memcpy(TextureData, UncompressedBGRA->GetData(), UncompressedBGRA->Num());
            LoadedT2D->PlatformData->Mips[0].BulkData.Unlock();

            //Update!
            LoadedT2D->UpdateResource();
        }
    }
     
    // Success!
    IsValid = true;
    return LoadedT2D;
}


bool UImageUtilityFuctionLibrary::DeleteFile(FString FilePath){
    
    if (FPaths::ValidatePath(FilePath) && FPaths::FileExists(FilePath))
    {
         IFileManager& FileManager = IFileManager::Get();
         FileManager.Delete(*FilePath);
    }
    
   return true;
}


