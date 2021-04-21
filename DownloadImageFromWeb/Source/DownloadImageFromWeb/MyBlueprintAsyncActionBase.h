// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

#include "Interfaces/IHttpRequest.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "MyBlueprintAsyncActionBase.generated.h"

class UTexture2DDynamic;
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FDownloadImage1Delegate, UTexture2DDynamic*, Texture);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FDownloadFileUpdateProgressDelegate, int32, ReceivedDataInBytes,
int32, TotalDataInBytes,const TArray<uint8>&, BinaryData,UTexture2DDynamic*, Texture);


UCLASS()
class DOWNLOADIMAGEFROMWEB_API UMyBlueprintAsyncActionBase : public UBlueprintAsyncActionBase
{
	GENERATED_UCLASS_BODY()
	public:
	UFUNCTION(BlueprintCallable, meta=( BlueprintInternalUseOnly="true" ))
    static UMyBlueprintAsyncActionBase* DownloadImageFromURL(FString URL);

	public:

	UPROPERTY(BlueprintAssignable, Category = "AsyncTaskDownloadFile", meta = (DisplayName = "On Update Progress"))
	FDownloadFileUpdateProgressDelegate OnUpdateProgress;
    
	UPROPERTY(BlueprintAssignable)
	FDownloadImage1Delegate OnSuccess;

	UPROPERTY(BlueprintAssignable)
	FDownloadImage1Delegate OnFail;

	UPROPERTY()
	UTexture2DDynamic* MyTexture;
	public:

	void Start(FString URL);

	private:

	/** Handles image requests coming from the web */
	void HandleImageRequest(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded);
	void HandleFileRequestProgress(FHttpRequestPtr HttpRequest, int32 BytesSent, int32 BytesReceived);

};
