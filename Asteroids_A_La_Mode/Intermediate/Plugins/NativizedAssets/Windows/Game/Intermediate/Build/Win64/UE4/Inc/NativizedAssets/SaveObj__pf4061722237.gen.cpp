// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Private/NativizedAssets.h"
#include "Public/SaveObj__pf4061722237.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSaveObj__pf4061722237() {}
// Cross Module References
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_USaveObj_C__pf4061722237_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_USaveObj_C__pf4061722237();
	ENGINE_API UClass* Z_Construct_UClass_USaveGame();
	NATIVIZEDASSETS_API UFunction* Z_Construct_UFunction_USaveObj_C__pf4061722237_bpf__GetxInfoxonxEnvxfromxUnreal__pfTTTTT();
	NATIVIZEDASSETS_API UFunction* Z_Construct_UFunction_USaveObj_C__pf4061722237_bpf__SetxWindowxMode__pfTT();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EWindowMode();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint();
// End Cross Module References
	void USaveObj_C__pf4061722237::StaticRegisterNativesUSaveObj_C__pf4061722237()
	{
		UClass* Class = USaveObj_C__pf4061722237::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Get Info on Env from Unreal", &USaveObj_C__pf4061722237::execbpf__GetxInfoxonxEnvxfromxUnreal__pfTTTTT },
			{ "Set Window Mode", &USaveObj_C__pf4061722237::execbpf__SetxWindowxMode__pfTT },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_USaveObj_C__pf4061722237_bpf__GetxInfoxonxEnvxfromxUnreal__pfTTTTT()
	{
		UObject* Outer = Z_Construct_UClass_USaveObj_C__pf4061722237();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("Get Info on Env from Unreal") ));
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "" },
				{ "ModuleRelativePath", "Public/SaveObj__pf4061722237.h" },
				{ "OverrideNativeName", "Get Info on Env from Unreal" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveObj_C__pf4061722237, "Get Info on Env from Unreal", RF_Public|RF_Transient, nullptr, (EFunctionFlags)0x04020400, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_USaveObj_C__pf4061722237_bpf__SetxWindowxMode__pfTT()
	{
		struct SaveObj_C__pf4061722237_eventbpf__SetxWindowxMode__pfTT_Parms
		{
			TEnumAsByte<EWindowMode::Type> bpp__DesiredxMode__pfT;
		};
		UObject* Outer = Z_Construct_UClass_USaveObj_C__pf4061722237();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("Set Window Mode") ));
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_bpp__DesiredxMode__pfT = { UE4CodeGen_Private::EPropertyClass::Byte, "bpp__DesiredxMode__pfT", RF_Public|RF_Transient, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SaveObj_C__pf4061722237_eventbpf__SetxWindowxMode__pfTT_Parms, bpp__DesiredxMode__pfT), Z_Construct_UEnum_Engine_EWindowMode, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bpp__DesiredxMode__pfT,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "" },
				{ "ModuleRelativePath", "Public/SaveObj__pf4061722237.h" },
				{ "OverrideNativeName", "Set Window Mode" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveObj_C__pf4061722237, "Set Window Mode", RF_Public|RF_Transient, nullptr, (EFunctionFlags)0x04020400, sizeof(SaveObj_C__pf4061722237_eventbpf__SetxWindowxMode__pfTT_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USaveObj_C__pf4061722237_NoRegister()
	{
		return USaveObj_C__pf4061722237::StaticClass();
	}
	UClass* Z_Construct_UClass_USaveObj_C__pf4061722237()
	{
		UPackage* OuterPackage = FindOrConstructDynamicTypePackage(TEXT("/Game/Player/SaveObj"));
		UClass* OuterClass = Cast<UClass>(StaticFindObjectFast(UClass::StaticClass(), OuterPackage, TEXT("SaveObj_C")));
		if (!OuterClass || !(OuterClass->ClassFlags & CLASS_Constructed))
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_USaveGame,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_USaveObj_C__pf4061722237_bpf__GetxInfoxonxEnvxfromxUnreal__pfTTTTT, "Get Info on Env from Unreal" }, // 1884261179
				{ &Z_Construct_UFunction_USaveObj_C__pf4061722237_bpf__SetxWindowxMode__pfTT, "Set Window Mode" }, // 235548377
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "IncludePath", "SaveObj__pf4061722237.h" },
				{ "IsBlueprintBase", "true" },
				{ "ModuleRelativePath", "Public/SaveObj__pf4061722237.h" },
				{ "ObjectInitializerConstructorDeclared", "" },
				{ "OverrideNativeName", "SaveObj_C" },
				{ "ReplaceConverted", "/Game/Player/SaveObj.SaveObj_C" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_GetSupportedFullscreenResolutions_Resolutions__pf_MetaData[] = {
				{ "ModuleRelativePath", "Public/SaveObj__pf4061722237.h" },
				{ "OverrideNativeName", "CallFunc_GetSupportedFullscreenResolutions_Resolutions" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_b0l__CallFunc_GetSupportedFullscreenResolutions_Resolutions__pf = { UE4CodeGen_Private::EPropertyClass::Array, "CallFunc_GetSupportedFullscreenResolutions_Resolutions", RF_Public|RF_Transient, 0x0010000000202000, 1, nullptr, STRUCT_OFFSET(USaveObj_C__pf4061722237, b0l__CallFunc_GetSupportedFullscreenResolutions_Resolutions__pf), METADATA_PARAMS(NewProp_b0l__CallFunc_GetSupportedFullscreenResolutions_Resolutions__pf_MetaData, ARRAY_COUNT(NewProp_b0l__CallFunc_GetSupportedFullscreenResolutions_Resolutions__pf_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_b0l__CallFunc_GetSupportedFullscreenResolutions_Resolutions__pf_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "b0l__CallFunc_GetSupportedFullscreenResolutions_Resolutions__pf", RF_Public|RF_Transient, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_CustomEvent_Desired_Mode__pf_MetaData[] = {
				{ "ModuleRelativePath", "Public/SaveObj__pf4061722237.h" },
				{ "OverrideNativeName", "K2Node_CustomEvent_Desired_Mode" },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_b0l__K2Node_CustomEvent_Desired_Mode__pf = { UE4CodeGen_Private::EPropertyClass::Byte, "K2Node_CustomEvent_Desired_Mode", RF_Public|RF_Transient, 0x0010000000202000, 1, nullptr, STRUCT_OFFSET(USaveObj_C__pf4061722237, b0l__K2Node_CustomEvent_Desired_Mode__pf), Z_Construct_UEnum_Engine_EWindowMode, METADATA_PARAMS(NewProp_b0l__K2Node_CustomEvent_Desired_Mode__pf_MetaData, ARRAY_COUNT(NewProp_b0l__K2Node_CustomEvent_Desired_Mode__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__DefaultxResolutionxRef__pfTT_MetaData[] = {
				{ "Category", "Default" },
				{ "DisplayName", "Default Resolution Ref" },
				{ "ModuleRelativePath", "Public/SaveObj__pf4061722237.h" },
				{ "OverrideNativeName", "Default Resolution Ref" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_bpv__DefaultxResolutionxRef__pfTT = { UE4CodeGen_Private::EPropertyClass::Struct, "Default Resolution Ref", RF_Public|RF_Transient, 0x0010000000010005, 1, nullptr, STRUCT_OFFSET(USaveObj_C__pf4061722237, bpv__DefaultxResolutionxRef__pfTT), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(NewProp_bpv__DefaultxResolutionxRef__pfTT_MetaData, ARRAY_COUNT(NewProp_bpv__DefaultxResolutionxRef__pfTT_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__SupportedxResolutionsxRef__pfTT_MetaData[] = {
				{ "Category", "Default" },
				{ "DisplayName", "Supported Resolutions Ref" },
				{ "ModuleRelativePath", "Public/SaveObj__pf4061722237.h" },
				{ "OverrideNativeName", "Supported Resolutions Ref" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_bpv__SupportedxResolutionsxRef__pfTT = { UE4CodeGen_Private::EPropertyClass::Array, "Supported Resolutions Ref", RF_Public|RF_Transient, 0x0010000000010005, 1, nullptr, STRUCT_OFFSET(USaveObj_C__pf4061722237, bpv__SupportedxResolutionsxRef__pfTT), METADATA_PARAMS(NewProp_bpv__SupportedxResolutionsxRef__pfTT_MetaData, ARRAY_COUNT(NewProp_bpv__SupportedxResolutionsxRef__pfTT_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_bpv__SupportedxResolutionsxRef__pfTT_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "bpv__SupportedxResolutionsxRef__pfTT", RF_Public|RF_Transient, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__WindowDisplayMode__pf_MetaData[] = {
				{ "Category", "Default" },
				{ "DisplayName", "Window Display Mode" },
				{ "ModuleRelativePath", "Public/SaveObj__pf4061722237.h" },
				{ "OverrideNativeName", "WindowDisplayMode" },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_bpv__WindowDisplayMode__pf = { UE4CodeGen_Private::EPropertyClass::Byte, "WindowDisplayMode", RF_Public|RF_Transient, 0x0010000000010005, 1, nullptr, STRUCT_OFFSET(USaveObj_C__pf4061722237, bpv__WindowDisplayMode__pf), Z_Construct_UEnum_Engine_EWindowMode, METADATA_PARAMS(NewProp_bpv__WindowDisplayMode__pf_MetaData, ARRAY_COUNT(NewProp_bpv__WindowDisplayMode__pf_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b0l__CallFunc_GetSupportedFullscreenResolutions_Resolutions__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b0l__CallFunc_GetSupportedFullscreenResolutions_Resolutions__pf_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b0l__K2Node_CustomEvent_Desired_Mode__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bpv__DefaultxResolutionxRef__pfTT,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bpv__SupportedxResolutionsxRef__pfTT,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bpv__SupportedxResolutionsxRef__pfTT_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bpv__WindowDisplayMode__pf,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<USaveObj_C__pf4061722237>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&USaveObj_C__pf4061722237::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00000080u,
				FuncInfo, ARRAY_COUNT(FuncInfo),
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
	IMPLEMENT_DYNAMIC_CLASS(USaveObj_C__pf4061722237, TEXT("SaveObj_C"), 1849870794);
	static FCompiledInDefer Z_CompiledInDefer_UClass_USaveObj_C__pf4061722237(Z_Construct_UClass_USaveObj_C__pf4061722237, &USaveObj_C__pf4061722237::StaticClass, TEXT("/Game/Player/SaveObj"), TEXT("SaveObj_C"), true, TEXT("/Game/Player/SaveObj"), TEXT("/Game/Player/SaveObj.SaveObj_C"), nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USaveObj_C__pf4061722237);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
