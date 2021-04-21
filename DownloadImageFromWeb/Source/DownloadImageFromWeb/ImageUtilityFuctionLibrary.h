// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/Texture2D.h"
#include "Engine/Texture2DDynamic.h"
#include "Interfaces/IHttpRequest.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "UObject/ObjectMacros.h"
#include "Interfaces/IHttpRequest.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "ImageUtilityFuctionLibrary.generated.h"

/**
 * 
 */
UCLASS()
class DOWNLOADIMAGEFROMWEB_API UImageUtilityFuctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

	public:    
	UFUNCTION(BlueprintCallable,BlueprintPure,Category="Load Texture 2D From Disk")
    static UTexture2D* LoadImageFromPath(const FString& FullFilePath, bool& IsValid,int32& Width, int32& Height);
    
	UFUNCTION(BlueprintCallable,BlueprintPure)
    static bool DeleteFile(FString FilePath);
	
};
