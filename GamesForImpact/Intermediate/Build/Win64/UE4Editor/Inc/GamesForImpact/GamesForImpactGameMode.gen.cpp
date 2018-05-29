// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "GamesForImpactGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGamesForImpactGameMode() {}
// Cross Module References
	GAMESFORIMPACT_API UClass* Z_Construct_UClass_AGamesForImpactGameMode_NoRegister();
	GAMESFORIMPACT_API UClass* Z_Construct_UClass_AGamesForImpactGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_GamesForImpact();
// End Cross Module References
	void AGamesForImpactGameMode::StaticRegisterNativesAGamesForImpactGameMode()
	{
	}
	UClass* Z_Construct_UClass_AGamesForImpactGameMode_NoRegister()
	{
		return AGamesForImpactGameMode::StaticClass();
	}
	UClass* Z_Construct_UClass_AGamesForImpactGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AGameModeBase,
				(UObject* (*)())Z_Construct_UPackage__Script_GamesForImpact,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
				{ "IncludePath", "GamesForImpactGameMode.h" },
				{ "ModuleRelativePath", "GamesForImpactGameMode.h" },
				{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AGamesForImpactGameMode>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AGamesForImpactGameMode::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00880288u,
				nullptr, 0,
				nullptr, 0,
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGamesForImpactGameMode, 601502571);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGamesForImpactGameMode(Z_Construct_UClass_AGamesForImpactGameMode, &AGamesForImpactGameMode::StaticClass, TEXT("/Script/GamesForImpact"), TEXT("AGamesForImpactGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGamesForImpactGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
