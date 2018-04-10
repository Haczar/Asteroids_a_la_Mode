// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Private/NativizedAssets.h"
#include "Public/Graphics__pf179872773.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGraphics__pf179872773() {}
// Cross Module References
	NATIVIZEDASSETS_API UEnum* Z_Construct_UEnum_NativizedAssets_E__Graphics__pf();
// End Cross Module References
	static UEnum* E__Graphics__pf_StaticEnum()
	{
		class UPackage* EnumPackage = FindOrConstructDynamicTypePackage(TEXT("/Game/Modes/Options/Graphics"));
		class UEnum* Singleton = Cast<UEnum>(StaticFindObjectFast(UEnum::StaticClass(), EnumPackage, TEXT("Graphics")));
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_NativizedAssets_E__Graphics__pf, EnumPackage, TEXT("Graphics"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_E__Graphics__pf(E__Graphics__pf_StaticEnum, TEXT("/Game/Modes/Options/Graphics"), TEXT("Graphics"), true, TEXT("/Game/Modes/Options/Graphics"), TEXT("/Game/Modes/Options/Graphics.Graphics"));
	uint32 Get_Z_Construct_UEnum_NativizedAssets_E__Graphics__pf_CRC() { return 1103352470U; }
	UEnum* Z_Construct_UEnum_NativizedAssets_E__Graphics__pf()
	{
		UPackage* Outer = FindOrConstructDynamicTypePackage(TEXT("/Game/Modes/Options/Graphics"));		UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("Graphics"), 0, Get_Z_Construct_UEnum_NativizedAssets_E__Graphics__pf_CRC(), true);
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "Graphics::NewEnumerator0", (int64)E__Graphics__pf::NewEnumerator0 },
				{ "Graphics::NewEnumerator1", (int64)E__Graphics__pf::NewEnumerator1 },
				{ "Graphics::NewEnumerator2", (int64)E__Graphics__pf::NewEnumerator2 },
				{ "Graphics::NewEnumerator4", (int64)E__Graphics__pf::NewEnumerator4 },
				{ "Graphics::NewEnumerator3", (int64)E__Graphics__pf::NewEnumerator3 },
				{ "Graphics::NewEnumerator5", (int64)E__Graphics__pf::NewEnumerator5 },
				{ "Graphics::NewEnumerator6", (int64)E__Graphics__pf::NewEnumerator6 },
				{ "Graphics::NewEnumerator9", (int64)E__Graphics__pf::NewEnumerator9 },
				{ "Graphics::NewEnumerator10", (int64)E__Graphics__pf::NewEnumerator10 },
				{ "Graphics::NewEnumerator7", (int64)E__Graphics__pf::NewEnumerator7 },
				{ "Graphics::NewEnumerator8", (int64)E__Graphics__pf::NewEnumerator8 },
				{ "Graphics::Graphics_MAX", (int64)E__Graphics__pf::E__Graphics__pf_MAX },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "E__Graphics__pf_MAX.OverrideName", "Graphics::Graphics_MAX" },
				{ "EnumDisplayNameFn", "E__Graphics__pf__GetUserFriendlyName" },
				{ "ModuleRelativePath", "Public/Graphics__pf179872773.h" },
				{ "NewEnumerator0.OverrideName", "Graphics::NewEnumerator0" },
				{ "NewEnumerator1.OverrideName", "Graphics::NewEnumerator1" },
				{ "NewEnumerator10.OverrideName", "Graphics::NewEnumerator10" },
				{ "NewEnumerator2.OverrideName", "Graphics::NewEnumerator2" },
				{ "NewEnumerator3.OverrideName", "Graphics::NewEnumerator3" },
				{ "NewEnumerator4.OverrideName", "Graphics::NewEnumerator4" },
				{ "NewEnumerator5.OverrideName", "Graphics::NewEnumerator5" },
				{ "NewEnumerator6.OverrideName", "Graphics::NewEnumerator6" },
				{ "NewEnumerator7.OverrideName", "Graphics::NewEnumerator7" },
				{ "NewEnumerator8.OverrideName", "Graphics::NewEnumerator8" },
				{ "NewEnumerator9.OverrideName", "Graphics::NewEnumerator9" },
				{ "OverrideNativeName", "Graphics" },
				{ "ReplaceConverted", "/Game/Modes/Options/Graphics.Graphics" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())[](){ return (UObject*)FindOrConstructDynamicTypePackage(TEXT("/Game/Modes/Options/Graphics")); },
				UE4CodeGen_Private::EDynamicType::Dynamic,
				"Graphics",
				RF_Public|RF_Transient,
				E__Graphics__pf__GetUserFriendlyName,
				(uint8)UEnum::ECppForm::EnumClass,
				"E__Graphics__pf",
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
