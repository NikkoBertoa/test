// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VMC4UE/Include/VMC4UEBlueprintFunctionLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVMC4UEBlueprintFunctionLibrary() {}
// Cross Module References
	VMC4UE_API UClass* Z_Construct_UClass_UVMC4UEBlueprintFunctionLibrary_NoRegister();
	VMC4UE_API UClass* Z_Construct_UClass_UVMC4UEBlueprintFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_VMC4UE();
	VMC4UE_API UClass* Z_Construct_UClass_UVMC4UEStreamingSkeletalMeshTransform_NoRegister();
	UEOSC_API UScriptStruct* Z_Construct_UScriptStruct_FUEOSCElement();
// End Cross Module References
	DEFINE_FUNCTION(UVMC4UEBlueprintFunctionLibrary::execDisconnect)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		UVMC4UEBlueprintFunctionLibrary::Disconnect();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVMC4UEBlueprintFunctionLibrary::execConnect)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InA);
		P_GET_PROPERTY(FIntProperty,Z_Param_InB);
		P_GET_PROPERTY(FIntProperty,Z_Param_InC);
		P_GET_PROPERTY(FIntProperty,Z_Param_InD);
		P_GET_PROPERTY(FIntProperty,Z_Param_Port);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVMC4UEBlueprintFunctionLibrary::Connect(Z_Param_InA,Z_Param_InB,Z_Param_InC,Z_Param_InD,Z_Param_Port);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVMC4UEBlueprintFunctionLibrary::execGetStreamingSkeletalMeshTransformBP)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Port);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UVMC4UEStreamingSkeletalMeshTransform**)Z_Param__Result=UVMC4UEBlueprintFunctionLibrary::GetStreamingSkeletalMeshTransformBP(Z_Param_Port);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVMC4UEBlueprintFunctionLibrary::execOnReceivedVMC)
	{
		P_GET_OBJECT(UVMC4UEStreamingSkeletalMeshTransform,Z_Param_SkeletalMeshTransform);
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_Address);
		P_GET_TARRAY_REF(FUEOSCElement,Z_Param_Out_Data);
		P_GET_PROPERTY(FStrProperty,Z_Param_SenderIp);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVMC4UEBlueprintFunctionLibrary::OnReceivedVMC(Z_Param_SkeletalMeshTransform,Z_Param_Out_Address,Z_Param_Out_Data,Z_Param_SenderIp);
		P_NATIVE_END;
	}
	void UVMC4UEBlueprintFunctionLibrary::StaticRegisterNativesUVMC4UEBlueprintFunctionLibrary()
	{
		UClass* Class = UVMC4UEBlueprintFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Connect", &UVMC4UEBlueprintFunctionLibrary::execConnect },
			{ "Disconnect", &UVMC4UEBlueprintFunctionLibrary::execDisconnect },
			{ "GetStreamingSkeletalMeshTransformBP", &UVMC4UEBlueprintFunctionLibrary::execGetStreamingSkeletalMeshTransformBP },
			{ "OnReceivedVMC", &UVMC4UEBlueprintFunctionLibrary::execOnReceivedVMC },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UVMC4UEBlueprintFunctionLibrary_Connect_Statics
	{
		struct VMC4UEBlueprintFunctionLibrary_eventConnect_Parms
		{
			int32 InA;
			int32 InB;
			int32 InC;
			int32 InD;
			int32 Port;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Port;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InD;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InC;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InB;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InA;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVMC4UEBlueprintFunctionLibrary_Connect_Statics::NewProp_Port = { "Port", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VMC4UEBlueprintFunctionLibrary_eventConnect_Parms, Port), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVMC4UEBlueprintFunctionLibrary_Connect_Statics::NewProp_InD = { "InD", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VMC4UEBlueprintFunctionLibrary_eventConnect_Parms, InD), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVMC4UEBlueprintFunctionLibrary_Connect_Statics::NewProp_InC = { "InC", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VMC4UEBlueprintFunctionLibrary_eventConnect_Parms, InC), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVMC4UEBlueprintFunctionLibrary_Connect_Statics::NewProp_InB = { "InB", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VMC4UEBlueprintFunctionLibrary_eventConnect_Parms, InB), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVMC4UEBlueprintFunctionLibrary_Connect_Statics::NewProp_InA = { "InA", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VMC4UEBlueprintFunctionLibrary_eventConnect_Parms, InA), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVMC4UEBlueprintFunctionLibrary_Connect_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVMC4UEBlueprintFunctionLibrary_Connect_Statics::NewProp_Port,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVMC4UEBlueprintFunctionLibrary_Connect_Statics::NewProp_InD,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVMC4UEBlueprintFunctionLibrary_Connect_Statics::NewProp_InC,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVMC4UEBlueprintFunctionLibrary_Connect_Statics::NewProp_InB,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVMC4UEBlueprintFunctionLibrary_Connect_Statics::NewProp_InA,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVMC4UEBlueprintFunctionLibrary_Connect_Statics::Function_MetaDataParams[] = {
		{ "Category", "VMC" },
		{ "ModuleRelativePath", "Include/VMC4UEBlueprintFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVMC4UEBlueprintFunctionLibrary_Connect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVMC4UEBlueprintFunctionLibrary, nullptr, "Connect", nullptr, nullptr, sizeof(VMC4UEBlueprintFunctionLibrary_eventConnect_Parms), Z_Construct_UFunction_UVMC4UEBlueprintFunctionLibrary_Connect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVMC4UEBlueprintFunctionLibrary_Connect_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVMC4UEBlueprintFunctionLibrary_Connect_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVMC4UEBlueprintFunctionLibrary_Connect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVMC4UEBlueprintFunctionLibrary_Connect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVMC4UEBlueprintFunctionLibrary_Connect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVMC4UEBlueprintFunctionLibrary_Disconnect_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVMC4UEBlueprintFunctionLibrary_Disconnect_Statics::Function_MetaDataParams[] = {
		{ "Category", "VMC" },
		{ "ModuleRelativePath", "Include/VMC4UEBlueprintFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVMC4UEBlueprintFunctionLibrary_Disconnect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVMC4UEBlueprintFunctionLibrary, nullptr, "Disconnect", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVMC4UEBlueprintFunctionLibrary_Disconnect_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVMC4UEBlueprintFunctionLibrary_Disconnect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVMC4UEBlueprintFunctionLibrary_Disconnect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVMC4UEBlueprintFunctionLibrary_Disconnect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVMC4UEBlueprintFunctionLibrary_GetStreamingSkeletalMeshTransformBP_Statics
	{
		struct VMC4UEBlueprintFunctionLibrary_eventGetStreamingSkeletalMeshTransformBP_Parms
		{
			int32 Port;
			UVMC4UEStreamingSkeletalMeshTransform* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Port;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVMC4UEBlueprintFunctionLibrary_GetStreamingSkeletalMeshTransformBP_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VMC4UEBlueprintFunctionLibrary_eventGetStreamingSkeletalMeshTransformBP_Parms, ReturnValue), Z_Construct_UClass_UVMC4UEStreamingSkeletalMeshTransform_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVMC4UEBlueprintFunctionLibrary_GetStreamingSkeletalMeshTransformBP_Statics::NewProp_Port = { "Port", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VMC4UEBlueprintFunctionLibrary_eventGetStreamingSkeletalMeshTransformBP_Parms, Port), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVMC4UEBlueprintFunctionLibrary_GetStreamingSkeletalMeshTransformBP_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVMC4UEBlueprintFunctionLibrary_GetStreamingSkeletalMeshTransformBP_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVMC4UEBlueprintFunctionLibrary_GetStreamingSkeletalMeshTransformBP_Statics::NewProp_Port,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVMC4UEBlueprintFunctionLibrary_GetStreamingSkeletalMeshTransformBP_Statics::Function_MetaDataParams[] = {
		{ "Category", "VMC" },
		{ "ModuleRelativePath", "Include/VMC4UEBlueprintFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVMC4UEBlueprintFunctionLibrary_GetStreamingSkeletalMeshTransformBP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVMC4UEBlueprintFunctionLibrary, nullptr, "GetStreamingSkeletalMeshTransformBP", nullptr, nullptr, sizeof(VMC4UEBlueprintFunctionLibrary_eventGetStreamingSkeletalMeshTransformBP_Parms), Z_Construct_UFunction_UVMC4UEBlueprintFunctionLibrary_GetStreamingSkeletalMeshTransformBP_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVMC4UEBlueprintFunctionLibrary_GetStreamingSkeletalMeshTransformBP_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVMC4UEBlueprintFunctionLibrary_GetStreamingSkeletalMeshTransformBP_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVMC4UEBlueprintFunctionLibrary_GetStreamingSkeletalMeshTransformBP_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVMC4UEBlueprintFunctionLibrary_GetStreamingSkeletalMeshTransformBP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVMC4UEBlueprintFunctionLibrary_GetStreamingSkeletalMeshTransformBP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVMC4UEBlueprintFunctionLibrary_OnReceivedVMC_Statics
	{
		struct VMC4UEBlueprintFunctionLibrary_eventOnReceivedVMC_Parms
		{
			UVMC4UEStreamingSkeletalMeshTransform* SkeletalMeshTransform;
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
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SkeletalMeshTransform;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVMC4UEBlueprintFunctionLibrary_OnReceivedVMC_Statics::NewProp_SenderIp_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVMC4UEBlueprintFunctionLibrary_OnReceivedVMC_Statics::NewProp_SenderIp = { "SenderIp", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VMC4UEBlueprintFunctionLibrary_eventOnReceivedVMC_Parms, SenderIp), METADATA_PARAMS(Z_Construct_UFunction_UVMC4UEBlueprintFunctionLibrary_OnReceivedVMC_Statics::NewProp_SenderIp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVMC4UEBlueprintFunctionLibrary_OnReceivedVMC_Statics::NewProp_SenderIp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVMC4UEBlueprintFunctionLibrary_OnReceivedVMC_Statics::NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVMC4UEBlueprintFunctionLibrary_OnReceivedVMC_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VMC4UEBlueprintFunctionLibrary_eventOnReceivedVMC_Parms, Data), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UVMC4UEBlueprintFunctionLibrary_OnReceivedVMC_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVMC4UEBlueprintFunctionLibrary_OnReceivedVMC_Statics::NewProp_Data_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVMC4UEBlueprintFunctionLibrary_OnReceivedVMC_Statics::NewProp_Data_Inner = { "Data", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FUEOSCElement, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVMC4UEBlueprintFunctionLibrary_OnReceivedVMC_Statics::NewProp_Address_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UVMC4UEBlueprintFunctionLibrary_OnReceivedVMC_Statics::NewProp_Address = { "Address", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VMC4UEBlueprintFunctionLibrary_eventOnReceivedVMC_Parms, Address), METADATA_PARAMS(Z_Construct_UFunction_UVMC4UEBlueprintFunctionLibrary_OnReceivedVMC_Statics::NewProp_Address_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVMC4UEBlueprintFunctionLibrary_OnReceivedVMC_Statics::NewProp_Address_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVMC4UEBlueprintFunctionLibrary_OnReceivedVMC_Statics::NewProp_SkeletalMeshTransform = { "SkeletalMeshTransform", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VMC4UEBlueprintFunctionLibrary_eventOnReceivedVMC_Parms, SkeletalMeshTransform), Z_Construct_UClass_UVMC4UEStreamingSkeletalMeshTransform_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVMC4UEBlueprintFunctionLibrary_OnReceivedVMC_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVMC4UEBlueprintFunctionLibrary_OnReceivedVMC_Statics::NewProp_SenderIp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVMC4UEBlueprintFunctionLibrary_OnReceivedVMC_Statics::NewProp_Data,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVMC4UEBlueprintFunctionLibrary_OnReceivedVMC_Statics::NewProp_Data_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVMC4UEBlueprintFunctionLibrary_OnReceivedVMC_Statics::NewProp_Address,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVMC4UEBlueprintFunctionLibrary_OnReceivedVMC_Statics::NewProp_SkeletalMeshTransform,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVMC4UEBlueprintFunctionLibrary_OnReceivedVMC_Statics::Function_MetaDataParams[] = {
		{ "Category", "VMC" },
		{ "ModuleRelativePath", "Include/VMC4UEBlueprintFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVMC4UEBlueprintFunctionLibrary_OnReceivedVMC_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVMC4UEBlueprintFunctionLibrary, nullptr, "OnReceivedVMC", nullptr, nullptr, sizeof(VMC4UEBlueprintFunctionLibrary_eventOnReceivedVMC_Parms), Z_Construct_UFunction_UVMC4UEBlueprintFunctionLibrary_OnReceivedVMC_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVMC4UEBlueprintFunctionLibrary_OnReceivedVMC_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVMC4UEBlueprintFunctionLibrary_OnReceivedVMC_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVMC4UEBlueprintFunctionLibrary_OnReceivedVMC_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVMC4UEBlueprintFunctionLibrary_OnReceivedVMC()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVMC4UEBlueprintFunctionLibrary_OnReceivedVMC_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UVMC4UEBlueprintFunctionLibrary_NoRegister()
	{
		return UVMC4UEBlueprintFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UVMC4UEBlueprintFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVMC4UEBlueprintFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_VMC4UE,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UVMC4UEBlueprintFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UVMC4UEBlueprintFunctionLibrary_Connect, "Connect" }, // 228257295
		{ &Z_Construct_UFunction_UVMC4UEBlueprintFunctionLibrary_Disconnect, "Disconnect" }, // 1822851344
		{ &Z_Construct_UFunction_UVMC4UEBlueprintFunctionLibrary_GetStreamingSkeletalMeshTransformBP, "GetStreamingSkeletalMeshTransformBP" }, // 1987322579
		{ &Z_Construct_UFunction_UVMC4UEBlueprintFunctionLibrary_OnReceivedVMC, "OnReceivedVMC" }, // 2189259477
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVMC4UEBlueprintFunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Include/VMC4UEBlueprintFunctionLibrary.h" },
		{ "ModuleRelativePath", "Include/VMC4UEBlueprintFunctionLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVMC4UEBlueprintFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVMC4UEBlueprintFunctionLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVMC4UEBlueprintFunctionLibrary_Statics::ClassParams = {
		&UVMC4UEBlueprintFunctionLibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UVMC4UEBlueprintFunctionLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVMC4UEBlueprintFunctionLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVMC4UEBlueprintFunctionLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVMC4UEBlueprintFunctionLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVMC4UEBlueprintFunctionLibrary, 2755813413);
	template<> VMC4UE_API UClass* StaticClass<UVMC4UEBlueprintFunctionLibrary>()
	{
		return UVMC4UEBlueprintFunctionLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVMC4UEBlueprintFunctionLibrary(Z_Construct_UClass_UVMC4UEBlueprintFunctionLibrary, &UVMC4UEBlueprintFunctionLibrary::StaticClass, TEXT("/Script/VMC4UE"), TEXT("UVMC4UEBlueprintFunctionLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVMC4UEBlueprintFunctionLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
