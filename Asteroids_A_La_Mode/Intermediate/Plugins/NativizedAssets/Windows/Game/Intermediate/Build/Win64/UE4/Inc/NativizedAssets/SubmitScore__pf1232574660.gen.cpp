// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Private/NativizedAssets.h"
#include "Public/SubmitScore__pf1232574660.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSubmitScore__pf1232574660() {}
// Cross Module References
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_USubmitScore_C__pf1232574660_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_USubmitScore_C__pf1232574660();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
// End Cross Module References
	void USubmitScore_C__pf1232574660::StaticRegisterNativesUSubmitScore_C__pf1232574660()
	{
	}
	UClass* Z_Construct_UClass_USubmitScore_C__pf1232574660_NoRegister()
	{
		return USubmitScore_C__pf1232574660::StaticClass();
	}
	UClass* Z_Construct_UClass_USubmitScore_C__pf1232574660()
	{
		UPackage* OuterPackage = FindOrConstructDynamicTypePackage(TEXT("/Game/UserInterface/MainScreen/SubmitScore"));
		UClass* OuterClass = Cast<UClass>(StaticFindObjectFast(UClass::StaticClass(), OuterPackage, TEXT("SubmitScore_C")));
		if (!OuterClass || !(OuterClass->ClassFlags & CLASS_Constructed))
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UUserWidget,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "IncludePath", "SubmitScore__pf1232574660.h" },
				{ "IsBlueprintBase", "true" },
				{ "ModuleRelativePath", "Public/SubmitScore__pf1232574660.h" },
				{ "ObjectInitializerConstructorDeclared", "" },
				{ "OverrideNativeName", "SubmitScore_C" },
				{ "ReplaceConverted", "/Game/UserInterface/MainScreen/SubmitScore.SubmitScore_C" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<USubmitScore_C__pf1232574660>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&USubmitScore_C__pf1232574660::StaticClass,
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
	IMPLEMENT_DYNAMIC_CLASS(USubmitScore_C__pf1232574660, TEXT("SubmitScore_C"), 1865391854);
	static FCompiledInDefer Z_CompiledInDefer_UClass_USubmitScore_C__pf1232574660(Z_Construct_UClass_USubmitScore_C__pf1232574660, &USubmitScore_C__pf1232574660::StaticClass, TEXT("/Game/UserInterface/MainScreen/SubmitScore"), TEXT("SubmitScore_C"), true, TEXT("/Game/UserInterface/MainScreen/SubmitScore"), TEXT("/Game/UserInterface/MainScreen/SubmitScore.SubmitScore_C"), nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USubmitScore_C__pf1232574660);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
