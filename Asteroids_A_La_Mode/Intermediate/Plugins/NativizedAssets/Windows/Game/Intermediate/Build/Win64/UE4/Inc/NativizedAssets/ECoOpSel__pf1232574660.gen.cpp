// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Private/NativizedAssets.h"
#include "Public/ECoOpSel__pf1232574660.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeECoOpSel__pf1232574660() {}
// Cross Module References
	NATIVIZEDASSETS_API UEnum* Z_Construct_UEnum_NativizedAssets_E__ECoOpSel__pf();
// End Cross Module References
	static UEnum* E__ECoOpSel__pf_StaticEnum()
	{
		class UPackage* EnumPackage = FindOrConstructDynamicTypePackage(TEXT("/Game/UserInterface/MainScreen/ECoOpSel"));
		class UEnum* Singleton = Cast<UEnum>(StaticFindObjectFast(UEnum::StaticClass(), EnumPackage, TEXT("ECoOpSel")));
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_NativizedAssets_E__ECoOpSel__pf, EnumPackage, TEXT("ECoOpSel"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_E__ECoOpSel__pf(E__ECoOpSel__pf_StaticEnum, TEXT("/Game/UserInterface/MainScreen/ECoOpSel"), TEXT("ECoOpSel"), true, TEXT("/Game/UserInterface/MainScreen/ECoOpSel"), TEXT("/Game/UserInterface/MainScreen/ECoOpSel.ECoOpSel"));
	uint32 Get_Z_Construct_UEnum_NativizedAssets_E__ECoOpSel__pf_CRC() { return 2303315680U; }
	UEnum* Z_Construct_UEnum_NativizedAssets_E__ECoOpSel__pf()
	{
		UPackage* Outer = FindOrConstructDynamicTypePackage(TEXT("/Game/UserInterface/MainScreen/ECoOpSel"));		UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ECoOpSel"), 0, Get_Z_Construct_UEnum_NativizedAssets_E__ECoOpSel__pf_CRC(), true);
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ECoOpSel::NewEnumerator0", (int64)E__ECoOpSel__pf::NewEnumerator0 },
				{ "ECoOpSel::NewEnumerator1", (int64)E__ECoOpSel__pf::NewEnumerator1 },
				{ "ECoOpSel::NewEnumerator2", (int64)E__ECoOpSel__pf::NewEnumerator2 },
				{ "ECoOpSel::ECoOpSel_MAX", (int64)E__ECoOpSel__pf::E__ECoOpSel__pf_MAX },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "E__ECoOpSel__pf_MAX.OverrideName", "ECoOpSel::ECoOpSel_MAX" },
				{ "EnumDisplayNameFn", "E__ECoOpSel__pf__GetUserFriendlyName" },
				{ "ModuleRelativePath", "Public/ECoOpSel__pf1232574660.h" },
				{ "NewEnumerator0.OverrideName", "ECoOpSel::NewEnumerator0" },
				{ "NewEnumerator1.OverrideName", "ECoOpSel::NewEnumerator1" },
				{ "NewEnumerator2.OverrideName", "ECoOpSel::NewEnumerator2" },
				{ "OverrideNativeName", "ECoOpSel" },
				{ "ReplaceConverted", "/Game/UserInterface/MainScreen/ECoOpSel.ECoOpSel" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())[](){ return (UObject*)FindOrConstructDynamicTypePackage(TEXT("/Game/UserInterface/MainScreen/ECoOpSel")); },
				UE4CodeGen_Private::EDynamicType::Dynamic,
				"ECoOpSel",
				RF_Public|RF_Transient,
				E__ECoOpSel__pf__GetUserFriendlyName,
				(uint8)UEnum::ECppForm::EnumClass,
				"E__ECoOpSel__pf",
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
