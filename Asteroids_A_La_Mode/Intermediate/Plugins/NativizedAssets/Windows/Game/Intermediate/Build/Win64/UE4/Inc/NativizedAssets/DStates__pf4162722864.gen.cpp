// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Private/NativizedAssets.h"
#include "Public/DStates__pf4162722864.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDStates__pf4162722864() {}
// Cross Module References
	NATIVIZEDASSETS_API UEnum* Z_Construct_UEnum_NativizedAssets_E__DStates__pf();
// End Cross Module References
	static UEnum* E__DStates__pf_StaticEnum()
	{
		class UPackage* EnumPackage = FindOrConstructDynamicTypePackage(TEXT("/Game/Modes/Debug/DStates"));
		class UEnum* Singleton = Cast<UEnum>(StaticFindObjectFast(UEnum::StaticClass(), EnumPackage, TEXT("DStates")));
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_NativizedAssets_E__DStates__pf, EnumPackage, TEXT("DStates"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_E__DStates__pf(E__DStates__pf_StaticEnum, TEXT("/Game/Modes/Debug/DStates"), TEXT("DStates"), true, TEXT("/Game/Modes/Debug/DStates"), TEXT("/Game/Modes/Debug/DStates.DStates"));
	uint32 Get_Z_Construct_UEnum_NativizedAssets_E__DStates__pf_CRC() { return 1264953763U; }
	UEnum* Z_Construct_UEnum_NativizedAssets_E__DStates__pf()
	{
		UPackage* Outer = FindOrConstructDynamicTypePackage(TEXT("/Game/Modes/Debug/DStates"));		UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("DStates"), 0, Get_Z_Construct_UEnum_NativizedAssets_E__DStates__pf_CRC(), true);
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "DStates::NewEnumerator0", (int64)E__DStates__pf::NewEnumerator0 },
				{ "DStates::NewEnumerator1", (int64)E__DStates__pf::NewEnumerator1 },
				{ "DStates::NewEnumerator2", (int64)E__DStates__pf::NewEnumerator2 },
				{ "DStates::NewEnumerator3", (int64)E__DStates__pf::NewEnumerator3 },
				{ "DStates::NewEnumerator5", (int64)E__DStates__pf::NewEnumerator5 },
				{ "DStates::NewEnumerator4", (int64)E__DStates__pf::NewEnumerator4 },
				{ "DStates::NewEnumerator6", (int64)E__DStates__pf::NewEnumerator6 },
				{ "DStates::NewEnumerator7", (int64)E__DStates__pf::NewEnumerator7 },
				{ "DStates::DStates_MAX", (int64)E__DStates__pf::E__DStates__pf_MAX },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "E__DStates__pf_MAX.OverrideName", "DStates::DStates_MAX" },
				{ "EnumDisplayNameFn", "E__DStates__pf__GetUserFriendlyName" },
				{ "ModuleRelativePath", "Public/DStates__pf4162722864.h" },
				{ "NewEnumerator0.OverrideName", "DStates::NewEnumerator0" },
				{ "NewEnumerator1.OverrideName", "DStates::NewEnumerator1" },
				{ "NewEnumerator2.OverrideName", "DStates::NewEnumerator2" },
				{ "NewEnumerator3.OverrideName", "DStates::NewEnumerator3" },
				{ "NewEnumerator4.OverrideName", "DStates::NewEnumerator4" },
				{ "NewEnumerator5.OverrideName", "DStates::NewEnumerator5" },
				{ "NewEnumerator6.OverrideName", "DStates::NewEnumerator6" },
				{ "NewEnumerator7.OverrideName", "DStates::NewEnumerator7" },
				{ "OverrideNativeName", "DStates" },
				{ "ReplaceConverted", "/Game/Modes/Debug/DStates.DStates" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())[](){ return (UObject*)FindOrConstructDynamicTypePackage(TEXT("/Game/Modes/Debug/DStates")); },
				UE4CodeGen_Private::EDynamicType::Dynamic,
				"DStates",
				RF_Public|RF_Transient,
				E__DStates__pf__GetUserFriendlyName,
				(uint8)UEnum::ECppForm::EnumClass,
				"E__DStates__pf",
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
