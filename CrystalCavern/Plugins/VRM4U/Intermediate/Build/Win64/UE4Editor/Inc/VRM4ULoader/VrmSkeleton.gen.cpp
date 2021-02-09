// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VRM4ULoader/Public/VrmSkeleton.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVrmSkeleton() {}
// Cross Module References
	VRM4ULOADER_API UClass* Z_Construct_UClass_UVrmSkeleton_NoRegister();
	VRM4ULOADER_API UClass* Z_Construct_UClass_UVrmSkeleton();
	ENGINE_API UClass* Z_Construct_UClass_USkeleton();
	UPackage* Z_Construct_UPackage__Script_VRM4ULoader();
// End Cross Module References
	void UVrmSkeleton::StaticRegisterNativesUVrmSkeleton()
	{
	}
	UClass* Z_Construct_UClass_UVrmSkeleton_NoRegister()
	{
		return UVrmSkeleton::StaticClass();
	}
	struct Z_Construct_UClass_UVrmSkeleton_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVrmSkeleton_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USkeleton,
		(UObject* (*)())Z_Construct_UPackage__Script_VRM4ULoader,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVrmSkeleton_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "VrmSkeleton.h" },
		{ "ModuleRelativePath", "Public/VrmSkeleton.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVrmSkeleton_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVrmSkeleton>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVrmSkeleton_Statics::ClassParams = {
		&UVrmSkeleton::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVrmSkeleton_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVrmSkeleton_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVrmSkeleton()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVrmSkeleton_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVrmSkeleton, 1585655810);
	template<> VRM4ULOADER_API UClass* StaticClass<UVrmSkeleton>()
	{
		return UVrmSkeleton::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVrmSkeleton(Z_Construct_UClass_UVrmSkeleton, &UVrmSkeleton::StaticClass, TEXT("/Script/VRM4ULoader"), TEXT("UVrmSkeleton"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVrmSkeleton);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
