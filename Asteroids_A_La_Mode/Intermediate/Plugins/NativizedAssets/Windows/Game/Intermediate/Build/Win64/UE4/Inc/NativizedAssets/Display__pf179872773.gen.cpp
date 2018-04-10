// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Private/NativizedAssets.h"
#include "Public/Display__pf179872773.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDisplay__pf179872773() {}
// Cross Module References
	NATIVIZEDASSETS_API UEnum* Z_Construct_UEnum_NativizedAssets_E__Display__pf();
// End Cross Module References
	static UEnum* E__Display__pf_StaticEnum()
	{
		class UPackage* EnumPackage = FindOrConstructDynamicTypePackage(TEXT("/Game/Modes/Options/Display"));
		class UEnum* Singleton = Cast<UEnum>(StaticFindObjectFast(UEnum::StaticClass(), EnumPackage, TEXT("Display")));
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_NativizedAssets_E__Display__pf, EnumPackage, TEXT("Display"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_E__Display__pf(E__Display__pf_StaticEnum, TEXT("/Game/Modes/Options/Display"), TEXT("Display"), true, TEXT("/Game/Modes/Options/Display"), TEXT("/Game/Modes/Options/Display.Display"));
	uint32 Get_Z_Construct_UEnum_NativizedAssets_E__Display__pf_CRC() { return 1958667584U; }
	UEnum* Z_Construct_UEnum_NativizedAssets_E__Display__pf()
	{
		UPackage* Outer = FindOrConstructDynamicTypePackage(TEXT("/Game/Modes/Options/Display"));		UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("Display"), 0, Get_Z_Construct_UEnum_NativizedAssets_E__Display__pf_CRC(), true);
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "Display::NewEnumerator0", (int64)E__Display__pf::NewEnumerator0 },
				{ "Display::NewEnumerator1", (int64)E__Display__pf::NewEnumerator1 },
				{ "Display::NewEnumerator2", (int64)E__Display__pf::NewEnumerator2 },
				{ "Display::Display_MAX", (int64)E__Display__pf::E__Display__pf_MAX },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "E__Display__pf_MAX.OverrideName", "Display::Display_MAX" },
				{ "EnumDisplayNameFn", "E__Display__pf__GetUserFriendlyName" },
				{ "ModuleRelativePath", "Public/Display__pf179872773.h" },
				{ "NewEnumerator0.OverrideName", "Display::NewEnumerator0" },
				{ "NewEnumerator1.OverrideName", "Display::NewEnumerator1" },
				{ "NewEnumerator2.OverrideName", "Display::NewEnumerator2" },
				{ "OverrideNativeName", "Display" },
				{ "ReplaceConverted", "/Game/Modes/Options/Display.Display" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())[](){ return (UObject*)FindOrConstructDynamicTypePackage(TEXT("/Game/Modes/Options/Display")); },
				UE4CodeGen_Private::EDynamicType::Dynamic,
				"Display",
				RF_Public|RF_Transient,
				E__Display__pf__GetUserFriendlyName,
				(uint8)UEnum::ECppForm::EnumClass,
				"E__Display__pf",
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
