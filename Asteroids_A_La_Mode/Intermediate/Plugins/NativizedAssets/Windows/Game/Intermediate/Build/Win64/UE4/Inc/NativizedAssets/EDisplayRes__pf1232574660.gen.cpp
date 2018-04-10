// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Private/NativizedAssets.h"
#include "Public/EDisplayRes__pf1232574660.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEDisplayRes__pf1232574660() {}
// Cross Module References
	NATIVIZEDASSETS_API UEnum* Z_Construct_UEnum_NativizedAssets_E__EDisplayRes__pf();
// End Cross Module References
	static UEnum* E__EDisplayRes__pf_StaticEnum()
	{
		class UPackage* EnumPackage = FindOrConstructDynamicTypePackage(TEXT("/Game/UserInterface/MainScreen/EDisplayRes"));
		class UEnum* Singleton = Cast<UEnum>(StaticFindObjectFast(UEnum::StaticClass(), EnumPackage, TEXT("EDisplayRes")));
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_NativizedAssets_E__EDisplayRes__pf, EnumPackage, TEXT("EDisplayRes"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_E__EDisplayRes__pf(E__EDisplayRes__pf_StaticEnum, TEXT("/Game/UserInterface/MainScreen/EDisplayRes"), TEXT("EDisplayRes"), true, TEXT("/Game/UserInterface/MainScreen/EDisplayRes"), TEXT("/Game/UserInterface/MainScreen/EDisplayRes.EDisplayRes"));
	uint32 Get_Z_Construct_UEnum_NativizedAssets_E__EDisplayRes__pf_CRC() { return 1984368118U; }
	UEnum* Z_Construct_UEnum_NativizedAssets_E__EDisplayRes__pf()
	{
		UPackage* Outer = FindOrConstructDynamicTypePackage(TEXT("/Game/UserInterface/MainScreen/EDisplayRes"));		UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EDisplayRes"), 0, Get_Z_Construct_UEnum_NativizedAssets_E__EDisplayRes__pf_CRC(), true);
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EDisplayRes::NewEnumerator0", (int64)E__EDisplayRes__pf::NewEnumerator0 },
				{ "EDisplayRes::NewEnumerator1", (int64)E__EDisplayRes__pf::NewEnumerator1 },
				{ "EDisplayRes::NewEnumerator2", (int64)E__EDisplayRes__pf::NewEnumerator2 },
				{ "EDisplayRes::NewEnumerator3", (int64)E__EDisplayRes__pf::NewEnumerator3 },
				{ "EDisplayRes::EDisplayRes_MAX", (int64)E__EDisplayRes__pf::E__EDisplayRes__pf_MAX },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "E__EDisplayRes__pf_MAX.OverrideName", "EDisplayRes::EDisplayRes_MAX" },
				{ "EnumDisplayNameFn", "E__EDisplayRes__pf__GetUserFriendlyName" },
				{ "ModuleRelativePath", "Public/EDisplayRes__pf1232574660.h" },
				{ "NewEnumerator0.OverrideName", "EDisplayRes::NewEnumerator0" },
				{ "NewEnumerator1.OverrideName", "EDisplayRes::NewEnumerator1" },
				{ "NewEnumerator2.OverrideName", "EDisplayRes::NewEnumerator2" },
				{ "NewEnumerator3.OverrideName", "EDisplayRes::NewEnumerator3" },
				{ "OverrideNativeName", "EDisplayRes" },
				{ "ReplaceConverted", "/Game/UserInterface/MainScreen/EDisplayRes.EDisplayRes" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())[](){ return (UObject*)FindOrConstructDynamicTypePackage(TEXT("/Game/UserInterface/MainScreen/EDisplayRes")); },
				UE4CodeGen_Private::EDynamicType::Dynamic,
				"EDisplayRes",
				RF_Public|RF_Transient,
				E__EDisplayRes__pf__GetUserFriendlyName,
				(uint8)UEnum::ECppForm::EnumClass,
				"E__EDisplayRes__pf",
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
