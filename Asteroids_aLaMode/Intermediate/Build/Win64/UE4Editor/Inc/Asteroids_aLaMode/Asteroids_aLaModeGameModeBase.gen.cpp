// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Asteroids_aLaModeGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAsteroids_aLaModeGameModeBase() {}
// Cross Module References
	ASTEROIDS_ALAMODE_API UClass* Z_Construct_UClass_AAsteroids_aLaModeGameModeBase_NoRegister();
	ASTEROIDS_ALAMODE_API UClass* Z_Construct_UClass_AAsteroids_aLaModeGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Asteroids_aLaMode();
// End Cross Module References
	void AAsteroids_aLaModeGameModeBase::StaticRegisterNativesAAsteroids_aLaModeGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_AAsteroids_aLaModeGameModeBase_NoRegister()
	{
		return AAsteroids_aLaModeGameModeBase::StaticClass();
	}
	UClass* Z_Construct_UClass_AAsteroids_aLaModeGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AGameModeBase,
				(UObject* (*)())Z_Construct_UPackage__Script_Asteroids_aLaMode,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
				{ "IncludePath", "Asteroids_aLaModeGameModeBase.h" },
				{ "ModuleRelativePath", "Asteroids_aLaModeGameModeBase.h" },
				{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AAsteroids_aLaModeGameModeBase>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AAsteroids_aLaModeGameModeBase::StaticClass,
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
	IMPLEMENT_CLASS(AAsteroids_aLaModeGameModeBase, 3119516781);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAsteroids_aLaModeGameModeBase(Z_Construct_UClass_AAsteroids_aLaModeGameModeBase, &AAsteroids_aLaModeGameModeBase::StaticClass, TEXT("/Script/Asteroids_aLaMode"), TEXT("AAsteroids_aLaModeGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAsteroids_aLaModeGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
