// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Private/NativizedAssets.h"
#include "Public/BorderSide__pf2174024837.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBorderSide__pf2174024837() {}
// Cross Module References
	NATIVIZEDASSETS_API UEnum* Z_Construct_UEnum_NativizedAssets_E__BorderSide__pf();
// End Cross Module References
	static UEnum* E__BorderSide__pf_StaticEnum()
	{
		class UPackage* EnumPackage = FindOrConstructDynamicTypePackage(TEXT("/Game/Levels/Assets/Colliders/BorderSide"));
		class UEnum* Singleton = Cast<UEnum>(StaticFindObjectFast(UEnum::StaticClass(), EnumPackage, TEXT("BorderSide")));
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_NativizedAssets_E__BorderSide__pf, EnumPackage, TEXT("BorderSide"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_E__BorderSide__pf(E__BorderSide__pf_StaticEnum, TEXT("/Game/Levels/Assets/Colliders/BorderSide"), TEXT("BorderSide"), true, TEXT("/Game/Levels/Assets/Colliders/BorderSide"), TEXT("/Game/Levels/Assets/Colliders/BorderSide.BorderSide"));
	uint32 Get_Z_Construct_UEnum_NativizedAssets_E__BorderSide__pf_CRC() { return 4003135066U; }
	UEnum* Z_Construct_UEnum_NativizedAssets_E__BorderSide__pf()
	{
		UPackage* Outer = FindOrConstructDynamicTypePackage(TEXT("/Game/Levels/Assets/Colliders/BorderSide"));		UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("BorderSide"), 0, Get_Z_Construct_UEnum_NativizedAssets_E__BorderSide__pf_CRC(), true);
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "BorderSide::NewEnumerator0", (int64)E__BorderSide__pf::NewEnumerator0 },
				{ "BorderSide::NewEnumerator1", (int64)E__BorderSide__pf::NewEnumerator1 },
				{ "BorderSide::NewEnumerator2", (int64)E__BorderSide__pf::NewEnumerator2 },
				{ "BorderSide::NewEnumerator3", (int64)E__BorderSide__pf::NewEnumerator3 },
				{ "BorderSide::BorderSide_MAX", (int64)E__BorderSide__pf::E__BorderSide__pf_MAX },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "E__BorderSide__pf_MAX.OverrideName", "BorderSide::BorderSide_MAX" },
				{ "EnumDisplayNameFn", "E__BorderSide__pf__GetUserFriendlyName" },
				{ "ModuleRelativePath", "Public/BorderSide__pf2174024837.h" },
				{ "NewEnumerator0.OverrideName", "BorderSide::NewEnumerator0" },
				{ "NewEnumerator1.OverrideName", "BorderSide::NewEnumerator1" },
				{ "NewEnumerator2.OverrideName", "BorderSide::NewEnumerator2" },
				{ "NewEnumerator3.OverrideName", "BorderSide::NewEnumerator3" },
				{ "OverrideNativeName", "BorderSide" },
				{ "ReplaceConverted", "/Game/Levels/Assets/Colliders/BorderSide.BorderSide" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())[](){ return (UObject*)FindOrConstructDynamicTypePackage(TEXT("/Game/Levels/Assets/Colliders/BorderSide")); },
				UE4CodeGen_Private::EDynamicType::Dynamic,
				"BorderSide",
				RF_Public|RF_Transient,
				E__BorderSide__pf__GetUserFriendlyName,
				(uint8)UEnum::ECppForm::EnumClass,
				"E__BorderSide__pf",
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
