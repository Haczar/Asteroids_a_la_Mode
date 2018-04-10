// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Private/NativizedAssets.h"
#include "Public/EMenSel__pf1232574660.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEMenSel__pf1232574660() {}
// Cross Module References
	NATIVIZEDASSETS_API UEnum* Z_Construct_UEnum_NativizedAssets_E__EMenSel__pf();
// End Cross Module References
	static UEnum* E__EMenSel__pf_StaticEnum()
	{
		class UPackage* EnumPackage = FindOrConstructDynamicTypePackage(TEXT("/Game/UserInterface/MainScreen/EMenSel"));
		class UEnum* Singleton = Cast<UEnum>(StaticFindObjectFast(UEnum::StaticClass(), EnumPackage, TEXT("EMenSel")));
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_NativizedAssets_E__EMenSel__pf, EnumPackage, TEXT("EMenSel"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_E__EMenSel__pf(E__EMenSel__pf_StaticEnum, TEXT("/Game/UserInterface/MainScreen/EMenSel"), TEXT("EMenSel"), true, TEXT("/Game/UserInterface/MainScreen/EMenSel"), TEXT("/Game/UserInterface/MainScreen/EMenSel.EMenSel"));
	uint32 Get_Z_Construct_UEnum_NativizedAssets_E__EMenSel__pf_CRC() { return 967987399U; }
	UEnum* Z_Construct_UEnum_NativizedAssets_E__EMenSel__pf()
	{
		UPackage* Outer = FindOrConstructDynamicTypePackage(TEXT("/Game/UserInterface/MainScreen/EMenSel"));		UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EMenSel"), 0, Get_Z_Construct_UEnum_NativizedAssets_E__EMenSel__pf_CRC(), true);
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EMenSel::NewEnumerator0", (int64)E__EMenSel__pf::NewEnumerator0 },
				{ "EMenSel::NewEnumerator1", (int64)E__EMenSel__pf::NewEnumerator1 },
				{ "EMenSel::NewEnumerator2", (int64)E__EMenSel__pf::NewEnumerator2 },
				{ "EMenSel::NewEnumerator3", (int64)E__EMenSel__pf::NewEnumerator3 },
				{ "EMenSel::EMenSel_MAX", (int64)E__EMenSel__pf::E__EMenSel__pf_MAX },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "E__EMenSel__pf_MAX.OverrideName", "EMenSel::EMenSel_MAX" },
				{ "EnumDisplayNameFn", "E__EMenSel__pf__GetUserFriendlyName" },
				{ "ModuleRelativePath", "Public/EMenSel__pf1232574660.h" },
				{ "NewEnumerator0.OverrideName", "EMenSel::NewEnumerator0" },
				{ "NewEnumerator1.OverrideName", "EMenSel::NewEnumerator1" },
				{ "NewEnumerator2.OverrideName", "EMenSel::NewEnumerator2" },
				{ "NewEnumerator3.OverrideName", "EMenSel::NewEnumerator3" },
				{ "OverrideNativeName", "EMenSel" },
				{ "ReplaceConverted", "/Game/UserInterface/MainScreen/EMenSel.EMenSel" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())[](){ return (UObject*)FindOrConstructDynamicTypePackage(TEXT("/Game/UserInterface/MainScreen/EMenSel")); },
				UE4CodeGen_Private::EDynamicType::Dynamic,
				"EMenSel",
				RF_Public|RF_Transient,
				E__EMenSel__pf__GetUserFriendlyName,
				(uint8)UEnum::ECppForm::EnumClass,
				"E__EMenSel__pf",
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
