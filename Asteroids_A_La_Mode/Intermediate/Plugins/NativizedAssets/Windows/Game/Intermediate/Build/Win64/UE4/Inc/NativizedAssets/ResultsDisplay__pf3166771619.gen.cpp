// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Private/NativizedAssets.h"
#include "Public/ResultsDisplay__pf3166771619.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeResultsDisplay__pf3166771619() {}
// Cross Module References
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_UResultsDisplay_C__pf3166771619_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_UResultsDisplay_C__pf3166771619();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
// End Cross Module References
	void UResultsDisplay_C__pf3166771619::StaticRegisterNativesUResultsDisplay_C__pf3166771619()
	{
	}
	UClass* Z_Construct_UClass_UResultsDisplay_C__pf3166771619_NoRegister()
	{
		return UResultsDisplay_C__pf3166771619::StaticClass();
	}
	UClass* Z_Construct_UClass_UResultsDisplay_C__pf3166771619()
	{
		UPackage* OuterPackage = FindOrConstructDynamicTypePackage(TEXT("/Game/UserInterface/ResultsDisplay"));
		UClass* OuterClass = Cast<UClass>(StaticFindObjectFast(UClass::StaticClass(), OuterPackage, TEXT("ResultsDisplay_C")));
		if (!OuterClass || !(OuterClass->ClassFlags & CLASS_Constructed))
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UUserWidget,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "IncludePath", "ResultsDisplay__pf3166771619.h" },
				{ "IsBlueprintBase", "true" },
				{ "ModuleRelativePath", "Public/ResultsDisplay__pf3166771619.h" },
				{ "ObjectInitializerConstructorDeclared", "" },
				{ "OverrideNativeName", "ResultsDisplay_C" },
				{ "ReplaceConverted", "/Game/UserInterface/ResultsDisplay.ResultsDisplay_C" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UResultsDisplay_C__pf3166771619>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UResultsDisplay_C__pf3166771619::StaticClass,
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
	IMPLEMENT_DYNAMIC_CLASS(UResultsDisplay_C__pf3166771619, TEXT("ResultsDisplay_C"), 441636201);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UResultsDisplay_C__pf3166771619(Z_Construct_UClass_UResultsDisplay_C__pf3166771619, &UResultsDisplay_C__pf3166771619::StaticClass, TEXT("/Game/UserInterface/ResultsDisplay"), TEXT("ResultsDisplay_C"), true, TEXT("/Game/UserInterface/ResultsDisplay"), TEXT("/Game/UserInterface/ResultsDisplay.ResultsDisplay_C"), nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UResultsDisplay_C__pf3166771619);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
