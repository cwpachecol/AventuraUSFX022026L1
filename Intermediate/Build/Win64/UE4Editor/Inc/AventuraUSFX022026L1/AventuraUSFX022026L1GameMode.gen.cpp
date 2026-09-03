// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AventuraUSFX022026L1/AventuraUSFX022026L1GameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAventuraUSFX022026L1GameMode() {}
// Cross Module References
	AVENTURAUSFX022026L1_API UClass* Z_Construct_UClass_AAventuraUSFX022026L1GameMode_NoRegister();
	AVENTURAUSFX022026L1_API UClass* Z_Construct_UClass_AAventuraUSFX022026L1GameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_AventuraUSFX022026L1();
// End Cross Module References
	void AAventuraUSFX022026L1GameMode::StaticRegisterNativesAAventuraUSFX022026L1GameMode()
	{
	}
	UClass* Z_Construct_UClass_AAventuraUSFX022026L1GameMode_NoRegister()
	{
		return AAventuraUSFX022026L1GameMode::StaticClass();
	}
	struct Z_Construct_UClass_AAventuraUSFX022026L1GameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAventuraUSFX022026L1GameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_AventuraUSFX022026L1,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAventuraUSFX022026L1GameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "AventuraUSFX022026L1GameMode.h" },
		{ "ModuleRelativePath", "AventuraUSFX022026L1GameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAventuraUSFX022026L1GameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAventuraUSFX022026L1GameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AAventuraUSFX022026L1GameMode_Statics::ClassParams = {
		&AAventuraUSFX022026L1GameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_AAventuraUSFX022026L1GameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AAventuraUSFX022026L1GameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAventuraUSFX022026L1GameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AAventuraUSFX022026L1GameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AAventuraUSFX022026L1GameMode, 542520662);
	template<> AVENTURAUSFX022026L1_API UClass* StaticClass<AAventuraUSFX022026L1GameMode>()
	{
		return AAventuraUSFX022026L1GameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAventuraUSFX022026L1GameMode(Z_Construct_UClass_AAventuraUSFX022026L1GameMode, &AAventuraUSFX022026L1GameMode::StaticClass, TEXT("/Script/AventuraUSFX022026L1"), TEXT("AAventuraUSFX022026L1GameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAventuraUSFX022026L1GameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
