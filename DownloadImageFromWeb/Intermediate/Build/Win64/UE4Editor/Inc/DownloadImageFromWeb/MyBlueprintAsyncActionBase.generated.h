// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UTexture2DDynamic;
class UMyBlueprintAsyncActionBase;
#ifdef DOWNLOADIMAGEFROMWEB_MyBlueprintAsyncActionBase_generated_h
#error "MyBlueprintAsyncActionBase.generated.h already included, missing '#pragma once' in MyBlueprintAsyncActionBase.h"
#endif
#define DOWNLOADIMAGEFROMWEB_MyBlueprintAsyncActionBase_generated_h

#define DownloadImageFromWeb_Source_DownloadImageFromWeb_MyBlueprintAsyncActionBase_h_14_DELEGATE \
struct _Script_DownloadImageFromWeb_eventDownloadFileUpdateProgressDelegate_Parms \
{ \
	int32 ReceivedDataInBytes; \
	int32 TotalDataInBytes; \
	TArray<uint8> BinaryData; \
	UTexture2DDynamic* Texture; \
}; \
static inline void FDownloadFileUpdateProgressDelegate_DelegateWrapper(const FMulticastScriptDelegate& DownloadFileUpdateProgressDelegate, int32 ReceivedDataInBytes, int32 TotalDataInBytes, TArray<uint8> const& BinaryData, UTexture2DDynamic* Texture) \
{ \
	_Script_DownloadImageFromWeb_eventDownloadFileUpdateProgressDelegate_Parms Parms; \
	Parms.ReceivedDataInBytes=ReceivedDataInBytes; \
	Parms.TotalDataInBytes=TotalDataInBytes; \
	Parms.BinaryData=BinaryData; \
	Parms.Texture=Texture; \
	DownloadFileUpdateProgressDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define DownloadImageFromWeb_Source_DownloadImageFromWeb_MyBlueprintAsyncActionBase_h_12_DELEGATE \
struct _Script_DownloadImageFromWeb_eventDownloadImage1Delegate_Parms \
{ \
	UTexture2DDynamic* Texture; \
}; \
static inline void FDownloadImage1Delegate_DelegateWrapper(const FMulticastScriptDelegate& DownloadImage1Delegate, UTexture2DDynamic* Texture) \
{ \
	_Script_DownloadImageFromWeb_eventDownloadImage1Delegate_Parms Parms; \
	Parms.Texture=Texture; \
	DownloadImage1Delegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define DownloadImageFromWeb_Source_DownloadImageFromWeb_MyBlueprintAsyncActionBase_h_20_SPARSE_DATA
#define DownloadImageFromWeb_Source_DownloadImageFromWeb_MyBlueprintAsyncActionBase_h_20_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execDownloadImageFromURL) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_URL); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UMyBlueprintAsyncActionBase**)Z_Param__Result=UMyBlueprintAsyncActionBase::DownloadImageFromURL(Z_Param_URL); \
		P_NATIVE_END; \
	}


#define DownloadImageFromWeb_Source_DownloadImageFromWeb_MyBlueprintAsyncActionBase_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execDownloadImageFromURL) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_URL); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UMyBlueprintAsyncActionBase**)Z_Param__Result=UMyBlueprintAsyncActionBase::DownloadImageFromURL(Z_Param_URL); \
		P_NATIVE_END; \
	}


#define DownloadImageFromWeb_Source_DownloadImageFromWeb_MyBlueprintAsyncActionBase_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMyBlueprintAsyncActionBase(); \
	friend struct Z_Construct_UClass_UMyBlueprintAsyncActionBase_Statics; \
public: \
	DECLARE_CLASS(UMyBlueprintAsyncActionBase, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DownloadImageFromWeb"), NO_API) \
	DECLARE_SERIALIZER(UMyBlueprintAsyncActionBase)


#define DownloadImageFromWeb_Source_DownloadImageFromWeb_MyBlueprintAsyncActionBase_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUMyBlueprintAsyncActionBase(); \
	friend struct Z_Construct_UClass_UMyBlueprintAsyncActionBase_Statics; \
public: \
	DECLARE_CLASS(UMyBlueprintAsyncActionBase, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DownloadImageFromWeb"), NO_API) \
	DECLARE_SERIALIZER(UMyBlueprintAsyncActionBase)


#define DownloadImageFromWeb_Source_DownloadImageFromWeb_MyBlueprintAsyncActionBase_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMyBlueprintAsyncActionBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMyBlueprintAsyncActionBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMyBlueprintAsyncActionBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMyBlueprintAsyncActionBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMyBlueprintAsyncActionBase(UMyBlueprintAsyncActionBase&&); \
	NO_API UMyBlueprintAsyncActionBase(const UMyBlueprintAsyncActionBase&); \
public:


#define DownloadImageFromWeb_Source_DownloadImageFromWeb_MyBlueprintAsyncActionBase_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMyBlueprintAsyncActionBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMyBlueprintAsyncActionBase(UMyBlueprintAsyncActionBase&&); \
	NO_API UMyBlueprintAsyncActionBase(const UMyBlueprintAsyncActionBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMyBlueprintAsyncActionBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMyBlueprintAsyncActionBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMyBlueprintAsyncActionBase)


#define DownloadImageFromWeb_Source_DownloadImageFromWeb_MyBlueprintAsyncActionBase_h_20_PRIVATE_PROPERTY_OFFSET
#define DownloadImageFromWeb_Source_DownloadImageFromWeb_MyBlueprintAsyncActionBase_h_17_PROLOG
#define DownloadImageFromWeb_Source_DownloadImageFromWeb_MyBlueprintAsyncActionBase_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DownloadImageFromWeb_Source_DownloadImageFromWeb_MyBlueprintAsyncActionBase_h_20_PRIVATE_PROPERTY_OFFSET \
	DownloadImageFromWeb_Source_DownloadImageFromWeb_MyBlueprintAsyncActionBase_h_20_SPARSE_DATA \
	DownloadImageFromWeb_Source_DownloadImageFromWeb_MyBlueprintAsyncActionBase_h_20_RPC_WRAPPERS \
	DownloadImageFromWeb_Source_DownloadImageFromWeb_MyBlueprintAsyncActionBase_h_20_INCLASS \
	DownloadImageFromWeb_Source_DownloadImageFromWeb_MyBlueprintAsyncActionBase_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DownloadImageFromWeb_Source_DownloadImageFromWeb_MyBlueprintAsyncActionBase_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DownloadImageFromWeb_Source_DownloadImageFromWeb_MyBlueprintAsyncActionBase_h_20_PRIVATE_PROPERTY_OFFSET \
	DownloadImageFromWeb_Source_DownloadImageFromWeb_MyBlueprintAsyncActionBase_h_20_SPARSE_DATA \
	DownloadImageFromWeb_Source_DownloadImageFromWeb_MyBlueprintAsyncActionBase_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	DownloadImageFromWeb_Source_DownloadImageFromWeb_MyBlueprintAsyncActionBase_h_20_INCLASS_NO_PURE_DECLS \
	DownloadImageFromWeb_Source_DownloadImageFromWeb_MyBlueprintAsyncActionBase_h_20_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class MyBlueprintAsyncActionBase."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DOWNLOADIMAGEFROMWEB_API UClass* StaticClass<class UMyBlueprintAsyncActionBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DownloadImageFromWeb_Source_DownloadImageFromWeb_MyBlueprintAsyncActionBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
