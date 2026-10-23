// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AventuraUSFX022026L1/BuilderEstructuraPlataforma.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBuilderEstructuraPlataforma() {}
// Cross Module References
	AVENTURAUSFX022026L1_API UClass* Z_Construct_UClass_UBuilderEstructuraPlataforma_NoRegister();
	AVENTURAUSFX022026L1_API UClass* Z_Construct_UClass_UBuilderEstructuraPlataforma();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_AventuraUSFX022026L1();
// End Cross Module References
	void UBuilderEstructuraPlataforma::StaticRegisterNativesUBuilderEstructuraPlataforma()
	{
	}
	UClass* Z_Construct_UClass_UBuilderEstructuraPlataforma_NoRegister()
	{
		return UBuilderEstructuraPlataforma::StaticClass();
	}
	struct Z_Construct_UClass_UBuilderEstructuraPlataforma_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBuilderEstructuraPlataforma_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_AventuraUSFX022026L1,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBuilderEstructuraPlataforma_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "BuilderEstructuraPlataforma.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBuilderEstructuraPlataforma_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IBuilderEstructuraPlataforma>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBuilderEstructuraPlataforma_Statics::ClassParams = {
		&UBuilderEstructuraPlataforma::StaticClass,
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
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_UBuilderEstructuraPlataforma_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBuilderEstructuraPlataforma_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBuilderEstructuraPlataforma()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBuilderEstructuraPlataforma_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBuilderEstructuraPlataforma, 855103992);
	template<> AVENTURAUSFX022026L1_API UClass* StaticClass<UBuilderEstructuraPlataforma>()
	{
		return UBuilderEstructuraPlataforma::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBuilderEstructuraPlataforma(Z_Construct_UClass_UBuilderEstructuraPlataforma, &UBuilderEstructuraPlataforma::StaticClass, TEXT("/Script/AventuraUSFX022026L1"), TEXT("UBuilderEstructuraPlataforma"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBuilderEstructuraPlataforma);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
