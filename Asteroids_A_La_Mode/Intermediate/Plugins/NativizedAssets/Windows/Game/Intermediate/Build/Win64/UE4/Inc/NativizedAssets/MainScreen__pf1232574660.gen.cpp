// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Private/NativizedAssets.h"
#include "Public/MainScreen__pf1232574660.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMainScreen__pf1232574660() {}
// Cross Module References
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_UMainScreen_C__pf1232574660_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_UMainScreen_C__pf1232574660();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	NATIVIZEDASSETS_API UFunction* Z_Construct_UFunction_UMainScreen_C__pf1232574660_bpf__Construct__pf();
	NATIVIZEDASSETS_API UFunction* Z_Construct_UFunction_UMainScreen_C__pf1232574660_bpf__DebugxxChangeMode__pf3T();
	NATIVIZEDASSETS_API UFunction* Z_Construct_UFunction_UMainScreen_C__pf1232574660_bpf__Get_TextxStartG_ColorAndOpacity_0__pfG();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateColor();
	NATIVIZEDASSETS_API UFunction* Z_Construct_UFunction_UMainScreen_C__pf1232574660_bpf__MenuxSelect__pfT();
	NATIVIZEDASSETS_API UFunction* Z_Construct_UFunction_UMainScreen_C__pf1232574660_bpf__MovexDown__pfT();
	NATIVIZEDASSETS_API UFunction* Z_Construct_UFunction_UMainScreen_C__pf1232574660_bpf__MovexUp__pfT();
	NATIVIZEDASSETS_API UFunction* Z_Construct_UFunction_UMainScreen_C__pf1232574660_bpf__RevertxAlphaxxMenuxItemx__pfTTLTK();
	NATIVIZEDASSETS_API UFunction* Z_Construct_UFunction_UMainScreen_C__pf1232574660_bpf__SetxAlphaxxMenuxItemx__pfTTLTK();
	NATIVIZEDASSETS_API UEnum* Z_Construct_UEnum_NativizedAssets_E__EMenSel__pf();
	NATIVIZEDASSETS_API UFunction* Z_Construct_UFunction_UMainScreen_C__pf1232574660_bpf__SetxObjxxColorxandxOpacity__pfT3TTT();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_APlayerC_Regular_C__pf4061722237_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_ADebugState_C__pf4162722864_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_UDebugInstance_C__pf4162722864_NoRegister();
	NATIVIZEDASSETS_API UEnum* Z_Construct_UEnum_NativizedAssets_E__DStates__pf();
	UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
// End Cross Module References
	static FName NAME_UMainScreen_C__pf1232574660_bpf__Construct__pf = FName(TEXT("Construct"));
	void UMainScreen_C__pf1232574660::eventbpf__Construct__pf()
	{
		ProcessEvent(FindFunctionChecked(NAME_UMainScreen_C__pf1232574660_bpf__Construct__pf),NULL);
	}
	void UMainScreen_C__pf1232574660::StaticRegisterNativesUMainScreen_C__pf1232574660()
	{
		UClass* Class = UMainScreen_C__pf1232574660::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Construct", &UMainScreen_C__pf1232574660::execbpf__Construct__pf },
			{ "Debug: ChangeMode", &UMainScreen_C__pf1232574660::execbpf__DebugxxChangeMode__pf3T },
			{ "Get_Text-StartG_ColorAndOpacity_0", &UMainScreen_C__pf1232574660::execbpf__Get_TextxStartG_ColorAndOpacity_0__pfG },
			{ "Menu Select", &UMainScreen_C__pf1232574660::execbpf__MenuxSelect__pfT },
			{ "Move Down", &UMainScreen_C__pf1232574660::execbpf__MovexDown__pfT },
			{ "Move Up", &UMainScreen_C__pf1232574660::execbpf__MovexUp__pfT },
			{ "Revert Alpha (Menu Item)", &UMainScreen_C__pf1232574660::execbpf__RevertxAlphaxxMenuxItemx__pfTTLTK },
			{ "Set Alpha (Menu Item)", &UMainScreen_C__pf1232574660::execbpf__SetxAlphaxxMenuxItemx__pfTTLTK },
			{ "Set Obj: Color and Opacity", &UMainScreen_C__pf1232574660::execbpf__SetxObjxxColorxandxOpacity__pfT3TTT },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UMainScreen_C__pf1232574660_bpf__Construct__pf()
	{
		UObject* Outer = Z_Construct_UClass_UMainScreen_C__pf1232574660();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("Construct") ));
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "User Interface" },
				{ "CppFromBpEvent", "" },
				{ "Keywords", "Begin Play" },
				{ "ModuleRelativePath", "Public/MainScreen__pf1232574660.h" },
				{ "OverrideNativeName", "Construct" },
				{ "ToolTip", "Called after the underlying slate widget is constructed.  Depending on how the slate object is usedthis event may be called multiple times due to adding and removing from the hierarchy." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UMainScreen_C__pf1232574660, "Construct", RF_Public|RF_Transient, nullptr, (EFunctionFlags)0x00020C09, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMainScreen_C__pf1232574660_bpf__DebugxxChangeMode__pf3T()
	{
		UObject* Outer = Z_Construct_UClass_UMainScreen_C__pf1232574660();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("Debug: ChangeMode") ));
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "" },
				{ "ModuleRelativePath", "Public/MainScreen__pf1232574660.h" },
				{ "OverrideNativeName", "Debug: ChangeMode" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UMainScreen_C__pf1232574660, "Debug: ChangeMode", RF_Public|RF_Transient, nullptr, (EFunctionFlags)0x04020400, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMainScreen_C__pf1232574660_bpf__Get_TextxStartG_ColorAndOpacity_0__pfG()
	{
		struct MainScreen_C__pf1232574660_eventbpf__Get_TextxStartG_ColorAndOpacity_0__pfG_Parms
		{
			FSlateColor ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_UMainScreen_C__pf1232574660();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("Get_Text-StartG_ColorAndOpacity_0") ));
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(MainScreen_C__pf1232574660_eventbpf__Get_TextxStartG_ColorAndOpacity_0__pfG_Parms, ReturnValue), Z_Construct_UScriptStruct_FSlateColor, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "" },
				{ "ModuleRelativePath", "Public/MainScreen__pf1232574660.h" },
				{ "OverrideNativeName", "Get_Text-StartG_ColorAndOpacity_0" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UMainScreen_C__pf1232574660, "Get_Text-StartG_ColorAndOpacity_0", RF_Public|RF_Transient, nullptr, (EFunctionFlags)0x14020400, sizeof(MainScreen_C__pf1232574660_eventbpf__Get_TextxStartG_ColorAndOpacity_0__pfG_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMainScreen_C__pf1232574660_bpf__MenuxSelect__pfT()
	{
		UObject* Outer = Z_Construct_UClass_UMainScreen_C__pf1232574660();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("Menu Select") ));
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "" },
				{ "ModuleRelativePath", "Public/MainScreen__pf1232574660.h" },
				{ "OverrideNativeName", "Menu Select" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UMainScreen_C__pf1232574660, "Menu Select", RF_Public|RF_Transient, nullptr, (EFunctionFlags)0x04020400, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMainScreen_C__pf1232574660_bpf__MovexDown__pfT()
	{
		UObject* Outer = Z_Construct_UClass_UMainScreen_C__pf1232574660();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("Move Down") ));
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "" },
				{ "ModuleRelativePath", "Public/MainScreen__pf1232574660.h" },
				{ "OverrideNativeName", "Move Down" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UMainScreen_C__pf1232574660, "Move Down", RF_Public|RF_Transient, nullptr, (EFunctionFlags)0x04020400, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMainScreen_C__pf1232574660_bpf__MovexUp__pfT()
	{
		UObject* Outer = Z_Construct_UClass_UMainScreen_C__pf1232574660();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("Move Up") ));
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "" },
				{ "ModuleRelativePath", "Public/MainScreen__pf1232574660.h" },
				{ "OverrideNativeName", "Move Up" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UMainScreen_C__pf1232574660, "Move Up", RF_Public|RF_Transient, nullptr, (EFunctionFlags)0x04020400, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMainScreen_C__pf1232574660_bpf__RevertxAlphaxxMenuxItemx__pfTTLTK()
	{
		UObject* Outer = Z_Construct_UClass_UMainScreen_C__pf1232574660();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("Revert Alpha (Menu Item)") ));
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "" },
				{ "ModuleRelativePath", "Public/MainScreen__pf1232574660.h" },
				{ "OverrideNativeName", "Revert Alpha (Menu Item)" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UMainScreen_C__pf1232574660, "Revert Alpha (Menu Item)", RF_Public|RF_Transient, nullptr, (EFunctionFlags)0x04020400, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMainScreen_C__pf1232574660_bpf__SetxAlphaxxMenuxItemx__pfTTLTK()
	{
		struct MainScreen_C__pf1232574660_eventbpf__SetxAlphaxxMenuxItemx__pfTTLTK_Parms
		{
			E__EMenSel__pf bpp__Selection__pf;
		};
		UObject* Outer = Z_Construct_UClass_UMainScreen_C__pf1232574660();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("Set Alpha (Menu Item)") ));
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_bpp__Selection__pf = { UE4CodeGen_Private::EPropertyClass::Enum, "bpp__Selection__pf", RF_Public|RF_Transient, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MainScreen_C__pf1232574660_eventbpf__SetxAlphaxxMenuxItemx__pfTTLTK_Parms, bpp__Selection__pf), Z_Construct_UEnum_NativizedAssets_E__EMenSel__pf, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_bpp__Selection__pf_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bpp__Selection__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bpp__Selection__pf_Underlying,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "" },
				{ "ModuleRelativePath", "Public/MainScreen__pf1232574660.h" },
				{ "OverrideNativeName", "Set Alpha (Menu Item)" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UMainScreen_C__pf1232574660, "Set Alpha (Menu Item)", RF_Public|RF_Transient, nullptr, (EFunctionFlags)0x04020400, sizeof(MainScreen_C__pf1232574660_eventbpf__SetxAlphaxxMenuxItemx__pfTTLTK_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMainScreen_C__pf1232574660_bpf__SetxObjxxColorxandxOpacity__pfT3TTT()
	{
		struct MainScreen_C__pf1232574660_eventbpf__SetxObjxxColorxandxOpacity__pfT3TTT_Parms
		{
			UTextBlock* bpp__TextxObj__pfT;
			FSlateColor bpp__ColorxandxOpacity__pfTT;
		};
		UObject* Outer = Z_Construct_UClass_UMainScreen_C__pf1232574660();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("Set Obj: Color and Opacity") ));
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_bpp__ColorxandxOpacity__pfTT = { UE4CodeGen_Private::EPropertyClass::Struct, "bpp__ColorxandxOpacity__pfTT", RF_Public|RF_Transient, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(MainScreen_C__pf1232574660_eventbpf__SetxObjxxColorxandxOpacity__pfT3TTT_Parms, bpp__ColorxandxOpacity__pfTT), Z_Construct_UScriptStruct_FSlateColor, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpp__TextxObj__pfT_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpp__TextxObj__pfT = { UE4CodeGen_Private::EPropertyClass::Object, "bpp__TextxObj__pfT", RF_Public|RF_Transient, 0x0010000000080180, 1, nullptr, STRUCT_OFFSET(MainScreen_C__pf1232574660_eventbpf__SetxObjxxColorxandxOpacity__pfT3TTT_Parms, bpp__TextxObj__pfT), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(NewProp_bpp__TextxObj__pfT_MetaData, ARRAY_COUNT(NewProp_bpp__TextxObj__pfT_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bpp__ColorxandxOpacity__pfTT,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bpp__TextxObj__pfT,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "" },
				{ "ModuleRelativePath", "Public/MainScreen__pf1232574660.h" },
				{ "OverrideNativeName", "Set Obj: Color and Opacity" },
				{ "ToolTip", "out" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UMainScreen_C__pf1232574660, "Set Obj: Color and Opacity", RF_Public|RF_Transient, nullptr, (EFunctionFlags)0x04420400, sizeof(MainScreen_C__pf1232574660_eventbpf__SetxObjxxColorxandxOpacity__pfT3TTT_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UMainScreen_C__pf1232574660_NoRegister()
	{
		return UMainScreen_C__pf1232574660::StaticClass();
	}
	UClass* Z_Construct_UClass_UMainScreen_C__pf1232574660()
	{
		UPackage* OuterPackage = FindOrConstructDynamicTypePackage(TEXT("/Game/UserInterface/MainScreen/MainScreen"));
		UClass* OuterClass = Cast<UClass>(StaticFindObjectFast(UClass::StaticClass(), OuterPackage, TEXT("MainScreen_C")));
		if (!OuterClass || !(OuterClass->ClassFlags & CLASS_Constructed))
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UUserWidget,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UMainScreen_C__pf1232574660_bpf__Construct__pf, "Construct" }, // 4204752843
				{ &Z_Construct_UFunction_UMainScreen_C__pf1232574660_bpf__DebugxxChangeMode__pf3T, "Debug: ChangeMode" }, // 2458380895
				{ &Z_Construct_UFunction_UMainScreen_C__pf1232574660_bpf__Get_TextxStartG_ColorAndOpacity_0__pfG, "Get_Text-StartG_ColorAndOpacity_0" }, // 1998538714
				{ &Z_Construct_UFunction_UMainScreen_C__pf1232574660_bpf__MenuxSelect__pfT, "Menu Select" }, // 432955068
				{ &Z_Construct_UFunction_UMainScreen_C__pf1232574660_bpf__MovexDown__pfT, "Move Down" }, // 53694015
				{ &Z_Construct_UFunction_UMainScreen_C__pf1232574660_bpf__MovexUp__pfT, "Move Up" }, // 1959822975
				{ &Z_Construct_UFunction_UMainScreen_C__pf1232574660_bpf__RevertxAlphaxxMenuxItemx__pfTTLTK, "Revert Alpha (Menu Item)" }, // 1734551901
				{ &Z_Construct_UFunction_UMainScreen_C__pf1232574660_bpf__SetxAlphaxxMenuxItemx__pfTTLTK, "Set Alpha (Menu Item)" }, // 1665842695
				{ &Z_Construct_UFunction_UMainScreen_C__pf1232574660_bpf__SetxObjxxColorxandxOpacity__pfT3TTT, "Set Obj: Color and Opacity" }, // 1823473977
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "IncludePath", "MainScreen__pf1232574660.h" },
				{ "IsBlueprintBase", "true" },
				{ "ModuleRelativePath", "Public/MainScreen__pf1232574660.h" },
				{ "ObjectInitializerConstructorDeclared", "" },
				{ "OverrideNativeName", "MainScreen_C" },
				{ "ReplaceConverted", "/Game/UserInterface/MainScreen/MainScreen.MainScreen_C" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_bSuccess4__pf_MetaData[] = {
				{ "ModuleRelativePath", "Public/MainScreen__pf1232574660.h" },
				{ "OverrideNativeName", "K2Node_DynamicCast_bSuccess4" },
			};
#endif
			auto NewProp_b0l__K2Node_DynamicCast_bSuccess4__pf_SetBit = [](void* Obj){ ((UMainScreen_C__pf1232574660*)Obj)->b0l__K2Node_DynamicCast_bSuccess4__pf = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b0l__K2Node_DynamicCast_bSuccess4__pf = { UE4CodeGen_Private::EPropertyClass::Bool, "K2Node_DynamicCast_bSuccess4", RF_Public|RF_Transient, 0x0010000000202000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UMainScreen_C__pf1232574660), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_b0l__K2Node_DynamicCast_bSuccess4__pf_SetBit)>::SetBit, METADATA_PARAMS(NewProp_b0l__K2Node_DynamicCast_bSuccess4__pf_MetaData, ARRAY_COUNT(NewProp_b0l__K2Node_DynamicCast_bSuccess4__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_AsPlayer_C_Regular1__pf_MetaData[] = {
				{ "ModuleRelativePath", "Public/MainScreen__pf1232574660.h" },
				{ "OverrideNativeName", "K2Node_DynamicCast_AsPlayer_C_Regular1" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__K2Node_DynamicCast_AsPlayer_C_Regular1__pf = { UE4CodeGen_Private::EPropertyClass::Object, "K2Node_DynamicCast_AsPlayer_C_Regular1", RF_Public|RF_Transient, 0x0010000000202000, 1, nullptr, STRUCT_OFFSET(UMainScreen_C__pf1232574660, b0l__K2Node_DynamicCast_AsPlayer_C_Regular1__pf), Z_Construct_UClass_APlayerC_Regular_C__pf4061722237_NoRegister, METADATA_PARAMS(NewProp_b0l__K2Node_DynamicCast_AsPlayer_C_Regular1__pf_MetaData, ARRAY_COUNT(NewProp_b0l__K2Node_DynamicCast_AsPlayer_C_Regular1__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_bSuccess3__pf_MetaData[] = {
				{ "ModuleRelativePath", "Public/MainScreen__pf1232574660.h" },
				{ "OverrideNativeName", "K2Node_DynamicCast_bSuccess3" },
			};
#endif
			auto NewProp_b0l__K2Node_DynamicCast_bSuccess3__pf_SetBit = [](void* Obj){ ((UMainScreen_C__pf1232574660*)Obj)->b0l__K2Node_DynamicCast_bSuccess3__pf = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b0l__K2Node_DynamicCast_bSuccess3__pf = { UE4CodeGen_Private::EPropertyClass::Bool, "K2Node_DynamicCast_bSuccess3", RF_Public|RF_Transient, 0x0010000000202000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UMainScreen_C__pf1232574660), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_b0l__K2Node_DynamicCast_bSuccess3__pf_SetBit)>::SetBit, METADATA_PARAMS(NewProp_b0l__K2Node_DynamicCast_bSuccess3__pf_MetaData, ARRAY_COUNT(NewProp_b0l__K2Node_DynamicCast_bSuccess3__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_AsPlayer_C_Regular__pf_MetaData[] = {
				{ "ModuleRelativePath", "Public/MainScreen__pf1232574660.h" },
				{ "OverrideNativeName", "K2Node_DynamicCast_AsPlayer_C_Regular" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__K2Node_DynamicCast_AsPlayer_C_Regular__pf = { UE4CodeGen_Private::EPropertyClass::Object, "K2Node_DynamicCast_AsPlayer_C_Regular", RF_Public|RF_Transient, 0x0010000000202000, 1, nullptr, STRUCT_OFFSET(UMainScreen_C__pf1232574660, b0l__K2Node_DynamicCast_AsPlayer_C_Regular__pf), Z_Construct_UClass_APlayerC_Regular_C__pf4061722237_NoRegister, METADATA_PARAMS(NewProp_b0l__K2Node_DynamicCast_AsPlayer_C_Regular__pf_MetaData, ARRAY_COUNT(NewProp_b0l__K2Node_DynamicCast_AsPlayer_C_Regular__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_SwitchEnum1_CmpSuccess__pf_MetaData[] = {
				{ "ModuleRelativePath", "Public/MainScreen__pf1232574660.h" },
				{ "OverrideNativeName", "K2Node_SwitchEnum1_CmpSuccess" },
			};
#endif
			auto NewProp_b0l__K2Node_SwitchEnum1_CmpSuccess__pf_SetBit = [](void* Obj){ ((UMainScreen_C__pf1232574660*)Obj)->b0l__K2Node_SwitchEnum1_CmpSuccess__pf = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b0l__K2Node_SwitchEnum1_CmpSuccess__pf = { UE4CodeGen_Private::EPropertyClass::Bool, "K2Node_SwitchEnum1_CmpSuccess", RF_Public|RF_Transient, 0x0010000000202000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UMainScreen_C__pf1232574660), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_b0l__K2Node_SwitchEnum1_CmpSuccess__pf_SetBit)>::SetBit, METADATA_PARAMS(NewProp_b0l__K2Node_SwitchEnum1_CmpSuccess__pf_MetaData, ARRAY_COUNT(NewProp_b0l__K2Node_SwitchEnum1_CmpSuccess__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_bSuccess2__pf_MetaData[] = {
				{ "ModuleRelativePath", "Public/MainScreen__pf1232574660.h" },
				{ "OverrideNativeName", "K2Node_DynamicCast_bSuccess2" },
			};
#endif
			auto NewProp_b0l__K2Node_DynamicCast_bSuccess2__pf_SetBit = [](void* Obj){ ((UMainScreen_C__pf1232574660*)Obj)->b0l__K2Node_DynamicCast_bSuccess2__pf = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b0l__K2Node_DynamicCast_bSuccess2__pf = { UE4CodeGen_Private::EPropertyClass::Bool, "K2Node_DynamicCast_bSuccess2", RF_Public|RF_Transient, 0x0010000000202000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UMainScreen_C__pf1232574660), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_b0l__K2Node_DynamicCast_bSuccess2__pf_SetBit)>::SetBit, METADATA_PARAMS(NewProp_b0l__K2Node_DynamicCast_bSuccess2__pf_MetaData, ARRAY_COUNT(NewProp_b0l__K2Node_DynamicCast_bSuccess2__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_AsDebug_State__pf_MetaData[] = {
				{ "ModuleRelativePath", "Public/MainScreen__pf1232574660.h" },
				{ "OverrideNativeName", "K2Node_DynamicCast_AsDebug_State" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__K2Node_DynamicCast_AsDebug_State__pf = { UE4CodeGen_Private::EPropertyClass::Object, "K2Node_DynamicCast_AsDebug_State", RF_Public|RF_Transient, 0x0010000000202000, 1, nullptr, STRUCT_OFFSET(UMainScreen_C__pf1232574660, b0l__K2Node_DynamicCast_AsDebug_State__pf), Z_Construct_UClass_ADebugState_C__pf4162722864_NoRegister, METADATA_PARAMS(NewProp_b0l__K2Node_DynamicCast_AsDebug_State__pf_MetaData, ARRAY_COUNT(NewProp_b0l__K2Node_DynamicCast_AsDebug_State__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_MakeStruct_SlateColor__pf_MetaData[] = {
				{ "ModuleRelativePath", "Public/MainScreen__pf1232574660.h" },
				{ "OverrideNativeName", "K2Node_MakeStruct_SlateColor" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_b0l__K2Node_MakeStruct_SlateColor__pf = { UE4CodeGen_Private::EPropertyClass::Struct, "K2Node_MakeStruct_SlateColor", RF_Public|RF_Transient, 0x0010000000202000, 1, nullptr, STRUCT_OFFSET(UMainScreen_C__pf1232574660, b0l__K2Node_MakeStruct_SlateColor__pf), Z_Construct_UScriptStruct_FSlateColor, METADATA_PARAMS(NewProp_b0l__K2Node_MakeStruct_SlateColor__pf_MetaData, ARRAY_COUNT(NewProp_b0l__K2Node_MakeStruct_SlateColor__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_bSuccess1__pf_MetaData[] = {
				{ "ModuleRelativePath", "Public/MainScreen__pf1232574660.h" },
				{ "OverrideNativeName", "K2Node_DynamicCast_bSuccess1" },
			};
#endif
			auto NewProp_b0l__K2Node_DynamicCast_bSuccess1__pf_SetBit = [](void* Obj){ ((UMainScreen_C__pf1232574660*)Obj)->b0l__K2Node_DynamicCast_bSuccess1__pf = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b0l__K2Node_DynamicCast_bSuccess1__pf = { UE4CodeGen_Private::EPropertyClass::Bool, "K2Node_DynamicCast_bSuccess1", RF_Public|RF_Transient, 0x0010000000202000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UMainScreen_C__pf1232574660), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_b0l__K2Node_DynamicCast_bSuccess1__pf_SetBit)>::SetBit, METADATA_PARAMS(NewProp_b0l__K2Node_DynamicCast_bSuccess1__pf_MetaData, ARRAY_COUNT(NewProp_b0l__K2Node_DynamicCast_bSuccess1__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_AsDebug_Instance1__pf_MetaData[] = {
				{ "ModuleRelativePath", "Public/MainScreen__pf1232574660.h" },
				{ "OverrideNativeName", "K2Node_DynamicCast_AsDebug_Instance1" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__K2Node_DynamicCast_AsDebug_Instance1__pf = { UE4CodeGen_Private::EPropertyClass::Object, "K2Node_DynamicCast_AsDebug_Instance1", RF_Public|RF_Transient, 0x0010000000202000, 1, nullptr, STRUCT_OFFSET(UMainScreen_C__pf1232574660, b0l__K2Node_DynamicCast_AsDebug_Instance1__pf), Z_Construct_UClass_UDebugInstance_C__pf4162722864_NoRegister, METADATA_PARAMS(NewProp_b0l__K2Node_DynamicCast_AsDebug_Instance1__pf_MetaData, ARRAY_COUNT(NewProp_b0l__K2Node_DynamicCast_AsDebug_Instance1__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_MetaData[] = {
				{ "ModuleRelativePath", "Public/MainScreen__pf1232574660.h" },
				{ "OverrideNativeName", "K2Node_DynamicCast_bSuccess" },
			};
#endif
			auto NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_SetBit = [](void* Obj){ ((UMainScreen_C__pf1232574660*)Obj)->b0l__K2Node_DynamicCast_bSuccess__pf = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b0l__K2Node_DynamicCast_bSuccess__pf = { UE4CodeGen_Private::EPropertyClass::Bool, "K2Node_DynamicCast_bSuccess", RF_Public|RF_Transient, 0x0010000000202000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UMainScreen_C__pf1232574660), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_SetBit)>::SetBit, METADATA_PARAMS(NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_MetaData, ARRAY_COUNT(NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_AsDebug_Instance__pf_MetaData[] = {
				{ "ModuleRelativePath", "Public/MainScreen__pf1232574660.h" },
				{ "OverrideNativeName", "K2Node_DynamicCast_AsDebug_Instance" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__K2Node_DynamicCast_AsDebug_Instance__pf = { UE4CodeGen_Private::EPropertyClass::Object, "K2Node_DynamicCast_AsDebug_Instance", RF_Public|RF_Transient, 0x0010000000202000, 1, nullptr, STRUCT_OFFSET(UMainScreen_C__pf1232574660, b0l__K2Node_DynamicCast_AsDebug_Instance__pf), Z_Construct_UClass_UDebugInstance_C__pf4162722864_NoRegister, METADATA_PARAMS(NewProp_b0l__K2Node_DynamicCast_AsDebug_Instance__pf_MetaData, ARRAY_COUNT(NewProp_b0l__K2Node_DynamicCast_AsDebug_Instance__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_SwitchEnum_CmpSuccess__pf_MetaData[] = {
				{ "ModuleRelativePath", "Public/MainScreen__pf1232574660.h" },
				{ "OverrideNativeName", "K2Node_SwitchEnum_CmpSuccess" },
			};
#endif
			auto NewProp_b0l__K2Node_SwitchEnum_CmpSuccess__pf_SetBit = [](void* Obj){ ((UMainScreen_C__pf1232574660*)Obj)->b0l__K2Node_SwitchEnum_CmpSuccess__pf = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b0l__K2Node_SwitchEnum_CmpSuccess__pf = { UE4CodeGen_Private::EPropertyClass::Bool, "K2Node_SwitchEnum_CmpSuccess", RF_Public|RF_Transient, 0x0010000000202000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UMainScreen_C__pf1232574660), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_b0l__K2Node_SwitchEnum_CmpSuccess__pf_SetBit)>::SetBit, METADATA_PARAMS(NewProp_b0l__K2Node_SwitchEnum_CmpSuccess__pf_MetaData, ARRAY_COUNT(NewProp_b0l__K2Node_SwitchEnum_CmpSuccess__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__DM_GameModex__pfT_MetaData[] = {
				{ "Category", "Default" },
				{ "DisplayName", "DM Game Mode" },
				{ "ModuleRelativePath", "Public/MainScreen__pf1232574660.h" },
				{ "OverrideNativeName", "DM_GameMode" },
			};
#endif
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_bpv__DM_GameModex__pfT = { UE4CodeGen_Private::EPropertyClass::Enum, "DM_GameMode", RF_Public|RF_Transient, 0x0010000000010005, 1, nullptr, STRUCT_OFFSET(UMainScreen_C__pf1232574660, bpv__DM_GameModex__pfT), Z_Construct_UEnum_NativizedAssets_E__DStates__pf, METADATA_PARAMS(NewProp_bpv__DM_GameModex__pfT_MetaData, ARRAY_COUNT(NewProp_bpv__DM_GameModex__pfT_MetaData)) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_bpv__DM_GameModex__pfT_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__CurrentlySel__pf_MetaData[] = {
				{ "Category", "Default" },
				{ "DisplayName", "Currently Sel" },
				{ "ModuleRelativePath", "Public/MainScreen__pf1232574660.h" },
				{ "OverrideNativeName", "CurrentlySel" },
			};
#endif
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_bpv__CurrentlySel__pf = { UE4CodeGen_Private::EPropertyClass::Enum, "CurrentlySel", RF_Public|RF_Transient, 0x0010000000010005, 1, nullptr, STRUCT_OFFSET(UMainScreen_C__pf1232574660, bpv__CurrentlySel__pf), Z_Construct_UEnum_NativizedAssets_E__EMenSel__pf, METADATA_PARAMS(NewProp_bpv__CurrentlySel__pf_MetaData, ARRAY_COUNT(NewProp_bpv__CurrentlySel__pf_MetaData)) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_bpv__CurrentlySel__pf_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__TextxStartG__pfG_MetaData[] = {
				{ "Category", "MainScreen" },
				{ "DisplayName", "Text - StartG" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/MainScreen__pf1232574660.h" },
				{ "OverrideNativeName", "Text-StartG" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__TextxStartG__pfG = { UE4CodeGen_Private::EPropertyClass::Object, "Text-StartG", RF_Public|RF_Transient, 0x001000000008000c, 1, nullptr, STRUCT_OFFSET(UMainScreen_C__pf1232574660, bpv__TextxStartG__pfG), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(NewProp_bpv__TextxStartG__pfG_MetaData, ARRAY_COUNT(NewProp_bpv__TextxStartG__pfG_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__TextxOption__pfG_MetaData[] = {
				{ "Category", "MainScreen" },
				{ "DisplayName", "Text - Option" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/MainScreen__pf1232574660.h" },
				{ "OverrideNativeName", "Text-Option" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__TextxOption__pfG = { UE4CodeGen_Private::EPropertyClass::Object, "Text-Option", RF_Public|RF_Transient, 0x001000000008000c, 1, nullptr, STRUCT_OFFSET(UMainScreen_C__pf1232574660, bpv__TextxOption__pfG), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(NewProp_bpv__TextxOption__pfG_MetaData, ARRAY_COUNT(NewProp_bpv__TextxOption__pfG_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__TextxExit__pfG_MetaData[] = {
				{ "Category", "MainScreen" },
				{ "DisplayName", "Text- Exit" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/MainScreen__pf1232574660.h" },
				{ "OverrideNativeName", "Text-Exit" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__TextxExit__pfG = { UE4CodeGen_Private::EPropertyClass::Object, "Text-Exit", RF_Public|RF_Transient, 0x001000000008000c, 1, nullptr, STRUCT_OFFSET(UMainScreen_C__pf1232574660, bpv__TextxExit__pfG), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(NewProp_bpv__TextxExit__pfG_MetaData, ARRAY_COUNT(NewProp_bpv__TextxExit__pfG_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__TextxCoxOp__pfGG_MetaData[] = {
				{ "Category", "MainScreen" },
				{ "DisplayName", "Text - Co-Op" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/MainScreen__pf1232574660.h" },
				{ "OverrideNativeName", "Text-Co-Op" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__TextxCoxOp__pfGG = { UE4CodeGen_Private::EPropertyClass::Object, "Text-Co-Op", RF_Public|RF_Transient, 0x001000000008000c, 1, nullptr, STRUCT_OFFSET(UMainScreen_C__pf1232574660, bpv__TextxCoxOp__pfGG), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(NewProp_bpv__TextxCoxOp__pfGG_MetaData, ARRAY_COUNT(NewProp_bpv__TextxCoxOp__pfGG_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__StartGame__pf_MetaData[] = {
				{ "Category", "MainScreen" },
				{ "DisplayName", "Start Game" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/MainScreen__pf1232574660.h" },
				{ "OverrideNativeName", "StartGame" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__StartGame__pf = { UE4CodeGen_Private::EPropertyClass::Object, "StartGame", RF_Public|RF_Transient, 0x001000000008000c, 1, nullptr, STRUCT_OFFSET(UMainScreen_C__pf1232574660, bpv__StartGame__pf), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(NewProp_bpv__StartGame__pf_MetaData, ARRAY_COUNT(NewProp_bpv__StartGame__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Option__pf_MetaData[] = {
				{ "Category", "MainScreen" },
				{ "DisplayName", "Option" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/MainScreen__pf1232574660.h" },
				{ "OverrideNativeName", "Option" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__Option__pf = { UE4CodeGen_Private::EPropertyClass::Object, "Option", RF_Public|RF_Transient, 0x001000000008000c, 1, nullptr, STRUCT_OFFSET(UMainScreen_C__pf1232574660, bpv__Option__pf), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(NewProp_bpv__Option__pf_MetaData, ARRAY_COUNT(NewProp_bpv__Option__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Exit__pf_MetaData[] = {
				{ "Category", "MainScreen" },
				{ "DisplayName", "Exit" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/MainScreen__pf1232574660.h" },
				{ "OverrideNativeName", "Exit" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__Exit__pf = { UE4CodeGen_Private::EPropertyClass::Object, "Exit", RF_Public|RF_Transient, 0x001000000008000c, 1, nullptr, STRUCT_OFFSET(UMainScreen_C__pf1232574660, bpv__Exit__pf), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(NewProp_bpv__Exit__pf_MetaData, ARRAY_COUNT(NewProp_bpv__Exit__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__CoxOp__pfG_MetaData[] = {
				{ "Category", "MainScreen" },
				{ "DisplayName", "Co-Op" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/MainScreen__pf1232574660.h" },
				{ "OverrideNativeName", "Co-Op" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__CoxOp__pfG = { UE4CodeGen_Private::EPropertyClass::Object, "Co-Op", RF_Public|RF_Transient, 0x001000000008000c, 1, nullptr, STRUCT_OFFSET(UMainScreen_C__pf1232574660, bpv__CoxOp__pfG), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(NewProp_bpv__CoxOp__pfG_MetaData, ARRAY_COUNT(NewProp_bpv__CoxOp__pfG_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__AsteroidsIMg__pf_MetaData[] = {
				{ "Category", "MainScreen" },
				{ "DisplayName", "AsteroidsIMg" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/MainScreen__pf1232574660.h" },
				{ "OverrideNativeName", "AsteroidsIMg" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__AsteroidsIMg__pf = { UE4CodeGen_Private::EPropertyClass::Object, "AsteroidsIMg", RF_Public|RF_Transient, 0x001000000008000c, 1, nullptr, STRUCT_OFFSET(UMainScreen_C__pf1232574660, bpv__AsteroidsIMg__pf), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(NewProp_bpv__AsteroidsIMg__pf_MetaData, ARRAY_COUNT(NewProp_bpv__AsteroidsIMg__pf_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b0l__K2Node_DynamicCast_bSuccess4__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b0l__K2Node_DynamicCast_AsPlayer_C_Regular1__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b0l__K2Node_DynamicCast_bSuccess3__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b0l__K2Node_DynamicCast_AsPlayer_C_Regular__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b0l__K2Node_SwitchEnum1_CmpSuccess__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b0l__K2Node_DynamicCast_bSuccess2__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b0l__K2Node_DynamicCast_AsDebug_State__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b0l__K2Node_MakeStruct_SlateColor__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b0l__K2Node_DynamicCast_bSuccess1__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b0l__K2Node_DynamicCast_AsDebug_Instance1__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b0l__K2Node_DynamicCast_bSuccess__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b0l__K2Node_DynamicCast_AsDebug_Instance__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b0l__K2Node_SwitchEnum_CmpSuccess__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bpv__DM_GameModex__pfT,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bpv__DM_GameModex__pfT_Underlying,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bpv__CurrentlySel__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bpv__CurrentlySel__pf_Underlying,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bpv__TextxStartG__pfG,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bpv__TextxOption__pfG,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bpv__TextxExit__pfG,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bpv__TextxCoxOp__pfGG,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bpv__StartGame__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bpv__Option__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bpv__Exit__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bpv__CoxOp__pfG,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bpv__AsteroidsIMg__pf,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UMainScreen_C__pf1232574660>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UMainScreen_C__pf1232574660::StaticClass,
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
	IMPLEMENT_DYNAMIC_CLASS(UMainScreen_C__pf1232574660, TEXT("MainScreen_C"), 1163248316);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMainScreen_C__pf1232574660(Z_Construct_UClass_UMainScreen_C__pf1232574660, &UMainScreen_C__pf1232574660::StaticClass, TEXT("/Game/UserInterface/MainScreen/MainScreen"), TEXT("MainScreen_C"), true, TEXT("/Game/UserInterface/MainScreen/MainScreen"), TEXT("/Game/UserInterface/MainScreen/MainScreen.MainScreen_C"), nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMainScreen_C__pf1232574660);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
