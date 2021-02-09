// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FUEOSCElement;
#ifdef UEOSC_UEOSCReceiver_generated_h
#error "UEOSCReceiver.generated.h already included, missing '#pragma once' in UEOSCReceiver.h"
#endif
#define UEOSC_UEOSCReceiver_generated_h

#define BasicFeature_UE4_Plugins_UEOSC_Source_UEOSC_Include_UEOSCReceiver_h_13_DELEGATE \
struct _Script_UEOSC_eventUEOSCReceiveEventDelegate_Parms \
{ \
	FName Address; \
	TArray<FUEOSCElement> Data; \
	FString SenderIp; \
}; \
static inline void FUEOSCReceiveEventDelegate_DelegateWrapper(const FMulticastScriptDelegate& UEOSCReceiveEventDelegate, FName const& Address, TArray<FUEOSCElement> const& Data, const FString& SenderIp) \
{ \
	_Script_UEOSC_eventUEOSCReceiveEventDelegate_Parms Parms; \
	Parms.Address=Address; \
	Parms.Data=Data; \
	Parms.SenderIp=SenderIp; \
	UEOSCReceiveEventDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define BasicFeature_UE4_Plugins_UEOSC_Source_UEOSC_Include_UEOSCReceiver_h_21_SPARSE_DATA
#define BasicFeature_UE4_Plugins_UEOSC_Source_UEOSC_Include_UEOSCReceiver_h_21_RPC_WRAPPERS
#define BasicFeature_UE4_Plugins_UEOSC_Source_UEOSC_Include_UEOSCReceiver_h_21_RPC_WRAPPERS_NO_PURE_DECLS
#define BasicFeature_UE4_Plugins_UEOSC_Source_UEOSC_Include_UEOSCReceiver_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUEOSCReceiver(); \
	friend struct Z_Construct_UClass_UUEOSCReceiver_Statics; \
public: \
	DECLARE_CLASS(UUEOSCReceiver, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UEOSC"), NO_API) \
	DECLARE_SERIALIZER(UUEOSCReceiver)


#define BasicFeature_UE4_Plugins_UEOSC_Source_UEOSC_Include_UEOSCReceiver_h_21_INCLASS \
private: \
	static void StaticRegisterNativesUUEOSCReceiver(); \
	friend struct Z_Construct_UClass_UUEOSCReceiver_Statics; \
public: \
	DECLARE_CLASS(UUEOSCReceiver, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UEOSC"), NO_API) \
	DECLARE_SERIALIZER(UUEOSCReceiver)


#define BasicFeature_UE4_Plugins_UEOSC_Source_UEOSC_Include_UEOSCReceiver_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUEOSCReceiver(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUEOSCReceiver) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUEOSCReceiver); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUEOSCReceiver); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUEOSCReceiver(UUEOSCReceiver&&); \
	NO_API UUEOSCReceiver(const UUEOSCReceiver&); \
public:


#define BasicFeature_UE4_Plugins_UEOSC_Source_UEOSC_Include_UEOSCReceiver_h_21_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUEOSCReceiver(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUEOSCReceiver(UUEOSCReceiver&&); \
	NO_API UUEOSCReceiver(const UUEOSCReceiver&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUEOSCReceiver); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUEOSCReceiver); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUEOSCReceiver)


#define BasicFeature_UE4_Plugins_UEOSC_Source_UEOSC_Include_UEOSCReceiver_h_21_PRIVATE_PROPERTY_OFFSET
#define BasicFeature_UE4_Plugins_UEOSC_Source_UEOSC_Include_UEOSCReceiver_h_18_PROLOG
#define BasicFeature_UE4_Plugins_UEOSC_Source_UEOSC_Include_UEOSCReceiver_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BasicFeature_UE4_Plugins_UEOSC_Source_UEOSC_Include_UEOSCReceiver_h_21_PRIVATE_PROPERTY_OFFSET \
	BasicFeature_UE4_Plugins_UEOSC_Source_UEOSC_Include_UEOSCReceiver_h_21_SPARSE_DATA \
	BasicFeature_UE4_Plugins_UEOSC_Source_UEOSC_Include_UEOSCReceiver_h_21_RPC_WRAPPERS \
	BasicFeature_UE4_Plugins_UEOSC_Source_UEOSC_Include_UEOSCReceiver_h_21_INCLASS \
	BasicFeature_UE4_Plugins_UEOSC_Source_UEOSC_Include_UEOSCReceiver_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define BasicFeature_UE4_Plugins_UEOSC_Source_UEOSC_Include_UEOSCReceiver_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BasicFeature_UE4_Plugins_UEOSC_Source_UEOSC_Include_UEOSCReceiver_h_21_PRIVATE_PROPERTY_OFFSET \
	BasicFeature_UE4_Plugins_UEOSC_Source_UEOSC_Include_UEOSCReceiver_h_21_SPARSE_DATA \
	BasicFeature_UE4_Plugins_UEOSC_Source_UEOSC_Include_UEOSCReceiver_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	BasicFeature_UE4_Plugins_UEOSC_Source_UEOSC_Include_UEOSCReceiver_h_21_INCLASS_NO_PURE_DECLS \
	BasicFeature_UE4_Plugins_UEOSC_Source_UEOSC_Include_UEOSCReceiver_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UEOSC_API UClass* StaticClass<class UUEOSCReceiver>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID BasicFeature_UE4_Plugins_UEOSC_Source_UEOSC_Include_UEOSCReceiver_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
