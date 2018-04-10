// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Private/NativizedAssets.h"
#include "Public/Presets__pf179872773.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePresets__pf179872773() {}
// Cross Module References
	NATIVIZEDASSETS_API UEnum* Z_Construct_UEnum_NativizedAssets_E__Presets__pf();
// End Cross Module References
	static UEnum* E__Presets__pf_StaticEnum()
	{
		class UPackage* EnumPackage = FindOrConstructDynamicTypePackage(TEXT("/Game/Modes/Options/Presets"));
		class UEnum* Singleton = Cast<UEnum>(StaticFindObjectFast(UEnum::StaticClass(), EnumPackage, TEXT("Presets")));
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_NativizedAssets_E__Presets__pf, EnumPackage, TEXT("Presets"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_E__Presets__pf(E__Presets__pf_StaticEnum, TEXT("/Game/Modes/Options/Presets"), TEXT("Presets"), true, TEXT("/Game/Modes/Options/Presets"), TEXT("/Game/Modes/Options/Presets.Presets"));
	uint32 Get_Z_Construct_UEnum_NativizedAssets_E__Presets__pf_CRC() { return 3569934435U; }
	UEnum* Z_Construct_UEnum_NativizedAssets_E__Presets__pf()
	{
		UPackage* Outer = FindOrConstructDynamicTypePackage(TEXT("/Game/Modes/Options/Presets"));		UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("Presets"), 0, Get_Z_Construct_UEnum_NativizedAssets_E__Presets__pf_CRC(), true);
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "Presets::Presets_MAX", (int64)E__Presets__pf::E__Presets__pf_MAX },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "E__Presets__pf_MAX.OverrideName", "Presets::Presets_MAX" },
				{ "EnumDisplayNameFn", "E__Presets__pf__GetUserFriendlyName" },
				{ "ModuleRelativePath", "Public/Presets__pf179872773.h" },
				{ "OverrideNativeName", "Presets" },
				{ "ReplaceConverted", "/Game/Modes/Options/Presets.Presets" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())[](){ return (UObject*)FindOrConstructDynamicTypePackage(TEXT("/Game/Modes/Options/Presets")); },
				UE4CodeGen_Private::EDynamicType::Dynamic,
				"Presets",
				RF_Public|RF_Transient,
				E__Presets__pf__GetUserFriendlyName,
				(uint8)UEnum::ECppForm::EnumClass,
				"E__Presets__pf",
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
