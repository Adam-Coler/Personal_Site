// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Personal_Site/Personal_SiteGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePersonal_SiteGameMode() {}
// Cross Module References
	PERSONAL_SITE_API UClass* Z_Construct_UClass_APersonal_SiteGameMode_NoRegister();
	PERSONAL_SITE_API UClass* Z_Construct_UClass_APersonal_SiteGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Personal_Site();
// End Cross Module References
	void APersonal_SiteGameMode::StaticRegisterNativesAPersonal_SiteGameMode()
	{
	}
	UClass* Z_Construct_UClass_APersonal_SiteGameMode_NoRegister()
	{
		return APersonal_SiteGameMode::StaticClass();
	}
	struct Z_Construct_UClass_APersonal_SiteGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APersonal_SiteGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Personal_Site,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APersonal_SiteGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "Personal_SiteGameMode.h" },
		{ "ModuleRelativePath", "Personal_SiteGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
		{ "ToolTip", "The GameMode defines the game being played. It governs the game rules, scoring, what actors\nare allowed to exist in this game type, and who may enter the game.\n\nThis game mode just sets the default pawn to be the MyCharacter asset, which is a subclass of Personal_SiteCharacter" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_APersonal_SiteGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APersonal_SiteGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APersonal_SiteGameMode_Statics::ClassParams = {
		&APersonal_SiteGameMode::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x008802A8u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_APersonal_SiteGameMode_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_APersonal_SiteGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APersonal_SiteGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APersonal_SiteGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APersonal_SiteGameMode, 2007989836);
	static FCompiledInDefer Z_CompiledInDefer_UClass_APersonal_SiteGameMode(Z_Construct_UClass_APersonal_SiteGameMode, &APersonal_SiteGameMode::StaticClass, TEXT("/Script/Personal_Site"), TEXT("APersonal_SiteGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APersonal_SiteGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
