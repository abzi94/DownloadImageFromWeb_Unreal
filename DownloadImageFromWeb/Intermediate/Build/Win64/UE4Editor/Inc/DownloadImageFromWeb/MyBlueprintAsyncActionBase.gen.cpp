// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DownloadImageFromWeb/MyBlueprintAsyncActionBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyBlueprintAsyncActionBase() {}
// Cross Module References
	DOWNLOADIMAGEFROMWEB_API UFunction* Z_Construct_UDelegateFunction_DownloadImageFromWeb_DownloadFileUpdateProgressDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_DownloadImageFromWeb();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2DDynamic_NoRegister();
	DOWNLOADIMAGEFROMWEB_API UFunction* Z_Construct_UDelegateFunction_DownloadImageFromWeb_DownloadImage1Delegate__DelegateSignature();
	DOWNLOADIMAGEFROMWEB_API UClass* Z_Construct_UClass_UMyBlueprintAsyncActionBase_NoRegister();
	DOWNLOADIMAGEFROMWEB_API UClass* Z_Construct_UClass_UMyBlueprintAsyncActionBase();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
	DOWNLOADIMAGEFROMWEB_API UFunction* Z_Construct_UFunction_UMyBlueprintAsyncActionBase_DownloadImageFromURL();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_DownloadImageFromWeb_DownloadFileUpdateProgressDelegate__DelegateSignature_Statics
	{
		struct _Script_DownloadImageFromWeb_eventDownloadFileUpdateProgressDelegate_Parms
		{
			int32 ReceivedDataInBytes;
			int32 TotalDataInBytes;
			TArray<uint8> BinaryData;
			UTexture2DDynamic* Texture;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Texture;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BinaryData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_BinaryData;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_BinaryData_Inner;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TotalDataInBytes;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReceivedDataInBytes;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_DownloadImageFromWeb_DownloadFileUpdateProgressDelegate__DelegateSignature_Statics::NewProp_Texture = { "Texture", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_DownloadImageFromWeb_eventDownloadFileUpdateProgressDelegate_Parms, Texture), Z_Construct_UClass_UTexture2DDynamic_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_DownloadImageFromWeb_DownloadFileUpdateProgressDelegate__DelegateSignature_Statics::NewProp_BinaryData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_DownloadImageFromWeb_DownloadFileUpdateProgressDelegate__DelegateSignature_Statics::NewProp_BinaryData = { "BinaryData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_DownloadImageFromWeb_eventDownloadFileUpdateProgressDelegate_Parms, BinaryData), METADATA_PARAMS(Z_Construct_UDelegateFunction_DownloadImageFromWeb_DownloadFileUpdateProgressDelegate__DelegateSignature_Statics::NewProp_BinaryData_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DownloadImageFromWeb_DownloadFileUpdateProgressDelegate__DelegateSignature_Statics::NewProp_BinaryData_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_DownloadImageFromWeb_DownloadFileUpdateProgressDelegate__DelegateSignature_Statics::NewProp_BinaryData_Inner = { "BinaryData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_DownloadImageFromWeb_DownloadFileUpdateProgressDelegate__DelegateSignature_Statics::NewProp_TotalDataInBytes = { "TotalDataInBytes", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_DownloadImageFromWeb_eventDownloadFileUpdateProgressDelegate_Parms, TotalDataInBytes), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_DownloadImageFromWeb_DownloadFileUpdateProgressDelegate__DelegateSignature_Statics::NewProp_ReceivedDataInBytes = { "ReceivedDataInBytes", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_DownloadImageFromWeb_eventDownloadFileUpdateProgressDelegate_Parms, ReceivedDataInBytes), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_DownloadImageFromWeb_DownloadFileUpdateProgressDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_DownloadImageFromWeb_DownloadFileUpdateProgressDelegate__DelegateSignature_Statics::NewProp_Texture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_DownloadImageFromWeb_DownloadFileUpdateProgressDelegate__DelegateSignature_Statics::NewProp_BinaryData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_DownloadImageFromWeb_DownloadFileUpdateProgressDelegate__DelegateSignature_Statics::NewProp_BinaryData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_DownloadImageFromWeb_DownloadFileUpdateProgressDelegate__DelegateSignature_Statics::NewProp_TotalDataInBytes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_DownloadImageFromWeb_DownloadFileUpdateProgressDelegate__DelegateSignature_Statics::NewProp_ReceivedDataInBytes,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_DownloadImageFromWeb_DownloadFileUpdateProgressDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyBlueprintAsyncActionBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_DownloadImageFromWeb_DownloadFileUpdateProgressDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_DownloadImageFromWeb, nullptr, "DownloadFileUpdateProgressDelegate__DelegateSignature", nullptr, nullptr, sizeof(_Script_DownloadImageFromWeb_eventDownloadFileUpdateProgressDelegate_Parms), Z_Construct_UDelegateFunction_DownloadImageFromWeb_DownloadFileUpdateProgressDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DownloadImageFromWeb_DownloadFileUpdateProgressDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_DownloadImageFromWeb_DownloadFileUpdateProgressDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DownloadImageFromWeb_DownloadFileUpdateProgressDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_DownloadImageFromWeb_DownloadFileUpdateProgressDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_DownloadImageFromWeb_DownloadFileUpdateProgressDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_DownloadImageFromWeb_DownloadImage1Delegate__DelegateSignature_Statics
	{
		struct _Script_DownloadImageFromWeb_eventDownloadImage1Delegate_Parms
		{
			UTexture2DDynamic* Texture;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Texture;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_DownloadImageFromWeb_DownloadImage1Delegate__DelegateSignature_Statics::NewProp_Texture = { "Texture", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_DownloadImageFromWeb_eventDownloadImage1Delegate_Parms, Texture), Z_Construct_UClass_UTexture2DDynamic_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_DownloadImageFromWeb_DownloadImage1Delegate__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_DownloadImageFromWeb_DownloadImage1Delegate__DelegateSignature_Statics::NewProp_Texture,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_DownloadImageFromWeb_DownloadImage1Delegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyBlueprintAsyncActionBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_DownloadImageFromWeb_DownloadImage1Delegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_DownloadImageFromWeb, nullptr, "DownloadImage1Delegate__DelegateSignature", nullptr, nullptr, sizeof(_Script_DownloadImageFromWeb_eventDownloadImage1Delegate_Parms), Z_Construct_UDelegateFunction_DownloadImageFromWeb_DownloadImage1Delegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DownloadImageFromWeb_DownloadImage1Delegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_DownloadImageFromWeb_DownloadImage1Delegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DownloadImageFromWeb_DownloadImage1Delegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_DownloadImageFromWeb_DownloadImage1Delegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_DownloadImageFromWeb_DownloadImage1Delegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	void UMyBlueprintAsyncActionBase::StaticRegisterNativesUMyBlueprintAsyncActionBase()
	{
		UClass* Class = UMyBlueprintAsyncActionBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DownloadImageFromURL", &UMyBlueprintAsyncActionBase::execDownloadImageFromURL },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMyBlueprintAsyncActionBase_DownloadImageFromURL_Statics
	{
		struct MyBlueprintAsyncActionBase_eventDownloadImageFromURL_Parms
		{
			FString URL;
			UMyBlueprintAsyncActionBase* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_URL;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMyBlueprintAsyncActionBase_DownloadImageFromURL_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyBlueprintAsyncActionBase_eventDownloadImageFromURL_Parms, ReturnValue), Z_Construct_UClass_UMyBlueprintAsyncActionBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMyBlueprintAsyncActionBase_DownloadImageFromURL_Statics::NewProp_URL = { "URL", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyBlueprintAsyncActionBase_eventDownloadImageFromURL_Parms, URL), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMyBlueprintAsyncActionBase_DownloadImageFromURL_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyBlueprintAsyncActionBase_DownloadImageFromURL_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyBlueprintAsyncActionBase_DownloadImageFromURL_Statics::NewProp_URL,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMyBlueprintAsyncActionBase_DownloadImageFromURL_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "ModuleRelativePath", "MyBlueprintAsyncActionBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyBlueprintAsyncActionBase_DownloadImageFromURL_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyBlueprintAsyncActionBase, nullptr, "DownloadImageFromURL", nullptr, nullptr, sizeof(MyBlueprintAsyncActionBase_eventDownloadImageFromURL_Parms), Z_Construct_UFunction_UMyBlueprintAsyncActionBase_DownloadImageFromURL_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMyBlueprintAsyncActionBase_DownloadImageFromURL_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMyBlueprintAsyncActionBase_DownloadImageFromURL_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMyBlueprintAsyncActionBase_DownloadImageFromURL_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMyBlueprintAsyncActionBase_DownloadImageFromURL()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMyBlueprintAsyncActionBase_DownloadImageFromURL_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UMyBlueprintAsyncActionBase_NoRegister()
	{
		return UMyBlueprintAsyncActionBase::StaticClass();
	}
	struct Z_Construct_UClass_UMyBlueprintAsyncActionBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MyTexture_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MyTexture;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnFail_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFail;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSuccess;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnUpdateProgress_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnUpdateProgress;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMyBlueprintAsyncActionBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_DownloadImageFromWeb,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMyBlueprintAsyncActionBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMyBlueprintAsyncActionBase_DownloadImageFromURL, "DownloadImageFromURL" }, // 2279458895
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyBlueprintAsyncActionBase_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MyBlueprintAsyncActionBase.h" },
		{ "ModuleRelativePath", "MyBlueprintAsyncActionBase.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyBlueprintAsyncActionBase_Statics::NewProp_MyTexture_MetaData[] = {
		{ "ModuleRelativePath", "MyBlueprintAsyncActionBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMyBlueprintAsyncActionBase_Statics::NewProp_MyTexture = { "MyTexture", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMyBlueprintAsyncActionBase, MyTexture), Z_Construct_UClass_UTexture2DDynamic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMyBlueprintAsyncActionBase_Statics::NewProp_MyTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMyBlueprintAsyncActionBase_Statics::NewProp_MyTexture_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyBlueprintAsyncActionBase_Statics::NewProp_OnFail_MetaData[] = {
		{ "ModuleRelativePath", "MyBlueprintAsyncActionBase.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMyBlueprintAsyncActionBase_Statics::NewProp_OnFail = { "OnFail", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMyBlueprintAsyncActionBase, OnFail), Z_Construct_UDelegateFunction_DownloadImageFromWeb_DownloadImage1Delegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UMyBlueprintAsyncActionBase_Statics::NewProp_OnFail_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMyBlueprintAsyncActionBase_Statics::NewProp_OnFail_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyBlueprintAsyncActionBase_Statics::NewProp_OnSuccess_MetaData[] = {
		{ "ModuleRelativePath", "MyBlueprintAsyncActionBase.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMyBlueprintAsyncActionBase_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMyBlueprintAsyncActionBase, OnSuccess), Z_Construct_UDelegateFunction_DownloadImageFromWeb_DownloadImage1Delegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UMyBlueprintAsyncActionBase_Statics::NewProp_OnSuccess_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMyBlueprintAsyncActionBase_Statics::NewProp_OnSuccess_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyBlueprintAsyncActionBase_Statics::NewProp_OnUpdateProgress_MetaData[] = {
		{ "Category", "AsyncTaskDownloadFile" },
		{ "DisplayName", "On Update Progress" },
		{ "ModuleRelativePath", "MyBlueprintAsyncActionBase.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMyBlueprintAsyncActionBase_Statics::NewProp_OnUpdateProgress = { "OnUpdateProgress", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMyBlueprintAsyncActionBase, OnUpdateProgress), Z_Construct_UDelegateFunction_DownloadImageFromWeb_DownloadFileUpdateProgressDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UMyBlueprintAsyncActionBase_Statics::NewProp_OnUpdateProgress_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMyBlueprintAsyncActionBase_Statics::NewProp_OnUpdateProgress_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMyBlueprintAsyncActionBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyBlueprintAsyncActionBase_Statics::NewProp_MyTexture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyBlueprintAsyncActionBase_Statics::NewProp_OnFail,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyBlueprintAsyncActionBase_Statics::NewProp_OnSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyBlueprintAsyncActionBase_Statics::NewProp_OnUpdateProgress,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMyBlueprintAsyncActionBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMyBlueprintAsyncActionBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMyBlueprintAsyncActionBase_Statics::ClassParams = {
		&UMyBlueprintAsyncActionBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UMyBlueprintAsyncActionBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UMyBlueprintAsyncActionBase_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMyBlueprintAsyncActionBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMyBlueprintAsyncActionBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMyBlueprintAsyncActionBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMyBlueprintAsyncActionBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMyBlueprintAsyncActionBase, 34651097);
	template<> DOWNLOADIMAGEFROMWEB_API UClass* StaticClass<UMyBlueprintAsyncActionBase>()
	{
		return UMyBlueprintAsyncActionBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMyBlueprintAsyncActionBase(Z_Construct_UClass_UMyBlueprintAsyncActionBase, &UMyBlueprintAsyncActionBase::StaticClass, TEXT("/Script/DownloadImageFromWeb"), TEXT("UMyBlueprintAsyncActionBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMyBlueprintAsyncActionBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
