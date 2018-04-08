// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Private/NativizedAssets.h"
#include "Public/Options__pf1232574660.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOptions__pf1232574660() {}
// Cross Module References
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_UOptions_C__pf1232574660_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_UOptions_C__pf1232574660();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_UMenuBase_C__pf3166771619();
	NATIVIZEDASSETS_API UFunction* Z_Construct_UFunction_UOptions_C__pf1232574660_bpf__Construct__pf();
	NATIVIZEDASSETS_API UFunction* Z_Construct_UFunction_UOptions_C__pf1232574660_bpf__MenuxBack__pfT();
	NATIVIZEDASSETS_API UFunction* Z_Construct_UFunction_UOptions_C__pf1232574660_bpf__MenuxDown__pfT();
	NATIVIZEDASSETS_API UFunction* Z_Construct_UFunction_UOptions_C__pf1232574660_bpf__MenuxDownxReleased__pfTT();
	NATIVIZEDASSETS_API UFunction* Z_Construct_UFunction_UOptions_C__pf1232574660_bpf__MenuxSelect__pfT();
	NATIVIZEDASSETS_API UFunction* Z_Construct_UFunction_UOptions_C__pf1232574660_bpf__MenuxUp__pfT();
	NATIVIZEDASSETS_API UFunction* Z_Construct_UFunction_UOptions_C__pf1232574660_bpf__MenuxUpxReleased__pfTT();
	NATIVIZEDASSETS_API UFunction* Z_Construct_UFunction_UOptions_C__pf1232574660_bpf__Tick__pf();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FGeometry();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_UDebugInstance_C__pf4162722864_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_APlayerC_Regular_C__pf4061722237_NoRegister();
	NATIVIZEDASSETS_API UEnum* Z_Construct_UEnum_NativizedAssets_E__ERenderValDirection__pf();
	NATIVIZEDASSETS_API UEnum* Z_Construct_UEnum_NativizedAssets_E__EDisplayRes__pf();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EWindowMode();
	NATIVIZEDASSETS_API UEnum* Z_Construct_UEnum_NativizedAssets_E__EOptionSel__pf();
	UMG_API UClass* Z_Construct_UClass_UHorizontalBox_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
// End Cross Module References
	static FName NAME_UOptions_C__pf1232574660_bpf__Construct__pf = FName(TEXT("Construct"));
	void UOptions_C__pf1232574660::eventbpf__Construct__pf()
	{
		ProcessEvent(FindFunctionChecked(NAME_UOptions_C__pf1232574660_bpf__Construct__pf),NULL);
	}
	static FName NAME_UOptions_C__pf1232574660_bpf__Tick__pf = FName(TEXT("Tick"));
	void UOptions_C__pf1232574660::eventbpf__Tick__pf(FGeometry bpp__MyGeometry__pf, float bpp__InDeltaTime__pf)
	{
		Options_C__pf1232574660_eventbpf__Tick__pf_Parms Parms;
		Parms.bpp__MyGeometry__pf=bpp__MyGeometry__pf;
		Parms.bpp__InDeltaTime__pf=bpp__InDeltaTime__pf;
		ProcessEvent(FindFunctionChecked(NAME_UOptions_C__pf1232574660_bpf__Tick__pf),&Parms);
	}
	void UOptions_C__pf1232574660::StaticRegisterNativesUOptions_C__pf1232574660()
	{
		UClass* Class = UOptions_C__pf1232574660::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Construct", &UOptions_C__pf1232574660::execbpf__Construct__pf },
			{ "Menu Back", &UOptions_C__pf1232574660::execbpf__MenuxBack__pfT },
			{ "Menu Down", &UOptions_C__pf1232574660::execbpf__MenuxDown__pfT },
			{ "Menu Down Released", &UOptions_C__pf1232574660::execbpf__MenuxDownxReleased__pfTT },
			{ "Menu Select", &UOptions_C__pf1232574660::execbpf__MenuxSelect__pfT },
			{ "Menu Up", &UOptions_C__pf1232574660::execbpf__MenuxUp__pfT },
			{ "Menu Up Released", &UOptions_C__pf1232574660::execbpf__MenuxUpxReleased__pfTT },
			{ "Tick", &UOptions_C__pf1232574660::execbpf__Tick__pf },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UOptions_C__pf1232574660_bpf__Construct__pf()
	{
		UObject* Outer = Z_Construct_UClass_UOptions_C__pf1232574660();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("Construct") ));
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "User Interface" },
				{ "CppFromBpEvent", "" },
				{ "Keywords", "Begin Play" },
				{ "ModuleRelativePath", "Public/Options__pf1232574660.h" },
				{ "OverrideNativeName", "Construct" },
				{ "ToolTip", "Called after the underlying slate widget is constructed.  Depending on how the slate object is usedthis event may be called multiple times due to adding and removing from the hierarchy." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UOptions_C__pf1232574660, "Construct", RF_Public|RF_Transient, nullptr, (EFunctionFlags)0x00020C09, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UOptions_C__pf1232574660_bpf__MenuxBack__pfT()
	{
		UObject* Outer = Z_Construct_UClass_UOptions_C__pf1232574660();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("Menu Back") ));
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "" },
				{ "ModuleRelativePath", "Public/Options__pf1232574660.h" },
				{ "OverrideNativeName", "Menu Back" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UOptions_C__pf1232574660, "Menu Back", RF_Public|RF_Transient, nullptr, (EFunctionFlags)0x04020400, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UOptions_C__pf1232574660_bpf__MenuxDown__pfT()
	{
		UObject* Outer = Z_Construct_UClass_UOptions_C__pf1232574660();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("Menu Down") ));
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "" },
				{ "ModuleRelativePath", "Public/Options__pf1232574660.h" },
				{ "OverrideNativeName", "Menu Down" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UOptions_C__pf1232574660, "Menu Down", RF_Public|RF_Transient, nullptr, (EFunctionFlags)0x04020400, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UOptions_C__pf1232574660_bpf__MenuxDownxReleased__pfTT()
	{
		UObject* Outer = Z_Construct_UClass_UOptions_C__pf1232574660();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("Menu Down Released") ));
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "" },
				{ "ModuleRelativePath", "Public/Options__pf1232574660.h" },
				{ "OverrideNativeName", "Menu Down Released" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UOptions_C__pf1232574660, "Menu Down Released", RF_Public|RF_Transient, nullptr, (EFunctionFlags)0x04020400, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UOptions_C__pf1232574660_bpf__MenuxSelect__pfT()
	{
		UObject* Outer = Z_Construct_UClass_UOptions_C__pf1232574660();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("Menu Select") ));
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "" },
				{ "ModuleRelativePath", "Public/Options__pf1232574660.h" },
				{ "OverrideNativeName", "Menu Select" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UOptions_C__pf1232574660, "Menu Select", RF_Public|RF_Transient, nullptr, (EFunctionFlags)0x04020400, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UOptions_C__pf1232574660_bpf__MenuxUp__pfT()
	{
		UObject* Outer = Z_Construct_UClass_UOptions_C__pf1232574660();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("Menu Up") ));
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "" },
				{ "ModuleRelativePath", "Public/Options__pf1232574660.h" },
				{ "OverrideNativeName", "Menu Up" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UOptions_C__pf1232574660, "Menu Up", RF_Public|RF_Transient, nullptr, (EFunctionFlags)0x04020400, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UOptions_C__pf1232574660_bpf__MenuxUpxReleased__pfTT()
	{
		UObject* Outer = Z_Construct_UClass_UOptions_C__pf1232574660();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("Menu Up Released") ));
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "" },
				{ "ModuleRelativePath", "Public/Options__pf1232574660.h" },
				{ "OverrideNativeName", "Menu Up Released" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UOptions_C__pf1232574660, "Menu Up Released", RF_Public|RF_Transient, nullptr, (EFunctionFlags)0x04020400, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UOptions_C__pf1232574660_bpf__Tick__pf()
	{
		UObject* Outer = Z_Construct_UClass_UOptions_C__pf1232574660();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("Tick") ));
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpp__InDeltaTime__pf = { UE4CodeGen_Private::EPropertyClass::Float, "bpp__InDeltaTime__pf", RF_Public|RF_Transient, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Options_C__pf1232574660_eventbpf__Tick__pf_Parms, bpp__InDeltaTime__pf), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_bpp__MyGeometry__pf = { UE4CodeGen_Private::EPropertyClass::Struct, "bpp__MyGeometry__pf", RF_Public|RF_Transient, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Options_C__pf1232574660_eventbpf__Tick__pf_Parms, bpp__MyGeometry__pf), Z_Construct_UScriptStruct_FGeometry, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bpp__InDeltaTime__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bpp__MyGeometry__pf,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "User Interface" },
				{ "CppFromBpEvent", "" },
				{ "ModuleRelativePath", "Public/Options__pf1232574660.h" },
				{ "OverrideNativeName", "Tick" },
				{ "ToolTip", "Ticks this widget.  Override in derived classes, but always call the parent implementation.@param  MyGeometry The space allotted for this widget@param  InDeltaTime  Real time passed since last tick" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UOptions_C__pf1232574660, "Tick", RF_Public|RF_Transient, nullptr, (EFunctionFlags)0x00020C09, sizeof(Options_C__pf1232574660_eventbpf__Tick__pf_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UOptions_C__pf1232574660_NoRegister()
	{
		return UOptions_C__pf1232574660::StaticClass();
	}
	UClass* Z_Construct_UClass_UOptions_C__pf1232574660()
	{
		UPackage* OuterPackage = FindOrConstructDynamicTypePackage(TEXT("/Game/UserInterface/MainScreen/Options"));
		UClass* OuterClass = Cast<UClass>(StaticFindObjectFast(UClass::StaticClass(), OuterPackage, TEXT("Options_C")));
		if (!OuterClass || !(OuterClass->ClassFlags & CLASS_Constructed))
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UMenuBase_C__pf3166771619,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UOptions_C__pf1232574660_bpf__Construct__pf, "Construct" }, // 2750962445
				{ &Z_Construct_UFunction_UOptions_C__pf1232574660_bpf__MenuxBack__pfT, "Menu Back" }, // 3238509307
				{ &Z_Construct_UFunction_UOptions_C__pf1232574660_bpf__MenuxDown__pfT, "Menu Down" }, // 3511217467
				{ &Z_Construct_UFunction_UOptions_C__pf1232574660_bpf__MenuxDownxReleased__pfTT, "Menu Down Released" }, // 161445726
				{ &Z_Construct_UFunction_UOptions_C__pf1232574660_bpf__MenuxSelect__pfT, "Menu Select" }, // 33732989
				{ &Z_Construct_UFunction_UOptions_C__pf1232574660_bpf__MenuxUp__pfT, "Menu Up" }, // 3923900372
				{ &Z_Construct_UFunction_UOptions_C__pf1232574660_bpf__MenuxUpxReleased__pfTT, "Menu Up Released" }, // 1177249986
				{ &Z_Construct_UFunction_UOptions_C__pf1232574660_bpf__Tick__pf, "Tick" }, // 1663776158
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "IncludePath", "Options__pf1232574660.h" },
				{ "IsBlueprintBase", "true" },
				{ "ModuleRelativePath", "Public/Options__pf1232574660.h" },
				{ "ObjectInitializerConstructorDeclared", "" },
				{ "OverrideNativeName", "Options_C" },
				{ "ReplaceConverted", "/Game/UserInterface/MainScreen/Options.Options_C" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b1l__K2Node_SwitchEnum13_CmpSuccess__pf_MetaData[] = {
				{ "ModuleRelativePath", "Public/Options__pf1232574660.h" },
				{ "OverrideNativeName", "K2Node_SwitchEnum13_CmpSuccess" },
			};
#endif
			auto NewProp_b1l__K2Node_SwitchEnum13_CmpSuccess__pf_SetBit = [](void* Obj){ ((UOptions_C__pf1232574660*)Obj)->b1l__K2Node_SwitchEnum13_CmpSuccess__pf = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b1l__K2Node_SwitchEnum13_CmpSuccess__pf = { UE4CodeGen_Private::EPropertyClass::Bool, "K2Node_SwitchEnum13_CmpSuccess", RF_Public|RF_Transient, 0x0010000000202000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UOptions_C__pf1232574660), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_b1l__K2Node_SwitchEnum13_CmpSuccess__pf_SetBit)>::SetBit, METADATA_PARAMS(NewProp_b1l__K2Node_SwitchEnum13_CmpSuccess__pf_MetaData, ARRAY_COUNT(NewProp_b1l__K2Node_SwitchEnum13_CmpSuccess__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b1l__K2Node_SwitchEnum12_CmpSuccess__pf_MetaData[] = {
				{ "ModuleRelativePath", "Public/Options__pf1232574660.h" },
				{ "OverrideNativeName", "K2Node_SwitchEnum12_CmpSuccess" },
			};
#endif
			auto NewProp_b1l__K2Node_SwitchEnum12_CmpSuccess__pf_SetBit = [](void* Obj){ ((UOptions_C__pf1232574660*)Obj)->b1l__K2Node_SwitchEnum12_CmpSuccess__pf = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b1l__K2Node_SwitchEnum12_CmpSuccess__pf = { UE4CodeGen_Private::EPropertyClass::Bool, "K2Node_SwitchEnum12_CmpSuccess", RF_Public|RF_Transient, 0x0010000000202000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UOptions_C__pf1232574660), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_b1l__K2Node_SwitchEnum12_CmpSuccess__pf_SetBit)>::SetBit, METADATA_PARAMS(NewProp_b1l__K2Node_SwitchEnum12_CmpSuccess__pf_MetaData, ARRAY_COUNT(NewProp_b1l__K2Node_SwitchEnum12_CmpSuccess__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b1l__K2Node_SwitchEnum11_CmpSuccess__pf_MetaData[] = {
				{ "ModuleRelativePath", "Public/Options__pf1232574660.h" },
				{ "OverrideNativeName", "K2Node_SwitchEnum11_CmpSuccess" },
			};
#endif
			auto NewProp_b1l__K2Node_SwitchEnum11_CmpSuccess__pf_SetBit = [](void* Obj){ ((UOptions_C__pf1232574660*)Obj)->b1l__K2Node_SwitchEnum11_CmpSuccess__pf = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b1l__K2Node_SwitchEnum11_CmpSuccess__pf = { UE4CodeGen_Private::EPropertyClass::Bool, "K2Node_SwitchEnum11_CmpSuccess", RF_Public|RF_Transient, 0x0010000000202000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UOptions_C__pf1232574660), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_b1l__K2Node_SwitchEnum11_CmpSuccess__pf_SetBit)>::SetBit, METADATA_PARAMS(NewProp_b1l__K2Node_SwitchEnum11_CmpSuccess__pf_MetaData, ARRAY_COUNT(NewProp_b1l__K2Node_SwitchEnum11_CmpSuccess__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b1l__K2Node_SwitchEnum10_CmpSuccess__pf_MetaData[] = {
				{ "ModuleRelativePath", "Public/Options__pf1232574660.h" },
				{ "OverrideNativeName", "K2Node_SwitchEnum10_CmpSuccess" },
			};
#endif
			auto NewProp_b1l__K2Node_SwitchEnum10_CmpSuccess__pf_SetBit = [](void* Obj){ ((UOptions_C__pf1232574660*)Obj)->b1l__K2Node_SwitchEnum10_CmpSuccess__pf = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b1l__K2Node_SwitchEnum10_CmpSuccess__pf = { UE4CodeGen_Private::EPropertyClass::Bool, "K2Node_SwitchEnum10_CmpSuccess", RF_Public|RF_Transient, 0x0010000000202000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UOptions_C__pf1232574660), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_b1l__K2Node_SwitchEnum10_CmpSuccess__pf_SetBit)>::SetBit, METADATA_PARAMS(NewProp_b1l__K2Node_SwitchEnum10_CmpSuccess__pf_MetaData, ARRAY_COUNT(NewProp_b1l__K2Node_SwitchEnum10_CmpSuccess__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b1l__K2Node_MakeStruct_SlateColor15__pf_MetaData[] = {
				{ "ModuleRelativePath", "Public/Options__pf1232574660.h" },
				{ "OverrideNativeName", "K2Node_MakeStruct_SlateColor15" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_b1l__K2Node_MakeStruct_SlateColor15__pf = { UE4CodeGen_Private::EPropertyClass::Struct, "K2Node_MakeStruct_SlateColor15", RF_Public|RF_Transient, 0x0010000000202000, 1, nullptr, STRUCT_OFFSET(UOptions_C__pf1232574660, b1l__K2Node_MakeStruct_SlateColor15__pf), Z_Construct_UScriptStruct_FSlateColor, METADATA_PARAMS(NewProp_b1l__K2Node_MakeStruct_SlateColor15__pf_MetaData, ARRAY_COUNT(NewProp_b1l__K2Node_MakeStruct_SlateColor15__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b1l__K2Node_MakeStruct_SlateColor14__pf_MetaData[] = {
				{ "ModuleRelativePath", "Public/Options__pf1232574660.h" },
				{ "OverrideNativeName", "K2Node_MakeStruct_SlateColor14" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_b1l__K2Node_MakeStruct_SlateColor14__pf = { UE4CodeGen_Private::EPropertyClass::Struct, "K2Node_MakeStruct_SlateColor14", RF_Public|RF_Transient, 0x0010000000202000, 1, nullptr, STRUCT_OFFSET(UOptions_C__pf1232574660, b1l__K2Node_MakeStruct_SlateColor14__pf), Z_Construct_UScriptStruct_FSlateColor, METADATA_PARAMS(NewProp_b1l__K2Node_MakeStruct_SlateColor14__pf_MetaData, ARRAY_COUNT(NewProp_b1l__K2Node_MakeStruct_SlateColor14__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b1l__K2Node_MakeStruct_SlateColor13__pf_MetaData[] = {
				{ "ModuleRelativePath", "Public/Options__pf1232574660.h" },
				{ "OverrideNativeName", "K2Node_MakeStruct_SlateColor13" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_b1l__K2Node_MakeStruct_SlateColor13__pf = { UE4CodeGen_Private::EPropertyClass::Struct, "K2Node_MakeStruct_SlateColor13", RF_Public|RF_Transient, 0x0010000000202000, 1, nullptr, STRUCT_OFFSET(UOptions_C__pf1232574660, b1l__K2Node_MakeStruct_SlateColor13__pf), Z_Construct_UScriptStruct_FSlateColor, METADATA_PARAMS(NewProp_b1l__K2Node_MakeStruct_SlateColor13__pf_MetaData, ARRAY_COUNT(NewProp_b1l__K2Node_MakeStruct_SlateColor13__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b1l__K2Node_MakeStruct_SlateColor12__pf_MetaData[] = {
				{ "ModuleRelativePath", "Public/Options__pf1232574660.h" },
				{ "OverrideNativeName", "K2Node_MakeStruct_SlateColor12" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_b1l__K2Node_MakeStruct_SlateColor12__pf = { UE4CodeGen_Private::EPropertyClass::Struct, "K2Node_MakeStruct_SlateColor12", RF_Public|RF_Transient, 0x0010000000202000, 1, nullptr, STRUCT_OFFSET(UOptions_C__pf1232574660, b1l__K2Node_MakeStruct_SlateColor12__pf), Z_Construct_UScriptStruct_FSlateColor, METADATA_PARAMS(NewProp_b1l__K2Node_MakeStruct_SlateColor12__pf_MetaData, ARRAY_COUNT(NewProp_b1l__K2Node_MakeStruct_SlateColor12__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b1l__K2Node_MakeStruct_SlateColor11__pf_MetaData[] = {
				{ "ModuleRelativePath", "Public/Options__pf1232574660.h" },
				{ "OverrideNativeName", "K2Node_MakeStruct_SlateColor11" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_b1l__K2Node_MakeStruct_SlateColor11__pf = { UE4CodeGen_Private::EPropertyClass::Struct, "K2Node_MakeStruct_SlateColor11", RF_Public|RF_Transient, 0x0010000000202000, 1, nullptr, STRUCT_OFFSET(UOptions_C__pf1232574660, b1l__K2Node_MakeStruct_SlateColor11__pf), Z_Construct_UScriptStruct_FSlateColor, METADATA_PARAMS(NewProp_b1l__K2Node_MakeStruct_SlateColor11__pf_MetaData, ARRAY_COUNT(NewProp_b1l__K2Node_MakeStruct_SlateColor11__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b1l__K2Node_MakeStruct_SlateColor10__pf_MetaData[] = {
				{ "ModuleRelativePath", "Public/Options__pf1232574660.h" },
				{ "OverrideNativeName", "K2Node_MakeStruct_SlateColor10" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_b1l__K2Node_MakeStruct_SlateColor10__pf = { UE4CodeGen_Private::EPropertyClass::Struct, "K2Node_MakeStruct_SlateColor10", RF_Public|RF_Transient, 0x0010000000202000, 1, nullptr, STRUCT_OFFSET(UOptions_C__pf1232574660, b1l__K2Node_MakeStruct_SlateColor10__pf), Z_Construct_UScriptStruct_FSlateColor, METADATA_PARAMS(NewProp_b1l__K2Node_MakeStruct_SlateColor10__pf_MetaData, ARRAY_COUNT(NewProp_b1l__K2Node_MakeStruct_SlateColor10__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b1l__K2Node_MakeStruct_SlateColor9__pf_MetaData[] = {
				{ "ModuleRelativePath", "Public/Options__pf1232574660.h" },
				{ "OverrideNativeName", "K2Node_MakeStruct_SlateColor9" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_b1l__K2Node_MakeStruct_SlateColor9__pf = { UE4CodeGen_Private::EPropertyClass::Struct, "K2Node_MakeStruct_SlateColor9", RF_Public|RF_Transient, 0x0010000000202000, 1, nullptr, STRUCT_OFFSET(UOptions_C__pf1232574660, b1l__K2Node_MakeStruct_SlateColor9__pf), Z_Construct_UScriptStruct_FSlateColor, METADATA_PARAMS(NewProp_b1l__K2Node_MakeStruct_SlateColor9__pf_MetaData, ARRAY_COUNT(NewProp_b1l__K2Node_MakeStruct_SlateColor9__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b1l__K2Node_MakeStruct_SlateColor8__pf_MetaData[] = {
				{ "ModuleRelativePath", "Public/Options__pf1232574660.h" },
				{ "OverrideNativeName", "K2Node_MakeStruct_SlateColor8" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_b1l__K2Node_MakeStruct_SlateColor8__pf = { UE4CodeGen_Private::EPropertyClass::Struct, "K2Node_MakeStruct_SlateColor8", RF_Public|RF_Transient, 0x0010000000202000, 1, nullptr, STRUCT_OFFSET(UOptions_C__pf1232574660, b1l__K2Node_MakeStruct_SlateColor8__pf), Z_Construct_UScriptStruct_FSlateColor, METADATA_PARAMS(NewProp_b1l__K2Node_MakeStruct_SlateColor8__pf_MetaData, ARRAY_COUNT(NewProp_b1l__K2Node_MakeStruct_SlateColor8__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b1l__K2Node_SwitchEnum9_CmpSuccess__pf_MetaData[] = {
				{ "ModuleRelativePath", "Public/Options__pf1232574660.h" },
				{ "OverrideNativeName", "K2Node_SwitchEnum9_CmpSuccess" },
			};
#endif
			auto NewProp_b1l__K2Node_SwitchEnum9_CmpSuccess__pf_SetBit = [](void* Obj){ ((UOptions_C__pf1232574660*)Obj)->b1l__K2Node_SwitchEnum9_CmpSuccess__pf = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b1l__K2Node_SwitchEnum9_CmpSuccess__pf = { UE4CodeGen_Private::EPropertyClass::Bool, "K2Node_SwitchEnum9_CmpSuccess", RF_Public|RF_Transient, 0x0010000000202000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UOptions_C__pf1232574660), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_b1l__K2Node_SwitchEnum9_CmpSuccess__pf_SetBit)>::SetBit, METADATA_PARAMS(NewProp_b1l__K2Node_SwitchEnum9_CmpSuccess__pf_MetaData, ARRAY_COUNT(NewProp_b1l__K2Node_SwitchEnum9_CmpSuccess__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b1l__K2Node_SwitchEnum8_CmpSuccess__pf_MetaData[] = {
				{ "ModuleRelativePath", "Public/Options__pf1232574660.h" },
				{ "OverrideNativeName", "K2Node_SwitchEnum8_CmpSuccess" },
			};
#endif
			auto NewProp_b1l__K2Node_SwitchEnum8_CmpSuccess__pf_SetBit = [](void* Obj){ ((UOptions_C__pf1232574660*)Obj)->b1l__K2Node_SwitchEnum8_CmpSuccess__pf = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b1l__K2Node_SwitchEnum8_CmpSuccess__pf = { UE4CodeGen_Private::EPropertyClass::Bool, "K2Node_SwitchEnum8_CmpSuccess", RF_Public|RF_Transient, 0x0010000000202000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UOptions_C__pf1232574660), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_b1l__K2Node_SwitchEnum8_CmpSuccess__pf_SetBit)>::SetBit, METADATA_PARAMS(NewProp_b1l__K2Node_SwitchEnum8_CmpSuccess__pf_MetaData, ARRAY_COUNT(NewProp_b1l__K2Node_SwitchEnum8_CmpSuccess__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b1l__K2Node_MakeStruct_SlateColor7__pf_MetaData[] = {
				{ "ModuleRelativePath", "Public/Options__pf1232574660.h" },
				{ "OverrideNativeName", "K2Node_MakeStruct_SlateColor7" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_b1l__K2Node_MakeStruct_SlateColor7__pf = { UE4CodeGen_Private::EPropertyClass::Struct, "K2Node_MakeStruct_SlateColor7", RF_Public|RF_Transient, 0x0010000000202000, 1, nullptr, STRUCT_OFFSET(UOptions_C__pf1232574660, b1l__K2Node_MakeStruct_SlateColor7__pf), Z_Construct_UScriptStruct_FSlateColor, METADATA_PARAMS(NewProp_b1l__K2Node_MakeStruct_SlateColor7__pf_MetaData, ARRAY_COUNT(NewProp_b1l__K2Node_MakeStruct_SlateColor7__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b1l__K2Node_MakeStruct_SlateColor6__pf_MetaData[] = {
				{ "ModuleRelativePath", "Public/Options__pf1232574660.h" },
				{ "OverrideNativeName", "K2Node_MakeStruct_SlateColor6" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_b1l__K2Node_MakeStruct_SlateColor6__pf = { UE4CodeGen_Private::EPropertyClass::Struct, "K2Node_MakeStruct_SlateColor6", RF_Public|RF_Transient, 0x0010000000202000, 1, nullptr, STRUCT_OFFSET(UOptions_C__pf1232574660, b1l__K2Node_MakeStruct_SlateColor6__pf), Z_Construct_UScriptStruct_FSlateColor, METADATA_PARAMS(NewProp_b1l__K2Node_MakeStruct_SlateColor6__pf_MetaData, ARRAY_COUNT(NewProp_b1l__K2Node_MakeStruct_SlateColor6__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b1l__K2Node_MakeStruct_SlateColor5__pf_MetaData[] = {
				{ "ModuleRelativePath", "Public/Options__pf1232574660.h" },
				{ "OverrideNativeName", "K2Node_MakeStruct_SlateColor5" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_b1l__K2Node_MakeStruct_SlateColor5__pf = { UE4CodeGen_Private::EPropertyClass::Struct, "K2Node_MakeStruct_SlateColor5", RF_Public|RF_Transient, 0x0010000000202000, 1, nullptr, STRUCT_OFFSET(UOptions_C__pf1232574660, b1l__K2Node_MakeStruct_SlateColor5__pf), Z_Construct_UScriptStruct_FSlateColor, METADATA_PARAMS(NewProp_b1l__K2Node_MakeStruct_SlateColor5__pf_MetaData, ARRAY_COUNT(NewProp_b1l__K2Node_MakeStruct_SlateColor5__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b1l__K2Node_MakeStruct_SlateColor4__pf_MetaData[] = {
				{ "ModuleRelativePath", "Public/Options__pf1232574660.h" },
				{ "OverrideNativeName", "K2Node_MakeStruct_SlateColor4" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_b1l__K2Node_MakeStruct_SlateColor4__pf = { UE4CodeGen_Private::EPropertyClass::Struct, "K2Node_MakeStruct_SlateColor4", RF_Public|RF_Transient, 0x0010000000202000, 1, nullptr, STRUCT_OFFSET(UOptions_C__pf1232574660, b1l__K2Node_MakeStruct_SlateColor4__pf), Z_Construct_UScriptStruct_FSlateColor, METADATA_PARAMS(NewProp_b1l__K2Node_MakeStruct_SlateColor4__pf_MetaData, ARRAY_COUNT(NewProp_b1l__K2Node_MakeStruct_SlateColor4__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b1l__K2Node_MakeStruct_SlateColor3__pf_MetaData[] = {
				{ "ModuleRelativePath", "Public/Options__pf1232574660.h" },
				{ "OverrideNativeName", "K2Node_MakeStruct_SlateColor3" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_b1l__K2Node_MakeStruct_SlateColor3__pf = { UE4CodeGen_Private::EPropertyClass::Struct, "K2Node_MakeStruct_SlateColor3", RF_Public|RF_Transient, 0x0010000000202000, 1, nullptr, STRUCT_OFFSET(UOptions_C__pf1232574660, b1l__K2Node_MakeStruct_SlateColor3__pf), Z_Construct_UScriptStruct_FSlateColor, METADATA_PARAMS(NewProp_b1l__K2Node_MakeStruct_SlateColor3__pf_MetaData, ARRAY_COUNT(NewProp_b1l__K2Node_MakeStruct_SlateColor3__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b1l__K2Node_MakeStruct_SlateColor2__pf_MetaData[] = {
				{ "ModuleRelativePath", "Public/Options__pf1232574660.h" },
				{ "OverrideNativeName", "K2Node_MakeStruct_SlateColor2" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_b1l__K2Node_MakeStruct_SlateColor2__pf = { UE4CodeGen_Private::EPropertyClass::Struct, "K2Node_MakeStruct_SlateColor2", RF_Public|RF_Transient, 0x0010000000202000, 1, nullptr, STRUCT_OFFSET(UOptions_C__pf1232574660, b1l__K2Node_MakeStruct_SlateColor2__pf), Z_Construct_UScriptStruct_FSlateColor, METADATA_PARAMS(NewProp_b1l__K2Node_MakeStruct_SlateColor2__pf_MetaData, ARRAY_COUNT(NewProp_b1l__K2Node_MakeStruct_SlateColor2__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b1l__K2Node_MakeStruct_SlateColor1__pf_MetaData[] = {
				{ "ModuleRelativePath", "Public/Options__pf1232574660.h" },
				{ "OverrideNativeName", "K2Node_MakeStruct_SlateColor1" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_b1l__K2Node_MakeStruct_SlateColor1__pf = { UE4CodeGen_Private::EPropertyClass::Struct, "K2Node_MakeStruct_SlateColor1", RF_Public|RF_Transient, 0x0010000000202000, 1, nullptr, STRUCT_OFFSET(UOptions_C__pf1232574660, b1l__K2Node_MakeStruct_SlateColor1__pf), Z_Construct_UScriptStruct_FSlateColor, METADATA_PARAMS(NewProp_b1l__K2Node_MakeStruct_SlateColor1__pf_MetaData, ARRAY_COUNT(NewProp_b1l__K2Node_MakeStruct_SlateColor1__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b1l__K2Node_MakeStruct_SlateColor__pf_MetaData[] = {
				{ "ModuleRelativePath", "Public/Options__pf1232574660.h" },
				{ "OverrideNativeName", "K2Node_MakeStruct_SlateColor" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_b1l__K2Node_MakeStruct_SlateColor__pf = { UE4CodeGen_Private::EPropertyClass::Struct, "K2Node_MakeStruct_SlateColor", RF_Public|RF_Transient, 0x0010000000202000, 1, nullptr, STRUCT_OFFSET(UOptions_C__pf1232574660, b1l__K2Node_MakeStruct_SlateColor__pf), Z_Construct_UScriptStruct_FSlateColor, METADATA_PARAMS(NewProp_b1l__K2Node_MakeStruct_SlateColor__pf_MetaData, ARRAY_COUNT(NewProp_b1l__K2Node_MakeStruct_SlateColor__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b1l__K2Node_SwitchEnum7_CmpSuccess__pf_MetaData[] = {
				{ "ModuleRelativePath", "Public/Options__pf1232574660.h" },
				{ "OverrideNativeName", "K2Node_SwitchEnum7_CmpSuccess" },
			};
#endif
			auto NewProp_b1l__K2Node_SwitchEnum7_CmpSuccess__pf_SetBit = [](void* Obj){ ((UOptions_C__pf1232574660*)Obj)->b1l__K2Node_SwitchEnum7_CmpSuccess__pf = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b1l__K2Node_SwitchEnum7_CmpSuccess__pf = { UE4CodeGen_Private::EPropertyClass::Bool, "K2Node_SwitchEnum7_CmpSuccess", RF_Public|RF_Transient, 0x0010000000202000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UOptions_C__pf1232574660), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_b1l__K2Node_SwitchEnum7_CmpSuccess__pf_SetBit)>::SetBit, METADATA_PARAMS(NewProp_b1l__K2Node_SwitchEnum7_CmpSuccess__pf_MetaData, ARRAY_COUNT(NewProp_b1l__K2Node_SwitchEnum7_CmpSuccess__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b1l__CallFunc_Array_Get_Item2__pf_MetaData[] = {
				{ "ModuleRelativePath", "Public/Options__pf1232574660.h" },
				{ "OverrideNativeName", "CallFunc_Array_Get_Item2" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_b1l__CallFunc_Array_Get_Item2__pf = { UE4CodeGen_Private::EPropertyClass::Struct, "CallFunc_Array_Get_Item2", RF_Public|RF_Transient, 0x0010000000202000, 1, nullptr, STRUCT_OFFSET(UOptions_C__pf1232574660, b1l__CallFunc_Array_Get_Item2__pf), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(NewProp_b1l__CallFunc_Array_Get_Item2__pf_MetaData, ARRAY_COUNT(NewProp_b1l__CallFunc_Array_Get_Item2__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b1l__CallFunc_GetSupportedFullscreenResolutions_Resolutions2__pf_MetaData[] = {
				{ "ModuleRelativePath", "Public/Options__pf1232574660.h" },
				{ "OverrideNativeName", "CallFunc_GetSupportedFullscreenResolutions_Resolutions2" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_b1l__CallFunc_GetSupportedFullscreenResolutions_Resolutions2__pf = { UE4CodeGen_Private::EPropertyClass::Array, "CallFunc_GetSupportedFullscreenResolutions_Resolutions2", RF_Public|RF_Transient, 0x0010000000202000, 1, nullptr, STRUCT_OFFSET(UOptions_C__pf1232574660, b1l__CallFunc_GetSupportedFullscreenResolutions_Resolutions2__pf), METADATA_PARAMS(NewProp_b1l__CallFunc_GetSupportedFullscreenResolutions_Resolutions2__pf_MetaData, ARRAY_COUNT(NewProp_b1l__CallFunc_GetSupportedFullscreenResolutions_Resolutions2__pf_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_b1l__CallFunc_GetSupportedFullscreenResolutions_Resolutions2__pf_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "b1l__CallFunc_GetSupportedFullscreenResolutions_Resolutions2__pf", RF_Public|RF_Transient, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b1l__CallFunc_Array_Get_Item1__pf_MetaData[] = {
				{ "ModuleRelativePath", "Public/Options__pf1232574660.h" },
				{ "OverrideNativeName", "CallFunc_Array_Get_Item1" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_b1l__CallFunc_Array_Get_Item1__pf = { UE4CodeGen_Private::EPropertyClass::Struct, "CallFunc_Array_Get_Item1", RF_Public|RF_Transient, 0x0010000000202000, 1, nullptr, STRUCT_OFFSET(UOptions_C__pf1232574660, b1l__CallFunc_Array_Get_Item1__pf), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(NewProp_b1l__CallFunc_Array_Get_Item1__pf_MetaData, ARRAY_COUNT(NewProp_b1l__CallFunc_Array_Get_Item1__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b1l__K2Node_SwitchEnum6_CmpSuccess__pf_MetaData[] = {
				{ "ModuleRelativePath", "Public/Options__pf1232574660.h" },
				{ "OverrideNativeName", "K2Node_SwitchEnum6_CmpSuccess" },
			};
#endif
			auto NewProp_b1l__K2Node_SwitchEnum6_CmpSuccess__pf_SetBit = [](void* Obj){ ((UOptions_C__pf1232574660*)Obj)->b1l__K2Node_SwitchEnum6_CmpSuccess__pf = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b1l__K2Node_SwitchEnum6_CmpSuccess__pf = { UE4CodeGen_Private::EPropertyClass::Bool, "K2Node_SwitchEnum6_CmpSuccess", RF_Public|RF_Transient, 0x0010000000202000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UOptions_C__pf1232574660), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_b1l__K2Node_SwitchEnum6_CmpSuccess__pf_SetBit)>::SetBit, METADATA_PARAMS(NewProp_b1l__K2Node_SwitchEnum6_CmpSuccess__pf_MetaData, ARRAY_COUNT(NewProp_b1l__K2Node_SwitchEnum6_CmpSuccess__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b1l__CallFunc_Array_Get_Item__pf_MetaData[] = {
				{ "ModuleRelativePath", "Public/Options__pf1232574660.h" },
				{ "OverrideNativeName", "CallFunc_Array_Get_Item" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_b1l__CallFunc_Array_Get_Item__pf = { UE4CodeGen_Private::EPropertyClass::Struct, "CallFunc_Array_Get_Item", RF_Public|RF_Transient, 0x0010000000202000, 1, nullptr, STRUCT_OFFSET(UOptions_C__pf1232574660, b1l__CallFunc_Array_Get_Item__pf), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(NewProp_b1l__CallFunc_Array_Get_Item__pf_MetaData, ARRAY_COUNT(NewProp_b1l__CallFunc_Array_Get_Item__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b1l__CallFunc_GetSupportedFullscreenResolutions_Resolutions1__pf_MetaData[] = {
				{ "ModuleRelativePath", "Public/Options__pf1232574660.h" },
				{ "OverrideNativeName", "CallFunc_GetSupportedFullscreenResolutions_Resolutions1" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_b1l__CallFunc_GetSupportedFullscreenResolutions_Resolutions1__pf = { UE4CodeGen_Private::EPropertyClass::Array, "CallFunc_GetSupportedFullscreenResolutions_Resolutions1", RF_Public|RF_Transient, 0x0010000000202000, 1, nullptr, STRUCT_OFFSET(UOptions_C__pf1232574660, b1l__CallFunc_GetSupportedFullscreenResolutions_Resolutions1__pf), METADATA_PARAMS(NewProp_b1l__CallFunc_GetSupportedFullscreenResolutions_Resolutions1__pf_MetaData, ARRAY_COUNT(NewProp_b1l__CallFunc_GetSupportedFullscreenResolutions_Resolutions1__pf_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_b1l__CallFunc_GetSupportedFullscreenResolutions_Resolutions1__pf_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "b1l__CallFunc_GetSupportedFullscreenResolutions_Resolutions1__pf", RF_Public|RF_Transient, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b1l__CallFunc_GetSupportedFullscreenResolutions_Resolutions__pf_MetaData[] = {
				{ "ModuleRelativePath", "Public/Options__pf1232574660.h" },
				{ "OverrideNativeName", "CallFunc_GetSupportedFullscreenResolutions_Resolutions" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_b1l__CallFunc_GetSupportedFullscreenResolutions_Resolutions__pf = { UE4CodeGen_Private::EPropertyClass::Array, "CallFunc_GetSupportedFullscreenResolutions_Resolutions", RF_Public|RF_Transient, 0x0010000000202000, 1, nullptr, STRUCT_OFFSET(UOptions_C__pf1232574660, b1l__CallFunc_GetSupportedFullscreenResolutions_Resolutions__pf), METADATA_PARAMS(NewProp_b1l__CallFunc_GetSupportedFullscreenResolutions_Resolutions__pf_MetaData, ARRAY_COUNT(NewProp_b1l__CallFunc_GetSupportedFullscreenResolutions_Resolutions__pf_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_b1l__CallFunc_GetSupportedFullscreenResolutions_Resolutions__pf_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "b1l__CallFunc_GetSupportedFullscreenResolutions_Resolutions__pf", RF_Public|RF_Transient, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b1l__K2Node_SwitchEnum5_CmpSuccess__pf_MetaData[] = {
				{ "ModuleRelativePath", "Public/Options__pf1232574660.h" },
				{ "OverrideNativeName", "K2Node_SwitchEnum5_CmpSuccess" },
			};
#endif
			auto NewProp_b1l__K2Node_SwitchEnum5_CmpSuccess__pf_SetBit = [](void* Obj){ ((UOptions_C__pf1232574660*)Obj)->b1l__K2Node_SwitchEnum5_CmpSuccess__pf = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b1l__K2Node_SwitchEnum5_CmpSuccess__pf = { UE4CodeGen_Private::EPropertyClass::Bool, "K2Node_SwitchEnum5_CmpSuccess", RF_Public|RF_Transient, 0x0010000000202000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UOptions_C__pf1232574660), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_b1l__K2Node_SwitchEnum5_CmpSuccess__pf_SetBit)>::SetBit, METADATA_PARAMS(NewProp_b1l__K2Node_SwitchEnum5_CmpSuccess__pf_MetaData, ARRAY_COUNT(NewProp_b1l__K2Node_SwitchEnum5_CmpSuccess__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b1l__K2Node_DynamicCast_bSuccess1__pf_MetaData[] = {
				{ "ModuleRelativePath", "Public/Options__pf1232574660.h" },
				{ "OverrideNativeName", "K2Node_DynamicCast_bSuccess1" },
			};
#endif
			auto NewProp_b1l__K2Node_DynamicCast_bSuccess1__pf_SetBit = [](void* Obj){ ((UOptions_C__pf1232574660*)Obj)->b1l__K2Node_DynamicCast_bSuccess1__pf = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b1l__K2Node_DynamicCast_bSuccess1__pf = { UE4CodeGen_Private::EPropertyClass::Bool, "K2Node_DynamicCast_bSuccess1", RF_Public|RF_Transient, 0x0010000000202000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UOptions_C__pf1232574660), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_b1l__K2Node_DynamicCast_bSuccess1__pf_SetBit)>::SetBit, METADATA_PARAMS(NewProp_b1l__K2Node_DynamicCast_bSuccess1__pf_MetaData, ARRAY_COUNT(NewProp_b1l__K2Node_DynamicCast_bSuccess1__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b1l__K2Node_DynamicCast_AsDebug_Instance__pf_MetaData[] = {
				{ "ModuleRelativePath", "Public/Options__pf1232574660.h" },
				{ "OverrideNativeName", "K2Node_DynamicCast_AsDebug_Instance" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b1l__K2Node_DynamicCast_AsDebug_Instance__pf = { UE4CodeGen_Private::EPropertyClass::Object, "K2Node_DynamicCast_AsDebug_Instance", RF_Public|RF_Transient, 0x0010000000202000, 1, nullptr, STRUCT_OFFSET(UOptions_C__pf1232574660, b1l__K2Node_DynamicCast_AsDebug_Instance__pf), Z_Construct_UClass_UDebugInstance_C__pf4162722864_NoRegister, METADATA_PARAMS(NewProp_b1l__K2Node_DynamicCast_AsDebug_Instance__pf_MetaData, ARRAY_COUNT(NewProp_b1l__K2Node_DynamicCast_AsDebug_Instance__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b1l__K2Node_SwitchEnum4_CmpSuccess__pf_MetaData[] = {
				{ "ModuleRelativePath", "Public/Options__pf1232574660.h" },
				{ "OverrideNativeName", "K2Node_SwitchEnum4_CmpSuccess" },
			};
#endif
			auto NewProp_b1l__K2Node_SwitchEnum4_CmpSuccess__pf_SetBit = [](void* Obj){ ((UOptions_C__pf1232574660*)Obj)->b1l__K2Node_SwitchEnum4_CmpSuccess__pf = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b1l__K2Node_SwitchEnum4_CmpSuccess__pf = { UE4CodeGen_Private::EPropertyClass::Bool, "K2Node_SwitchEnum4_CmpSuccess", RF_Public|RF_Transient, 0x0010000000202000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UOptions_C__pf1232574660), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_b1l__K2Node_SwitchEnum4_CmpSuccess__pf_SetBit)>::SetBit, METADATA_PARAMS(NewProp_b1l__K2Node_SwitchEnum4_CmpSuccess__pf_MetaData, ARRAY_COUNT(NewProp_b1l__K2Node_SwitchEnum4_CmpSuccess__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b1l__K2Node_SwitchEnum3_CmpSuccess__pf_MetaData[] = {
				{ "ModuleRelativePath", "Public/Options__pf1232574660.h" },
				{ "OverrideNativeName", "K2Node_SwitchEnum3_CmpSuccess" },
			};
#endif
			auto NewProp_b1l__K2Node_SwitchEnum3_CmpSuccess__pf_SetBit = [](void* Obj){ ((UOptions_C__pf1232574660*)Obj)->b1l__K2Node_SwitchEnum3_CmpSuccess__pf = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b1l__K2Node_SwitchEnum3_CmpSuccess__pf = { UE4CodeGen_Private::EPropertyClass::Bool, "K2Node_SwitchEnum3_CmpSuccess", RF_Public|RF_Transient, 0x0010000000202000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UOptions_C__pf1232574660), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_b1l__K2Node_SwitchEnum3_CmpSuccess__pf_SetBit)>::SetBit, METADATA_PARAMS(NewProp_b1l__K2Node_SwitchEnum3_CmpSuccess__pf_MetaData, ARRAY_COUNT(NewProp_b1l__K2Node_SwitchEnum3_CmpSuccess__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b1l__K2Node_SwitchEnum2_CmpSuccess__pf_MetaData[] = {
				{ "ModuleRelativePath", "Public/Options__pf1232574660.h" },
				{ "OverrideNativeName", "K2Node_SwitchEnum2_CmpSuccess" },
			};
#endif
			auto NewProp_b1l__K2Node_SwitchEnum2_CmpSuccess__pf_SetBit = [](void* Obj){ ((UOptions_C__pf1232574660*)Obj)->b1l__K2Node_SwitchEnum2_CmpSuccess__pf = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b1l__K2Node_SwitchEnum2_CmpSuccess__pf = { UE4CodeGen_Private::EPropertyClass::Bool, "K2Node_SwitchEnum2_CmpSuccess", RF_Public|RF_Transient, 0x0010000000202000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UOptions_C__pf1232574660), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_b1l__K2Node_SwitchEnum2_CmpSuccess__pf_SetBit)>::SetBit, METADATA_PARAMS(NewProp_b1l__K2Node_SwitchEnum2_CmpSuccess__pf_MetaData, ARRAY_COUNT(NewProp_b1l__K2Node_SwitchEnum2_CmpSuccess__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b1l__K2Node_SwitchEnum1_CmpSuccess__pf_MetaData[] = {
				{ "ModuleRelativePath", "Public/Options__pf1232574660.h" },
				{ "OverrideNativeName", "K2Node_SwitchEnum1_CmpSuccess" },
			};
#endif
			auto NewProp_b1l__K2Node_SwitchEnum1_CmpSuccess__pf_SetBit = [](void* Obj){ ((UOptions_C__pf1232574660*)Obj)->b1l__K2Node_SwitchEnum1_CmpSuccess__pf = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b1l__K2Node_SwitchEnum1_CmpSuccess__pf = { UE4CodeGen_Private::EPropertyClass::Bool, "K2Node_SwitchEnum1_CmpSuccess", RF_Public|RF_Transient, 0x0010000000202000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UOptions_C__pf1232574660), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_b1l__K2Node_SwitchEnum1_CmpSuccess__pf_SetBit)>::SetBit, METADATA_PARAMS(NewProp_b1l__K2Node_SwitchEnum1_CmpSuccess__pf_MetaData, ARRAY_COUNT(NewProp_b1l__K2Node_SwitchEnum1_CmpSuccess__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b1l__K2Node_Event_InDeltaTime__pf_MetaData[] = {
				{ "ModuleRelativePath", "Public/Options__pf1232574660.h" },
				{ "OverrideNativeName", "K2Node_Event_InDeltaTime" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_b1l__K2Node_Event_InDeltaTime__pf = { UE4CodeGen_Private::EPropertyClass::Float, "K2Node_Event_InDeltaTime", RF_Public|RF_Transient, 0x0010000000202000, 1, nullptr, STRUCT_OFFSET(UOptions_C__pf1232574660, b1l__K2Node_Event_InDeltaTime__pf), METADATA_PARAMS(NewProp_b1l__K2Node_Event_InDeltaTime__pf_MetaData, ARRAY_COUNT(NewProp_b1l__K2Node_Event_InDeltaTime__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b1l__K2Node_Event_MyGeometry__pf_MetaData[] = {
				{ "ModuleRelativePath", "Public/Options__pf1232574660.h" },
				{ "OverrideNativeName", "K2Node_Event_MyGeometry" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_b1l__K2Node_Event_MyGeometry__pf = { UE4CodeGen_Private::EPropertyClass::Struct, "K2Node_Event_MyGeometry", RF_Public|RF_Transient, 0x0010000000202000, 1, nullptr, STRUCT_OFFSET(UOptions_C__pf1232574660, b1l__K2Node_Event_MyGeometry__pf), Z_Construct_UScriptStruct_FGeometry, METADATA_PARAMS(NewProp_b1l__K2Node_Event_MyGeometry__pf_MetaData, ARRAY_COUNT(NewProp_b1l__K2Node_Event_MyGeometry__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b1l__K2Node_DynamicCast_bSuccess__pf_MetaData[] = {
				{ "ModuleRelativePath", "Public/Options__pf1232574660.h" },
				{ "OverrideNativeName", "K2Node_DynamicCast_bSuccess" },
			};
#endif
			auto NewProp_b1l__K2Node_DynamicCast_bSuccess__pf_SetBit = [](void* Obj){ ((UOptions_C__pf1232574660*)Obj)->b1l__K2Node_DynamicCast_bSuccess__pf = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b1l__K2Node_DynamicCast_bSuccess__pf = { UE4CodeGen_Private::EPropertyClass::Bool, "K2Node_DynamicCast_bSuccess", RF_Public|RF_Transient, 0x0010000000202000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UOptions_C__pf1232574660), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_b1l__K2Node_DynamicCast_bSuccess__pf_SetBit)>::SetBit, METADATA_PARAMS(NewProp_b1l__K2Node_DynamicCast_bSuccess__pf_MetaData, ARRAY_COUNT(NewProp_b1l__K2Node_DynamicCast_bSuccess__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b1l__K2Node_DynamicCast_AsPlayer_C_Regular__pf_MetaData[] = {
				{ "ModuleRelativePath", "Public/Options__pf1232574660.h" },
				{ "OverrideNativeName", "K2Node_DynamicCast_AsPlayer_C_Regular" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b1l__K2Node_DynamicCast_AsPlayer_C_Regular__pf = { UE4CodeGen_Private::EPropertyClass::Object, "K2Node_DynamicCast_AsPlayer_C_Regular", RF_Public|RF_Transient, 0x0010000000202000, 1, nullptr, STRUCT_OFFSET(UOptions_C__pf1232574660, b1l__K2Node_DynamicCast_AsPlayer_C_Regular__pf), Z_Construct_UClass_APlayerC_Regular_C__pf4061722237_NoRegister, METADATA_PARAMS(NewProp_b1l__K2Node_DynamicCast_AsPlayer_C_Regular__pf_MetaData, ARRAY_COUNT(NewProp_b1l__K2Node_DynamicCast_AsPlayer_C_Regular__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b1l__K2Node_SwitchEnum_CmpSuccess__pf_MetaData[] = {
				{ "ModuleRelativePath", "Public/Options__pf1232574660.h" },
				{ "OverrideNativeName", "K2Node_SwitchEnum_CmpSuccess" },
			};
#endif
			auto NewProp_b1l__K2Node_SwitchEnum_CmpSuccess__pf_SetBit = [](void* Obj){ ((UOptions_C__pf1232574660*)Obj)->b1l__K2Node_SwitchEnum_CmpSuccess__pf = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b1l__K2Node_SwitchEnum_CmpSuccess__pf = { UE4CodeGen_Private::EPropertyClass::Bool, "K2Node_SwitchEnum_CmpSuccess", RF_Public|RF_Transient, 0x0010000000202000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UOptions_C__pf1232574660), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_b1l__K2Node_SwitchEnum_CmpSuccess__pf_SetBit)>::SetBit, METADATA_PARAMS(NewProp_b1l__K2Node_SwitchEnum_CmpSuccess__pf_MetaData, ARRAY_COUNT(NewProp_b1l__K2Node_SwitchEnum_CmpSuccess__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__ElapsedTime__pf_MetaData[] = {
				{ "Category", "Default" },
				{ "DisplayName", "Elapsed Time" },
				{ "ModuleRelativePath", "Public/Options__pf1232574660.h" },
				{ "OverrideNativeName", "ElapsedTime" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpv__ElapsedTime__pf = { UE4CodeGen_Private::EPropertyClass::Float, "ElapsedTime", RF_Public|RF_Transient, 0x0010000000010005, 1, nullptr, STRUCT_OFFSET(UOptions_C__pf1232574660, bpv__ElapsedTime__pf), METADATA_PARAMS(NewProp_bpv__ElapsedTime__pf_MetaData, ARRAY_COUNT(NewProp_bpv__ElapsedTime__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__ValChangeInterval__pf_MetaData[] = {
				{ "Category", "Default" },
				{ "DisplayName", "Val Change Interval" },
				{ "ModuleRelativePath", "Public/Options__pf1232574660.h" },
				{ "OverrideNativeName", "ValChangeInterval" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpv__ValChangeInterval__pf = { UE4CodeGen_Private::EPropertyClass::Float, "ValChangeInterval", RF_Public|RF_Transient, 0x0010000000010005, 1, nullptr, STRUCT_OFFSET(UOptions_C__pf1232574660, bpv__ValChangeInterval__pf), METADATA_PARAMS(NewProp_bpv__ValChangeInterval__pf_MetaData, ARRAY_COUNT(NewProp_bpv__ValChangeInterval__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__RenderValDirection__pf_MetaData[] = {
				{ "Category", "Default" },
				{ "DisplayName", "Render Val Direction" },
				{ "ModuleRelativePath", "Public/Options__pf1232574660.h" },
				{ "OverrideNativeName", "RenderValDirection" },
			};
#endif
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_bpv__RenderValDirection__pf = { UE4CodeGen_Private::EPropertyClass::Enum, "RenderValDirection", RF_Public|RF_Transient, 0x0010000000010005, 1, nullptr, STRUCT_OFFSET(UOptions_C__pf1232574660, bpv__RenderValDirection__pf), Z_Construct_UEnum_NativizedAssets_E__ERenderValDirection__pf, METADATA_PARAMS(NewProp_bpv__RenderValDirection__pf_MetaData, ARRAY_COUNT(NewProp_bpv__RenderValDirection__pf_MetaData)) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_bpv__RenderValDirection__pf_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__IncreaseRenderScale__pf_MetaData[] = {
				{ "Category", "Default" },
				{ "DisplayName", "Increase Render Scale" },
				{ "ModuleRelativePath", "Public/Options__pf1232574660.h" },
				{ "OverrideNativeName", "IncreaseRenderScale" },
			};
#endif
			auto NewProp_bpv__IncreaseRenderScale__pf_SetBit = [](void* Obj){ ((UOptions_C__pf1232574660*)Obj)->bpv__IncreaseRenderScale__pf = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bpv__IncreaseRenderScale__pf = { UE4CodeGen_Private::EPropertyClass::Bool, "IncreaseRenderScale", RF_Public|RF_Transient, 0x0010000000010005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UOptions_C__pf1232574660), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bpv__IncreaseRenderScale__pf_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bpv__IncreaseRenderScale__pf_MetaData, ARRAY_COUNT(NewProp_bpv__IncreaseRenderScale__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__DecreaseRenderScale__pf_MetaData[] = {
				{ "Category", "Default" },
				{ "DisplayName", "Decrease Render Scale" },
				{ "ModuleRelativePath", "Public/Options__pf1232574660.h" },
				{ "OverrideNativeName", "DecreaseRenderScale" },
			};
#endif
			auto NewProp_bpv__DecreaseRenderScale__pf_SetBit = [](void* Obj){ ((UOptions_C__pf1232574660*)Obj)->bpv__DecreaseRenderScale__pf = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bpv__DecreaseRenderScale__pf = { UE4CodeGen_Private::EPropertyClass::Bool, "DecreaseRenderScale", RF_Public|RF_Transient, 0x0010000000010005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UOptions_C__pf1232574660), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bpv__DecreaseRenderScale__pf_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bpv__DecreaseRenderScale__pf_MetaData, ARRAY_COUNT(NewProp_bpv__DecreaseRenderScale__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__RenderScaleVal__pf_MetaData[] = {
				{ "Category", "Default" },
				{ "ClampMax", "1000" },
				{ "ClampMin", "1" },
				{ "DisplayName", "Render Scale Val" },
				{ "ModuleRelativePath", "Public/Options__pf1232574660.h" },
				{ "OverrideNativeName", "RenderScaleVal" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_bpv__RenderScaleVal__pf = { UE4CodeGen_Private::EPropertyClass::Int, "RenderScaleVal", RF_Public|RF_Transient, 0x0010000000010005, 1, nullptr, STRUCT_OFFSET(UOptions_C__pf1232574660, bpv__RenderScaleVal__pf), METADATA_PARAMS(NewProp_bpv__RenderScaleVal__pf_MetaData, ARRAY_COUNT(NewProp_bpv__RenderScaleVal__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__V_SyncString__pf_MetaData[] = {
				{ "Category", "Default" },
				{ "DisplayName", "V Sync String" },
				{ "ModuleRelativePath", "Public/Options__pf1232574660.h" },
				{ "OverrideNativeName", "V_SyncString" },
			};
#endif
			static const UE4CodeGen_Private::FTextPropertyParams NewProp_bpv__V_SyncString__pf = { UE4CodeGen_Private::EPropertyClass::Text, "V_SyncString", RF_Public|RF_Transient, 0x0010000000010005, 1, nullptr, STRUCT_OFFSET(UOptions_C__pf1232574660, bpv__V_SyncString__pf), METADATA_PARAMS(NewProp_bpv__V_SyncString__pf_MetaData, ARRAY_COUNT(NewProp_bpv__V_SyncString__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__SelRes__pf_MetaData[] = {
				{ "Category", "Default" },
				{ "DisplayName", "Sel Res" },
				{ "ModuleRelativePath", "Public/Options__pf1232574660.h" },
				{ "OverrideNativeName", "SelRes" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_bpv__SelRes__pf = { UE4CodeGen_Private::EPropertyClass::Int, "SelRes", RF_Public|RF_Transient, 0x0010000000010005, 1, nullptr, STRUCT_OFFSET(UOptions_C__pf1232574660, bpv__SelRes__pf), METADATA_PARAMS(NewProp_bpv__SelRes__pf_MetaData, ARRAY_COUNT(NewProp_bpv__SelRes__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__DisplayxResxSel__pfTT_MetaData[] = {
				{ "Category", "Default" },
				{ "DisplayName", "Display Res Sel" },
				{ "ModuleRelativePath", "Public/Options__pf1232574660.h" },
				{ "OverrideNativeName", "Display Res Sel" },
			};
#endif
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_bpv__DisplayxResxSel__pfTT = { UE4CodeGen_Private::EPropertyClass::Enum, "Display Res Sel", RF_Public|RF_Transient, 0x0010000000010005, 1, nullptr, STRUCT_OFFSET(UOptions_C__pf1232574660, bpv__DisplayxResxSel__pfTT), Z_Construct_UEnum_NativizedAssets_E__EDisplayRes__pf, METADATA_PARAMS(NewProp_bpv__DisplayxResxSel__pfTT_MetaData, ARRAY_COUNT(NewProp_bpv__DisplayxResxSel__pfTT_MetaData)) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_bpv__DisplayxResxSel__pfTT_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__WindowxModexSel__pfTT_MetaData[] = {
				{ "Category", "Default" },
				{ "DisplayName", "Window Mode Sel" },
				{ "ModuleRelativePath", "Public/Options__pf1232574660.h" },
				{ "OverrideNativeName", "Window Mode Sel" },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_bpv__WindowxModexSel__pfTT = { UE4CodeGen_Private::EPropertyClass::Byte, "Window Mode Sel", RF_Public|RF_Transient, 0x0010000000010005, 1, nullptr, STRUCT_OFFSET(UOptions_C__pf1232574660, bpv__WindowxModexSel__pfTT), Z_Construct_UEnum_Engine_EWindowMode, METADATA_PARAMS(NewProp_bpv__WindowxModexSel__pfTT_MetaData, ARRAY_COUNT(NewProp_bpv__WindowxModexSel__pfTT_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__InOption__pf_MetaData[] = {
				{ "Category", "Default" },
				{ "DisplayName", "In Option" },
				{ "ModuleRelativePath", "Public/Options__pf1232574660.h" },
				{ "OverrideNativeName", "InOption" },
			};
#endif
			auto NewProp_bpv__InOption__pf_SetBit = [](void* Obj){ ((UOptions_C__pf1232574660*)Obj)->bpv__InOption__pf = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bpv__InOption__pf = { UE4CodeGen_Private::EPropertyClass::Bool, "InOption", RF_Public|RF_Transient, 0x0010000000010005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UOptions_C__pf1232574660), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bpv__InOption__pf_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bpv__InOption__pf_MetaData, ARRAY_COUNT(NewProp_bpv__InOption__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__OptionxSelection__pfT_MetaData[] = {
				{ "Category", "Default" },
				{ "DisplayName", "Option Selection" },
				{ "ModuleRelativePath", "Public/Options__pf1232574660.h" },
				{ "OverrideNativeName", "Option Selection" },
			};
#endif
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_bpv__OptionxSelection__pfT = { UE4CodeGen_Private::EPropertyClass::Enum, "Option Selection", RF_Public|RF_Transient, 0x0010000000010005, 1, nullptr, STRUCT_OFFSET(UOptions_C__pf1232574660, bpv__OptionxSelection__pfT), Z_Construct_UEnum_NativizedAssets_E__EOptionSel__pf, METADATA_PARAMS(NewProp_bpv__OptionxSelection__pfT_MetaData, ARRAY_COUNT(NewProp_bpv__OptionxSelection__pfT_MetaData)) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_bpv__OptionxSelection__pfT_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Windowsdisplayoption__pf_MetaData[] = {
				{ "Category", "Options" },
				{ "DisplayName", "Windows display option" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/Options__pf1232574660.h" },
				{ "OverrideNativeName", "Windowsdisplayoption" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__Windowsdisplayoption__pf = { UE4CodeGen_Private::EPropertyClass::Object, "Windowsdisplayoption", RF_Public|RF_Transient, 0x001000000008000c, 1, nullptr, STRUCT_OFFSET(UOptions_C__pf1232574660, bpv__Windowsdisplayoption__pf), Z_Construct_UClass_UHorizontalBox_NoRegister, METADATA_PARAMS(NewProp_bpv__Windowsdisplayoption__pf_MetaData, ARRAY_COUNT(NewProp_bpv__Windowsdisplayoption__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__vSyncOption__pf_MetaData[] = {
				{ "Category", "Options" },
				{ "DisplayName", "vSyncOption" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/Options__pf1232574660.h" },
				{ "OverrideNativeName", "vSyncOption" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__vSyncOption__pf = { UE4CodeGen_Private::EPropertyClass::Object, "vSyncOption", RF_Public|RF_Transient, 0x001000000008000c, 1, nullptr, STRUCT_OFFSET(UOptions_C__pf1232574660, bpv__vSyncOption__pf), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(NewProp_bpv__vSyncOption__pf_MetaData, ARRAY_COUNT(NewProp_bpv__vSyncOption__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__VerticalSync__pf_MetaData[] = {
				{ "Category", "Options" },
				{ "DisplayName", "Vertical Sync" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/Options__pf1232574660.h" },
				{ "OverrideNativeName", "VerticalSync" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__VerticalSync__pf = { UE4CodeGen_Private::EPropertyClass::Object, "VerticalSync", RF_Public|RF_Transient, 0x001000000008000c, 1, nullptr, STRUCT_OFFSET(UOptions_C__pf1232574660, bpv__VerticalSync__pf), Z_Construct_UClass_UHorizontalBox_NoRegister, METADATA_PARAMS(NewProp_bpv__VerticalSync__pf_MetaData, ARRAY_COUNT(NewProp_bpv__VerticalSync__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__TextxvSync__pfG_MetaData[] = {
				{ "Category", "Options" },
				{ "DisplayName", "Text-vSync" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/Options__pf1232574660.h" },
				{ "OverrideNativeName", "Text-vSync" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__TextxvSync__pfG = { UE4CodeGen_Private::EPropertyClass::Object, "Text-vSync", RF_Public|RF_Transient, 0x001000000008000c, 1, nullptr, STRUCT_OFFSET(UOptions_C__pf1232574660, bpv__TextxvSync__pfG), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(NewProp_bpv__TextxvSync__pfG_MetaData, ARRAY_COUNT(NewProp_bpv__TextxvSync__pfG_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__TextxSFXVolume__pfG_MetaData[] = {
				{ "Category", "Options" },
				{ "DisplayName", "Text - SFX Volume" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/Options__pf1232574660.h" },
				{ "OverrideNativeName", "Text-SFXVolume" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__TextxSFXVolume__pfG = { UE4CodeGen_Private::EPropertyClass::Object, "Text-SFXVolume", RF_Public|RF_Transient, 0x001000000008000c, 1, nullptr, STRUCT_OFFSET(UOptions_C__pf1232574660, bpv__TextxSFXVolume__pfG), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(NewProp_bpv__TextxSFXVolume__pfG_MetaData, ARRAY_COUNT(NewProp_bpv__TextxSFXVolume__pfG_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__TextxRenderScale__pfG_MetaData[] = {
				{ "Category", "Options" },
				{ "DisplayName", "Text - Render Scale" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/Options__pf1232574660.h" },
				{ "OverrideNativeName", "Text-RenderScale" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__TextxRenderScale__pfG = { UE4CodeGen_Private::EPropertyClass::Object, "Text-RenderScale", RF_Public|RF_Transient, 0x001000000008000c, 1, nullptr, STRUCT_OFFSET(UOptions_C__pf1232574660, bpv__TextxRenderScale__pfG), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(NewProp_bpv__TextxRenderScale__pfG_MetaData, ARRAY_COUNT(NewProp_bpv__TextxRenderScale__pfG_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__TextxMusicVolume__pfG_MetaData[] = {
				{ "Category", "Options" },
				{ "DisplayName", "Text - Music Volume" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/Options__pf1232574660.h" },
				{ "OverrideNativeName", "Text-MusicVolume" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__TextxMusicVolume__pfG = { UE4CodeGen_Private::EPropertyClass::Object, "Text-MusicVolume", RF_Public|RF_Transient, 0x001000000008000c, 1, nullptr, STRUCT_OFFSET(UOptions_C__pf1232574660, bpv__TextxMusicVolume__pfG), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(NewProp_bpv__TextxMusicVolume__pfG_MetaData, ARRAY_COUNT(NewProp_bpv__TextxMusicVolume__pfG_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__TextxMasterVolume__pfG_MetaData[] = {
				{ "Category", "Options" },
				{ "DisplayName", "Text - Master Volume" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/Options__pf1232574660.h" },
				{ "OverrideNativeName", "Text-MasterVolume" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__TextxMasterVolume__pfG = { UE4CodeGen_Private::EPropertyClass::Object, "Text-MasterVolume", RF_Public|RF_Transient, 0x001000000008000c, 1, nullptr, STRUCT_OFFSET(UOptions_C__pf1232574660, bpv__TextxMasterVolume__pfG), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(NewProp_bpv__TextxMasterVolume__pfG_MetaData, ARRAY_COUNT(NewProp_bpv__TextxMasterVolume__pfG_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__TextxGraphicsSkin__pfG_MetaData[] = {
				{ "Category", "Options" },
				{ "DisplayName", "Text - Graphics Skin" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/Options__pf1232574660.h" },
				{ "OverrideNativeName", "Text-GraphicsSkin" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__TextxGraphicsSkin__pfG = { UE4CodeGen_Private::EPropertyClass::Object, "Text-GraphicsSkin", RF_Public|RF_Transient, 0x001000000008000c, 1, nullptr, STRUCT_OFFSET(UOptions_C__pf1232574660, bpv__TextxGraphicsSkin__pfG), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(NewProp_bpv__TextxGraphicsSkin__pfG_MetaData, ARRAY_COUNT(NewProp_bpv__TextxGraphicsSkin__pfG_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__TextxDisplayResolution__pfG_MetaData[] = {
				{ "Category", "Options" },
				{ "DisplayName", "Text - Display Resolution" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/Options__pf1232574660.h" },
				{ "OverrideNativeName", "Text-DisplayResolution" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__TextxDisplayResolution__pfG = { UE4CodeGen_Private::EPropertyClass::Object, "Text-DisplayResolution", RF_Public|RF_Transient, 0x001000000008000c, 1, nullptr, STRUCT_OFFSET(UOptions_C__pf1232574660, bpv__TextxDisplayResolution__pfG), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(NewProp_bpv__TextxDisplayResolution__pfG_MetaData, ARRAY_COUNT(NewProp_bpv__TextxDisplayResolution__pfG_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__TextxDisplayMode__pfG_MetaData[] = {
				{ "Category", "Options" },
				{ "DisplayName", "Text - Display Mode" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/Options__pf1232574660.h" },
				{ "OverrideNativeName", "Text-DisplayMode" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__TextxDisplayMode__pfG = { UE4CodeGen_Private::EPropertyClass::Object, "Text-DisplayMode", RF_Public|RF_Transient, 0x001000000008000c, 1, nullptr, STRUCT_OFFSET(UOptions_C__pf1232574660, bpv__TextxDisplayMode__pfG), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(NewProp_bpv__TextxDisplayMode__pfG_MetaData, ARRAY_COUNT(NewProp_bpv__TextxDisplayMode__pfG_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__SFXVolume__pf_MetaData[] = {
				{ "Category", "Options" },
				{ "DisplayName", "SFX Volume" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/Options__pf1232574660.h" },
				{ "OverrideNativeName", "SFXVolume" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__SFXVolume__pf = { UE4CodeGen_Private::EPropertyClass::Object, "SFXVolume", RF_Public|RF_Transient, 0x001000000008000c, 1, nullptr, STRUCT_OFFSET(UOptions_C__pf1232574660, bpv__SFXVolume__pf), Z_Construct_UClass_UHorizontalBox_NoRegister, METADATA_PARAMS(NewProp_bpv__SFXVolume__pf_MetaData, ARRAY_COUNT(NewProp_bpv__SFXVolume__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__RenderScaleOption__pf_MetaData[] = {
				{ "Category", "Options" },
				{ "DisplayName", "RenderScaleOption" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/Options__pf1232574660.h" },
				{ "OverrideNativeName", "RenderScaleOption" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__RenderScaleOption__pf = { UE4CodeGen_Private::EPropertyClass::Object, "RenderScaleOption", RF_Public|RF_Transient, 0x001000000008000c, 1, nullptr, STRUCT_OFFSET(UOptions_C__pf1232574660, bpv__RenderScaleOption__pf), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(NewProp_bpv__RenderScaleOption__pf_MetaData, ARRAY_COUNT(NewProp_bpv__RenderScaleOption__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__RenderScale__pf_MetaData[] = {
				{ "Category", "Options" },
				{ "DisplayName", "Render Scale" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/Options__pf1232574660.h" },
				{ "OverrideNativeName", "RenderScale" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__RenderScale__pf = { UE4CodeGen_Private::EPropertyClass::Object, "RenderScale", RF_Public|RF_Transient, 0x001000000008000c, 1, nullptr, STRUCT_OFFSET(UOptions_C__pf1232574660, bpv__RenderScale__pf), Z_Construct_UClass_UHorizontalBox_NoRegister, METADATA_PARAMS(NewProp_bpv__RenderScale__pf_MetaData, ARRAY_COUNT(NewProp_bpv__RenderScale__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__MusicVolume__pf_MetaData[] = {
				{ "Category", "Options" },
				{ "DisplayName", "Music Volume" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/Options__pf1232574660.h" },
				{ "OverrideNativeName", "MusicVolume" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__MusicVolume__pf = { UE4CodeGen_Private::EPropertyClass::Object, "MusicVolume", RF_Public|RF_Transient, 0x001000000008000c, 1, nullptr, STRUCT_OFFSET(UOptions_C__pf1232574660, bpv__MusicVolume__pf), Z_Construct_UClass_UHorizontalBox_NoRegister, METADATA_PARAMS(NewProp_bpv__MusicVolume__pf_MetaData, ARRAY_COUNT(NewProp_bpv__MusicVolume__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__MasterVolume__pf_MetaData[] = {
				{ "Category", "Options" },
				{ "DisplayName", "Master Volume" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/Options__pf1232574660.h" },
				{ "OverrideNativeName", "MasterVolume" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__MasterVolume__pf = { UE4CodeGen_Private::EPropertyClass::Object, "MasterVolume", RF_Public|RF_Transient, 0x001000000008000c, 1, nullptr, STRUCT_OFFSET(UOptions_C__pf1232574660, bpv__MasterVolume__pf), Z_Construct_UClass_UHorizontalBox_NoRegister, METADATA_PARAMS(NewProp_bpv__MasterVolume__pf_MetaData, ARRAY_COUNT(NewProp_bpv__MasterVolume__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__GraphicsSkinOptions__pf_MetaData[] = {
				{ "Category", "Options" },
				{ "DisplayName", "GraphicsSkinOptions" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/Options__pf1232574660.h" },
				{ "OverrideNativeName", "GraphicsSkinOptions" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__GraphicsSkinOptions__pf = { UE4CodeGen_Private::EPropertyClass::Object, "GraphicsSkinOptions", RF_Public|RF_Transient, 0x001000000008000c, 1, nullptr, STRUCT_OFFSET(UOptions_C__pf1232574660, bpv__GraphicsSkinOptions__pf), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(NewProp_bpv__GraphicsSkinOptions__pf_MetaData, ARRAY_COUNT(NewProp_bpv__GraphicsSkinOptions__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__GraphicsSkin__pf_MetaData[] = {
				{ "Category", "Options" },
				{ "DisplayName", "Graphics Skin" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/Options__pf1232574660.h" },
				{ "OverrideNativeName", "GraphicsSkin" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__GraphicsSkin__pf = { UE4CodeGen_Private::EPropertyClass::Object, "GraphicsSkin", RF_Public|RF_Transient, 0x001000000008000c, 1, nullptr, STRUCT_OFFSET(UOptions_C__pf1232574660, bpv__GraphicsSkin__pf), Z_Construct_UClass_UHorizontalBox_NoRegister, METADATA_PARAMS(NewProp_bpv__GraphicsSkin__pf_MetaData, ARRAY_COUNT(NewProp_bpv__GraphicsSkin__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__DisplayResolutionOptions__pf_MetaData[] = {
				{ "Category", "Options" },
				{ "DisplayName", "DisplayResolutionOptions" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/Options__pf1232574660.h" },
				{ "OverrideNativeName", "DisplayResolutionOptions" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__DisplayResolutionOptions__pf = { UE4CodeGen_Private::EPropertyClass::Object, "DisplayResolutionOptions", RF_Public|RF_Transient, 0x001000000008000c, 1, nullptr, STRUCT_OFFSET(UOptions_C__pf1232574660, bpv__DisplayResolutionOptions__pf), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(NewProp_bpv__DisplayResolutionOptions__pf_MetaData, ARRAY_COUNT(NewProp_bpv__DisplayResolutionOptions__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__DisplayResolution__pf_MetaData[] = {
				{ "Category", "Options" },
				{ "DisplayName", "Display Resolution" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/Options__pf1232574660.h" },
				{ "OverrideNativeName", "DisplayResolution" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__DisplayResolution__pf = { UE4CodeGen_Private::EPropertyClass::Object, "DisplayResolution", RF_Public|RF_Transient, 0x001000000008000c, 1, nullptr, STRUCT_OFFSET(UOptions_C__pf1232574660, bpv__DisplayResolution__pf), Z_Construct_UClass_UHorizontalBox_NoRegister, METADATA_PARAMS(NewProp_bpv__DisplayResolution__pf_MetaData, ARRAY_COUNT(NewProp_bpv__DisplayResolution__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__DisplayModeOptions__pf_MetaData[] = {
				{ "Category", "Options" },
				{ "DisplayName", "DisplayModeOptions" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/Options__pf1232574660.h" },
				{ "OverrideNativeName", "DisplayModeOptions" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__DisplayModeOptions__pf = { UE4CodeGen_Private::EPropertyClass::Object, "DisplayModeOptions", RF_Public|RF_Transient, 0x001000000008000c, 1, nullptr, STRUCT_OFFSET(UOptions_C__pf1232574660, bpv__DisplayModeOptions__pf), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(NewProp_bpv__DisplayModeOptions__pf_MetaData, ARRAY_COUNT(NewProp_bpv__DisplayModeOptions__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Asteroids__pf_MetaData[] = {
				{ "Category", "Options" },
				{ "DisplayName", "Asteroids" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/Options__pf1232574660.h" },
				{ "OverrideNativeName", "Asteroids" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__Asteroids__pf = { UE4CodeGen_Private::EPropertyClass::Object, "Asteroids", RF_Public|RF_Transient, 0x001000000008000c, 1, nullptr, STRUCT_OFFSET(UOptions_C__pf1232574660, bpv__Asteroids__pf), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(NewProp_bpv__Asteroids__pf_MetaData, ARRAY_COUNT(NewProp_bpv__Asteroids__pf_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b1l__K2Node_SwitchEnum13_CmpSuccess__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b1l__K2Node_SwitchEnum12_CmpSuccess__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b1l__K2Node_SwitchEnum11_CmpSuccess__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b1l__K2Node_SwitchEnum10_CmpSuccess__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b1l__K2Node_MakeStruct_SlateColor15__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b1l__K2Node_MakeStruct_SlateColor14__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b1l__K2Node_MakeStruct_SlateColor13__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b1l__K2Node_MakeStruct_SlateColor12__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b1l__K2Node_MakeStruct_SlateColor11__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b1l__K2Node_MakeStruct_SlateColor10__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b1l__K2Node_MakeStruct_SlateColor9__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b1l__K2Node_MakeStruct_SlateColor8__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b1l__K2Node_SwitchEnum9_CmpSuccess__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b1l__K2Node_SwitchEnum8_CmpSuccess__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b1l__K2Node_MakeStruct_SlateColor7__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b1l__K2Node_MakeStruct_SlateColor6__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b1l__K2Node_MakeStruct_SlateColor5__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b1l__K2Node_MakeStruct_SlateColor4__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b1l__K2Node_MakeStruct_SlateColor3__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b1l__K2Node_MakeStruct_SlateColor2__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b1l__K2Node_MakeStruct_SlateColor1__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b1l__K2Node_MakeStruct_SlateColor__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b1l__K2Node_SwitchEnum7_CmpSuccess__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b1l__CallFunc_Array_Get_Item2__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b1l__CallFunc_GetSupportedFullscreenResolutions_Resolutions2__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b1l__CallFunc_GetSupportedFullscreenResolutions_Resolutions2__pf_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b1l__CallFunc_Array_Get_Item1__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b1l__K2Node_SwitchEnum6_CmpSuccess__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b1l__CallFunc_Array_Get_Item__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b1l__CallFunc_GetSupportedFullscreenResolutions_Resolutions1__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b1l__CallFunc_GetSupportedFullscreenResolutions_Resolutions1__pf_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b1l__CallFunc_GetSupportedFullscreenResolutions_Resolutions__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b1l__CallFunc_GetSupportedFullscreenResolutions_Resolutions__pf_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b1l__K2Node_SwitchEnum5_CmpSuccess__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b1l__K2Node_DynamicCast_bSuccess1__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b1l__K2Node_DynamicCast_AsDebug_Instance__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b1l__K2Node_SwitchEnum4_CmpSuccess__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b1l__K2Node_SwitchEnum3_CmpSuccess__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b1l__K2Node_SwitchEnum2_CmpSuccess__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b1l__K2Node_SwitchEnum1_CmpSuccess__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b1l__K2Node_Event_InDeltaTime__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b1l__K2Node_Event_MyGeometry__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b1l__K2Node_DynamicCast_bSuccess__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b1l__K2Node_DynamicCast_AsPlayer_C_Regular__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b1l__K2Node_SwitchEnum_CmpSuccess__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bpv__ElapsedTime__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bpv__ValChangeInterval__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bpv__RenderValDirection__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bpv__RenderValDirection__pf_Underlying,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bpv__IncreaseRenderScale__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bpv__DecreaseRenderScale__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bpv__RenderScaleVal__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bpv__V_SyncString__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bpv__SelRes__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bpv__DisplayxResxSel__pfTT,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bpv__DisplayxResxSel__pfTT_Underlying,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bpv__WindowxModexSel__pfTT,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bpv__InOption__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bpv__OptionxSelection__pfT,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bpv__OptionxSelection__pfT_Underlying,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bpv__Windowsdisplayoption__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bpv__vSyncOption__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bpv__VerticalSync__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bpv__TextxvSync__pfG,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bpv__TextxSFXVolume__pfG,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bpv__TextxRenderScale__pfG,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bpv__TextxMusicVolume__pfG,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bpv__TextxMasterVolume__pfG,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bpv__TextxGraphicsSkin__pfG,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bpv__TextxDisplayResolution__pfG,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bpv__TextxDisplayMode__pfG,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bpv__SFXVolume__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bpv__RenderScaleOption__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bpv__RenderScale__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bpv__MusicVolume__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bpv__MasterVolume__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bpv__GraphicsSkinOptions__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bpv__GraphicsSkin__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bpv__DisplayResolutionOptions__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bpv__DisplayResolution__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bpv__DisplayModeOptions__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bpv__Asteroids__pf,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UOptions_C__pf1232574660>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UOptions_C__pf1232574660::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00A01080u,
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
	IMPLEMENT_DYNAMIC_CLASS(UOptions_C__pf1232574660, TEXT("Options_C"), 1448161230);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UOptions_C__pf1232574660(Z_Construct_UClass_UOptions_C__pf1232574660, &UOptions_C__pf1232574660::StaticClass, TEXT("/Game/UserInterface/MainScreen/Options"), TEXT("Options_C"), true, TEXT("/Game/UserInterface/MainScreen/Options"), TEXT("/Game/UserInterface/MainScreen/Options.Options_C"), nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOptions_C__pf1232574660);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
