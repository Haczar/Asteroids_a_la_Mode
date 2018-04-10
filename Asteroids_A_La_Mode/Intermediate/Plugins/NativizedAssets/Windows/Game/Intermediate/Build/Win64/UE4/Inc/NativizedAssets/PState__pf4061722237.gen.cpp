// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Private/NativizedAssets.h"
#include "Public/PState__pf4061722237.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePState__pf4061722237() {}
// Cross Module References
	NATIVIZEDASSETS_API UEnum* Z_Construct_UEnum_NativizedAssets_E__PState__pf();
// End Cross Module References
	static UEnum* E__PState__pf_StaticEnum()
	{
		class UPackage* EnumPackage = FindOrConstructDynamicTypePackage(TEXT("/Game/Player/PState"));
		class UEnum* Singleton = Cast<UEnum>(StaticFindObjectFast(UEnum::StaticClass(), EnumPackage, TEXT("PState")));
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_NativizedAssets_E__PState__pf, EnumPackage, TEXT("PState"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_E__PState__pf(E__PState__pf_StaticEnum, TEXT("/Game/Player/PState"), TEXT("PState"), true, TEXT("/Game/Player/PState"), TEXT("/Game/Player/PState.PState"));
	uint32 Get_Z_Construct_UEnum_NativizedAssets_E__PState__pf_CRC() { return 1360780499U; }
	UEnum* Z_Construct_UEnum_NativizedAssets_E__PState__pf()
	{
		UPackage* Outer = FindOrConstructDynamicTypePackage(TEXT("/Game/Player/PState"));		UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("PState"), 0, Get_Z_Construct_UEnum_NativizedAssets_E__PState__pf_CRC(), true);
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "PState::NewEnumerator0", (int64)E__PState__pf::NewEnumerator0 },
				{ "PState::NewEnumerator1", (int64)E__PState__pf::NewEnumerator1 },
				{ "PState::NewEnumerator2", (int64)E__PState__pf::NewEnumerator2 },
				{ "PState::NewEnumerator3", (int64)E__PState__pf::NewEnumerator3 },
				{ "PState::PState_MAX", (int64)E__PState__pf::E__PState__pf_MAX },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "E__PState__pf_MAX.OverrideName", "PState::PState_MAX" },
				{ "EnumDisplayNameFn", "E__PState__pf__GetUserFriendlyName" },
				{ "ModuleRelativePath", "Public/PState__pf4061722237.h" },
				{ "NewEnumerator0.OverrideName", "PState::NewEnumerator0" },
				{ "NewEnumerator1.OverrideName", "PState::NewEnumerator1" },
				{ "NewEnumerator2.OverrideName", "PState::NewEnumerator2" },
				{ "NewEnumerator3.OverrideName", "PState::NewEnumerator3" },
				{ "OverrideNativeName", "PState" },
				{ "ReplaceConverted", "/Game/Player/PState.PState" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())[](){ return (UObject*)FindOrConstructDynamicTypePackage(TEXT("/Game/Player/PState")); },
				UE4CodeGen_Private::EDynamicType::Dynamic,
				"PState",
				RF_Public|RF_Transient,
				E__PState__pf__GetUserFriendlyName,
				(uint8)UEnum::ECppForm::EnumClass,
				"E__PState__pf",
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
