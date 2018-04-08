// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Private/NativizedAssets.h"
#include "Public/1979Rounds__pf2955639682.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCode1979Rounds__pf2955639682() {}
// Cross Module References
	NATIVIZEDASSETS_API UEnum* Z_Construct_UEnum_NativizedAssets_E__1979Rounds__pf();
// End Cross Module References
	static UEnum* E__1979Rounds__pf_StaticEnum()
	{
		class UPackage* EnumPackage = FindOrConstructDynamicTypePackage(TEXT("/Game/Modes/Arcade1979/1979Rounds"));
		class UEnum* Singleton = Cast<UEnum>(StaticFindObjectFast(UEnum::StaticClass(), EnumPackage, TEXT("1979Rounds")));
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_NativizedAssets_E__1979Rounds__pf, EnumPackage, TEXT("1979Rounds"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_E__1979Rounds__pf(E__1979Rounds__pf_StaticEnum, TEXT("/Game/Modes/Arcade1979/1979Rounds"), TEXT("1979Rounds"), true, TEXT("/Game/Modes/Arcade1979/1979Rounds"), TEXT("/Game/Modes/Arcade1979/1979Rounds.1979Rounds"));
	uint32 Get_Z_Construct_UEnum_NativizedAssets_E__1979Rounds__pf_CRC() { return 906823165U; }
	UEnum* Z_Construct_UEnum_NativizedAssets_E__1979Rounds__pf()
	{
		UPackage* Outer = FindOrConstructDynamicTypePackage(TEXT("/Game/Modes/Arcade1979/1979Rounds"));		UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("1979Rounds"), 0, Get_Z_Construct_UEnum_NativizedAssets_E__1979Rounds__pf_CRC(), true);
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "1979Rounds::NewEnumerator0", (int64)E__1979Rounds__pf::NewEnumerator0 },
				{ "1979Rounds::NewEnumerator1", (int64)E__1979Rounds__pf::NewEnumerator1 },
				{ "1979Rounds::NewEnumerator2", (int64)E__1979Rounds__pf::NewEnumerator2 },
				{ "1979Rounds::NewEnumerator3", (int64)E__1979Rounds__pf::NewEnumerator3 },
				{ "1979Rounds::NewEnumerator4", (int64)E__1979Rounds__pf::NewEnumerator4 },
				{ "1979Rounds::1979Rounds_MAX", (int64)E__1979Rounds__pf::E__1979Rounds__pf_MAX },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "E__1979Rounds__pf_MAX.OverrideName", "1979Rounds::1979Rounds_MAX" },
				{ "EnumDisplayNameFn", "E__1979Rounds__pf__GetUserFriendlyName" },
				{ "ModuleRelativePath", "Public/1979Rounds__pf2955639682.h" },
				{ "NewEnumerator0.OverrideName", "1979Rounds::NewEnumerator0" },
				{ "NewEnumerator1.OverrideName", "1979Rounds::NewEnumerator1" },
				{ "NewEnumerator2.OverrideName", "1979Rounds::NewEnumerator2" },
				{ "NewEnumerator3.OverrideName", "1979Rounds::NewEnumerator3" },
				{ "NewEnumerator4.OverrideName", "1979Rounds::NewEnumerator4" },
				{ "OverrideNativeName", "1979Rounds" },
				{ "ReplaceConverted", "/Game/Modes/Arcade1979/1979Rounds.1979Rounds" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())[](){ return (UObject*)FindOrConstructDynamicTypePackage(TEXT("/Game/Modes/Arcade1979/1979Rounds")); },
				UE4CodeGen_Private::EDynamicType::Dynamic,
				"1979Rounds",
				RF_Public|RF_Transient,
				E__1979Rounds__pf__GetUserFriendlyName,
				(uint8)UEnum::ECppForm::EnumClass,
				"E__1979Rounds__pf",
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
