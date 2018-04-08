// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Private/NativizedAssets.h"
#include "Public/Audio__pf179872773.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAudio__pf179872773() {}
// Cross Module References
	NATIVIZEDASSETS_API UEnum* Z_Construct_UEnum_NativizedAssets_E__Audio__pf();
// End Cross Module References
	static UEnum* E__Audio__pf_StaticEnum()
	{
		class UPackage* EnumPackage = FindOrConstructDynamicTypePackage(TEXT("/Game/Modes/Options/Audio"));
		class UEnum* Singleton = Cast<UEnum>(StaticFindObjectFast(UEnum::StaticClass(), EnumPackage, TEXT("Audio")));
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_NativizedAssets_E__Audio__pf, EnumPackage, TEXT("Audio"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_E__Audio__pf(E__Audio__pf_StaticEnum, TEXT("/Game/Modes/Options/Audio"), TEXT("Audio"), true, TEXT("/Game/Modes/Options/Audio"), TEXT("/Game/Modes/Options/Audio.Audio"));
	uint32 Get_Z_Construct_UEnum_NativizedAssets_E__Audio__pf_CRC() { return 1148819532U; }
	UEnum* Z_Construct_UEnum_NativizedAssets_E__Audio__pf()
	{
		UPackage* Outer = FindOrConstructDynamicTypePackage(TEXT("/Game/Modes/Options/Audio"));		UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("Audio"), 0, Get_Z_Construct_UEnum_NativizedAssets_E__Audio__pf_CRC(), true);
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "Audio::Audio_MAX", (int64)E__Audio__pf::E__Audio__pf_MAX },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "E__Audio__pf_MAX.OverrideName", "Audio::Audio_MAX" },
				{ "EnumDisplayNameFn", "E__Audio__pf__GetUserFriendlyName" },
				{ "ModuleRelativePath", "Public/Audio__pf179872773.h" },
				{ "OverrideNativeName", "Audio" },
				{ "ReplaceConverted", "/Game/Modes/Options/Audio.Audio" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())[](){ return (UObject*)FindOrConstructDynamicTypePackage(TEXT("/Game/Modes/Options/Audio")); },
				UE4CodeGen_Private::EDynamicType::Dynamic,
				"Audio",
				RF_Public|RF_Transient,
				E__Audio__pf__GetUserFriendlyName,
				(uint8)UEnum::ECppForm::EnumClass,
				"E__Audio__pf",
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
