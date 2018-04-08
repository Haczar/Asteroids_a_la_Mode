// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Private/NativizedAssets.h"
#include "Public/Coop__pf1232574660.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCoop__pf1232574660() {}
// Cross Module References
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_UCoop_C__pf1232574660_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_UCoop_C__pf1232574660();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	NATIVIZEDASSETS_API UFunction* Z_Construct_UFunction_UCoop_C__pf1232574660_bpf__Construct__pf();
	NATIVIZEDASSETS_API UFunction* Z_Construct_UFunction_UCoop_C__pf1232574660_bpf__MenuxBack__pfT();
	NATIVIZEDASSETS_API UFunction* Z_Construct_UFunction_UCoop_C__pf1232574660_bpf__MenuxSelect__pfT();
	NATIVIZEDASSETS_API UFunction* Z_Construct_UFunction_UCoop_C__pf1232574660_bpf__MovexDown__pfT();
	NATIVIZEDASSETS_API UFunction* Z_Construct_UFunction_UCoop_C__pf1232574660_bpf__MovexUp__pfT();
	NATIVIZEDASSETS_API UFunction* Z_Construct_UFunction_UCoop_C__pf1232574660_bpf__RevertxAlphaxxMenuxItemx__pfTTLTK();
	NATIVIZEDASSETS_API UFunction* Z_Construct_UFunction_UCoop_C__pf1232574660_bpf__SetxAlphaxxMenuxItemx__pfTTLTK();
	NATIVIZEDASSETS_API UEnum* Z_Construct_UEnum_NativizedAssets_E__ECoOpSel__pf();
	NATIVIZEDASSETS_API UFunction* Z_Construct_UFunction_UCoop_C__pf1232574660_bpf__SetxObjxxColorxandxOpacity__pfT3TTT();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateColor();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_APlayerC_Regular_C__pf4061722237_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_UDebugInstance_C__pf4162722864_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
// End Cross Module References
	static FName NAME_UCoop_C__pf1232574660_bpf__Construct__pf = FName(TEXT("Construct"));
	void UCoop_C__pf1232574660::eventbpf__Construct__pf()
	{
		ProcessEvent(FindFunctionChecked(NAME_UCoop_C__pf1232574660_bpf__Construct__pf),NULL);
	}
	void UCoop_C__pf1232574660::StaticRegisterNativesUCoop_C__pf1232574660()
	{
		UClass* Class = UCoop_C__pf1232574660::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Construct", &UCoop_C__pf1232574660::execbpf__Construct__pf },
			{ "Menu Back", &UCoop_C__pf1232574660::execbpf__MenuxBack__pfT },
			{ "Menu Select", &UCoop_C__pf1232574660::execbpf__MenuxSelect__pfT },
			{ "Move Down", &UCoop_C__pf1232574660::execbpf__MovexDown__pfT },
			{ "Move Up", &UCoop_C__pf1232574660::execbpf__MovexUp__pfT },
			{ "Revert Alpha (Menu Item)", &UCoop_C__pf1232574660::execbpf__RevertxAlphaxxMenuxItemx__pfTTLTK },
			{ "Set Alpha (Menu Item)", &UCoop_C__pf1232574660::execbpf__SetxAlphaxxMenuxItemx__pfTTLTK },
			{ "Set Obj: Color and Opacity", &UCoop_C__pf1232574660::execbpf__SetxObjxxColorxandxOpacity__pfT3TTT },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UCoop_C__pf1232574660_bpf__Construct__pf()
	{
		UObject* Outer = Z_Construct_UClass_UCoop_C__pf1232574660();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("Construct") ));
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "User Interface" },
				{ "CppFromBpEvent", "" },
				{ "Keywords", "Begin Play" },
				{ "ModuleRelativePath", "Public/Coop__pf1232574660.h" },
				{ "OverrideNativeName", "Construct" },
				{ "ToolTip", "Called after the underlying slate widget is constructed.  Depending on how the slate object is usedthis event may be called multiple times due to adding and removing from the hierarchy." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoop_C__pf1232574660, "Construct", RF_Public|RF_Transient, nullptr, (EFunctionFlags)0x00020C09, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UCoop_C__pf1232574660_bpf__MenuxBack__pfT()
	{
		UObject* Outer = Z_Construct_UClass_UCoop_C__pf1232574660();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("Menu Back") ));
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "" },
				{ "ModuleRelativePath", "Public/Coop__pf1232574660.h" },
				{ "OverrideNativeName", "Menu Back" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoop_C__pf1232574660, "Menu Back", RF_Public|RF_Transient, nullptr, (EFunctionFlags)0x04020400, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UCoop_C__pf1232574660_bpf__MenuxSelect__pfT()
	{
		UObject* Outer = Z_Construct_UClass_UCoop_C__pf1232574660();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("Menu Select") ));
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "" },
				{ "ModuleRelativePath", "Public/Coop__pf1232574660.h" },
				{ "OverrideNativeName", "Menu Select" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoop_C__pf1232574660, "Menu Select", RF_Public|RF_Transient, nullptr, (EFunctionFlags)0x04020400, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UCoop_C__pf1232574660_bpf__MovexDown__pfT()
	{
		UObject* Outer = Z_Construct_UClass_UCoop_C__pf1232574660();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("Move Down") ));
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "" },
				{ "ModuleRelativePath", "Public/Coop__pf1232574660.h" },
				{ "OverrideNativeName", "Move Down" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoop_C__pf1232574660, "Move Down", RF_Public|RF_Transient, nullptr, (EFunctionFlags)0x04020400, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UCoop_C__pf1232574660_bpf__MovexUp__pfT()
	{
		UObject* Outer = Z_Construct_UClass_UCoop_C__pf1232574660();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("Move Up") ));
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "" },
				{ "ModuleRelativePath", "Public/Coop__pf1232574660.h" },
				{ "OverrideNativeName", "Move Up" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoop_C__pf1232574660, "Move Up", RF_Public|RF_Transient, nullptr, (EFunctionFlags)0x04020400, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UCoop_C__pf1232574660_bpf__RevertxAlphaxxMenuxItemx__pfTTLTK()
	{
		UObject* Outer = Z_Construct_UClass_UCoop_C__pf1232574660();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("Revert Alpha (Menu Item)") ));
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "" },
				{ "ModuleRelativePath", "Public/Coop__pf1232574660.h" },
				{ "OverrideNativeName", "Revert Alpha (Menu Item)" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoop_C__pf1232574660, "Revert Alpha (Menu Item)", RF_Public|RF_Transient, nullptr, (EFunctionFlags)0x04020400, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UCoop_C__pf1232574660_bpf__SetxAlphaxxMenuxItemx__pfTTLTK()
	{
		struct Coop_C__pf1232574660_eventbpf__SetxAlphaxxMenuxItemx__pfTTLTK_Parms
		{
			E__ECoOpSel__pf bpp__Selection__pf;
		};
		UObject* Outer = Z_Construct_UClass_UCoop_C__pf1232574660();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("Set Alpha (Menu Item)") ));
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_bpp__Selection__pf = { UE4CodeGen_Private::EPropertyClass::Enum, "bpp__Selection__pf", RF_Public|RF_Transient, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Coop_C__pf1232574660_eventbpf__SetxAlphaxxMenuxItemx__pfTTLTK_Parms, bpp__Selection__pf), Z_Construct_UEnum_NativizedAssets_E__ECoOpSel__pf, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_bpp__Selection__pf_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bpp__Selection__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bpp__Selection__pf_Underlying,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "" },
				{ "ModuleRelativePath", "Public/Coop__pf1232574660.h" },
				{ "OverrideNativeName", "Set Alpha (Menu Item)" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoop_C__pf1232574660, "Set Alpha (Menu Item)", RF_Public|RF_Transient, nullptr, (EFunctionFlags)0x04020400, sizeof(Coop_C__pf1232574660_eventbpf__SetxAlphaxxMenuxItemx__pfTTLTK_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UCoop_C__pf1232574660_bpf__SetxObjxxColorxandxOpacity__pfT3TTT()
	{
		struct Coop_C__pf1232574660_eventbpf__SetxObjxxColorxandxOpacity__pfT3TTT_Parms
		{
			UTextBlock* bpp__TextxObj__pfT;
			FSlateColor bpp__ColorxandxAlpha__pfTT;
		};
		UObject* Outer = Z_Construct_UClass_UCoop_C__pf1232574660();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("Set Obj: Color and Opacity") ));
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_bpp__ColorxandxAlpha__pfTT = { UE4CodeGen_Private::EPropertyClass::Struct, "bpp__ColorxandxAlpha__pfTT", RF_Public|RF_Transient, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Coop_C__pf1232574660_eventbpf__SetxObjxxColorxandxOpacity__pfT3TTT_Parms, bpp__ColorxandxAlpha__pfTT), Z_Construct_UScriptStruct_FSlateColor, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpp__TextxObj__pfT_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpp__TextxObj__pfT = { UE4CodeGen_Private::EPropertyClass::Object, "bpp__TextxObj__pfT", RF_Public|RF_Transient, 0x0010000000080080, 1, nullptr, STRUCT_OFFSET(Coop_C__pf1232574660_eventbpf__SetxObjxxColorxandxOpacity__pfT3TTT_Parms, bpp__TextxObj__pfT), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(NewProp_bpp__TextxObj__pfT_MetaData, ARRAY_COUNT(NewProp_bpp__TextxObj__pfT_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bpp__ColorxandxAlpha__pfTT,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bpp__TextxObj__pfT,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "" },
				{ "ModuleRelativePath", "Public/Coop__pf1232574660.h" },
				{ "OverrideNativeName", "Set Obj: Color and Opacity" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoop_C__pf1232574660, "Set Obj: Color and Opacity", RF_Public|RF_Transient, nullptr, (EFunctionFlags)0x04020400, sizeof(Coop_C__pf1232574660_eventbpf__SetxObjxxColorxandxOpacity__pfT3TTT_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCoop_C__pf1232574660_NoRegister()
	{
		return UCoop_C__pf1232574660::StaticClass();
	}
	UClass* Z_Construct_UClass_UCoop_C__pf1232574660()
	{
		UPackage* OuterPackage = FindOrConstructDynamicTypePackage(TEXT("/Game/UserInterface/MainScreen/Coop"));
		UClass* OuterClass = Cast<UClass>(StaticFindObjectFast(UClass::StaticClass(), OuterPackage, TEXT("Coop_C")));
		if (!OuterClass || !(OuterClass->ClassFlags & CLASS_Constructed))
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UUserWidget,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UCoop_C__pf1232574660_bpf__Construct__pf, "Construct" }, // 1372348482
				{ &Z_Construct_UFunction_UCoop_C__pf1232574660_bpf__MenuxBack__pfT, "Menu Back" }, // 1699160148
				{ &Z_Construct_UFunction_UCoop_C__pf1232574660_bpf__MenuxSelect__pfT, "Menu Select" }, // 2032759433
				{ &Z_Construct_UFunction_UCoop_C__pf1232574660_bpf__MovexDown__pfT, "Move Down" }, // 3667151767
				{ &Z_Construct_UFunction_UCoop_C__pf1232574660_bpf__MovexUp__pfT, "Move Up" }, // 1802510300
				{ &Z_Construct_UFunction_UCoop_C__pf1232574660_bpf__RevertxAlphaxxMenuxItemx__pfTTLTK, "Revert Alpha (Menu Item)" }, // 2416031395
				{ &Z_Construct_UFunction_UCoop_C__pf1232574660_bpf__SetxAlphaxxMenuxItemx__pfTTLTK, "Set Alpha (Menu Item)" }, // 4099480050
				{ &Z_Construct_UFunction_UCoop_C__pf1232574660_bpf__SetxObjxxColorxandxOpacity__pfT3TTT, "Set Obj: Color and Opacity" }, // 1281504003
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "IncludePath", "Coop__pf1232574660.h" },
				{ "IsBlueprintBase", "true" },
				{ "ModuleRelativePath", "Public/Coop__pf1232574660.h" },
				{ "ObjectInitializerConstructorDeclared", "" },
				{ "OverrideNativeName", "Coop_C" },
				{ "ReplaceConverted", "/Game/UserInterface/MainScreen/Coop.Coop_C" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_bSuccess2__pf_MetaData[] = {
				{ "ModuleRelativePath", "Public/Coop__pf1232574660.h" },
				{ "OverrideNativeName", "K2Node_DynamicCast_bSuccess2" },
			};
#endif
			auto NewProp_b0l__K2Node_DynamicCast_bSuccess2__pf_SetBit = [](void* Obj){ ((UCoop_C__pf1232574660*)Obj)->b0l__K2Node_DynamicCast_bSuccess2__pf = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b0l__K2Node_DynamicCast_bSuccess2__pf = { UE4CodeGen_Private::EPropertyClass::Bool, "K2Node_DynamicCast_bSuccess2", RF_Public|RF_Transient, 0x0010000000202000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UCoop_C__pf1232574660), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_b0l__K2Node_DynamicCast_bSuccess2__pf_SetBit)>::SetBit, METADATA_PARAMS(NewProp_b0l__K2Node_DynamicCast_bSuccess2__pf_MetaData, ARRAY_COUNT(NewProp_b0l__K2Node_DynamicCast_bSuccess2__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_AsPlayer_C_Regular1__pf_MetaData[] = {
				{ "ModuleRelativePath", "Public/Coop__pf1232574660.h" },
				{ "OverrideNativeName", "K2Node_DynamicCast_AsPlayer_C_Regular1" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__K2Node_DynamicCast_AsPlayer_C_Regular1__pf = { UE4CodeGen_Private::EPropertyClass::Object, "K2Node_DynamicCast_AsPlayer_C_Regular1", RF_Public|RF_Transient, 0x0010000000202000, 1, nullptr, STRUCT_OFFSET(UCoop_C__pf1232574660, b0l__K2Node_DynamicCast_AsPlayer_C_Regular1__pf), Z_Construct_UClass_APlayerC_Regular_C__pf4061722237_NoRegister, METADATA_PARAMS(NewProp_b0l__K2Node_DynamicCast_AsPlayer_C_Regular1__pf_MetaData, ARRAY_COUNT(NewProp_b0l__K2Node_DynamicCast_AsPlayer_C_Regular1__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_SwitchEnum_CmpSuccess__pf_MetaData[] = {
				{ "ModuleRelativePath", "Public/Coop__pf1232574660.h" },
				{ "OverrideNativeName", "K2Node_SwitchEnum_CmpSuccess" },
			};
#endif
			auto NewProp_b0l__K2Node_SwitchEnum_CmpSuccess__pf_SetBit = [](void* Obj){ ((UCoop_C__pf1232574660*)Obj)->b0l__K2Node_SwitchEnum_CmpSuccess__pf = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b0l__K2Node_SwitchEnum_CmpSuccess__pf = { UE4CodeGen_Private::EPropertyClass::Bool, "K2Node_SwitchEnum_CmpSuccess", RF_Public|RF_Transient, 0x0010000000202000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UCoop_C__pf1232574660), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_b0l__K2Node_SwitchEnum_CmpSuccess__pf_SetBit)>::SetBit, METADATA_PARAMS(NewProp_b0l__K2Node_SwitchEnum_CmpSuccess__pf_MetaData, ARRAY_COUNT(NewProp_b0l__K2Node_SwitchEnum_CmpSuccess__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_bSuccess1__pf_MetaData[] = {
				{ "ModuleRelativePath", "Public/Coop__pf1232574660.h" },
				{ "OverrideNativeName", "K2Node_DynamicCast_bSuccess1" },
			};
#endif
			auto NewProp_b0l__K2Node_DynamicCast_bSuccess1__pf_SetBit = [](void* Obj){ ((UCoop_C__pf1232574660*)Obj)->b0l__K2Node_DynamicCast_bSuccess1__pf = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b0l__K2Node_DynamicCast_bSuccess1__pf = { UE4CodeGen_Private::EPropertyClass::Bool, "K2Node_DynamicCast_bSuccess1", RF_Public|RF_Transient, 0x0010000000202000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UCoop_C__pf1232574660), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_b0l__K2Node_DynamicCast_bSuccess1__pf_SetBit)>::SetBit, METADATA_PARAMS(NewProp_b0l__K2Node_DynamicCast_bSuccess1__pf_MetaData, ARRAY_COUNT(NewProp_b0l__K2Node_DynamicCast_bSuccess1__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_AsPlayer_C_Regular__pf_MetaData[] = {
				{ "ModuleRelativePath", "Public/Coop__pf1232574660.h" },
				{ "OverrideNativeName", "K2Node_DynamicCast_AsPlayer_C_Regular" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__K2Node_DynamicCast_AsPlayer_C_Regular__pf = { UE4CodeGen_Private::EPropertyClass::Object, "K2Node_DynamicCast_AsPlayer_C_Regular", RF_Public|RF_Transient, 0x0010000000202000, 1, nullptr, STRUCT_OFFSET(UCoop_C__pf1232574660, b0l__K2Node_DynamicCast_AsPlayer_C_Regular__pf), Z_Construct_UClass_APlayerC_Regular_C__pf4061722237_NoRegister, METADATA_PARAMS(NewProp_b0l__K2Node_DynamicCast_AsPlayer_C_Regular__pf_MetaData, ARRAY_COUNT(NewProp_b0l__K2Node_DynamicCast_AsPlayer_C_Regular__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_MakeStruct_SlateColor__pf_MetaData[] = {
				{ "ModuleRelativePath", "Public/Coop__pf1232574660.h" },
				{ "OverrideNativeName", "K2Node_MakeStruct_SlateColor" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_b0l__K2Node_MakeStruct_SlateColor__pf = { UE4CodeGen_Private::EPropertyClass::Struct, "K2Node_MakeStruct_SlateColor", RF_Public|RF_Transient, 0x0010000000202000, 1, nullptr, STRUCT_OFFSET(UCoop_C__pf1232574660, b0l__K2Node_MakeStruct_SlateColor__pf), Z_Construct_UScriptStruct_FSlateColor, METADATA_PARAMS(NewProp_b0l__K2Node_MakeStruct_SlateColor__pf_MetaData, ARRAY_COUNT(NewProp_b0l__K2Node_MakeStruct_SlateColor__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_MetaData[] = {
				{ "ModuleRelativePath", "Public/Coop__pf1232574660.h" },
				{ "OverrideNativeName", "K2Node_DynamicCast_bSuccess" },
			};
#endif
			auto NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_SetBit = [](void* Obj){ ((UCoop_C__pf1232574660*)Obj)->b0l__K2Node_DynamicCast_bSuccess__pf = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b0l__K2Node_DynamicCast_bSuccess__pf = { UE4CodeGen_Private::EPropertyClass::Bool, "K2Node_DynamicCast_bSuccess", RF_Public|RF_Transient, 0x0010000000202000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UCoop_C__pf1232574660), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_SetBit)>::SetBit, METADATA_PARAMS(NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_MetaData, ARRAY_COUNT(NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_AsDebug_Instance__pf_MetaData[] = {
				{ "ModuleRelativePath", "Public/Coop__pf1232574660.h" },
				{ "OverrideNativeName", "K2Node_DynamicCast_AsDebug_Instance" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__K2Node_DynamicCast_AsDebug_Instance__pf = { UE4CodeGen_Private::EPropertyClass::Object, "K2Node_DynamicCast_AsDebug_Instance", RF_Public|RF_Transient, 0x0010000000202000, 1, nullptr, STRUCT_OFFSET(UCoop_C__pf1232574660, b0l__K2Node_DynamicCast_AsDebug_Instance__pf), Z_Construct_UClass_UDebugInstance_C__pf4162722864_NoRegister, METADATA_PARAMS(NewProp_b0l__K2Node_DynamicCast_AsDebug_Instance__pf_MetaData, ARRAY_COUNT(NewProp_b0l__K2Node_DynamicCast_AsDebug_Instance__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__CoOpxSelection__pfT_MetaData[] = {
				{ "Category", "Default" },
				{ "DisplayName", "Co Op Selection" },
				{ "ModuleRelativePath", "Public/Coop__pf1232574660.h" },
				{ "OverrideNativeName", "CoOp Selection" },
			};
#endif
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_bpv__CoOpxSelection__pfT = { UE4CodeGen_Private::EPropertyClass::Enum, "CoOp Selection", RF_Public|RF_Transient, 0x0010000000010005, 1, nullptr, STRUCT_OFFSET(UCoop_C__pf1232574660, bpv__CoOpxSelection__pfT), Z_Construct_UEnum_NativizedAssets_E__ECoOpSel__pf, METADATA_PARAMS(NewProp_bpv__CoOpxSelection__pfT_MetaData, ARRAY_COUNT(NewProp_bpv__CoOpxSelection__pfT_MetaData)) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_bpv__CoOpxSelection__pfT_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__TextxJoinGame__pfG_MetaData[] = {
				{ "Category", "Coop" },
				{ "DisplayName", "Text - Join Game" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/Coop__pf1232574660.h" },
				{ "OverrideNativeName", "Text-JoinGame" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__TextxJoinGame__pfG = { UE4CodeGen_Private::EPropertyClass::Object, "Text-JoinGame", RF_Public|RF_Transient, 0x001000000008000c, 1, nullptr, STRUCT_OFFSET(UCoop_C__pf1232574660, bpv__TextxJoinGame__pfG), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(NewProp_bpv__TextxJoinGame__pfG_MetaData, ARRAY_COUNT(NewProp_bpv__TextxJoinGame__pfG_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__TextxHostGame__pfG_MetaData[] = {
				{ "Category", "Coop" },
				{ "DisplayName", "Text - Host Game" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/Coop__pf1232574660.h" },
				{ "OverrideNativeName", "Text-HostGame" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__TextxHostGame__pfG = { UE4CodeGen_Private::EPropertyClass::Object, "Text-HostGame", RF_Public|RF_Transient, 0x001000000008000c, 1, nullptr, STRUCT_OFFSET(UCoop_C__pf1232574660, bpv__TextxHostGame__pfG), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(NewProp_bpv__TextxHostGame__pfG_MetaData, ARRAY_COUNT(NewProp_bpv__TextxHostGame__pfG_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__TextxBack__pfG_MetaData[] = {
				{ "Category", "Coop" },
				{ "DisplayName", "Text - Back" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/Coop__pf1232574660.h" },
				{ "OverrideNativeName", "Text-Back" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__TextxBack__pfG = { UE4CodeGen_Private::EPropertyClass::Object, "Text-Back", RF_Public|RF_Transient, 0x001000000008000c, 1, nullptr, STRUCT_OFFSET(UCoop_C__pf1232574660, bpv__TextxBack__pfG), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(NewProp_bpv__TextxBack__pfG_MetaData, ARRAY_COUNT(NewProp_bpv__TextxBack__pfG_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__JoinGame__pf_MetaData[] = {
				{ "Category", "Coop" },
				{ "DisplayName", "Join Game" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/Coop__pf1232574660.h" },
				{ "OverrideNativeName", "JoinGame" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__JoinGame__pf = { UE4CodeGen_Private::EPropertyClass::Object, "JoinGame", RF_Public|RF_Transient, 0x001000000008000c, 1, nullptr, STRUCT_OFFSET(UCoop_C__pf1232574660, bpv__JoinGame__pf), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(NewProp_bpv__JoinGame__pf_MetaData, ARRAY_COUNT(NewProp_bpv__JoinGame__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__HostGame__pf_MetaData[] = {
				{ "Category", "Coop" },
				{ "DisplayName", "Host Game" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/Coop__pf1232574660.h" },
				{ "OverrideNativeName", "HostGame" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__HostGame__pf = { UE4CodeGen_Private::EPropertyClass::Object, "HostGame", RF_Public|RF_Transient, 0x001000000008000c, 1, nullptr, STRUCT_OFFSET(UCoop_C__pf1232574660, bpv__HostGame__pf), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(NewProp_bpv__HostGame__pf_MetaData, ARRAY_COUNT(NewProp_bpv__HostGame__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Back__pf_MetaData[] = {
				{ "Category", "Coop" },
				{ "DisplayName", "Back" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/Coop__pf1232574660.h" },
				{ "OverrideNativeName", "Back" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__Back__pf = { UE4CodeGen_Private::EPropertyClass::Object, "Back", RF_Public|RF_Transient, 0x001000000008000c, 1, nullptr, STRUCT_OFFSET(UCoop_C__pf1232574660, bpv__Back__pf), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(NewProp_bpv__Back__pf_MetaData, ARRAY_COUNT(NewProp_bpv__Back__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Asteroids__pf_MetaData[] = {
				{ "Category", "Coop" },
				{ "DisplayName", "Asteroids" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/Coop__pf1232574660.h" },
				{ "OverrideNativeName", "Asteroids" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__Asteroids__pf = { UE4CodeGen_Private::EPropertyClass::Object, "Asteroids", RF_Public|RF_Transient, 0x001000000008000c, 1, nullptr, STRUCT_OFFSET(UCoop_C__pf1232574660, bpv__Asteroids__pf), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(NewProp_bpv__Asteroids__pf_MetaData, ARRAY_COUNT(NewProp_bpv__Asteroids__pf_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b0l__K2Node_DynamicCast_bSuccess2__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b0l__K2Node_DynamicCast_AsPlayer_C_Regular1__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b0l__K2Node_SwitchEnum_CmpSuccess__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b0l__K2Node_DynamicCast_bSuccess1__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b0l__K2Node_DynamicCast_AsPlayer_C_Regular__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b0l__K2Node_MakeStruct_SlateColor__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b0l__K2Node_DynamicCast_bSuccess__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b0l__K2Node_DynamicCast_AsDebug_Instance__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bpv__CoOpxSelection__pfT,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bpv__CoOpxSelection__pfT_Underlying,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bpv__TextxJoinGame__pfG,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bpv__TextxHostGame__pfG,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bpv__TextxBack__pfG,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bpv__JoinGame__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bpv__HostGame__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bpv__Back__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bpv__Asteroids__pf,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UCoop_C__pf1232574660>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UCoop_C__pf1232574660::StaticClass,
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
	IMPLEMENT_DYNAMIC_CLASS(UCoop_C__pf1232574660, TEXT("Coop_C"), 882725199);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCoop_C__pf1232574660(Z_Construct_UClass_UCoop_C__pf1232574660, &UCoop_C__pf1232574660::StaticClass, TEXT("/Game/UserInterface/MainScreen/Coop"), TEXT("Coop_C"), true, TEXT("/Game/UserInterface/MainScreen/Coop"), TEXT("/Game/UserInterface/MainScreen/Coop.Coop_C"), nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCoop_C__pf1232574660);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
