// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Private/NativizedAssets.h"
#include "Public/GameOver__pf3166771619.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameOver__pf3166771619() {}
// Cross Module References
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_UGameOver_C__pf3166771619_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_UGameOver_C__pf3166771619();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_USubmitScore_C__pf1232574660_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_UResultsDisplay_C__pf3166771619_NoRegister();
// End Cross Module References
	void UGameOver_C__pf3166771619::StaticRegisterNativesUGameOver_C__pf3166771619()
	{
	}
	UClass* Z_Construct_UClass_UGameOver_C__pf3166771619_NoRegister()
	{
		return UGameOver_C__pf3166771619::StaticClass();
	}
	UClass* Z_Construct_UClass_UGameOver_C__pf3166771619()
	{
		UPackage* OuterPackage = FindOrConstructDynamicTypePackage(TEXT("/Game/UserInterface/GameOver"));
		UClass* OuterClass = Cast<UClass>(StaticFindObjectFast(UClass::StaticClass(), OuterPackage, TEXT("GameOver_C")));
		if (!OuterClass || !(OuterClass->ClassFlags & CLASS_Constructed))
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UUserWidget,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "IncludePath", "GameOver__pf3166771619.h" },
				{ "IsBlueprintBase", "true" },
				{ "ModuleRelativePath", "Public/GameOver__pf3166771619.h" },
				{ "ObjectInitializerConstructorDeclared", "" },
				{ "OverrideNativeName", "GameOver_C" },
				{ "ReplaceConverted", "/Game/UserInterface/GameOver.GameOver_C" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__SubmitScore__pf_MetaData[] = {
				{ "Category", "GameOver" },
				{ "DisplayName", "SubmitScore" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/GameOver__pf3166771619.h" },
				{ "OverrideNativeName", "SubmitScore" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__SubmitScore__pf = { UE4CodeGen_Private::EPropertyClass::Object, "SubmitScore", RF_Public|RF_Transient, 0x001000000008000c, 1, nullptr, STRUCT_OFFSET(UGameOver_C__pf3166771619, bpv__SubmitScore__pf), Z_Construct_UClass_USubmitScore_C__pf1232574660_NoRegister, METADATA_PARAMS(NewProp_bpv__SubmitScore__pf_MetaData, ARRAY_COUNT(NewProp_bpv__SubmitScore__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__ResultsDisplay__pf_MetaData[] = {
				{ "Category", "GameOver" },
				{ "DisplayName", "ResultsDisplay" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/GameOver__pf3166771619.h" },
				{ "OverrideNativeName", "ResultsDisplay" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__ResultsDisplay__pf = { UE4CodeGen_Private::EPropertyClass::Object, "ResultsDisplay", RF_Public|RF_Transient, 0x001000000008000c, 1, nullptr, STRUCT_OFFSET(UGameOver_C__pf3166771619, bpv__ResultsDisplay__pf), Z_Construct_UClass_UResultsDisplay_C__pf3166771619_NoRegister, METADATA_PARAMS(NewProp_bpv__ResultsDisplay__pf_MetaData, ARRAY_COUNT(NewProp_bpv__ResultsDisplay__pf_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bpv__SubmitScore__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bpv__ResultsDisplay__pf,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UGameOver_C__pf3166771619>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UGameOver_C__pf3166771619::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00A01080u,
				nullptr, 0,
				PropPointers, ARRAY_COUNT(PropPointers),
				"Engine",
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_DYNAMIC_CLASS(UGameOver_C__pf3166771619, TEXT("GameOver_C"), 983513715);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGameOver_C__pf3166771619(Z_Construct_UClass_UGameOver_C__pf3166771619, &UGameOver_C__pf3166771619::StaticClass, TEXT("/Game/UserInterface/GameOver"), TEXT("GameOver_C"), true, TEXT("/Game/UserInterface/GameOver"), TEXT("/Game/UserInterface/GameOver.GameOver_C"), nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGameOver_C__pf3166771619);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
