// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AventuraUSFX022026L1/Inventory.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInventory() {}
// Cross Module References
	AVENTURAUSFX022026L1_API UClass* Z_Construct_UClass_AInventory_NoRegister();
	AVENTURAUSFX022026L1_API UClass* Z_Construct_UClass_AInventory();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_AventuraUSFX022026L1();
// End Cross Module References
	void AInventory::StaticRegisterNativesAInventory()
	{
	}
	UClass* Z_Construct_UClass_AInventory_NoRegister()
	{
		return AInventory::StaticClass();
	}
	struct Z_Construct_UClass_AInventory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AInventory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_AventuraUSFX022026L1,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AInventory_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Inventory.h" },
		{ "ModuleRelativePath", "Inventory.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AInventory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AInventory>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AInventory_Statics::ClassParams = {
		&AInventory::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AInventory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AInventory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AInventory()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AInventory_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AInventory, 3964460643);
	template<> AVENTURAUSFX022026L1_API UClass* StaticClass<AInventory>()
	{
		return AInventory::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AInventory(Z_Construct_UClass_AInventory, &AInventory::StaticClass, TEXT("/Script/AventuraUSFX022026L1"), TEXT("AInventory"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AInventory);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
