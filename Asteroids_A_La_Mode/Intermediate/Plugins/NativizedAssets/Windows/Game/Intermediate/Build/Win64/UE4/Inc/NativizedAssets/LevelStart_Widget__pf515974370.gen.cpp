// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Private/NativizedAssets.h"
#include "Public/LevelStart_Widget__pf515974370.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLevelStart_Widget__pf515974370() {}
// Cross Module References
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_ULevelStart_Widget_C__pf515974370_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_ULevelStart_Widget_C__pf515974370();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
// End Cross Module References
	void ULevelStart_Widget_C__pf515974370::StaticRegisterNativesULevelStart_Widget_C__pf515974370()
	{
	}
	UClass* Z_Construct_UClass_ULevelStart_Widget_C__pf515974370_NoRegister()
	{
		return ULevelStart_Widget_C__pf515974370::StaticClass();
	}
	UClass* Z_Construct_UClass_ULevelStart_Widget_C__pf515974370()
	{
		UPackage* OuterPackage = FindOrConstructDynamicTypePackage(TEXT("/Game/UserInterface/Dev_Test/LevelStart_Widget"));
		UClass* OuterClass = Cast<UClass>(StaticFindObjectFast(UClass::StaticClass(), OuterPackage, TEXT("LevelStart_Widget_C")));
		if (!OuterClass || !(OuterClass->ClassFlags & CLASS_Constructed))
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UUserWidget,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "IncludePath", "LevelStart_Widget__pf515974370.h" },
				{ "IsBlueprintBase", "true" },
				{ "ModuleRelativePath", "Public/LevelStart_Widget__pf515974370.h" },
				{ "ObjectInitializerConstructorDeclared", "" },
				{ "OverrideNativeName", "LevelStart_Widget_C" },
				{ "ReplaceConverted", "/Game/UserInterface/Dev_Test/LevelStart_Widget.LevelStart_Widget_C" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<ULevelStart_Widget_C__pf515974370>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&ULevelStart_Widget_C__pf515974370::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00A01080u,
				nullptr, 0,
				nullptr, 0,
				"Engine",
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_DYNAMIC_CLASS(ULevelStart_Widget_C__pf515974370, TEXT("LevelStart_Widget_C"), 285615433);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULevelStart_Widget_C__pf515974370(Z_Construct_UClass_ULevelStart_Widget_C__pf515974370, &ULevelStart_Widget_C__pf515974370::StaticClass, TEXT("/Game/UserInterface/Dev_Test/LevelStart_Widget"), TEXT("LevelStart_Widget_C"), true, TEXT("/Game/UserInterface/Dev_Test/LevelStart_Widget"), TEXT("/Game/UserInterface/Dev_Test/LevelStart_Widget.LevelStart_Widget_C"), nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULevelStart_Widget_C__pf515974370);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
