// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UTexture2D;
#ifdef DOWNLOADIMAGEFROMWEB_ImageUtilityFuctionLibrary_generated_h
#error "ImageUtilityFuctionLibrary.generated.h already included, missing '#pragma once' in ImageUtilityFuctionLibrary.h"
#endif
#define DOWNLOADIMAGEFROMWEB_ImageUtilityFuctionLibrary_generated_h

#define DownloadImageFromWeb_Source_DownloadImageFromWeb_ImageUtilityFuctionLibrary_h_21_SPARSE_DATA
#define DownloadImageFromWeb_Source_DownloadImageFromWeb_ImageUtilityFuctionLibrary_h_21_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execDeleteFile) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_FilePath); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UImageUtilityFuctionLibrary::DeleteFile(Z_Param_FilePath); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLoadImageFromPath) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_FullFilePath); \
		P_GET_UBOOL_REF(Z_Param_Out_IsValid); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_Width); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_Height); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UTexture2D**)Z_Param__Result=UImageUtilityFuctionLibrary::LoadImageFromPath(Z_Param_FullFilePath,Z_Param_Out_IsValid,Z_Param_Out_Width,Z_Param_Out_Height); \
		P_NATIVE_END; \
	}


#define DownloadImageFromWeb_Source_DownloadImageFromWeb_ImageUtilityFuctionLibrary_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execDeleteFile) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_FilePath); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UImageUtilityFuctionLibrary::DeleteFile(Z_Param_FilePath); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLoadImageFromPath) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_FullFilePath); \
		P_GET_UBOOL_REF(Z_Param_Out_IsValid); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_Width); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_Height); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UTexture2D**)Z_Param__Result=UImageUtilityFuctionLibrary::LoadImageFromPath(Z_Param_FullFilePath,Z_Param_Out_IsValid,Z_Param_Out_Width,Z_Param_Out_Height); \
		P_NATIVE_END; \
	}


#define DownloadImageFromWeb_Source_DownloadImageFromWeb_ImageUtilityFuctionLibrary_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUImageUtilityFuctionLibrary(); \
	friend struct Z_Construct_UClass_UImageUtilityFuctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UImageUtilityFuctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DownloadImageFromWeb"), NO_API) \
	DECLARE_SERIALIZER(UImageUtilityFuctionLibrary)


#define DownloadImageFromWeb_Source_DownloadImageFromWeb_ImageUtilityFuctionLibrary_h_21_INCLASS \
private: \
	static void StaticRegisterNativesUImageUtilityFuctionLibrary(); \
	friend struct Z_Construct_UClass_UImageUtilityFuctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UImageUtilityFuctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DownloadImageFromWeb"), NO_API) \
	DECLARE_SERIALIZER(UImageUtilityFuctionLibrary)


#define DownloadImageFromWeb_Source_DownloadImageFromWeb_ImageUtilityFuctionLibrary_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UImageUtilityFuctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UImageUtilityFuctionLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UImageUtilityFuctionLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UImageUtilityFuctionLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UImageUtilityFuctionLibrary(UImageUtilityFuctionLibrary&&); \
	NO_API UImageUtilityFuctionLibrary(const UImageUtilityFuctionLibrary&); \
public:


#define DownloadImageFromWeb_Source_DownloadImageFromWeb_ImageUtilityFuctionLibrary_h_21_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UImageUtilityFuctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UImageUtilityFuctionLibrary(UImageUtilityFuctionLibrary&&); \
	NO_API UImageUtilityFuctionLibrary(const UImageUtilityFuctionLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UImageUtilityFuctionLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UImageUtilityFuctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UImageUtilityFuctionLibrary)


#define DownloadImageFromWeb_Source_DownloadImageFromWeb_ImageUtilityFuctionLibrary_h_21_PRIVATE_PROPERTY_OFFSET
#define DownloadImageFromWeb_Source_DownloadImageFromWeb_ImageUtilityFuctionLibrary_h_18_PROLOG
#define DownloadImageFromWeb_Source_DownloadImageFromWeb_ImageUtilityFuctionLibrary_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DownloadImageFromWeb_Source_DownloadImageFromWeb_ImageUtilityFuctionLibrary_h_21_PRIVATE_PROPERTY_OFFSET \
	DownloadImageFromWeb_Source_DownloadImageFromWeb_ImageUtilityFuctionLibrary_h_21_SPARSE_DATA \
	DownloadImageFromWeb_Source_DownloadImageFromWeb_ImageUtilityFuctionLibrary_h_21_RPC_WRAPPERS \
	DownloadImageFromWeb_Source_DownloadImageFromWeb_ImageUtilityFuctionLibrary_h_21_INCLASS \
	DownloadImageFromWeb_Source_DownloadImageFromWeb_ImageUtilityFuctionLibrary_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DownloadImageFromWeb_Source_DownloadImageFromWeb_ImageUtilityFuctionLibrary_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DownloadImageFromWeb_Source_DownloadImageFromWeb_ImageUtilityFuctionLibrary_h_21_PRIVATE_PROPERTY_OFFSET \
	DownloadImageFromWeb_Source_DownloadImageFromWeb_ImageUtilityFuctionLibrary_h_21_SPARSE_DATA \
	DownloadImageFromWeb_Source_DownloadImageFromWeb_ImageUtilityFuctionLibrary_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	DownloadImageFromWeb_Source_DownloadImageFromWeb_ImageUtilityFuctionLibrary_h_21_INCLASS_NO_PURE_DECLS \
	DownloadImageFromWeb_Source_DownloadImageFromWeb_ImageUtilityFuctionLibrary_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DOWNLOADIMAGEFROMWEB_API UClass* StaticClass<class UImageUtilityFuctionLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DownloadImageFromWeb_Source_DownloadImageFromWeb_ImageUtilityFuctionLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
