// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Private/NativizedAssets.h"
#include "Public/Camera__pf179872773.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCamera__pf179872773() {}
// Cross Module References
	NATIVIZEDASSETS_API UEnum* Z_Construct_UEnum_NativizedAssets_E__Camera__pf();
// End Cross Module References
	static UEnum* E__Camera__pf_StaticEnum()
	{
		class UPackage* EnumPackage = FindOrConstructDynamicTypePackage(TEXT("/Game/Modes/Options/Camera"));
		class UEnum* Singleton = Cast<UEnum>(StaticFindObjectFast(UEnum::StaticClass(), EnumPackage, TEXT("Camera")));
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_NativizedAssets_E__Camera__pf, EnumPackage, TEXT("Camera"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_E__Camera__pf(E__Camera__pf_StaticEnum, TEXT("/Game/Modes/Options/Camera"), TEXT("Camera"), true, TEXT("/Game/Modes/Options/Camera"), TEXT("/Game/Modes/Options/Camera.Camera"));
	uint32 Get_Z_Construct_UEnum_NativizedAssets_E__Camera__pf_CRC() { return 3657469276U; }
	UEnum* Z_Construct_UEnum_NativizedAssets_E__Camera__pf()
	{
		UPackage* Outer = FindOrConstructDynamicTypePackage(TEXT("/Game/Modes/Options/Camera"));		UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("Camera"), 0, Get_Z_Construct_UEnum_NativizedAssets_E__Camera__pf_CRC(), true);
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "Camera::Camera_MAX", (int64)E__Camera__pf::E__Camera__pf_MAX },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "E__Camera__pf_MAX.OverrideName", "Camera::Camera_MAX" },
				{ "EnumDisplayNameFn", "E__Camera__pf__GetUserFriendlyName" },
				{ "ModuleRelativePath", "Public/Camera__pf179872773.h" },
				{ "OverrideNativeName", "Camera" },
				{ "ReplaceConverted", "/Game/Modes/Options/Camera.Camera" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())[](){ return (UObject*)FindOrConstructDynamicTypePackage(TEXT("/Game/Modes/Options/Camera")); },
				UE4CodeGen_Private::EDynamicType::Dynamic,
				"Camera",
				RF_Public|RF_Transient,
				E__Camera__pf__GetUserFriendlyName,
				(uint8)UEnum::ECppForm::EnumClass,
				"E__Camera__pf",
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
