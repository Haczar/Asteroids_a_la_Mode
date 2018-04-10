// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Private/NativizedAssets.h"
#include "Public/LeaderBoard__pf3166771619.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLeaderBoard__pf3166771619() {}
// Cross Module References
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_ULeaderBoard_C__pf3166771619_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_ULeaderBoard_C__pf3166771619();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
// End Cross Module References
	void ULeaderBoard_C__pf3166771619::StaticRegisterNativesULeaderBoard_C__pf3166771619()
	{
	}
	UClass* Z_Construct_UClass_ULeaderBoard_C__pf3166771619_NoRegister()
	{
		return ULeaderBoard_C__pf3166771619::StaticClass();
	}
	UClass* Z_Construct_UClass_ULeaderBoard_C__pf3166771619()
	{
		UPackage* OuterPackage = FindOrConstructDynamicTypePackage(TEXT("/Game/UserInterface/LeaderBoard"));
		UClass* OuterClass = Cast<UClass>(StaticFindObjectFast(UClass::StaticClass(), OuterPackage, TEXT("LeaderBoard_C")));
		if (!OuterClass || !(OuterClass->ClassFlags & CLASS_Constructed))
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UUserWidget,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "IncludePath", "LeaderBoard__pf3166771619.h" },
				{ "IsBlueprintBase", "true" },
				{ "ModuleRelativePath", "Public/LeaderBoard__pf3166771619.h" },
				{ "ObjectInitializerConstructorDeclared", "" },
				{ "OverrideNativeName", "LeaderBoard_C" },
				{ "ReplaceConverted", "/Game/UserInterface/LeaderBoard.LeaderBoard_C" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__TextBlock_337__pf_MetaData[] = {
				{ "Category", "LeaderBoard" },
				{ "DisplayName", "Text - Score" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/LeaderBoard__pf3166771619.h" },
				{ "OverrideNativeName", "TextBlock_337" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__TextBlock_337__pf = { UE4CodeGen_Private::EPropertyClass::Object, "TextBlock_337", RF_Public|RF_Transient, 0x001000000008000c, 1, nullptr, STRUCT_OFFSET(ULeaderBoard_C__pf3166771619, bpv__TextBlock_337__pf), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(NewProp_bpv__TextBlock_337__pf_MetaData, ARRAY_COUNT(NewProp_bpv__TextBlock_337__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__TextBlock_336__pf_MetaData[] = {
				{ "Category", "LeaderBoard" },
				{ "DisplayName", "Text - PAcro" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/LeaderBoard__pf3166771619.h" },
				{ "OverrideNativeName", "TextBlock_336" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__TextBlock_336__pf = { UE4CodeGen_Private::EPropertyClass::Object, "TextBlock_336", RF_Public|RF_Transient, 0x001000000008000c, 1, nullptr, STRUCT_OFFSET(ULeaderBoard_C__pf3166771619, bpv__TextBlock_336__pf), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(NewProp_bpv__TextBlock_336__pf_MetaData, ARRAY_COUNT(NewProp_bpv__TextBlock_336__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__TextxScores8__pfG_MetaData[] = {
				{ "Category", "LeaderBoard" },
				{ "DisplayName", "Text - Score s8" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/LeaderBoard__pf3166771619.h" },
				{ "OverrideNativeName", "Text-Scores8" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__TextxScores8__pfG = { UE4CodeGen_Private::EPropertyClass::Object, "Text-Scores8", RF_Public|RF_Transient, 0x001000000008000c, 1, nullptr, STRUCT_OFFSET(ULeaderBoard_C__pf3166771619, bpv__TextxScores8__pfG), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(NewProp_bpv__TextxScores8__pfG_MetaData, ARRAY_COUNT(NewProp_bpv__TextxScores8__pfG_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__TextxScores7__pfG_MetaData[] = {
				{ "Category", "LeaderBoard" },
				{ "DisplayName", "Text - Score s7" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/LeaderBoard__pf3166771619.h" },
				{ "OverrideNativeName", "Text-Scores7" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__TextxScores7__pfG = { UE4CodeGen_Private::EPropertyClass::Object, "Text-Scores7", RF_Public|RF_Transient, 0x001000000008000c, 1, nullptr, STRUCT_OFFSET(ULeaderBoard_C__pf3166771619, bpv__TextxScores7__pfG), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(NewProp_bpv__TextxScores7__pfG_MetaData, ARRAY_COUNT(NewProp_bpv__TextxScores7__pfG_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__TextxScores6__pfG_MetaData[] = {
				{ "Category", "LeaderBoard" },
				{ "DisplayName", "Text - Score s6" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/LeaderBoard__pf3166771619.h" },
				{ "OverrideNativeName", "Text-Scores6" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__TextxScores6__pfG = { UE4CodeGen_Private::EPropertyClass::Object, "Text-Scores6", RF_Public|RF_Transient, 0x001000000008000c, 1, nullptr, STRUCT_OFFSET(ULeaderBoard_C__pf3166771619, bpv__TextxScores6__pfG), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(NewProp_bpv__TextxScores6__pfG_MetaData, ARRAY_COUNT(NewProp_bpv__TextxScores6__pfG_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__TextxScores5__pfG_MetaData[] = {
				{ "Category", "LeaderBoard" },
				{ "DisplayName", "Text - Score s5" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/LeaderBoard__pf3166771619.h" },
				{ "OverrideNativeName", "Text-Scores5" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__TextxScores5__pfG = { UE4CodeGen_Private::EPropertyClass::Object, "Text-Scores5", RF_Public|RF_Transient, 0x001000000008000c, 1, nullptr, STRUCT_OFFSET(ULeaderBoard_C__pf3166771619, bpv__TextxScores5__pfG), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(NewProp_bpv__TextxScores5__pfG_MetaData, ARRAY_COUNT(NewProp_bpv__TextxScores5__pfG_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__TextxScores4__pfG_MetaData[] = {
				{ "Category", "LeaderBoard" },
				{ "DisplayName", "[Text - Score s4]" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/LeaderBoard__pf3166771619.h" },
				{ "OverrideNativeName", "Text-Scores4" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__TextxScores4__pfG = { UE4CodeGen_Private::EPropertyClass::Object, "Text-Scores4", RF_Public|RF_Transient, 0x001000000008000c, 1, nullptr, STRUCT_OFFSET(ULeaderBoard_C__pf3166771619, bpv__TextxScores4__pfG), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(NewProp_bpv__TextxScores4__pfG_MetaData, ARRAY_COUNT(NewProp_bpv__TextxScores4__pfG_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__TextxScores3__pfG_MetaData[] = {
				{ "Category", "LeaderBoard" },
				{ "DisplayName", "Text - Score s3" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/LeaderBoard__pf3166771619.h" },
				{ "OverrideNativeName", "Text-Scores3" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__TextxScores3__pfG = { UE4CodeGen_Private::EPropertyClass::Object, "Text-Scores3", RF_Public|RF_Transient, 0x001000000008000c, 1, nullptr, STRUCT_OFFSET(ULeaderBoard_C__pf3166771619, bpv__TextxScores3__pfG), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(NewProp_bpv__TextxScores3__pfG_MetaData, ARRAY_COUNT(NewProp_bpv__TextxScores3__pfG_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__TextxScores2__pfG_MetaData[] = {
				{ "Category", "LeaderBoard" },
				{ "DisplayName", "Text - Score s2" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/LeaderBoard__pf3166771619.h" },
				{ "OverrideNativeName", "Text-Scores2" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__TextxScores2__pfG = { UE4CodeGen_Private::EPropertyClass::Object, "Text-Scores2", RF_Public|RF_Transient, 0x001000000008000c, 1, nullptr, STRUCT_OFFSET(ULeaderBoard_C__pf3166771619, bpv__TextxScores2__pfG), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(NewProp_bpv__TextxScores2__pfG_MetaData, ARRAY_COUNT(NewProp_bpv__TextxScores2__pfG_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__TextxScores10__pfG_MetaData[] = {
				{ "Category", "LeaderBoard" },
				{ "DisplayName", "Text - Score s10" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/LeaderBoard__pf3166771619.h" },
				{ "OverrideNativeName", "Text-Scores10" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__TextxScores10__pfG = { UE4CodeGen_Private::EPropertyClass::Object, "Text-Scores10", RF_Public|RF_Transient, 0x001000000008000c, 1, nullptr, STRUCT_OFFSET(ULeaderBoard_C__pf3166771619, bpv__TextxScores10__pfG), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(NewProp_bpv__TextxScores10__pfG_MetaData, ARRAY_COUNT(NewProp_bpv__TextxScores10__pfG_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__TextxScores1__pfG_MetaData[] = {
				{ "Category", "LeaderBoard" },
				{ "DisplayName", "Text - Score s1" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/LeaderBoard__pf3166771619.h" },
				{ "OverrideNativeName", "Text-Scores1" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__TextxScores1__pfG = { UE4CodeGen_Private::EPropertyClass::Object, "Text-Scores1", RF_Public|RF_Transient, 0x001000000008000c, 1, nullptr, STRUCT_OFFSET(ULeaderBoard_C__pf3166771619, bpv__TextxScores1__pfG), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(NewProp_bpv__TextxScores1__pfG_MetaData, ARRAY_COUNT(NewProp_bpv__TextxScores1__pfG_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__TextxScored9__pfG_MetaData[] = {
				{ "Category", "LeaderBoard" },
				{ "DisplayName", "Text - Score d9" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/LeaderBoard__pf3166771619.h" },
				{ "OverrideNativeName", "Text-Scored9" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__TextxScored9__pfG = { UE4CodeGen_Private::EPropertyClass::Object, "Text-Scored9", RF_Public|RF_Transient, 0x001000000008000c, 1, nullptr, STRUCT_OFFSET(ULeaderBoard_C__pf3166771619, bpv__TextxScored9__pfG), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(NewProp_bpv__TextxScored9__pfG_MetaData, ARRAY_COUNT(NewProp_bpv__TextxScored9__pfG_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__TextxScored8__pfG_MetaData[] = {
				{ "Category", "LeaderBoard" },
				{ "DisplayName", "Text - Score d8" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/LeaderBoard__pf3166771619.h" },
				{ "OverrideNativeName", "Text-Scored8" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__TextxScored8__pfG = { UE4CodeGen_Private::EPropertyClass::Object, "Text-Scored8", RF_Public|RF_Transient, 0x001000000008000c, 1, nullptr, STRUCT_OFFSET(ULeaderBoard_C__pf3166771619, bpv__TextxScored8__pfG), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(NewProp_bpv__TextxScored8__pfG_MetaData, ARRAY_COUNT(NewProp_bpv__TextxScored8__pfG_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__TextxScored7__pfG_MetaData[] = {
				{ "Category", "LeaderBoard" },
				{ "DisplayName", "Text - Score d7" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/LeaderBoard__pf3166771619.h" },
				{ "OverrideNativeName", "Text-Scored7" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__TextxScored7__pfG = { UE4CodeGen_Private::EPropertyClass::Object, "Text-Scored7", RF_Public|RF_Transient, 0x001000000008000c, 1, nullptr, STRUCT_OFFSET(ULeaderBoard_C__pf3166771619, bpv__TextxScored7__pfG), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(NewProp_bpv__TextxScored7__pfG_MetaData, ARRAY_COUNT(NewProp_bpv__TextxScored7__pfG_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__TextxScored6__pfG_MetaData[] = {
				{ "Category", "LeaderBoard" },
				{ "DisplayName", "Text - Score d6" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/LeaderBoard__pf3166771619.h" },
				{ "OverrideNativeName", "Text-Scored6" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__TextxScored6__pfG = { UE4CodeGen_Private::EPropertyClass::Object, "Text-Scored6", RF_Public|RF_Transient, 0x001000000008000c, 1, nullptr, STRUCT_OFFSET(ULeaderBoard_C__pf3166771619, bpv__TextxScored6__pfG), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(NewProp_bpv__TextxScored6__pfG_MetaData, ARRAY_COUNT(NewProp_bpv__TextxScored6__pfG_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__TextxScored5__pfG_MetaData[] = {
				{ "Category", "LeaderBoard" },
				{ "DisplayName", "Text - Score d5" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/LeaderBoard__pf3166771619.h" },
				{ "OverrideNativeName", "Text-Scored5" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__TextxScored5__pfG = { UE4CodeGen_Private::EPropertyClass::Object, "Text-Scored5", RF_Public|RF_Transient, 0x001000000008000c, 1, nullptr, STRUCT_OFFSET(ULeaderBoard_C__pf3166771619, bpv__TextxScored5__pfG), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(NewProp_bpv__TextxScored5__pfG_MetaData, ARRAY_COUNT(NewProp_bpv__TextxScored5__pfG_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__TextxScored4__pfG_MetaData[] = {
				{ "Category", "LeaderBoard" },
				{ "DisplayName", "Text - Score d4" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/LeaderBoard__pf3166771619.h" },
				{ "OverrideNativeName", "Text-Scored4" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__TextxScored4__pfG = { UE4CodeGen_Private::EPropertyClass::Object, "Text-Scored4", RF_Public|RF_Transient, 0x001000000008000c, 1, nullptr, STRUCT_OFFSET(ULeaderBoard_C__pf3166771619, bpv__TextxScored4__pfG), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(NewProp_bpv__TextxScored4__pfG_MetaData, ARRAY_COUNT(NewProp_bpv__TextxScored4__pfG_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__TextxScored3__pfG_MetaData[] = {
				{ "Category", "LeaderBoard" },
				{ "DisplayName", "Text - Score d3" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/LeaderBoard__pf3166771619.h" },
				{ "OverrideNativeName", "Text-Scored3" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__TextxScored3__pfG = { UE4CodeGen_Private::EPropertyClass::Object, "Text-Scored3", RF_Public|RF_Transient, 0x001000000008000c, 1, nullptr, STRUCT_OFFSET(ULeaderBoard_C__pf3166771619, bpv__TextxScored3__pfG), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(NewProp_bpv__TextxScored3__pfG_MetaData, ARRAY_COUNT(NewProp_bpv__TextxScored3__pfG_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__TextxScored2__pfG_MetaData[] = {
				{ "Category", "LeaderBoard" },
				{ "DisplayName", "Text - Score d2" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/LeaderBoard__pf3166771619.h" },
				{ "OverrideNativeName", "Text-Scored2" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__TextxScored2__pfG = { UE4CodeGen_Private::EPropertyClass::Object, "Text-Scored2", RF_Public|RF_Transient, 0x001000000008000c, 1, nullptr, STRUCT_OFFSET(ULeaderBoard_C__pf3166771619, bpv__TextxScored2__pfG), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(NewProp_bpv__TextxScored2__pfG_MetaData, ARRAY_COUNT(NewProp_bpv__TextxScored2__pfG_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__TextxScored10__pfG_MetaData[] = {
				{ "Category", "LeaderBoard" },
				{ "DisplayName", "Text - Score d10" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/LeaderBoard__pf3166771619.h" },
				{ "OverrideNativeName", "Text-Scored10" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__TextxScored10__pfG = { UE4CodeGen_Private::EPropertyClass::Object, "Text-Scored10", RF_Public|RF_Transient, 0x001000000008000c, 1, nullptr, STRUCT_OFFSET(ULeaderBoard_C__pf3166771619, bpv__TextxScored10__pfG), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(NewProp_bpv__TextxScored10__pfG_MetaData, ARRAY_COUNT(NewProp_bpv__TextxScored10__pfG_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__TextxScored1__pfG_MetaData[] = {
				{ "Category", "LeaderBoard" },
				{ "DisplayName", "Text - Score d1" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/LeaderBoard__pf3166771619.h" },
				{ "OverrideNativeName", "Text-Scored1" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__TextxScored1__pfG = { UE4CodeGen_Private::EPropertyClass::Object, "Text-Scored1", RF_Public|RF_Transient, 0x001000000008000c, 1, nullptr, STRUCT_OFFSET(ULeaderBoard_C__pf3166771619, bpv__TextxScored1__pfG), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(NewProp_bpv__TextxScored1__pfG_MetaData, ARRAY_COUNT(NewProp_bpv__TextxScored1__pfG_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__TextxPAcros8__pfG_MetaData[] = {
				{ "Category", "LeaderBoard" },
				{ "DisplayName", "Text - PAcro s8" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/LeaderBoard__pf3166771619.h" },
				{ "OverrideNativeName", "Text-PAcros8" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__TextxPAcros8__pfG = { UE4CodeGen_Private::EPropertyClass::Object, "Text-PAcros8", RF_Public|RF_Transient, 0x001000000008000c, 1, nullptr, STRUCT_OFFSET(ULeaderBoard_C__pf3166771619, bpv__TextxPAcros8__pfG), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(NewProp_bpv__TextxPAcros8__pfG_MetaData, ARRAY_COUNT(NewProp_bpv__TextxPAcros8__pfG_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__TextxPAcros7__pfG_MetaData[] = {
				{ "Category", "LeaderBoard" },
				{ "DisplayName", "Text - PAcro s7" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/LeaderBoard__pf3166771619.h" },
				{ "OverrideNativeName", "Text-PAcros7" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__TextxPAcros7__pfG = { UE4CodeGen_Private::EPropertyClass::Object, "Text-PAcros7", RF_Public|RF_Transient, 0x001000000008000c, 1, nullptr, STRUCT_OFFSET(ULeaderBoard_C__pf3166771619, bpv__TextxPAcros7__pfG), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(NewProp_bpv__TextxPAcros7__pfG_MetaData, ARRAY_COUNT(NewProp_bpv__TextxPAcros7__pfG_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__TextxPAcros6__pfG_MetaData[] = {
				{ "Category", "LeaderBoard" },
				{ "DisplayName", "Text - PAcro s6" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/LeaderBoard__pf3166771619.h" },
				{ "OverrideNativeName", "Text-PAcros6" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__TextxPAcros6__pfG = { UE4CodeGen_Private::EPropertyClass::Object, "Text-PAcros6", RF_Public|RF_Transient, 0x001000000008000c, 1, nullptr, STRUCT_OFFSET(ULeaderBoard_C__pf3166771619, bpv__TextxPAcros6__pfG), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(NewProp_bpv__TextxPAcros6__pfG_MetaData, ARRAY_COUNT(NewProp_bpv__TextxPAcros6__pfG_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__TextxPAcros5__pfG_MetaData[] = {
				{ "Category", "LeaderBoard" },
				{ "DisplayName", "Text - PAcro s5" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/LeaderBoard__pf3166771619.h" },
				{ "OverrideNativeName", "Text-PAcros5" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__TextxPAcros5__pfG = { UE4CodeGen_Private::EPropertyClass::Object, "Text-PAcros5", RF_Public|RF_Transient, 0x001000000008000c, 1, nullptr, STRUCT_OFFSET(ULeaderBoard_C__pf3166771619, bpv__TextxPAcros5__pfG), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(NewProp_bpv__TextxPAcros5__pfG_MetaData, ARRAY_COUNT(NewProp_bpv__TextxPAcros5__pfG_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__TextxPAcros4__pfG_MetaData[] = {
				{ "Category", "LeaderBoard" },
				{ "DisplayName", "Text - PAcro s4" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/LeaderBoard__pf3166771619.h" },
				{ "OverrideNativeName", "Text-PAcros4" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__TextxPAcros4__pfG = { UE4CodeGen_Private::EPropertyClass::Object, "Text-PAcros4", RF_Public|RF_Transient, 0x001000000008000c, 1, nullptr, STRUCT_OFFSET(ULeaderBoard_C__pf3166771619, bpv__TextxPAcros4__pfG), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(NewProp_bpv__TextxPAcros4__pfG_MetaData, ARRAY_COUNT(NewProp_bpv__TextxPAcros4__pfG_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__TextxPAcros3__pfG_MetaData[] = {
				{ "Category", "LeaderBoard" },
				{ "DisplayName", "Text - PAcro s3" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/LeaderBoard__pf3166771619.h" },
				{ "OverrideNativeName", "Text-PAcros3" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__TextxPAcros3__pfG = { UE4CodeGen_Private::EPropertyClass::Object, "Text-PAcros3", RF_Public|RF_Transient, 0x001000000008000c, 1, nullptr, STRUCT_OFFSET(ULeaderBoard_C__pf3166771619, bpv__TextxPAcros3__pfG), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(NewProp_bpv__TextxPAcros3__pfG_MetaData, ARRAY_COUNT(NewProp_bpv__TextxPAcros3__pfG_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__TextxPAcros2__pfG_MetaData[] = {
				{ "Category", "LeaderBoard" },
				{ "DisplayName", "Text - PAcro s2" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/LeaderBoard__pf3166771619.h" },
				{ "OverrideNativeName", "Text-PAcros2" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__TextxPAcros2__pfG = { UE4CodeGen_Private::EPropertyClass::Object, "Text-PAcros2", RF_Public|RF_Transient, 0x001000000008000c, 1, nullptr, STRUCT_OFFSET(ULeaderBoard_C__pf3166771619, bpv__TextxPAcros2__pfG), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(NewProp_bpv__TextxPAcros2__pfG_MetaData, ARRAY_COUNT(NewProp_bpv__TextxPAcros2__pfG_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__TextxPAcros10__pfG_MetaData[] = {
				{ "Category", "LeaderBoard" },
				{ "DisplayName", "Text - PAcro s10" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/LeaderBoard__pf3166771619.h" },
				{ "OverrideNativeName", "Text-PAcros10" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__TextxPAcros10__pfG = { UE4CodeGen_Private::EPropertyClass::Object, "Text-PAcros10", RF_Public|RF_Transient, 0x001000000008000c, 1, nullptr, STRUCT_OFFSET(ULeaderBoard_C__pf3166771619, bpv__TextxPAcros10__pfG), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(NewProp_bpv__TextxPAcros10__pfG_MetaData, ARRAY_COUNT(NewProp_bpv__TextxPAcros10__pfG_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__TextxPAcros1__pfG_MetaData[] = {
				{ "Category", "LeaderBoard" },
				{ "DisplayName", "Text - PAcro s1" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/LeaderBoard__pf3166771619.h" },
				{ "OverrideNativeName", "Text-PAcros1" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__TextxPAcros1__pfG = { UE4CodeGen_Private::EPropertyClass::Object, "Text-PAcros1", RF_Public|RF_Transient, 0x001000000008000c, 1, nullptr, STRUCT_OFFSET(ULeaderBoard_C__pf3166771619, bpv__TextxPAcros1__pfG), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(NewProp_bpv__TextxPAcros1__pfG_MetaData, ARRAY_COUNT(NewProp_bpv__TextxPAcros1__pfG_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__TextxPAcrodd2AAA__pfG_MetaData[] = {
				{ "Category", "LeaderBoard" },
				{ "DisplayName", "[Text - PAcrod d2] \"AAA" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/LeaderBoard__pf3166771619.h" },
				{ "OverrideNativeName", "Text-PAcrodd2AAA" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__TextxPAcrodd2AAA__pfG = { UE4CodeGen_Private::EPropertyClass::Object, "Text-PAcrodd2AAA", RF_Public|RF_Transient, 0x001000000008000c, 1, nullptr, STRUCT_OFFSET(ULeaderBoard_C__pf3166771619, bpv__TextxPAcrodd2AAA__pfG), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(NewProp_bpv__TextxPAcrodd2AAA__pfG_MetaData, ARRAY_COUNT(NewProp_bpv__TextxPAcrodd2AAA__pfG_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__TextxPAcrod8AAA__pfG_MetaData[] = {
				{ "Category", "LeaderBoard" },
				{ "DisplayName", "[Text - PAcro d8] \"AAA" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/LeaderBoard__pf3166771619.h" },
				{ "OverrideNativeName", "Text-PAcrod8AAA" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__TextxPAcrod8AAA__pfG = { UE4CodeGen_Private::EPropertyClass::Object, "Text-PAcrod8AAA", RF_Public|RF_Transient, 0x001000000008000c, 1, nullptr, STRUCT_OFFSET(ULeaderBoard_C__pf3166771619, bpv__TextxPAcrod8AAA__pfG), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(NewProp_bpv__TextxPAcrod8AAA__pfG_MetaData, ARRAY_COUNT(NewProp_bpv__TextxPAcrod8AAA__pfG_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__TextxPAcro2d92AAA__pfG_MetaData[] = {
				{ "Category", "LeaderBoard" },
				{ "DisplayName", "[Text - PAcro2 d92] \"AAA" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/LeaderBoard__pf3166771619.h" },
				{ "OverrideNativeName", "Text-PAcro2d92AAA" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__TextxPAcro2d92AAA__pfG = { UE4CodeGen_Private::EPropertyClass::Object, "Text-PAcro2d92AAA", RF_Public|RF_Transient, 0x001000000008000c, 1, nullptr, STRUCT_OFFSET(ULeaderBoard_C__pf3166771619, bpv__TextxPAcro2d92AAA__pfG), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(NewProp_bpv__TextxPAcro2d92AAA__pfG_MetaData, ARRAY_COUNT(NewProp_bpv__TextxPAcro2d92AAA__pfG_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__TextxPAcro2d7AAA__pfG_MetaData[] = {
				{ "Category", "LeaderBoard" },
				{ "DisplayName", "[Text - PAcro2 d7] \"AAA" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/LeaderBoard__pf3166771619.h" },
				{ "OverrideNativeName", "Text-PAcro2d7AAA" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__TextxPAcro2d7AAA__pfG = { UE4CodeGen_Private::EPropertyClass::Object, "Text-PAcro2d7AAA", RF_Public|RF_Transient, 0x001000000008000c, 1, nullptr, STRUCT_OFFSET(ULeaderBoard_C__pf3166771619, bpv__TextxPAcro2d7AAA__pfG), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(NewProp_bpv__TextxPAcro2d7AAA__pfG_MetaData, ARRAY_COUNT(NewProp_bpv__TextxPAcro2d7AAA__pfG_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__TextxPAcro2d6AAA__pfG_MetaData[] = {
				{ "Category", "LeaderBoard" },
				{ "DisplayName", "[Text - PAcro2 d6] \"AAA" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/LeaderBoard__pf3166771619.h" },
				{ "OverrideNativeName", "Text-PAcro2d6AAA" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__TextxPAcro2d6AAA__pfG = { UE4CodeGen_Private::EPropertyClass::Object, "Text-PAcro2d6AAA", RF_Public|RF_Transient, 0x001000000008000c, 1, nullptr, STRUCT_OFFSET(ULeaderBoard_C__pf3166771619, bpv__TextxPAcro2d6AAA__pfG), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(NewProp_bpv__TextxPAcro2d6AAA__pfG_MetaData, ARRAY_COUNT(NewProp_bpv__TextxPAcro2d6AAA__pfG_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__TextxPAcro2d5AAA__pfG_MetaData[] = {
				{ "Category", "LeaderBoard" },
				{ "DisplayName", "[Text - PAcro2 d5] \"AAA" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/LeaderBoard__pf3166771619.h" },
				{ "OverrideNativeName", "Text-PAcro2d5AAA" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__TextxPAcro2d5AAA__pfG = { UE4CodeGen_Private::EPropertyClass::Object, "Text-PAcro2d5AAA", RF_Public|RF_Transient, 0x001000000008000c, 1, nullptr, STRUCT_OFFSET(ULeaderBoard_C__pf3166771619, bpv__TextxPAcro2d5AAA__pfG), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(NewProp_bpv__TextxPAcro2d5AAA__pfG_MetaData, ARRAY_COUNT(NewProp_bpv__TextxPAcro2d5AAA__pfG_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__TextxPAcro2d4AAA__pfG_MetaData[] = {
				{ "Category", "LeaderBoard" },
				{ "DisplayName", "[Text - PAcro2 d4] \"AAA" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/LeaderBoard__pf3166771619.h" },
				{ "OverrideNativeName", "Text-PAcro2d4AAA" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__TextxPAcro2d4AAA__pfG = { UE4CodeGen_Private::EPropertyClass::Object, "Text-PAcro2d4AAA", RF_Public|RF_Transient, 0x001000000008000c, 1, nullptr, STRUCT_OFFSET(ULeaderBoard_C__pf3166771619, bpv__TextxPAcro2d4AAA__pfG), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(NewProp_bpv__TextxPAcro2d4AAA__pfG_MetaData, ARRAY_COUNT(NewProp_bpv__TextxPAcro2d4AAA__pfG_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__TextxPAcro2d3AAA__pfG_MetaData[] = {
				{ "Category", "LeaderBoard" },
				{ "DisplayName", "[Text - PAcro2 d3] \"AAA" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/LeaderBoard__pf3166771619.h" },
				{ "OverrideNativeName", "Text-PAcro2d3AAA" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__TextxPAcro2d3AAA__pfG = { UE4CodeGen_Private::EPropertyClass::Object, "Text-PAcro2d3AAA", RF_Public|RF_Transient, 0x001000000008000c, 1, nullptr, STRUCT_OFFSET(ULeaderBoard_C__pf3166771619, bpv__TextxPAcro2d3AAA__pfG), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(NewProp_bpv__TextxPAcro2d3AAA__pfG_MetaData, ARRAY_COUNT(NewProp_bpv__TextxPAcro2d3AAA__pfG_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__TextxPAcro2d1AAA__pfG_MetaData[] = {
				{ "Category", "LeaderBoard" },
				{ "DisplayName", "[Text - PAcro2 d1] \"AAA" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/LeaderBoard__pf3166771619.h" },
				{ "OverrideNativeName", "Text-PAcro2d1AAA" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__TextxPAcro2d1AAA__pfG = { UE4CodeGen_Private::EPropertyClass::Object, "Text-PAcro2d1AAA", RF_Public|RF_Transient, 0x001000000008000c, 1, nullptr, STRUCT_OFFSET(ULeaderBoard_C__pf3166771619, bpv__TextxPAcro2d1AAA__pfG), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(NewProp_bpv__TextxPAcro2d1AAA__pfG_MetaData, ARRAY_COUNT(NewProp_bpv__TextxPAcro2d1AAA__pfG_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__TextxPAcro2d10AAA__pfG_MetaData[] = {
				{ "Category", "LeaderBoard" },
				{ "DisplayName", "[Text - PAcro2 d10] \"AAA" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/LeaderBoard__pf3166771619.h" },
				{ "OverrideNativeName", "Text-PAcro2d10AAA" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__TextxPAcro2d10AAA__pfG = { UE4CodeGen_Private::EPropertyClass::Object, "Text-PAcro2d10AAA", RF_Public|RF_Transient, 0x001000000008000c, 1, nullptr, STRUCT_OFFSET(ULeaderBoard_C__pf3166771619, bpv__TextxPAcro2d10AAA__pfG), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(NewProp_bpv__TextxPAcro2d10AAA__pfG_MetaData, ARRAY_COUNT(NewProp_bpv__TextxPAcro2d10AAA__pfG_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__TextxPAcro1d9AAA__pfG_MetaData[] = {
				{ "Category", "LeaderBoard" },
				{ "DisplayName", "[Text - PAcro1 d9] \"AAA" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/LeaderBoard__pf3166771619.h" },
				{ "OverrideNativeName", "Text-PAcro1d9AAA" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__TextxPAcro1d9AAA__pfG = { UE4CodeGen_Private::EPropertyClass::Object, "Text-PAcro1d9AAA", RF_Public|RF_Transient, 0x001000000008000c, 1, nullptr, STRUCT_OFFSET(ULeaderBoard_C__pf3166771619, bpv__TextxPAcro1d9AAA__pfG), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(NewProp_bpv__TextxPAcro1d9AAA__pfG_MetaData, ARRAY_COUNT(NewProp_bpv__TextxPAcro1d9AAA__pfG_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__TextxPAcro1d8AAA__pfG_MetaData[] = {
				{ "Category", "LeaderBoard" },
				{ "DisplayName", "[Text - PAcro1 d8] \"AAA" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/LeaderBoard__pf3166771619.h" },
				{ "OverrideNativeName", "Text-PAcro1d8AAA" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__TextxPAcro1d8AAA__pfG = { UE4CodeGen_Private::EPropertyClass::Object, "Text-PAcro1d8AAA", RF_Public|RF_Transient, 0x001000000008000c, 1, nullptr, STRUCT_OFFSET(ULeaderBoard_C__pf3166771619, bpv__TextxPAcro1d8AAA__pfG), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(NewProp_bpv__TextxPAcro1d8AAA__pfG_MetaData, ARRAY_COUNT(NewProp_bpv__TextxPAcro1d8AAA__pfG_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__TextxPAcro1d7AAA__pfG_MetaData[] = {
				{ "Category", "LeaderBoard" },
				{ "DisplayName", "[Text - PAcro1 d7] \"AAA" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/LeaderBoard__pf3166771619.h" },
				{ "OverrideNativeName", "Text-PAcro1d7AAA" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__TextxPAcro1d7AAA__pfG = { UE4CodeGen_Private::EPropertyClass::Object, "Text-PAcro1d7AAA", RF_Public|RF_Transient, 0x001000000008000c, 1, nullptr, STRUCT_OFFSET(ULeaderBoard_C__pf3166771619, bpv__TextxPAcro1d7AAA__pfG), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(NewProp_bpv__TextxPAcro1d7AAA__pfG_MetaData, ARRAY_COUNT(NewProp_bpv__TextxPAcro1d7AAA__pfG_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__TextxPAcro1d6AAA__pfG_MetaData[] = {
				{ "Category", "LeaderBoard" },
				{ "DisplayName", "[Text - PAcro1 d6] \"AAA" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/LeaderBoard__pf3166771619.h" },
				{ "OverrideNativeName", "Text-PAcro1d6AAA" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__TextxPAcro1d6AAA__pfG = { UE4CodeGen_Private::EPropertyClass::Object, "Text-PAcro1d6AAA", RF_Public|RF_Transient, 0x001000000008000c, 1, nullptr, STRUCT_OFFSET(ULeaderBoard_C__pf3166771619, bpv__TextxPAcro1d6AAA__pfG), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(NewProp_bpv__TextxPAcro1d6AAA__pfG_MetaData, ARRAY_COUNT(NewProp_bpv__TextxPAcro1d6AAA__pfG_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__TextxPAcro1d5AAA__pfG_MetaData[] = {
				{ "Category", "LeaderBoard" },
				{ "DisplayName", "[Text - PAcro1 d5] \"AAA" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/LeaderBoard__pf3166771619.h" },
				{ "OverrideNativeName", "Text-PAcro1d5AAA" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__TextxPAcro1d5AAA__pfG = { UE4CodeGen_Private::EPropertyClass::Object, "Text-PAcro1d5AAA", RF_Public|RF_Transient, 0x001000000008000c, 1, nullptr, STRUCT_OFFSET(ULeaderBoard_C__pf3166771619, bpv__TextxPAcro1d5AAA__pfG), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(NewProp_bpv__TextxPAcro1d5AAA__pfG_MetaData, ARRAY_COUNT(NewProp_bpv__TextxPAcro1d5AAA__pfG_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__TextxPAcro1d4AAA__pfG_MetaData[] = {
				{ "Category", "LeaderBoard" },
				{ "DisplayName", "[Text - PAcro1 d4] \"AAA" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/LeaderBoard__pf3166771619.h" },
				{ "OverrideNativeName", "Text-PAcro1d4AAA" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__TextxPAcro1d4AAA__pfG = { UE4CodeGen_Private::EPropertyClass::Object, "Text-PAcro1d4AAA", RF_Public|RF_Transient, 0x001000000008000c, 1, nullptr, STRUCT_OFFSET(ULeaderBoard_C__pf3166771619, bpv__TextxPAcro1d4AAA__pfG), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(NewProp_bpv__TextxPAcro1d4AAA__pfG_MetaData, ARRAY_COUNT(NewProp_bpv__TextxPAcro1d4AAA__pfG_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__TextxPAcro1d3AAA__pfG_MetaData[] = {
				{ "Category", "LeaderBoard" },
				{ "DisplayName", "[Text - PAcro1 d3] \"AAA" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/LeaderBoard__pf3166771619.h" },
				{ "OverrideNativeName", "Text-PAcro1d3AAA" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__TextxPAcro1d3AAA__pfG = { UE4CodeGen_Private::EPropertyClass::Object, "Text-PAcro1d3AAA", RF_Public|RF_Transient, 0x001000000008000c, 1, nullptr, STRUCT_OFFSET(ULeaderBoard_C__pf3166771619, bpv__TextxPAcro1d3AAA__pfG), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(NewProp_bpv__TextxPAcro1d3AAA__pfG_MetaData, ARRAY_COUNT(NewProp_bpv__TextxPAcro1d3AAA__pfG_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__TextxPAcro1d2AAA__pfG_MetaData[] = {
				{ "Category", "LeaderBoard" },
				{ "DisplayName", "[Text - PAcro1 d2] \"AAA" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/LeaderBoard__pf3166771619.h" },
				{ "OverrideNativeName", "Text-PAcro1d2AAA" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__TextxPAcro1d2AAA__pfG = { UE4CodeGen_Private::EPropertyClass::Object, "Text-PAcro1d2AAA", RF_Public|RF_Transient, 0x001000000008000c, 1, nullptr, STRUCT_OFFSET(ULeaderBoard_C__pf3166771619, bpv__TextxPAcro1d2AAA__pfG), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(NewProp_bpv__TextxPAcro1d2AAA__pfG_MetaData, ARRAY_COUNT(NewProp_bpv__TextxPAcro1d2AAA__pfG_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__TextxPAcro1d1AAA__pfG_MetaData[] = {
				{ "Category", "LeaderBoard" },
				{ "DisplayName", "[Text - PAcro1 d1] \"AAA" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/LeaderBoard__pf3166771619.h" },
				{ "OverrideNativeName", "Text-PAcro1d1AAA" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__TextxPAcro1d1AAA__pfG = { UE4CodeGen_Private::EPropertyClass::Object, "Text-PAcro1d1AAA", RF_Public|RF_Transient, 0x001000000008000c, 1, nullptr, STRUCT_OFFSET(ULeaderBoard_C__pf3166771619, bpv__TextxPAcro1d1AAA__pfG), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(NewProp_bpv__TextxPAcro1d1AAA__pfG_MetaData, ARRAY_COUNT(NewProp_bpv__TextxPAcro1d1AAA__pfG_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__TextxPAcro1d10AAA__pfG_MetaData[] = {
				{ "Category", "LeaderBoard" },
				{ "DisplayName", "[Text - PAcro1 d10] \"AAA" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/LeaderBoard__pf3166771619.h" },
				{ "OverrideNativeName", "Text-PAcro1d10AAA" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__TextxPAcro1d10AAA__pfG = { UE4CodeGen_Private::EPropertyClass::Object, "Text-PAcro1d10AAA", RF_Public|RF_Transient, 0x001000000008000c, 1, nullptr, STRUCT_OFFSET(ULeaderBoard_C__pf3166771619, bpv__TextxPAcro1d10AAA__pfG), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(NewProp_bpv__TextxPAcro1d10AAA__pfG_MetaData, ARRAY_COUNT(NewProp_bpv__TextxPAcro1d10AAA__pfG_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bpv__TextBlock_337__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bpv__TextBlock_336__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bpv__TextxScores8__pfG,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bpv__TextxScores7__pfG,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bpv__TextxScores6__pfG,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bpv__TextxScores5__pfG,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bpv__TextxScores4__pfG,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bpv__TextxScores3__pfG,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bpv__TextxScores2__pfG,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bpv__TextxScores10__pfG,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bpv__TextxScores1__pfG,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bpv__TextxScored9__pfG,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bpv__TextxScored8__pfG,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bpv__TextxScored7__pfG,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bpv__TextxScored6__pfG,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bpv__TextxScored5__pfG,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bpv__TextxScored4__pfG,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bpv__TextxScored3__pfG,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bpv__TextxScored2__pfG,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bpv__TextxScored10__pfG,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bpv__TextxScored1__pfG,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bpv__TextxPAcros8__pfG,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bpv__TextxPAcros7__pfG,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bpv__TextxPAcros6__pfG,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bpv__TextxPAcros5__pfG,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bpv__TextxPAcros4__pfG,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bpv__TextxPAcros3__pfG,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bpv__TextxPAcros2__pfG,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bpv__TextxPAcros10__pfG,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bpv__TextxPAcros1__pfG,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bpv__TextxPAcrodd2AAA__pfG,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bpv__TextxPAcrod8AAA__pfG,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bpv__TextxPAcro2d92AAA__pfG,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bpv__TextxPAcro2d7AAA__pfG,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bpv__TextxPAcro2d6AAA__pfG,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bpv__TextxPAcro2d5AAA__pfG,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bpv__TextxPAcro2d4AAA__pfG,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bpv__TextxPAcro2d3AAA__pfG,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bpv__TextxPAcro2d1AAA__pfG,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bpv__TextxPAcro2d10AAA__pfG,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bpv__TextxPAcro1d9AAA__pfG,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bpv__TextxPAcro1d8AAA__pfG,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bpv__TextxPAcro1d7AAA__pfG,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bpv__TextxPAcro1d6AAA__pfG,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bpv__TextxPAcro1d5AAA__pfG,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bpv__TextxPAcro1d4AAA__pfG,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bpv__TextxPAcro1d3AAA__pfG,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bpv__TextxPAcro1d2AAA__pfG,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bpv__TextxPAcro1d1AAA__pfG,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bpv__TextxPAcro1d10AAA__pfG,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<ULeaderBoard_C__pf3166771619>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&ULeaderBoard_C__pf3166771619::StaticClass,
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
	IMPLEMENT_DYNAMIC_CLASS(ULeaderBoard_C__pf3166771619, TEXT("LeaderBoard_C"), 503351568);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULeaderBoard_C__pf3166771619(Z_Construct_UClass_ULeaderBoard_C__pf3166771619, &ULeaderBoard_C__pf3166771619::StaticClass, TEXT("/Game/UserInterface/LeaderBoard"), TEXT("LeaderBoard_C"), true, TEXT("/Game/UserInterface/LeaderBoard"), TEXT("/Game/UserInterface/LeaderBoard.LeaderBoard_C"), nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULeaderBoard_C__pf3166771619);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
