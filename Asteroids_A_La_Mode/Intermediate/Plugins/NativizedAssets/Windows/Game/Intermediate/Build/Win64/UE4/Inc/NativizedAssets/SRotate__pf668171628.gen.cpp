// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Private/NativizedAssets.h"
#include "Public/SRotate__pf668171628.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSRotate__pf668171628() {}
// Cross Module References
	NATIVIZEDASSETS_API UEnum* Z_Construct_UEnum_NativizedAssets_E__SRotate__pf();
// End Cross Module References
	static UEnum* E__SRotate__pf_StaticEnum()
	{
		class UPackage* EnumPackage = FindOrConstructDynamicTypePackage(TEXT("/Game/Pawns/Ship/SRotate"));
		class UEnum* Singleton = Cast<UEnum>(StaticFindObjectFast(UEnum::StaticClass(), EnumPackage, TEXT("SRotate")));
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_NativizedAssets_E__SRotate__pf, EnumPackage, TEXT("SRotate"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_E__SRotate__pf(E__SRotate__pf_StaticEnum, TEXT("/Game/Pawns/Ship/SRotate"), TEXT("SRotate"), true, TEXT("/Game/Pawns/Ship/SRotate"), TEXT("/Game/Pawns/Ship/SRotate.SRotate"));
	uint32 Get_Z_Construct_UEnum_NativizedAssets_E__SRotate__pf_CRC() { return 1463459088U; }
	UEnum* Z_Construct_UEnum_NativizedAssets_E__SRotate__pf()
	{
		UPackage* Outer = FindOrConstructDynamicTypePackage(TEXT("/Game/Pawns/Ship/SRotate"));		UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("SRotate"), 0, Get_Z_Construct_UEnum_NativizedAssets_E__SRotate__pf_CRC(), true);
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "SRotate::NewEnumerator0", (int64)E__SRotate__pf::NewEnumerator0 },
				{ "SRotate::NewEnumerator1", (int64)E__SRotate__pf::NewEnumerator1 },
				{ "SRotate::NewEnumerator2", (int64)E__SRotate__pf::NewEnumerator2 },
				{ "SRotate::SRotate_MAX", (int64)E__SRotate__pf::E__SRotate__pf_MAX },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "E__SRotate__pf_MAX.OverrideName", "SRotate::SRotate_MAX" },
				{ "EnumDisplayNameFn", "E__SRotate__pf__GetUserFriendlyName" },
				{ "ModuleRelativePath", "Public/SRotate__pf668171628.h" },
				{ "NewEnumerator0.OverrideName", "SRotate::NewEnumerator0" },
				{ "NewEnumerator1.OverrideName", "SRotate::NewEnumerator1" },
				{ "NewEnumerator2.OverrideName", "SRotate::NewEnumerator2" },
				{ "OverrideNativeName", "SRotate" },
				{ "ReplaceConverted", "/Game/Pawns/Ship/SRotate.SRotate" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())[](){ return (UObject*)FindOrConstructDynamicTypePackage(TEXT("/Game/Pawns/Ship/SRotate")); },
				UE4CodeGen_Private::EDynamicType::Dynamic,
				"SRotate",
				RF_Public|RF_Transient,
				E__SRotate__pf__GetUserFriendlyName,
				(uint8)UEnum::ECppForm::EnumClass,
				"E__SRotate__pf",
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
