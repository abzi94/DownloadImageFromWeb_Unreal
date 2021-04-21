// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DownloadImageFromWeb/ImageUtilityFuctionLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeImageUtilityFuctionLibrary() {}
// Cross Module References
	DOWNLOADIMAGEFROMWEB_API UClass* Z_Construct_UClass_UImageUtilityFuctionLibrary_NoRegister();
	DOWNLOADIMAGEFROMWEB_API UClass* Z_Construct_UClass_UImageUtilityFuctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_DownloadImageFromWeb();
	DOWNLOADIMAGEFROMWEB_API UFunction* Z_Construct_UFunction_UImageUtilityFuctionLibrary_DeleteFile();
	DOWNLOADIMAGEFROMWEB_API UFunction* Z_Construct_UFunction_UImageUtilityFuctionLibrary_LoadImageFromPath();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
// End Cross Module References
	void UImageUtilityFuctionLibrary::StaticRegisterNativesUImageUtilityFuctionLibrary()
	{
		UClass* Class = UImageUtilityFuctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DeleteFile", &UImageUtilityFuctionLibrary::execDeleteFile },
			{ "LoadImageFromPath", &UImageUtilityFuctionLibrary::execLoadImageFromPath },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UImageUtilityFuctionLibrary_DeleteFile_Statics
	{
		struct ImageUtilityFuctionLibrary_eventDeleteFile_Parms
		{
			FString FilePath;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FilePath;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UImageUtilityFuctionLibrary_DeleteFile_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ImageUtilityFuctionLibrary_eventDeleteFile_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UImageUtilityFuctionLibrary_DeleteFile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ImageUtilityFuctionLibrary_eventDeleteFile_Parms), &Z_Construct_UFunction_UImageUtilityFuctionLibrary_DeleteFile_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UImageUtilityFuctionLibrary_DeleteFile_Statics::NewProp_FilePath = { "FilePath", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ImageUtilityFuctionLibrary_eventDeleteFile_Parms, FilePath), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UImageUtilityFuctionLibrary_DeleteFile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UImageUtilityFuctionLibrary_DeleteFile_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UImageUtilityFuctionLibrary_DeleteFile_Statics::NewProp_FilePath,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UImageUtilityFuctionLibrary_DeleteFile_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ImageUtilityFuctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UImageUtilityFuctionLibrary_DeleteFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UImageUtilityFuctionLibrary, nullptr, "DeleteFile", nullptr, nullptr, sizeof(ImageUtilityFuctionLibrary_eventDeleteFile_Parms), Z_Construct_UFunction_UImageUtilityFuctionLibrary_DeleteFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UImageUtilityFuctionLibrary_DeleteFile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UImageUtilityFuctionLibrary_DeleteFile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UImageUtilityFuctionLibrary_DeleteFile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UImageUtilityFuctionLibrary_DeleteFile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UImageUtilityFuctionLibrary_DeleteFile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UImageUtilityFuctionLibrary_LoadImageFromPath_Statics
	{
		struct ImageUtilityFuctionLibrary_eventLoadImageFromPath_Parms
		{
			FString FullFilePath;
			bool IsValid;
			int32 Width;
			int32 Height;
			UTexture2D* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Height;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Width;
		static void NewProp_IsValid_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsValid;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FullFilePath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FullFilePath;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UImageUtilityFuctionLibrary_LoadImageFromPath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ImageUtilityFuctionLibrary_eventLoadImageFromPath_Parms, ReturnValue), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UImageUtilityFuctionLibrary_LoadImageFromPath_Statics::NewProp_Height = { "Height", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ImageUtilityFuctionLibrary_eventLoadImageFromPath_Parms, Height), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UImageUtilityFuctionLibrary_LoadImageFromPath_Statics::NewProp_Width = { "Width", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ImageUtilityFuctionLibrary_eventLoadImageFromPath_Parms, Width), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UImageUtilityFuctionLibrary_LoadImageFromPath_Statics::NewProp_IsValid_SetBit(void* Obj)
	{
		((ImageUtilityFuctionLibrary_eventLoadImageFromPath_Parms*)Obj)->IsValid = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UImageUtilityFuctionLibrary_LoadImageFromPath_Statics::NewProp_IsValid = { "IsValid", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ImageUtilityFuctionLibrary_eventLoadImageFromPath_Parms), &Z_Construct_UFunction_UImageUtilityFuctionLibrary_LoadImageFromPath_Statics::NewProp_IsValid_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UImageUtilityFuctionLibrary_LoadImageFromPath_Statics::NewProp_FullFilePath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UImageUtilityFuctionLibrary_LoadImageFromPath_Statics::NewProp_FullFilePath = { "FullFilePath", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ImageUtilityFuctionLibrary_eventLoadImageFromPath_Parms, FullFilePath), METADATA_PARAMS(Z_Construct_UFunction_UImageUtilityFuctionLibrary_LoadImageFromPath_Statics::NewProp_FullFilePath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UImageUtilityFuctionLibrary_LoadImageFromPath_Statics::NewProp_FullFilePath_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UImageUtilityFuctionLibrary_LoadImageFromPath_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UImageUtilityFuctionLibrary_LoadImageFromPath_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UImageUtilityFuctionLibrary_LoadImageFromPath_Statics::NewProp_Height,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UImageUtilityFuctionLibrary_LoadImageFromPath_Statics::NewProp_Width,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UImageUtilityFuctionLibrary_LoadImageFromPath_Statics::NewProp_IsValid,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UImageUtilityFuctionLibrary_LoadImageFromPath_Statics::NewProp_FullFilePath,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UImageUtilityFuctionLibrary_LoadImageFromPath_Statics::Function_MetaDataParams[] = {
		{ "Category", "Load Texture 2D From Disk" },
		{ "ModuleRelativePath", "ImageUtilityFuctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UImageUtilityFuctionLibrary_LoadImageFromPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UImageUtilityFuctionLibrary, nullptr, "LoadImageFromPath", nullptr, nullptr, sizeof(ImageUtilityFuctionLibrary_eventLoadImageFromPath_Parms), Z_Construct_UFunction_UImageUtilityFuctionLibrary_LoadImageFromPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UImageUtilityFuctionLibrary_LoadImageFromPath_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UImageUtilityFuctionLibrary_LoadImageFromPath_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UImageUtilityFuctionLibrary_LoadImageFromPath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UImageUtilityFuctionLibrary_LoadImageFromPath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UImageUtilityFuctionLibrary_LoadImageFromPath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UImageUtilityFuctionLibrary_NoRegister()
	{
		return UImageUtilityFuctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UImageUtilityFuctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UImageUtilityFuctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_DownloadImageFromWeb,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UImageUtilityFuctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UImageUtilityFuctionLibrary_DeleteFile, "DeleteFile" }, // 2541251573
		{ &Z_Construct_UFunction_UImageUtilityFuctionLibrary_LoadImageFromPath, "LoadImageFromPath" }, // 1288908361
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UImageUtilityFuctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "ImageUtilityFuctionLibrary.h" },
		{ "ModuleRelativePath", "ImageUtilityFuctionLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UImageUtilityFuctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UImageUtilityFuctionLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UImageUtilityFuctionLibrary_Statics::ClassParams = {
		&UImageUtilityFuctionLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UImageUtilityFuctionLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UImageUtilityFuctionLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UImageUtilityFuctionLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UImageUtilityFuctionLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UImageUtilityFuctionLibrary, 94815603);
	template<> DOWNLOADIMAGEFROMWEB_API UClass* StaticClass<UImageUtilityFuctionLibrary>()
	{
		return UImageUtilityFuctionLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UImageUtilityFuctionLibrary(Z_Construct_UClass_UImageUtilityFuctionLibrary, &UImageUtilityFuctionLibrary::StaticClass, TEXT("/Script/DownloadImageFromWeb"), TEXT("UImageUtilityFuctionLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UImageUtilityFuctionLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
