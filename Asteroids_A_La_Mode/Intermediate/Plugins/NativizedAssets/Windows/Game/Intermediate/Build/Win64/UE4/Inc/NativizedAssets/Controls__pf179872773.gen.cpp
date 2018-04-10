// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Private/NativizedAssets.h"
#include "Public/Controls__pf179872773.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeControls__pf179872773() {}
// Cross Module References
	NATIVIZEDASSETS_API UEnum* Z_Construct_UEnum_NativizedAssets_E__Controls__pf();
// End Cross Module References
	static UEnum* E__Controls__pf_StaticEnum()
	{
		class UPackage* EnumPackage = FindOrConstructDynamicTypePackage(TEXT("/Game/Modes/Options/Controls"));
		class UEnum* Singleton = Cast<UEnum>(StaticFindObjectFast(UEnum::StaticClass(), EnumPackage, TEXT("Controls")));
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_NativizedAssets_E__Controls__pf, EnumPackage, TEXT("Controls"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_E__Controls__pf(E__Controls__pf_StaticEnum, TEXT("/Game/Modes/Options/Controls"), TEXT("Controls"), true, TEXT("/Game/Modes/Options/Controls"), TEXT("/Game/Modes/Options/Controls.Controls"));
	uint32 Get_Z_Construct_UEnum_NativizedAssets_E__Controls__pf_CRC() { return 1933412003U; }
	UEnum* Z_Construct_UEnum_NativizedAssets_E__Controls__pf()
	{
		UPackage* Outer = FindOrConstructDynamicTypePackage(TEXT("/Game/Modes/Options/Controls"));		UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("Controls"), 0, Get_Z_Construct_UEnum_NativizedAssets_E__Controls__pf_CRC(), true);
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "Controls::NewEnumerator0", (int64)E__Controls__pf::NewEnumerator0 },
				{ "Controls::NewEnumerator1", (int64)E__Controls__pf::NewEnumerator1 },
				{ "Controls::Controls_MAX", (int64)E__Controls__pf::E__Controls__pf_MAX },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "E__Controls__pf_MAX.OverrideName", "Controls::Controls_MAX" },
				{ "EnumDisplayNameFn", "E__Controls__pf__GetUserFriendlyName" },
				{ "ModuleRelativePath", "Public/Controls__pf179872773.h" },
				{ "NewEnumerator0.OverrideName", "Controls::NewEnumerator0" },
				{ "NewEnumerator1.OverrideName", "Controls::NewEnumerator1" },
				{ "OverrideNativeName", "Controls" },
				{ "ReplaceConverted", "/Game/Modes/Options/Controls.Controls" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())[](){ return (UObject*)FindOrConstructDynamicTypePackage(TEXT("/Game/Modes/Options/Controls")); },
				UE4CodeGen_Private::EDynamicType::Dynamic,
				"Controls",
				RF_Public|RF_Transient,
				E__Controls__pf__GetUserFriendlyName,
				(uint8)UEnum::ECppForm::EnumClass,
				"E__Controls__pf",
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
