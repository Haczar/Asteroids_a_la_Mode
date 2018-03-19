// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Asteroids_A_La_ModeGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAsteroids_A_La_ModeGameModeBase() {}
// Cross Module References
	ASTEROIDS_A_LA_MODE_API UClass* Z_Construct_UClass_AAsteroids_A_La_ModeGameModeBase_NoRegister();
	ASTEROIDS_A_LA_MODE_API UClass* Z_Construct_UClass_AAsteroids_A_La_ModeGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Asteroids_A_La_Mode();
// End Cross Module References
	void AAsteroids_A_La_ModeGameModeBase::StaticRegisterNativesAAsteroids_A_La_ModeGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_AAsteroids_A_La_ModeGameModeBase_NoRegister()
	{
		return AAsteroids_A_La_ModeGameModeBase::StaticClass();
	}
	UClass* Z_Construct_UClass_AAsteroids_A_La_ModeGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AGameModeBase,
				(UObject* (*)())Z_Construct_UPackage__Script_Asteroids_A_La_Mode,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
				{ "IncludePath", "Asteroids_A_La_ModeGameModeBase.h" },
				{ "ModuleRelativePath", "Asteroids_A_La_ModeGameModeBase.h" },
				{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AAsteroids_A_La_ModeGameModeBase>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AAsteroids_A_La_ModeGameModeBase::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900288u,
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
	IMPLEMENT_CLASS(AAsteroids_A_La_ModeGameModeBase, 3103188584);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAsteroids_A_La_ModeGameModeBase(Z_Construct_UClass_AAsteroids_A_La_ModeGameModeBase, &AAsteroids_A_La_ModeGameModeBase::StaticClass, TEXT("/Script/Asteroids_A_La_Mode"), TEXT("AAsteroids_A_La_ModeGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAsteroids_A_La_ModeGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
