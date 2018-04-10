// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Private/NativizedAssets.h"
#include "Public/LoadingWidget__pf3166771619.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLoadingWidget__pf3166771619() {}
// Cross Module References
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_ULoadingWidget_C__pf3166771619_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_ULoadingWidget_C__pf3166771619();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UMG_API UClass* Z_Construct_UClass_UThrobber_NoRegister();
// End Cross Module References
	void ULoadingWidget_C__pf3166771619::StaticRegisterNativesULoadingWidget_C__pf3166771619()
	{
	}
	UClass* Z_Construct_UClass_ULoadingWidget_C__pf3166771619_NoRegister()
	{
		return ULoadingWidget_C__pf3166771619::StaticClass();
	}
	UClass* Z_Construct_UClass_ULoadingWidget_C__pf3166771619()
	{
		UPackage* OuterPackage = FindOrConstructDynamicTypePackage(TEXT("/Game/UserInterface/LoadingWidget"));
		UClass* OuterClass = Cast<UClass>(StaticFindObjectFast(UClass::StaticClass(), OuterPackage, TEXT("LoadingWidget_C")));
		if (!OuterClass || !(OuterClass->ClassFlags & CLASS_Constructed))
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UUserWidget,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "IncludePath", "LoadingWidget__pf3166771619.h" },
				{ "IsBlueprintBase", "true" },
				{ "ModuleRelativePath", "Public/LoadingWidget__pf3166771619.h" },
				{ "ObjectInitializerConstructorDeclared", "" },
				{ "OverrideNativeName", "LoadingWidget_C" },
				{ "ReplaceConverted", "/Game/UserInterface/LoadingWidget.LoadingWidget_C" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Throbber_155__pf_MetaData[] = {
				{ "Category", "LoadingWidget" },
				{ "DisplayName", "Throbber_155" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/LoadingWidget__pf3166771619.h" },
				{ "OverrideNativeName", "Throbber_155" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__Throbber_155__pf = { UE4CodeGen_Private::EPropertyClass::Object, "Throbber_155", RF_Public|RF_Transient, 0x001000000008000c, 1, nullptr, STRUCT_OFFSET(ULoadingWidget_C__pf3166771619, bpv__Throbber_155__pf), Z_Construct_UClass_UThrobber_NoRegister, METADATA_PARAMS(NewProp_bpv__Throbber_155__pf_MetaData, ARRAY_COUNT(NewProp_bpv__Throbber_155__pf_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bpv__Throbber_155__pf,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<ULoadingWidget_C__pf3166771619>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&ULoadingWidget_C__pf3166771619::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00A01080u,
				nullptr, 0,
				PropPointers, ARRAY_COUNT(PropPointers),
				"Engine",
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_DYNAMIC_CLASS(ULoadingWidget_C__pf3166771619, TEXT("LoadingWidget_C"), 3496003373);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULoadingWidget_C__pf3166771619(Z_Construct_UClass_ULoadingWidget_C__pf3166771619, &ULoadingWidget_C__pf3166771619::StaticClass, TEXT("/Game/UserInterface/LoadingWidget"), TEXT("LoadingWidget_C"), true, TEXT("/Game/UserInterface/LoadingWidget"), TEXT("/Game/UserInterface/LoadingWidget.LoadingWidget_C"), nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULoadingWidget_C__pf3166771619);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
