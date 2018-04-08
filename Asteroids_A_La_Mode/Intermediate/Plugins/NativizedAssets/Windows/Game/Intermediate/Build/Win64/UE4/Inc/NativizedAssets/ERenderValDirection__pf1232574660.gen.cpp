// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Private/NativizedAssets.h"
#include "Public/ERenderValDirection__pf1232574660.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeERenderValDirection__pf1232574660() {}
// Cross Module References
	NATIVIZEDASSETS_API UEnum* Z_Construct_UEnum_NativizedAssets_E__ERenderValDirection__pf();
// End Cross Module References
	static UEnum* E__ERenderValDirection__pf_StaticEnum()
	{
		class UPackage* EnumPackage = FindOrConstructDynamicTypePackage(TEXT("/Game/UserInterface/MainScreen/ERenderValDirection"));
		class UEnum* Singleton = Cast<UEnum>(StaticFindObjectFast(UEnum::StaticClass(), EnumPackage, TEXT("ERenderValDirection")));
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_NativizedAssets_E__ERenderValDirection__pf, EnumPackage, TEXT("ERenderValDirection"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_E__ERenderValDirection__pf(E__ERenderValDirection__pf_StaticEnum, TEXT("/Game/UserInterface/MainScreen/ERenderValDirection"), TEXT("ERenderValDirection"), true, TEXT("/Game/UserInterface/MainScreen/ERenderValDirection"), TEXT("/Game/UserInterface/MainScreen/ERenderValDirection.ERenderValDirection"));
	uint32 Get_Z_Construct_UEnum_NativizedAssets_E__ERenderValDirection__pf_CRC() { return 138730475U; }
	UEnum* Z_Construct_UEnum_NativizedAssets_E__ERenderValDirection__pf()
	{
		UPackage* Outer = FindOrConstructDynamicTypePackage(TEXT("/Game/UserInterface/MainScreen/ERenderValDirection"));		UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ERenderValDirection"), 0, Get_Z_Construct_UEnum_NativizedAssets_E__ERenderValDirection__pf_CRC(), true);
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ERenderValDirection::NewEnumerator0", (int64)E__ERenderValDirection__pf::NewEnumerator0 },
				{ "ERenderValDirection::NewEnumerator1", (int64)E__ERenderValDirection__pf::NewEnumerator1 },
				{ "ERenderValDirection::NewEnumerator2", (int64)E__ERenderValDirection__pf::NewEnumerator2 },
				{ "ERenderValDirection::ERenderValDirection_MAX", (int64)E__ERenderValDirection__pf::E__ERenderValDirection__pf_MAX },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "E__ERenderValDirection__pf_MAX.OverrideName", "ERenderValDirection::ERenderValDirection_MAX" },
				{ "EnumDisplayNameFn", "E__ERenderValDirection__pf__GetUserFriendlyName" },
				{ "ModuleRelativePath", "Public/ERenderValDirection__pf1232574660.h" },
				{ "NewEnumerator0.OverrideName", "ERenderValDirection::NewEnumerator0" },
				{ "NewEnumerator1.OverrideName", "ERenderValDirection::NewEnumerator1" },
				{ "NewEnumerator2.OverrideName", "ERenderValDirection::NewEnumerator2" },
				{ "OverrideNativeName", "ERenderValDirection" },
				{ "ReplaceConverted", "/Game/UserInterface/MainScreen/ERenderValDirection.ERenderValDirection" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())[](){ return (UObject*)FindOrConstructDynamicTypePackage(TEXT("/Game/UserInterface/MainScreen/ERenderValDirection")); },
				UE4CodeGen_Private::EDynamicType::Dynamic,
				"ERenderValDirection",
				RF_Public|RF_Transient,
				E__ERenderValDirection__pf__GetUserFriendlyName,
				(uint8)UEnum::ECppForm::EnumClass,
				"E__ERenderValDirection__pf",
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
