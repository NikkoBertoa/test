// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VMC4UE/Include/VMC4UEStreamingData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVMC4UEStreamingData() {}
// Cross Module References
	VMC4UE_API UScriptStruct* Z_Construct_UScriptStruct_FVMC4UEHandRawData();
	UPackage* Z_Construct_UPackage__Script_VMC4UE();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	VMC4UE_API UScriptStruct* Z_Construct_UScriptStruct_FVMC4UEBodyRawData();
	VMC4UE_API UScriptStruct* Z_Construct_UScriptStruct_FVMC4UEStreamingBoneTransform();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FQuat();
	VMC4UE_API UClass* Z_Construct_UClass_UVMC4UEStreamingSkeletalMeshTransform_NoRegister();
	VMC4UE_API UClass* Z_Construct_UClass_UVMC4UEStreamingSkeletalMeshTransform();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UEOSC_API UScriptStruct* Z_Construct_UScriptStruct_FUEOSCElement();
// End Cross Module References
class UScriptStruct* FVMC4UEHandRawData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern VMC4UE_API uint32 Get_Z_Construct_UScriptStruct_FVMC4UEHandRawData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FVMC4UEHandRawData, Z_Construct_UPackage__Script_VMC4UE(), TEXT("VMC4UEHandRawData"), sizeof(FVMC4UEHandRawData), Get_Z_Construct_UScriptStruct_FVMC4UEHandRawData_Hash());
	}
	return Singleton;
}
template<> VMC4UE_API UScriptStruct* StaticStruct<FVMC4UEHandRawData>()
{
	return FVMC4UEHandRawData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FVMC4UEHandRawData(FVMC4UEHandRawData::StaticStruct, TEXT("/Script/VMC4UE"), TEXT("VMC4UEHandRawData"), false, nullptr, nullptr);
static struct FScriptStruct_VMC4UE_StaticRegisterNativesFVMC4UEHandRawData
{
	FScriptStruct_VMC4UE_StaticRegisterNativesFVMC4UEHandRawData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("VMC4UEHandRawData")),new UScriptStruct::TCppStructOps<FVMC4UEHandRawData>);
	}
} ScriptStruct_VMC4UE_StaticRegisterNativesFVMC4UEHandRawData;
	struct Z_Construct_UScriptStruct_FVMC4UEHandRawData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Time_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Time;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Score_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Score;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HandType_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_HandType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVMC4UEHandRawData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Include/VMC4UEStreamingData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVMC4UEHandRawData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVMC4UEHandRawData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVMC4UEHandRawData_Statics::NewProp_Time_MetaData[] = {
		{ "Category", "VMC4UE Hand Raw Data" },
		{ "ModuleRelativePath", "Include/VMC4UEStreamingData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVMC4UEHandRawData_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVMC4UEHandRawData, Time), METADATA_PARAMS(Z_Construct_UScriptStruct_FVMC4UEHandRawData_Statics::NewProp_Time_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVMC4UEHandRawData_Statics::NewProp_Time_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVMC4UEHandRawData_Statics::NewProp_Score_MetaData[] = {
		{ "Category", "VMC4UE Hand Raw Data" },
		{ "ModuleRelativePath", "Include/VMC4UEStreamingData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVMC4UEHandRawData_Statics::NewProp_Score = { "Score", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVMC4UEHandRawData, Score), METADATA_PARAMS(Z_Construct_UScriptStruct_FVMC4UEHandRawData_Statics::NewProp_Score_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVMC4UEHandRawData_Statics::NewProp_Score_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVMC4UEHandRawData_Statics::NewProp_HandType_MetaData[] = {
		{ "Category", "VMC4UE Hand Raw Data" },
		{ "ModuleRelativePath", "Include/VMC4UEStreamingData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FVMC4UEHandRawData_Statics::NewProp_HandType = { "HandType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVMC4UEHandRawData, HandType), METADATA_PARAMS(Z_Construct_UScriptStruct_FVMC4UEHandRawData_Statics::NewProp_HandType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVMC4UEHandRawData_Statics::NewProp_HandType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVMC4UEHandRawData_Statics::NewProp_Location_MetaData[] = {
		{ "Category", "VMC4UE Hand Raw Data" },
		{ "ModuleRelativePath", "Include/VMC4UEStreamingData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVMC4UEHandRawData_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVMC4UEHandRawData, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FVMC4UEHandRawData_Statics::NewProp_Location_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVMC4UEHandRawData_Statics::NewProp_Location_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVMC4UEHandRawData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVMC4UEHandRawData_Statics::NewProp_Time,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVMC4UEHandRawData_Statics::NewProp_Score,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVMC4UEHandRawData_Statics::NewProp_HandType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVMC4UEHandRawData_Statics::NewProp_Location,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVMC4UEHandRawData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VMC4UE,
		nullptr,
		&NewStructOps,
		"VMC4UEHandRawData",
		sizeof(FVMC4UEHandRawData),
		alignof(FVMC4UEHandRawData),
		Z_Construct_UScriptStruct_FVMC4UEHandRawData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVMC4UEHandRawData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVMC4UEHandRawData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVMC4UEHandRawData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVMC4UEHandRawData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FVMC4UEHandRawData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_VMC4UE();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("VMC4UEHandRawData"), sizeof(FVMC4UEHandRawData), Get_Z_Construct_UScriptStruct_FVMC4UEHandRawData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FVMC4UEHandRawData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FVMC4UEHandRawData_Hash() { return 856673627U; }
class UScriptStruct* FVMC4UEBodyRawData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern VMC4UE_API uint32 Get_Z_Construct_UScriptStruct_FVMC4UEBodyRawData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FVMC4UEBodyRawData, Z_Construct_UPackage__Script_VMC4UE(), TEXT("VMC4UEBodyRawData"), sizeof(FVMC4UEBodyRawData), Get_Z_Construct_UScriptStruct_FVMC4UEBodyRawData_Hash());
	}
	return Singleton;
}
template<> VMC4UE_API UScriptStruct* StaticStruct<FVMC4UEBodyRawData>()
{
	return FVMC4UEBodyRawData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FVMC4UEBodyRawData(FVMC4UEBodyRawData::StaticStruct, TEXT("/Script/VMC4UE"), TEXT("VMC4UEBodyRawData"), false, nullptr, nullptr);
static struct FScriptStruct_VMC4UE_StaticRegisterNativesFVMC4UEBodyRawData
{
	FScriptStruct_VMC4UE_StaticRegisterNativesFVMC4UEBodyRawData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("VMC4UEBodyRawData")),new UScriptStruct::TCppStructOps<FVMC4UEBodyRawData>);
	}
} ScriptStruct_VMC4UE_StaticRegisterNativesFVMC4UEBodyRawData;
	struct Z_Construct_UScriptStruct_FVMC4UEBodyRawData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Time_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Time;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Score_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Score;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVMC4UEBodyRawData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Include/VMC4UEStreamingData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVMC4UEBodyRawData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVMC4UEBodyRawData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVMC4UEBodyRawData_Statics::NewProp_Time_MetaData[] = {
		{ "Category", "VMC4UE Body Raw Data" },
		{ "ModuleRelativePath", "Include/VMC4UEStreamingData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVMC4UEBodyRawData_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVMC4UEBodyRawData, Time), METADATA_PARAMS(Z_Construct_UScriptStruct_FVMC4UEBodyRawData_Statics::NewProp_Time_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVMC4UEBodyRawData_Statics::NewProp_Time_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVMC4UEBodyRawData_Statics::NewProp_Score_MetaData[] = {
		{ "Category", "VMC4UE Body Raw Data" },
		{ "ModuleRelativePath", "Include/VMC4UEStreamingData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVMC4UEBodyRawData_Statics::NewProp_Score = { "Score", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVMC4UEBodyRawData, Score), METADATA_PARAMS(Z_Construct_UScriptStruct_FVMC4UEBodyRawData_Statics::NewProp_Score_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVMC4UEBodyRawData_Statics::NewProp_Score_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVMC4UEBodyRawData_Statics::NewProp_Location_MetaData[] = {
		{ "Category", "VMC4UE Body Raw Data" },
		{ "ModuleRelativePath", "Include/VMC4UEStreamingData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVMC4UEBodyRawData_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVMC4UEBodyRawData, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FVMC4UEBodyRawData_Statics::NewProp_Location_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVMC4UEBodyRawData_Statics::NewProp_Location_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVMC4UEBodyRawData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVMC4UEBodyRawData_Statics::NewProp_Time,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVMC4UEBodyRawData_Statics::NewProp_Score,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVMC4UEBodyRawData_Statics::NewProp_Location,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVMC4UEBodyRawData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VMC4UE,
		nullptr,
		&NewStructOps,
		"VMC4UEBodyRawData",
		sizeof(FVMC4UEBodyRawData),
		alignof(FVMC4UEBodyRawData),
		Z_Construct_UScriptStruct_FVMC4UEBodyRawData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVMC4UEBodyRawData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVMC4UEBodyRawData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVMC4UEBodyRawData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVMC4UEBodyRawData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FVMC4UEBodyRawData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_VMC4UE();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("VMC4UEBodyRawData"), sizeof(FVMC4UEBodyRawData), Get_Z_Construct_UScriptStruct_FVMC4UEBodyRawData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FVMC4UEBodyRawData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FVMC4UEBodyRawData_Hash() { return 3828239591U; }
class UScriptStruct* FVMC4UEStreamingBoneTransform::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern VMC4UE_API uint32 Get_Z_Construct_UScriptStruct_FVMC4UEStreamingBoneTransform_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FVMC4UEStreamingBoneTransform, Z_Construct_UPackage__Script_VMC4UE(), TEXT("VMC4UEStreamingBoneTransform"), sizeof(FVMC4UEStreamingBoneTransform), Get_Z_Construct_UScriptStruct_FVMC4UEStreamingBoneTransform_Hash());
	}
	return Singleton;
}
template<> VMC4UE_API UScriptStruct* StaticStruct<FVMC4UEStreamingBoneTransform>()
{
	return FVMC4UEStreamingBoneTransform::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FVMC4UEStreamingBoneTransform(FVMC4UEStreamingBoneTransform::StaticStruct, TEXT("/Script/VMC4UE"), TEXT("VMC4UEStreamingBoneTransform"), false, nullptr, nullptr);
static struct FScriptStruct_VMC4UE_StaticRegisterNativesFVMC4UEStreamingBoneTransform
{
	FScriptStruct_VMC4UE_StaticRegisterNativesFVMC4UEStreamingBoneTransform()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("VMC4UEStreamingBoneTransform")),new UScriptStruct::TCppStructOps<FVMC4UEStreamingBoneTransform>);
	}
} ScriptStruct_VMC4UE_StaticRegisterNativesFVMC4UEStreamingBoneTransform;
	struct Z_Construct_UScriptStruct_FVMC4UEStreamingBoneTransform_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Rotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Rotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVMC4UEStreamingBoneTransform_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "ModuleRelativePath", "Include/VMC4UEStreamingData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVMC4UEStreamingBoneTransform_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVMC4UEStreamingBoneTransform>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVMC4UEStreamingBoneTransform_Statics::NewProp_Rotation_MetaData[] = {
		{ "Category", "VMC4UE Bone Data" },
		{ "ModuleRelativePath", "Include/VMC4UEStreamingData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVMC4UEStreamingBoneTransform_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVMC4UEStreamingBoneTransform, Rotation), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UScriptStruct_FVMC4UEStreamingBoneTransform_Statics::NewProp_Rotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVMC4UEStreamingBoneTransform_Statics::NewProp_Rotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVMC4UEStreamingBoneTransform_Statics::NewProp_Location_MetaData[] = {
		{ "Category", "VMC4UE Bone Data" },
		{ "ModuleRelativePath", "Include/VMC4UEStreamingData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVMC4UEStreamingBoneTransform_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVMC4UEStreamingBoneTransform, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FVMC4UEStreamingBoneTransform_Statics::NewProp_Location_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVMC4UEStreamingBoneTransform_Statics::NewProp_Location_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVMC4UEStreamingBoneTransform_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVMC4UEStreamingBoneTransform_Statics::NewProp_Rotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVMC4UEStreamingBoneTransform_Statics::NewProp_Location,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVMC4UEStreamingBoneTransform_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VMC4UE,
		nullptr,
		&NewStructOps,
		"VMC4UEStreamingBoneTransform",
		sizeof(FVMC4UEStreamingBoneTransform),
		alignof(FVMC4UEStreamingBoneTransform),
		Z_Construct_UScriptStruct_FVMC4UEStreamingBoneTransform_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVMC4UEStreamingBoneTransform_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVMC4UEStreamingBoneTransform_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVMC4UEStreamingBoneTransform_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVMC4UEStreamingBoneTransform()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FVMC4UEStreamingBoneTransform_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_VMC4UE();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("VMC4UEStreamingBoneTransform"), sizeof(FVMC4UEStreamingBoneTransform), Get_Z_Construct_UScriptStruct_FVMC4UEStreamingBoneTransform_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FVMC4UEStreamingBoneTransform_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FVMC4UEStreamingBoneTransform_Hash() { return 2574810226U; }
	DEFINE_FUNCTION(UVMC4UEStreamingSkeletalMeshTransform::execOnReceived)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_Address);
		P_GET_TARRAY_REF(FUEOSCElement,Z_Param_Out_Data);
		P_GET_PROPERTY(FStrProperty,Z_Param_SenderIp);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnReceived(Z_Param_Out_Address,Z_Param_Out_Data,Z_Param_SenderIp);
		P_NATIVE_END;
	}
	void UVMC4UEStreamingSkeletalMeshTransform::StaticRegisterNativesUVMC4UEStreamingSkeletalMeshTransform()
	{
		UClass* Class = UVMC4UEStreamingSkeletalMeshTransform::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnReceived", &UVMC4UEStreamingSkeletalMeshTransform::execOnReceived },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UVMC4UEStreamingSkeletalMeshTransform_OnReceived_Statics
	{
		struct VMC4UEStreamingSkeletalMeshTransform_eventOnReceived_Parms
		{
			FName Address;
			TArray<FUEOSCElement> Data;
			FString SenderIp;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SenderIp_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SenderIp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Data;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Data_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Address_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Address;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVMC4UEStreamingSkeletalMeshTransform_OnReceived_Statics::NewProp_SenderIp_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVMC4UEStreamingSkeletalMeshTransform_OnReceived_Statics::NewProp_SenderIp = { "SenderIp", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VMC4UEStreamingSkeletalMeshTransform_eventOnReceived_Parms, SenderIp), METADATA_PARAMS(Z_Construct_UFunction_UVMC4UEStreamingSkeletalMeshTransform_OnReceived_Statics::NewProp_SenderIp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVMC4UEStreamingSkeletalMeshTransform_OnReceived_Statics::NewProp_SenderIp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVMC4UEStreamingSkeletalMeshTransform_OnReceived_Statics::NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVMC4UEStreamingSkeletalMeshTransform_OnReceived_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VMC4UEStreamingSkeletalMeshTransform_eventOnReceived_Parms, Data), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UVMC4UEStreamingSkeletalMeshTransform_OnReceived_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVMC4UEStreamingSkeletalMeshTransform_OnReceived_Statics::NewProp_Data_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVMC4UEStreamingSkeletalMeshTransform_OnReceived_Statics::NewProp_Data_Inner = { "Data", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FUEOSCElement, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVMC4UEStreamingSkeletalMeshTransform_OnReceived_Statics::NewProp_Address_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UVMC4UEStreamingSkeletalMeshTransform_OnReceived_Statics::NewProp_Address = { "Address", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VMC4UEStreamingSkeletalMeshTransform_eventOnReceived_Parms, Address), METADATA_PARAMS(Z_Construct_UFunction_UVMC4UEStreamingSkeletalMeshTransform_OnReceived_Statics::NewProp_Address_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVMC4UEStreamingSkeletalMeshTransform_OnReceived_Statics::NewProp_Address_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVMC4UEStreamingSkeletalMeshTransform_OnReceived_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVMC4UEStreamingSkeletalMeshTransform_OnReceived_Statics::NewProp_SenderIp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVMC4UEStreamingSkeletalMeshTransform_OnReceived_Statics::NewProp_Data,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVMC4UEStreamingSkeletalMeshTransform_OnReceived_Statics::NewProp_Data_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVMC4UEStreamingSkeletalMeshTransform_OnReceived_Statics::NewProp_Address,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVMC4UEStreamingSkeletalMeshTransform_OnReceived_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Include/VMC4UEStreamingData.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVMC4UEStreamingSkeletalMeshTransform_OnReceived_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVMC4UEStreamingSkeletalMeshTransform, nullptr, "OnReceived", nullptr, nullptr, sizeof(VMC4UEStreamingSkeletalMeshTransform_eventOnReceived_Parms), Z_Construct_UFunction_UVMC4UEStreamingSkeletalMeshTransform_OnReceived_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVMC4UEStreamingSkeletalMeshTransform_OnReceived_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVMC4UEStreamingSkeletalMeshTransform_OnReceived_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVMC4UEStreamingSkeletalMeshTransform_OnReceived_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVMC4UEStreamingSkeletalMeshTransform_OnReceived()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVMC4UEStreamingSkeletalMeshTransform_OnReceived_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UVMC4UEStreamingSkeletalMeshTransform_NoRegister()
	{
		return UVMC4UEStreamingSkeletalMeshTransform::StaticClass();
	}
	struct Z_Construct_UClass_UVMC4UEStreamingSkeletalMeshTransform_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeftHandRawDataMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_LeftHandRawDataMap;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_LeftHandRawDataMap_Key_KeyProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LeftHandRawDataMap_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RightHandRawDataMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_RightHandRawDataMap;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_RightHandRawDataMap_Key_KeyProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RightHandRawDataMap_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BodyRawDataMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_BodyRawDataMap;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_BodyRawDataMap_Key_KeyProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BodyRawDataMap_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RootTransform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RootTransform;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BodyTransformMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_BodyTransformMap;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_BodyTransformMap_Key_KeyProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BodyTransformMap_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RootRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RootRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RootPosition_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RootPosition;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BodyRotations_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_BodyRotations;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_BodyRotations_Key_KeyProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BodyRotations_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BodyPositions_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_BodyPositions;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_BodyPositions_Key_KeyProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BodyPositions_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Bones_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_Bones;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Bones_Key_KeyProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Bones_ValueProp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVMC4UEStreamingSkeletalMeshTransform_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_VMC4UE,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UVMC4UEStreamingSkeletalMeshTransform_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UVMC4UEStreamingSkeletalMeshTransform_OnReceived, "OnReceived" }, // 3618032751
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVMC4UEStreamingSkeletalMeshTransform_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "IncludePath", "Include/VMC4UEStreamingData.h" },
		{ "ModuleRelativePath", "Include/VMC4UEStreamingData.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVMC4UEStreamingSkeletalMeshTransform_Statics::NewProp_LeftHandRawDataMap_MetaData[] = {
		{ "Category", "VMC" },
		{ "ModuleRelativePath", "Include/VMC4UEStreamingData.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UVMC4UEStreamingSkeletalMeshTransform_Statics::NewProp_LeftHandRawDataMap = { "LeftHandRawDataMap", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVMC4UEStreamingSkeletalMeshTransform, LeftHandRawDataMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UVMC4UEStreamingSkeletalMeshTransform_Statics::NewProp_LeftHandRawDataMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVMC4UEStreamingSkeletalMeshTransform_Statics::NewProp_LeftHandRawDataMap_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UVMC4UEStreamingSkeletalMeshTransform_Statics::NewProp_LeftHandRawDataMap_Key_KeyProp = { "LeftHandRawDataMap_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVMC4UEStreamingSkeletalMeshTransform_Statics::NewProp_LeftHandRawDataMap_ValueProp = { "LeftHandRawDataMap", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FVMC4UEHandRawData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVMC4UEStreamingSkeletalMeshTransform_Statics::NewProp_RightHandRawDataMap_MetaData[] = {
		{ "Category", "VMC" },
		{ "Comment", "// Hand Raw Data\n" },
		{ "ModuleRelativePath", "Include/VMC4UEStreamingData.h" },
		{ "ToolTip", "Hand Raw Data" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UVMC4UEStreamingSkeletalMeshTransform_Statics::NewProp_RightHandRawDataMap = { "RightHandRawDataMap", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVMC4UEStreamingSkeletalMeshTransform, RightHandRawDataMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UVMC4UEStreamingSkeletalMeshTransform_Statics::NewProp_RightHandRawDataMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVMC4UEStreamingSkeletalMeshTransform_Statics::NewProp_RightHandRawDataMap_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UVMC4UEStreamingSkeletalMeshTransform_Statics::NewProp_RightHandRawDataMap_Key_KeyProp = { "RightHandRawDataMap_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVMC4UEStreamingSkeletalMeshTransform_Statics::NewProp_RightHandRawDataMap_ValueProp = { "RightHandRawDataMap", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FVMC4UEHandRawData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVMC4UEStreamingSkeletalMeshTransform_Statics::NewProp_BodyRawDataMap_MetaData[] = {
		{ "Category", "VMC" },
		{ "ModuleRelativePath", "Include/VMC4UEStreamingData.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UVMC4UEStreamingSkeletalMeshTransform_Statics::NewProp_BodyRawDataMap = { "BodyRawDataMap", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVMC4UEStreamingSkeletalMeshTransform, BodyRawDataMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UVMC4UEStreamingSkeletalMeshTransform_Statics::NewProp_BodyRawDataMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVMC4UEStreamingSkeletalMeshTransform_Statics::NewProp_BodyRawDataMap_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UVMC4UEStreamingSkeletalMeshTransform_Statics::NewProp_BodyRawDataMap_Key_KeyProp = { "BodyRawDataMap_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVMC4UEStreamingSkeletalMeshTransform_Statics::NewProp_BodyRawDataMap_ValueProp = { "BodyRawDataMap", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FVMC4UEBodyRawData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVMC4UEStreamingSkeletalMeshTransform_Statics::NewProp_RootTransform_MetaData[] = {
		{ "Category", "VMC" },
		{ "ModuleRelativePath", "Include/VMC4UEStreamingData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVMC4UEStreamingSkeletalMeshTransform_Statics::NewProp_RootTransform = { "RootTransform", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVMC4UEStreamingSkeletalMeshTransform, RootTransform), Z_Construct_UScriptStruct_FVMC4UEStreamingBoneTransform, METADATA_PARAMS(Z_Construct_UClass_UVMC4UEStreamingSkeletalMeshTransform_Statics::NewProp_RootTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVMC4UEStreamingSkeletalMeshTransform_Statics::NewProp_RootTransform_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVMC4UEStreamingSkeletalMeshTransform_Statics::NewProp_BodyTransformMap_MetaData[] = {
		{ "Category", "VMC" },
		{ "Comment", "// Relative coordinates[/VMC/Ext/Tra/Pos/Local]\n" },
		{ "ModuleRelativePath", "Include/VMC4UEStreamingData.h" },
		{ "ToolTip", "Relative coordinates[/VMC/Ext/Tra/Pos/Local]" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UVMC4UEStreamingSkeletalMeshTransform_Statics::NewProp_BodyTransformMap = { "BodyTransformMap", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVMC4UEStreamingSkeletalMeshTransform, BodyTransformMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UVMC4UEStreamingSkeletalMeshTransform_Statics::NewProp_BodyTransformMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVMC4UEStreamingSkeletalMeshTransform_Statics::NewProp_BodyTransformMap_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UVMC4UEStreamingSkeletalMeshTransform_Statics::NewProp_BodyTransformMap_Key_KeyProp = { "BodyTransformMap_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVMC4UEStreamingSkeletalMeshTransform_Statics::NewProp_BodyTransformMap_ValueProp = { "BodyTransformMap", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FVMC4UEStreamingBoneTransform, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVMC4UEStreamingSkeletalMeshTransform_Statics::NewProp_RootRotation_MetaData[] = {
		{ "Category", "VMC" },
		{ "ModuleRelativePath", "Include/VMC4UEStreamingData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVMC4UEStreamingSkeletalMeshTransform_Statics::NewProp_RootRotation = { "RootRotation", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVMC4UEStreamingSkeletalMeshTransform, RootRotation), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UClass_UVMC4UEStreamingSkeletalMeshTransform_Statics::NewProp_RootRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVMC4UEStreamingSkeletalMeshTransform_Statics::NewProp_RootRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVMC4UEStreamingSkeletalMeshTransform_Statics::NewProp_RootPosition_MetaData[] = {
		{ "Category", "VMC" },
		{ "Comment", "// Absolute coordinates[/VMC/Ext/Root/Pos]\n" },
		{ "ModuleRelativePath", "Include/VMC4UEStreamingData.h" },
		{ "ToolTip", "Absolute coordinates[/VMC/Ext/Root/Pos]" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVMC4UEStreamingSkeletalMeshTransform_Statics::NewProp_RootPosition = { "RootPosition", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVMC4UEStreamingSkeletalMeshTransform, RootPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UVMC4UEStreamingSkeletalMeshTransform_Statics::NewProp_RootPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVMC4UEStreamingSkeletalMeshTransform_Statics::NewProp_RootPosition_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVMC4UEStreamingSkeletalMeshTransform_Statics::NewProp_BodyRotations_MetaData[] = {
		{ "Category", "VMC" },
		{ "ModuleRelativePath", "Include/VMC4UEStreamingData.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UVMC4UEStreamingSkeletalMeshTransform_Statics::NewProp_BodyRotations = { "BodyRotations", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVMC4UEStreamingSkeletalMeshTransform, BodyRotations), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UVMC4UEStreamingSkeletalMeshTransform_Statics::NewProp_BodyRotations_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVMC4UEStreamingSkeletalMeshTransform_Statics::NewProp_BodyRotations_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UVMC4UEStreamingSkeletalMeshTransform_Statics::NewProp_BodyRotations_Key_KeyProp = { "BodyRotations_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVMC4UEStreamingSkeletalMeshTransform_Statics::NewProp_BodyRotations_ValueProp = { "BodyRotations", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVMC4UEStreamingSkeletalMeshTransform_Statics::NewProp_BodyPositions_MetaData[] = {
		{ "Category", "VMC" },
		{ "ModuleRelativePath", "Include/VMC4UEStreamingData.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UVMC4UEStreamingSkeletalMeshTransform_Statics::NewProp_BodyPositions = { "BodyPositions", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVMC4UEStreamingSkeletalMeshTransform, BodyPositions), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UVMC4UEStreamingSkeletalMeshTransform_Statics::NewProp_BodyPositions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVMC4UEStreamingSkeletalMeshTransform_Statics::NewProp_BodyPositions_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UVMC4UEStreamingSkeletalMeshTransform_Statics::NewProp_BodyPositions_Key_KeyProp = { "BodyPositions_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVMC4UEStreamingSkeletalMeshTransform_Statics::NewProp_BodyPositions_ValueProp = { "BodyPositions", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVMC4UEStreamingSkeletalMeshTransform_Statics::NewProp_Bones_MetaData[] = {
		{ "Category", "VMC" },
		{ "Comment", "// Relative coordinates[/VMC/Ext/Bone/Pos]\n" },
		{ "ModuleRelativePath", "Include/VMC4UEStreamingData.h" },
		{ "ToolTip", "Relative coordinates[/VMC/Ext/Bone/Pos]" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UVMC4UEStreamingSkeletalMeshTransform_Statics::NewProp_Bones = { "Bones", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVMC4UEStreamingSkeletalMeshTransform, Bones), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UVMC4UEStreamingSkeletalMeshTransform_Statics::NewProp_Bones_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVMC4UEStreamingSkeletalMeshTransform_Statics::NewProp_Bones_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UVMC4UEStreamingSkeletalMeshTransform_Statics::NewProp_Bones_Key_KeyProp = { "Bones_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVMC4UEStreamingSkeletalMeshTransform_Statics::NewProp_Bones_ValueProp = { "Bones", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FVMC4UEStreamingBoneTransform, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVMC4UEStreamingSkeletalMeshTransform_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVMC4UEStreamingSkeletalMeshTransform_Statics::NewProp_LeftHandRawDataMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVMC4UEStreamingSkeletalMeshTransform_Statics::NewProp_LeftHandRawDataMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVMC4UEStreamingSkeletalMeshTransform_Statics::NewProp_LeftHandRawDataMap_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVMC4UEStreamingSkeletalMeshTransform_Statics::NewProp_RightHandRawDataMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVMC4UEStreamingSkeletalMeshTransform_Statics::NewProp_RightHandRawDataMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVMC4UEStreamingSkeletalMeshTransform_Statics::NewProp_RightHandRawDataMap_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVMC4UEStreamingSkeletalMeshTransform_Statics::NewProp_BodyRawDataMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVMC4UEStreamingSkeletalMeshTransform_Statics::NewProp_BodyRawDataMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVMC4UEStreamingSkeletalMeshTransform_Statics::NewProp_BodyRawDataMap_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVMC4UEStreamingSkeletalMeshTransform_Statics::NewProp_RootTransform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVMC4UEStreamingSkeletalMeshTransform_Statics::NewProp_BodyTransformMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVMC4UEStreamingSkeletalMeshTransform_Statics::NewProp_BodyTransformMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVMC4UEStreamingSkeletalMeshTransform_Statics::NewProp_BodyTransformMap_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVMC4UEStreamingSkeletalMeshTransform_Statics::NewProp_RootRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVMC4UEStreamingSkeletalMeshTransform_Statics::NewProp_RootPosition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVMC4UEStreamingSkeletalMeshTransform_Statics::NewProp_BodyRotations,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVMC4UEStreamingSkeletalMeshTransform_Statics::NewProp_BodyRotations_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVMC4UEStreamingSkeletalMeshTransform_Statics::NewProp_BodyRotations_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVMC4UEStreamingSkeletalMeshTransform_Statics::NewProp_BodyPositions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVMC4UEStreamingSkeletalMeshTransform_Statics::NewProp_BodyPositions_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVMC4UEStreamingSkeletalMeshTransform_Statics::NewProp_BodyPositions_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVMC4UEStreamingSkeletalMeshTransform_Statics::NewProp_Bones,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVMC4UEStreamingSkeletalMeshTransform_Statics::NewProp_Bones_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVMC4UEStreamingSkeletalMeshTransform_Statics::NewProp_Bones_ValueProp,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVMC4UEStreamingSkeletalMeshTransform_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVMC4UEStreamingSkeletalMeshTransform>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVMC4UEStreamingSkeletalMeshTransform_Statics::ClassParams = {
		&UVMC4UEStreamingSkeletalMeshTransform::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UVMC4UEStreamingSkeletalMeshTransform_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UVMC4UEStreamingSkeletalMeshTransform_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVMC4UEStreamingSkeletalMeshTransform_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVMC4UEStreamingSkeletalMeshTransform_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVMC4UEStreamingSkeletalMeshTransform()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVMC4UEStreamingSkeletalMeshTransform_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVMC4UEStreamingSkeletalMeshTransform, 1793090338);
	template<> VMC4UE_API UClass* StaticClass<UVMC4UEStreamingSkeletalMeshTransform>()
	{
		return UVMC4UEStreamingSkeletalMeshTransform::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVMC4UEStreamingSkeletalMeshTransform(Z_Construct_UClass_UVMC4UEStreamingSkeletalMeshTransform, &UVMC4UEStreamingSkeletalMeshTransform::StaticClass, TEXT("/Script/VMC4UE"), TEXT("UVMC4UEStreamingSkeletalMeshTransform"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVMC4UEStreamingSkeletalMeshTransform);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
