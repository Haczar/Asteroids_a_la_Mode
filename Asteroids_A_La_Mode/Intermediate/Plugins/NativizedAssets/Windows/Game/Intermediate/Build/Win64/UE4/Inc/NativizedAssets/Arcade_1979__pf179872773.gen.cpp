// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Private/NativizedAssets.h"
#include "Public/Arcade_1979__pf179872773.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeArcade_1979__pf179872773() {}
// Cross Module References
	NATIVIZEDASSETS_API UEnum* Z_Construct_UEnum_NativizedAssets_E__Arcade_1979__pf();
// End Cross Module References
	static UEnum* E__Arcade_1979__pf_StaticEnum()
	{
		class UPackage* EnumPackage = FindOrConstructDynamicTypePackage(TEXT("/Game/Modes/Options/Arcade_1979"));
		class UEnum* Singleton = Cast<UEnum>(StaticFindObjectFast(UEnum::StaticClass(), EnumPackage, TEXT("Arcade_1979")));
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_NativizedAssets_E__Arcade_1979__pf, EnumPackage, TEXT("Arcade_1979"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_E__Arcade_1979__pf(E__Arcade_1979__pf_StaticEnum, TEXT("/Game/Modes/Options/Arcade_1979"), TEXT("Arcade_1979"), true, TEXT("/Game/Modes/Options/Arcade_1979"), TEXT("/Game/Modes/Options/Arcade_1979.Arcade_1979"));
	uint32 Get_Z_Construct_UEnum_NativizedAssets_E__Arcade_1979__pf_CRC() { return 156238476U; }
	UEnum* Z_Construct_UEnum_NativizedAssets_E__Arcade_1979__pf()
	{
		UPackage* Outer = FindOrConstructDynamicTypePackage(TEXT("/Game/Modes/Options/Arcade_1979"));		UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("Arcade_1979"), 0, Get_Z_Construct_UEnum_NativizedAssets_E__Arcade_1979__pf_CRC(), true);
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "Arcade_1979::Arcade_1979_MAX", (int64)E__Arcade_1979__pf::E__Arcade_1979__pf_MAX },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "E__Arcade_1979__pf_MAX.OverrideName", "Arcade_1979::Arcade_1979_MAX" },
				{ "EnumDisplayNameFn", "E__Arcade_1979__pf__GetUserFriendlyName" },
				{ "ModuleRelativePath", "Public/Arcade_1979__pf179872773.h" },
				{ "OverrideNativeName", "Arcade_1979" },
				{ "ReplaceConverted", "/Game/Modes/Options/Arcade_1979.Arcade_1979" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())[](){ return (UObject*)FindOrConstructDynamicTypePackage(TEXT("/Game/Modes/Options/Arcade_1979")); },
				UE4CodeGen_Private::EDynamicType::Dynamic,
				"Arcade_1979",
				RF_Public|RF_Transient,
				E__Arcade_1979__pf__GetUserFriendlyName,
				(uint8)UEnum::ECppForm::EnumClass,
				"E__Arcade_1979__pf",
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
