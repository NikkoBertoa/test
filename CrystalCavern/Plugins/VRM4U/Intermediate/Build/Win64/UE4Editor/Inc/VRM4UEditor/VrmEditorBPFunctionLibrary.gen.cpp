// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VRM4UEditor/Public/VrmEditorBPFunctionLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVrmEditorBPFunctionLibrary() {}
// Cross Module References
	VRM4UEDITOR_API UClass* Z_Construct_UClass_UVrmEditorBPFunctionLibrary_NoRegister();
	VRM4UEDITOR_API UClass* Z_Construct_UClass_UVrmEditorBPFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_VRM4UEditor();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UVrmEditorBPFunctionLibrary::execVRMBakeAnim)
	{
		P_GET_OBJECT(USkeletalMeshComponent,Z_Param_skc);
		P_GET_PROPERTY(FStrProperty,Z_Param_FilePath);
		P_GET_PROPERTY(FStrProperty,Z_Param_AssetFileName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UVrmEditorBPFunctionLibrary::VRMBakeAnim(Z_Param_skc,Z_Param_FilePath,Z_Param_AssetFileName);
		P_NATIVE_END;
	}
	void UVrmEditorBPFunctionLibrary::StaticRegisterNativesUVrmEditorBPFunctionLibrary()
	{
		UClass* Class = UVrmEditorBPFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "VRMBakeAnim", &UVrmEditorBPFunctionLibrary::execVRMBakeAnim },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UVrmEditorBPFunctionLibrary_VRMBakeAnim_Statics
	{
		struct VrmEditorBPFunctionLibrary_eventVRMBakeAnim_Parms
		{
			const USkeletalMeshComponent* skc;
			FString FilePath;
			FString AssetFileName;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssetFileName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AssetFileName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FilePath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FilePath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_skc_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_skc;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UVrmEditorBPFunctionLibrary_VRMBakeAnim_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VrmEditorBPFunctionLibrary_eventVRMBakeAnim_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVrmEditorBPFunctionLibrary_VRMBakeAnim_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VrmEditorBPFunctionLibrary_eventVRMBakeAnim_Parms), &Z_Construct_UFunction_UVrmEditorBPFunctionLibrary_VRMBakeAnim_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVrmEditorBPFunctionLibrary_VRMBakeAnim_Statics::NewProp_AssetFileName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVrmEditorBPFunctionLibrary_VRMBakeAnim_Statics::NewProp_AssetFileName = { "AssetFileName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VrmEditorBPFunctionLibrary_eventVRMBakeAnim_Parms, AssetFileName), METADATA_PARAMS(Z_Construct_UFunction_UVrmEditorBPFunctionLibrary_VRMBakeAnim_Statics::NewProp_AssetFileName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVrmEditorBPFunctionLibrary_VRMBakeAnim_Statics::NewProp_AssetFileName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVrmEditorBPFunctionLibrary_VRMBakeAnim_Statics::NewProp_FilePath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVrmEditorBPFunctionLibrary_VRMBakeAnim_Statics::NewProp_FilePath = { "FilePath", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VrmEditorBPFunctionLibrary_eventVRMBakeAnim_Parms, FilePath), METADATA_PARAMS(Z_Construct_UFunction_UVrmEditorBPFunctionLibrary_VRMBakeAnim_Statics::NewProp_FilePath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVrmEditorBPFunctionLibrary_VRMBakeAnim_Statics::NewProp_FilePath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVrmEditorBPFunctionLibrary_VRMBakeAnim_Statics::NewProp_skc_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVrmEditorBPFunctionLibrary_VRMBakeAnim_Statics::NewProp_skc = { "skc", nullptr, (EPropertyFlags)0x0010000000080082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VrmEditorBPFunctionLibrary_eventVRMBakeAnim_Parms, skc), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UVrmEditorBPFunctionLibrary_VRMBakeAnim_Statics::NewProp_skc_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVrmEditorBPFunctionLibrary_VRMBakeAnim_Statics::NewProp_skc_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVrmEditorBPFunctionLibrary_VRMBakeAnim_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrmEditorBPFunctionLibrary_VRMBakeAnim_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrmEditorBPFunctionLibrary_VRMBakeAnim_Statics::NewProp_AssetFileName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrmEditorBPFunctionLibrary_VRMBakeAnim_Statics::NewProp_FilePath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrmEditorBPFunctionLibrary_VRMBakeAnim_Statics::NewProp_skc,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVrmEditorBPFunctionLibrary_VRMBakeAnim_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRM4U" },
		{ "ModuleRelativePath", "Public/VrmEditorBPFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVrmEditorBPFunctionLibrary_VRMBakeAnim_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVrmEditorBPFunctionLibrary, nullptr, "VRMBakeAnim", nullptr, nullptr, sizeof(VrmEditorBPFunctionLibrary_eventVRMBakeAnim_Parms), Z_Construct_UFunction_UVrmEditorBPFunctionLibrary_VRMBakeAnim_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVrmEditorBPFunctionLibrary_VRMBakeAnim_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVrmEditorBPFunctionLibrary_VRMBakeAnim_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVrmEditorBPFunctionLibrary_VRMBakeAnim_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVrmEditorBPFunctionLibrary_VRMBakeAnim()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVrmEditorBPFunctionLibrary_VRMBakeAnim_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UVrmEditorBPFunctionLibrary_NoRegister()
	{
		return UVrmEditorBPFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UVrmEditorBPFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVrmEditorBPFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_VRM4UEditor,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UVrmEditorBPFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UVrmEditorBPFunctionLibrary_VRMBakeAnim, "VRMBakeAnim" }, // 837947115
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVrmEditorBPFunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "VrmEditorBPFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/VrmEditorBPFunctionLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVrmEditorBPFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVrmEditorBPFunctionLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVrmEditorBPFunctionLibrary_Statics::ClassParams = {
		&UVrmEditorBPFunctionLibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UVrmEditorBPFunctionLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVrmEditorBPFunctionLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVrmEditorBPFunctionLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVrmEditorBPFunctionLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVrmEditorBPFunctionLibrary, 2535103735);
	template<> VRM4UEDITOR_API UClass* StaticClass<UVrmEditorBPFunctionLibrary>()
	{
		return UVrmEditorBPFunctionLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVrmEditorBPFunctionLibrary(Z_Construct_UClass_UVrmEditorBPFunctionLibrary, &UVrmEditorBPFunctionLibrary::StaticClass, TEXT("/Script/VRM4UEditor"), TEXT("UVrmEditorBPFunctionLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVrmEditorBPFunctionLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
