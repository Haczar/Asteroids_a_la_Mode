// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Private/NativizedAssets.h"
#include "Public/Debug_SingleInstance__pf867325549.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDebug_SingleInstance__pf867325549() {}
// Cross Module References
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_UDebug_SingleInstance_C__pf867325549_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_UDebug_SingleInstance_C__pf867325549();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
// End Cross Module References
	void UDebug_SingleInstance_C__pf867325549::StaticRegisterNativesUDebug_SingleInstance_C__pf867325549()
	{
	}
	UClass* Z_Construct_UClass_UDebug_SingleInstance_C__pf867325549_NoRegister()
	{
		return UDebug_SingleInstance_C__pf867325549::StaticClass();
	}
	UClass* Z_Construct_UClass_UDebug_SingleInstance_C__pf867325549()
	{
		UPackage* OuterPackage = FindOrConstructDynamicTypePackage(TEXT("/Game/UserInterface/Test/Debug_SingleInstance"));
		UClass* OuterClass = Cast<UClass>(StaticFindObjectFast(UClass::StaticClass(), OuterPackage, TEXT("Debug_SingleInstance_C")));
		if (!OuterClass || !(OuterClass->ClassFlags & CLASS_Constructed))
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UUserWidget,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "IncludePath", "Debug_SingleInstance__pf867325549.h" },
				{ "IsBlueprintBase", "true" },
				{ "ModuleRelativePath", "Public/Debug_SingleInstance__pf867325549.h" },
				{ "ObjectInitializerConstructorDeclared", "" },
				{ "OverrideNativeName", "Debug_SingleInstance_C" },
				{ "ReplaceConverted", "/Game/UserInterface/Test/Debug_SingleInstance.Debug_SingleInstance_C" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UDebug_SingleInstance_C__pf867325549>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UDebug_SingleInstance_C__pf867325549::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00A01080u,
				nullptr, 0,
				nullptr, 0,
				"Engine",
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_DYNAMIC_CLASS(UDebug_SingleInstance_C__pf867325549, TEXT("Debug_SingleInstance_C"), 3597461028);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDebug_SingleInstance_C__pf867325549(Z_Construct_UClass_UDebug_SingleInstance_C__pf867325549, &UDebug_SingleInstance_C__pf867325549::StaticClass, TEXT("/Game/UserInterface/Test/Debug_SingleInstance"), TEXT("Debug_SingleInstance_C"), true, TEXT("/Game/UserInterface/Test/Debug_SingleInstance"), TEXT("/Game/UserInterface/Test/Debug_SingleInstance.Debug_SingleInstance_C"), nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDebug_SingleInstance_C__pf867325549);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
