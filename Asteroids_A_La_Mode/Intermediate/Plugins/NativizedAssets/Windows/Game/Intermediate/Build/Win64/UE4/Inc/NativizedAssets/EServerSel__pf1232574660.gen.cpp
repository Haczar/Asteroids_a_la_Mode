// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Private/NativizedAssets.h"
#include "Public/EServerSel__pf1232574660.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEServerSel__pf1232574660() {}
// Cross Module References
	NATIVIZEDASSETS_API UEnum* Z_Construct_UEnum_NativizedAssets_E__EServerSel__pf();
// End Cross Module References
	static UEnum* E__EServerSel__pf_StaticEnum()
	{
		class UPackage* EnumPackage = FindOrConstructDynamicTypePackage(TEXT("/Game/UserInterface/MainScreen/EServerSel"));
		class UEnum* Singleton = Cast<UEnum>(StaticFindObjectFast(UEnum::StaticClass(), EnumPackage, TEXT("EServerSel")));
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_NativizedAssets_E__EServerSel__pf, EnumPackage, TEXT("EServerSel"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_E__EServerSel__pf(E__EServerSel__pf_StaticEnum, TEXT("/Game/UserInterface/MainScreen/EServerSel"), TEXT("EServerSel"), true, TEXT("/Game/UserInterface/MainScreen/EServerSel"), TEXT("/Game/UserInterface/MainScreen/EServerSel.EServerSel"));
	uint32 Get_Z_Construct_UEnum_NativizedAssets_E__EServerSel__pf_CRC() { return 1183717508U; }
	UEnum* Z_Construct_UEnum_NativizedAssets_E__EServerSel__pf()
	{
		UPackage* Outer = FindOrConstructDynamicTypePackage(TEXT("/Game/UserInterface/MainScreen/EServerSel"));		UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EServerSel"), 0, Get_Z_Construct_UEnum_NativizedAssets_E__EServerSel__pf_CRC(), true);
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EServerSel::NewEnumerator0", (int64)E__EServerSel__pf::NewEnumerator0 },
				{ "EServerSel::NewEnumerator1", (int64)E__EServerSel__pf::NewEnumerator1 },
				{ "EServerSel::NewEnumerator2", (int64)E__EServerSel__pf::NewEnumerator2 },
				{ "EServerSel::EServerSel_MAX", (int64)E__EServerSel__pf::E__EServerSel__pf_MAX },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "E__EServerSel__pf_MAX.OverrideName", "EServerSel::EServerSel_MAX" },
				{ "EnumDisplayNameFn", "E__EServerSel__pf__GetUserFriendlyName" },
				{ "ModuleRelativePath", "Public/EServerSel__pf1232574660.h" },
				{ "NewEnumerator0.OverrideName", "EServerSel::NewEnumerator0" },
				{ "NewEnumerator1.OverrideName", "EServerSel::NewEnumerator1" },
				{ "NewEnumerator2.OverrideName", "EServerSel::NewEnumerator2" },
				{ "OverrideNativeName", "EServerSel" },
				{ "ReplaceConverted", "/Game/UserInterface/MainScreen/EServerSel.EServerSel" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())[](){ return (UObject*)FindOrConstructDynamicTypePackage(TEXT("/Game/UserInterface/MainScreen/EServerSel")); },
				UE4CodeGen_Private::EDynamicType::Dynamic,
				"EServerSel",
				RF_Public|RF_Transient,
				E__EServerSel__pf__GetUserFriendlyName,
				(uint8)UEnum::ECppForm::EnumClass,
				"E__EServerSel__pf",
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
