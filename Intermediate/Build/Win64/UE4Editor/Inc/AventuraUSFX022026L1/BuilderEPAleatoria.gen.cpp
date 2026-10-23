// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AventuraUSFX022026L1/BuilderEPAleatoria.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBuilderEPAleatoria() {}
// Cross Module References
	AVENTURAUSFX022026L1_API UClass* Z_Construct_UClass_ABuilderEPAleatoria_NoRegister();
	AVENTURAUSFX022026L1_API UClass* Z_Construct_UClass_ABuilderEPAleatoria();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_AventuraUSFX022026L1();
	AVENTURAUSFX022026L1_API UClass* Z_Construct_UClass_UBuilderEstructuraPlataforma_NoRegister();
// End Cross Module References
	void ABuilderEPAleatoria::StaticRegisterNativesABuilderEPAleatoria()
	{
	}
	UClass* Z_Construct_UClass_ABuilderEPAleatoria_NoRegister()
	{
		return ABuilderEPAleatoria::StaticClass();
	}
	struct Z_Construct_UClass_ABuilderEPAleatoria_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABuilderEPAleatoria_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_AventuraUSFX022026L1,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABuilderEPAleatoria_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BuilderEPAleatoria.h" },
		{ "ModuleRelativePath", "BuilderEPAleatoria.h" },
	};
#endif
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ABuilderEPAleatoria_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UBuilderEstructuraPlataforma_NoRegister, (int32)VTABLE_OFFSET(ABuilderEPAleatoria, IBuilderEstructuraPlataforma), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABuilderEPAleatoria_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABuilderEPAleatoria>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABuilderEPAleatoria_Statics::ClassParams = {
		&ABuilderEPAleatoria::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABuilderEPAleatoria_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABuilderEPAleatoria_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABuilderEPAleatoria()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABuilderEPAleatoria_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABuilderEPAleatoria, 2124977228);
	template<> AVENTURAUSFX022026L1_API UClass* StaticClass<ABuilderEPAleatoria>()
	{
		return ABuilderEPAleatoria::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABuilderEPAleatoria(Z_Construct_UClass_ABuilderEPAleatoria, &ABuilderEPAleatoria::StaticClass, TEXT("/Script/AventuraUSFX022026L1"), TEXT("ABuilderEPAleatoria"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABuilderEPAleatoria);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
