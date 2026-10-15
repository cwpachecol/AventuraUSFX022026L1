// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AventuraUSFX022026L1/FabricaEnemigosAnimales.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFabricaEnemigosAnimales() {}
// Cross Module References
	AVENTURAUSFX022026L1_API UClass* Z_Construct_UClass_AFabricaEnemigosAnimales_NoRegister();
	AVENTURAUSFX022026L1_API UClass* Z_Construct_UClass_AFabricaEnemigosAnimales();
	AVENTURAUSFX022026L1_API UClass* Z_Construct_UClass_AFabricaEnemigos();
	UPackage* Z_Construct_UPackage__Script_AventuraUSFX022026L1();
// End Cross Module References
	void AFabricaEnemigosAnimales::StaticRegisterNativesAFabricaEnemigosAnimales()
	{
	}
	UClass* Z_Construct_UClass_AFabricaEnemigosAnimales_NoRegister()
	{
		return AFabricaEnemigosAnimales::StaticClass();
	}
	struct Z_Construct_UClass_AFabricaEnemigosAnimales_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFabricaEnemigosAnimales_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AFabricaEnemigos,
		(UObject* (*)())Z_Construct_UPackage__Script_AventuraUSFX022026L1,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFabricaEnemigosAnimales_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "FabricaEnemigosAnimales.h" },
		{ "ModuleRelativePath", "FabricaEnemigosAnimales.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFabricaEnemigosAnimales_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFabricaEnemigosAnimales>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFabricaEnemigosAnimales_Statics::ClassParams = {
		&AFabricaEnemigosAnimales::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AFabricaEnemigosAnimales_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFabricaEnemigosAnimales_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFabricaEnemigosAnimales()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFabricaEnemigosAnimales_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFabricaEnemigosAnimales, 3207069428);
	template<> AVENTURAUSFX022026L1_API UClass* StaticClass<AFabricaEnemigosAnimales>()
	{
		return AFabricaEnemigosAnimales::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFabricaEnemigosAnimales(Z_Construct_UClass_AFabricaEnemigosAnimales, &AFabricaEnemigosAnimales::StaticClass, TEXT("/Script/AventuraUSFX022026L1"), TEXT("AFabricaEnemigosAnimales"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFabricaEnemigosAnimales);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
