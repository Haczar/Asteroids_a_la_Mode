// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Private/NativizedAssets.h"
#include "Public/EOptionSel__pf1232574660.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEOptionSel__pf1232574660() {}
// Cross Module References
	NATIVIZEDASSETS_API UEnum* Z_Construct_UEnum_NativizedAssets_E__EOptionSel__pf();
// End Cross Module References
	static UEnum* E__EOptionSel__pf_StaticEnum()
	{
		class UPackage* EnumPackage = FindOrConstructDynamicTypePackage(TEXT("/Game/UserInterface/MainScreen/EOptionSel"));
		class UEnum* Singleton = Cast<UEnum>(StaticFindObjectFast(UEnum::StaticClass(), EnumPackage, TEXT("EOptionSel")));
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_NativizedAssets_E__EOptionSel__pf, EnumPackage, TEXT("EOptionSel"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_E__EOptionSel__pf(E__EOptionSel__pf_StaticEnum, TEXT("/Game/UserInterface/MainScreen/EOptionSel"), TEXT("EOptionSel"), true, TEXT("/Game/UserInterface/MainScreen/EOptionSel"), TEXT("/Game/UserInterface/MainScreen/EOptionSel.EOptionSel"));
	uint32 Get_Z_Construct_UEnum_NativizedAssets_E__EOptionSel__pf_CRC() { return 3854899419U; }
	UEnum* Z_Construct_UEnum_NativizedAssets_E__EOptionSel__pf()
	{
		UPackage* Outer = FindOrConstructDynamicTypePackage(TEXT("/Game/UserInterface/MainScreen/EOptionSel"));		UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EOptionSel"), 0, Get_Z_Construct_UEnum_NativizedAssets_E__EOptionSel__pf_CRC(), true);
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EOptionSel::NewEnumerator0", (int64)E__EOptionSel__pf::NewEnumerator0 },
				{ "EOptionSel::NewEnumerator1", (int64)E__EOptionSel__pf::NewEnumerator1 },
				{ "EOptionSel::NewEnumerator3", (int64)E__EOptionSel__pf::NewEnumerator3 },
				{ "EOptionSel::NewEnumerator4", (int64)E__EOptionSel__pf::NewEnumerator4 },
				{ "EOptionSel::NewEnumerator2", (int64)E__EOptionSel__pf::NewEnumerator2 },
				{ "EOptionSel::NewEnumerator5", (int64)E__EOptionSel__pf::NewEnumerator5 },
				{ "EOptionSel::NewEnumerator6", (int64)E__EOptionSel__pf::NewEnumerator6 },
				{ "EOptionSel::NewEnumerator7", (int64)E__EOptionSel__pf::NewEnumerator7 },
				{ "EOptionSel::EOptionSel_MAX", (int64)E__EOptionSel__pf::E__EOptionSel__pf_MAX },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "E__EOptionSel__pf_MAX.OverrideName", "EOptionSel::EOptionSel_MAX" },
				{ "EnumDisplayNameFn", "E__EOptionSel__pf__GetUserFriendlyName" },
				{ "ModuleRelativePath", "Public/EOptionSel__pf1232574660.h" },
				{ "NewEnumerator0.OverrideName", "EOptionSel::NewEnumerator0" },
				{ "NewEnumerator1.OverrideName", "EOptionSel::NewEnumerator1" },
				{ "NewEnumerator2.OverrideName", "EOptionSel::NewEnumerator2" },
				{ "NewEnumerator3.OverrideName", "EOptionSel::NewEnumerator3" },
				{ "NewEnumerator4.OverrideName", "EOptionSel::NewEnumerator4" },
				{ "NewEnumerator5.OverrideName", "EOptionSel::NewEnumerator5" },
				{ "NewEnumerator6.OverrideName", "EOptionSel::NewEnumerator6" },
				{ "NewEnumerator7.OverrideName", "EOptionSel::NewEnumerator7" },
				{ "OverrideNativeName", "EOptionSel" },
				{ "ReplaceConverted", "/Game/UserInterface/MainScreen/EOptionSel.EOptionSel" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())[](){ return (UObject*)FindOrConstructDynamicTypePackage(TEXT("/Game/UserInterface/MainScreen/EOptionSel")); },
				UE4CodeGen_Private::EDynamicType::Dynamic,
				"EOptionSel",
				RF_Public|RF_Transient,
				E__EOptionSel__pf__GetUserFriendlyName,
				(uint8)UEnum::ECppForm::EnumClass,
				"E__EOptionSel__pf",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
