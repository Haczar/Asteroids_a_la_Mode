// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Private/NativizedAssets.h"
#include "Public/MenuPawn__pf4061722237.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMenuPawn__pf4061722237() {}
// Cross Module References
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_AMenuPawn_C__pf4061722237_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_AMenuPawn_C__pf4061722237();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	NATIVIZEDASSETS_API UFunction* Z_Construct_UFunction_AMenuPawn_C__pf4061722237_bpf__InpActEvt_MenuxBack_K2Node_InputActionEvent_6__pfT();
	INPUTCORE_API UScriptStruct* Z_Construct_UScriptStruct_FKey();
	NATIVIZEDASSETS_API UFunction* Z_Construct_UFunction_AMenuPawn_C__pf4061722237_bpf__InpActEvt_MenuxDown_K2Node_InputActionEvent_10__pfT();
	NATIVIZEDASSETS_API UFunction* Z_Construct_UFunction_AMenuPawn_C__pf4061722237_bpf__InpActEvt_MenuxDown_K2Node_InputActionEvent_11__pfT();
	NATIVIZEDASSETS_API UFunction* Z_Construct_UFunction_AMenuPawn_C__pf4061722237_bpf__InpActEvt_MenuxSelect_K2Node_InputActionEvent_7__pfT();
	NATIVIZEDASSETS_API UFunction* Z_Construct_UFunction_AMenuPawn_C__pf4061722237_bpf__InpActEvt_MenuxUp_K2Node_InputActionEvent_8__pfT();
	NATIVIZEDASSETS_API UFunction* Z_Construct_UFunction_AMenuPawn_C__pf4061722237_bpf__InpActEvt_MenuxUp_K2Node_InputActionEvent_9__pfT();
	NATIVIZEDASSETS_API UFunction* Z_Construct_UFunction_AMenuPawn_C__pf4061722237_bpf__UserConstructionScript__pf();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_UMainScreen_C__pf1232574660_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_ADebugState_C__pf4162722864_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_APlayerC_Regular_C__pf4061722237_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_UMenuBase_C__pf3166771619_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_UCoop_C__pf1232574660_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
// End Cross Module References
	static FName NAME_AMenuPawn_C__pf4061722237_bpf__UserConstructionScript__pf = FName(TEXT("UserConstructionScript"));
	void AMenuPawn_C__pf4061722237::eventbpf__UserConstructionScript__pf()
	{
		ProcessEvent(FindFunctionChecked(NAME_AMenuPawn_C__pf4061722237_bpf__UserConstructionScript__pf),NULL);
	}
	void AMenuPawn_C__pf4061722237::StaticRegisterNativesAMenuPawn_C__pf4061722237()
	{
		UClass* Class = AMenuPawn_C__pf4061722237::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "InpActEvt_Menu Back_K2Node_InputActionEvent_6", &AMenuPawn_C__pf4061722237::execbpf__InpActEvt_MenuxBack_K2Node_InputActionEvent_6__pfT },
			{ "InpActEvt_Menu Down_K2Node_InputActionEvent_10", &AMenuPawn_C__pf4061722237::execbpf__InpActEvt_MenuxDown_K2Node_InputActionEvent_10__pfT },
			{ "InpActEvt_Menu Down_K2Node_InputActionEvent_11", &AMenuPawn_C__pf4061722237::execbpf__InpActEvt_MenuxDown_K2Node_InputActionEvent_11__pfT },
			{ "InpActEvt_Menu Select_K2Node_InputActionEvent_7", &AMenuPawn_C__pf4061722237::execbpf__InpActEvt_MenuxSelect_K2Node_InputActionEvent_7__pfT },
			{ "InpActEvt_Menu Up_K2Node_InputActionEvent_8", &AMenuPawn_C__pf4061722237::execbpf__InpActEvt_MenuxUp_K2Node_InputActionEvent_8__pfT },
			{ "InpActEvt_Menu Up_K2Node_InputActionEvent_9", &AMenuPawn_C__pf4061722237::execbpf__InpActEvt_MenuxUp_K2Node_InputActionEvent_9__pfT },
			{ "UserConstructionScript", &AMenuPawn_C__pf4061722237::execbpf__UserConstructionScript__pf },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_AMenuPawn_C__pf4061722237_bpf__InpActEvt_MenuxBack_K2Node_InputActionEvent_6__pfT()
	{
		struct MenuPawn_C__pf4061722237_eventbpf__InpActEvt_MenuxBack_K2Node_InputActionEvent_6__pfT_Parms
		{
			FKey bpp__Key__pf;
		};
		UObject* Outer = Z_Construct_UClass_AMenuPawn_C__pf4061722237();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("InpActEvt_Menu Back_K2Node_InputActionEvent_6") ));
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_bpp__Key__pf = { UE4CodeGen_Private::EPropertyClass::Struct, "bpp__Key__pf", RF_Public|RF_Transient, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MenuPawn_C__pf4061722237_eventbpf__InpActEvt_MenuxBack_K2Node_InputActionEvent_6__pfT_Parms, bpp__Key__pf), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bpp__Key__pf,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/MenuPawn__pf4061722237.h" },
				{ "OverrideNativeName", "InpActEvt_Menu Back_K2Node_InputActionEvent_6" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AMenuPawn_C__pf4061722237, "InpActEvt_Menu Back_K2Node_InputActionEvent_6", RF_Public|RF_Transient, nullptr, (EFunctionFlags)0x00020400, sizeof(MenuPawn_C__pf4061722237_eventbpf__InpActEvt_MenuxBack_K2Node_InputActionEvent_6__pfT_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AMenuPawn_C__pf4061722237_bpf__InpActEvt_MenuxDown_K2Node_InputActionEvent_10__pfT()
	{
		struct MenuPawn_C__pf4061722237_eventbpf__InpActEvt_MenuxDown_K2Node_InputActionEvent_10__pfT_Parms
		{
			FKey bpp__Key__pf;
		};
		UObject* Outer = Z_Construct_UClass_AMenuPawn_C__pf4061722237();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("InpActEvt_Menu Down_K2Node_InputActionEvent_10") ));
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_bpp__Key__pf = { UE4CodeGen_Private::EPropertyClass::Struct, "bpp__Key__pf", RF_Public|RF_Transient, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MenuPawn_C__pf4061722237_eventbpf__InpActEvt_MenuxDown_K2Node_InputActionEvent_10__pfT_Parms, bpp__Key__pf), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bpp__Key__pf,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/MenuPawn__pf4061722237.h" },
				{ "OverrideNativeName", "InpActEvt_Menu Down_K2Node_InputActionEvent_10" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AMenuPawn_C__pf4061722237, "InpActEvt_Menu Down_K2Node_InputActionEvent_10", RF_Public|RF_Transient, nullptr, (EFunctionFlags)0x00020400, sizeof(MenuPawn_C__pf4061722237_eventbpf__InpActEvt_MenuxDown_K2Node_InputActionEvent_10__pfT_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AMenuPawn_C__pf4061722237_bpf__InpActEvt_MenuxDown_K2Node_InputActionEvent_11__pfT()
	{
		struct MenuPawn_C__pf4061722237_eventbpf__InpActEvt_MenuxDown_K2Node_InputActionEvent_11__pfT_Parms
		{
			FKey bpp__Key__pf;
		};
		UObject* Outer = Z_Construct_UClass_AMenuPawn_C__pf4061722237();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("InpActEvt_Menu Down_K2Node_InputActionEvent_11") ));
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_bpp__Key__pf = { UE4CodeGen_Private::EPropertyClass::Struct, "bpp__Key__pf", RF_Public|RF_Transient, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MenuPawn_C__pf4061722237_eventbpf__InpActEvt_MenuxDown_K2Node_InputActionEvent_11__pfT_Parms, bpp__Key__pf), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bpp__Key__pf,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/MenuPawn__pf4061722237.h" },
				{ "OverrideNativeName", "InpActEvt_Menu Down_K2Node_InputActionEvent_11" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AMenuPawn_C__pf4061722237, "InpActEvt_Menu Down_K2Node_InputActionEvent_11", RF_Public|RF_Transient, nullptr, (EFunctionFlags)0x00020400, sizeof(MenuPawn_C__pf4061722237_eventbpf__InpActEvt_MenuxDown_K2Node_InputActionEvent_11__pfT_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AMenuPawn_C__pf4061722237_bpf__InpActEvt_MenuxSelect_K2Node_InputActionEvent_7__pfT()
	{
		struct MenuPawn_C__pf4061722237_eventbpf__InpActEvt_MenuxSelect_K2Node_InputActionEvent_7__pfT_Parms
		{
			FKey bpp__Key__pf;
		};
		UObject* Outer = Z_Construct_UClass_AMenuPawn_C__pf4061722237();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("InpActEvt_Menu Select_K2Node_InputActionEvent_7") ));
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_bpp__Key__pf = { UE4CodeGen_Private::EPropertyClass::Struct, "bpp__Key__pf", RF_Public|RF_Transient, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MenuPawn_C__pf4061722237_eventbpf__InpActEvt_MenuxSelect_K2Node_InputActionEvent_7__pfT_Parms, bpp__Key__pf), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bpp__Key__pf,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/MenuPawn__pf4061722237.h" },
				{ "OverrideNativeName", "InpActEvt_Menu Select_K2Node_InputActionEvent_7" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AMenuPawn_C__pf4061722237, "InpActEvt_Menu Select_K2Node_InputActionEvent_7", RF_Public|RF_Transient, nullptr, (EFunctionFlags)0x00020400, sizeof(MenuPawn_C__pf4061722237_eventbpf__InpActEvt_MenuxSelect_K2Node_InputActionEvent_7__pfT_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AMenuPawn_C__pf4061722237_bpf__InpActEvt_MenuxUp_K2Node_InputActionEvent_8__pfT()
	{
		struct MenuPawn_C__pf4061722237_eventbpf__InpActEvt_MenuxUp_K2Node_InputActionEvent_8__pfT_Parms
		{
			FKey bpp__Key__pf;
		};
		UObject* Outer = Z_Construct_UClass_AMenuPawn_C__pf4061722237();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("InpActEvt_Menu Up_K2Node_InputActionEvent_8") ));
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_bpp__Key__pf = { UE4CodeGen_Private::EPropertyClass::Struct, "bpp__Key__pf", RF_Public|RF_Transient, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MenuPawn_C__pf4061722237_eventbpf__InpActEvt_MenuxUp_K2Node_InputActionEvent_8__pfT_Parms, bpp__Key__pf), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bpp__Key__pf,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/MenuPawn__pf4061722237.h" },
				{ "OverrideNativeName", "InpActEvt_Menu Up_K2Node_InputActionEvent_8" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AMenuPawn_C__pf4061722237, "InpActEvt_Menu Up_K2Node_InputActionEvent_8", RF_Public|RF_Transient, nullptr, (EFunctionFlags)0x00020400, sizeof(MenuPawn_C__pf4061722237_eventbpf__InpActEvt_MenuxUp_K2Node_InputActionEvent_8__pfT_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AMenuPawn_C__pf4061722237_bpf__InpActEvt_MenuxUp_K2Node_InputActionEvent_9__pfT()
	{
		struct MenuPawn_C__pf4061722237_eventbpf__InpActEvt_MenuxUp_K2Node_InputActionEvent_9__pfT_Parms
		{
			FKey bpp__Key__pf;
		};
		UObject* Outer = Z_Construct_UClass_AMenuPawn_C__pf4061722237();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("InpActEvt_Menu Up_K2Node_InputActionEvent_9") ));
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_bpp__Key__pf = { UE4CodeGen_Private::EPropertyClass::Struct, "bpp__Key__pf", RF_Public|RF_Transient, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MenuPawn_C__pf4061722237_eventbpf__InpActEvt_MenuxUp_K2Node_InputActionEvent_9__pfT_Parms, bpp__Key__pf), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bpp__Key__pf,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/MenuPawn__pf4061722237.h" },
				{ "OverrideNativeName", "InpActEvt_Menu Up_K2Node_InputActionEvent_9" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AMenuPawn_C__pf4061722237, "InpActEvt_Menu Up_K2Node_InputActionEvent_9", RF_Public|RF_Transient, nullptr, (EFunctionFlags)0x00020400, sizeof(MenuPawn_C__pf4061722237_eventbpf__InpActEvt_MenuxUp_K2Node_InputActionEvent_9__pfT_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AMenuPawn_C__pf4061722237_bpf__UserConstructionScript__pf()
	{
		UObject* Outer = Z_Construct_UClass_AMenuPawn_C__pf4061722237();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("UserConstructionScript") ));
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "BlueprintInternalUseOnly", "true" },
				{ "Category", "" },
				{ "CppFromBpEvent", "" },
				{ "DisplayName", "Construction Script" },
				{ "ModuleRelativePath", "Public/MenuPawn__pf4061722237.h" },
				{ "OverrideNativeName", "UserConstructionScript" },
				{ "ToolTip", "Construction script, the place to spawn components and do other setup.@note Name used in CreateBlueprint function@param       Location        The location.@param       Rotation        The rotation." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AMenuPawn_C__pf4061722237, "UserConstructionScript", RF_Public|RF_Transient, nullptr, (EFunctionFlags)0x04020C01, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AMenuPawn_C__pf4061722237_NoRegister()
	{
		return AMenuPawn_C__pf4061722237::StaticClass();
	}
	UClass* Z_Construct_UClass_AMenuPawn_C__pf4061722237()
	{
		UPackage* OuterPackage = FindOrConstructDynamicTypePackage(TEXT("/Game/Player/MenuPawn"));
		UClass* OuterClass = Cast<UClass>(StaticFindObjectFast(UClass::StaticClass(), OuterPackage, TEXT("MenuPawn_C")));
		if (!OuterClass || !(OuterClass->ClassFlags & CLASS_Constructed))
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_APawn,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_AMenuPawn_C__pf4061722237_bpf__InpActEvt_MenuxBack_K2Node_InputActionEvent_6__pfT, "InpActEvt_Menu Back_K2Node_InputActionEvent_6" }, // 3902079104
				{ &Z_Construct_UFunction_AMenuPawn_C__pf4061722237_bpf__InpActEvt_MenuxDown_K2Node_InputActionEvent_10__pfT, "InpActEvt_Menu Down_K2Node_InputActionEvent_10" }, // 2319693268
				{ &Z_Construct_UFunction_AMenuPawn_C__pf4061722237_bpf__InpActEvt_MenuxDown_K2Node_InputActionEvent_11__pfT, "InpActEvt_Menu Down_K2Node_InputActionEvent_11" }, // 2527601035
				{ &Z_Construct_UFunction_AMenuPawn_C__pf4061722237_bpf__InpActEvt_MenuxSelect_K2Node_InputActionEvent_7__pfT, "InpActEvt_Menu Select_K2Node_InputActionEvent_7" }, // 359479379
				{ &Z_Construct_UFunction_AMenuPawn_C__pf4061722237_bpf__InpActEvt_MenuxUp_K2Node_InputActionEvent_8__pfT, "InpActEvt_Menu Up_K2Node_InputActionEvent_8" }, // 3467279038
				{ &Z_Construct_UFunction_AMenuPawn_C__pf4061722237_bpf__InpActEvt_MenuxUp_K2Node_InputActionEvent_9__pfT, "InpActEvt_Menu Up_K2Node_InputActionEvent_9" }, // 3637864398
				{ &Z_Construct_UFunction_AMenuPawn_C__pf4061722237_bpf__UserConstructionScript__pf, "UserConstructionScript" }, // 652050733
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "HideCategories", "Navigation" },
				{ "IncludePath", "MenuPawn__pf4061722237.h" },
				{ "IsBlueprintBase", "true" },
				{ "ModuleRelativePath", "Public/MenuPawn__pf4061722237.h" },
				{ "ObjectInitializerConstructorDeclared", "" },
				{ "OverrideNativeName", "MenuPawn_C" },
				{ "ReplaceConverted", "/Game/Player/MenuPawn.MenuPawn_C" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_SwitchEnum3_CmpSuccess__pf_MetaData[] = {
				{ "ModuleRelativePath", "Public/MenuPawn__pf4061722237.h" },
				{ "OverrideNativeName", "K2Node_SwitchEnum3_CmpSuccess" },
			};
#endif
			auto NewProp_b0l__K2Node_SwitchEnum3_CmpSuccess__pf_SetBit = [](void* Obj){ ((AMenuPawn_C__pf4061722237*)Obj)->b0l__K2Node_SwitchEnum3_CmpSuccess__pf = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b0l__K2Node_SwitchEnum3_CmpSuccess__pf = { UE4CodeGen_Private::EPropertyClass::Bool, "K2Node_SwitchEnum3_CmpSuccess", RF_Public|RF_Transient, 0x0010000000202000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AMenuPawn_C__pf4061722237), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_b0l__K2Node_SwitchEnum3_CmpSuccess__pf_SetBit)>::SetBit, METADATA_PARAMS(NewProp_b0l__K2Node_SwitchEnum3_CmpSuccess__pf_MetaData, ARRAY_COUNT(NewProp_b0l__K2Node_SwitchEnum3_CmpSuccess__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_bSuccess25__pf_MetaData[] = {
				{ "ModuleRelativePath", "Public/MenuPawn__pf4061722237.h" },
				{ "OverrideNativeName", "K2Node_DynamicCast_bSuccess25" },
			};
#endif
			auto NewProp_b0l__K2Node_DynamicCast_bSuccess25__pf_SetBit = [](void* Obj){ ((AMenuPawn_C__pf4061722237*)Obj)->b0l__K2Node_DynamicCast_bSuccess25__pf = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b0l__K2Node_DynamicCast_bSuccess25__pf = { UE4CodeGen_Private::EPropertyClass::Bool, "K2Node_DynamicCast_bSuccess25", RF_Public|RF_Transient, 0x0010000000202000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AMenuPawn_C__pf4061722237), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_b0l__K2Node_DynamicCast_bSuccess25__pf_SetBit)>::SetBit, METADATA_PARAMS(NewProp_b0l__K2Node_DynamicCast_bSuccess25__pf_MetaData, ARRAY_COUNT(NewProp_b0l__K2Node_DynamicCast_bSuccess25__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_AsMain_Screen4__pf_MetaData[] = {
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/MenuPawn__pf4061722237.h" },
				{ "OverrideNativeName", "K2Node_DynamicCast_AsMain_Screen4" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__K2Node_DynamicCast_AsMain_Screen4__pf = { UE4CodeGen_Private::EPropertyClass::Object, "K2Node_DynamicCast_AsMain_Screen4", RF_Public|RF_Transient, 0x0010000000282008, 1, nullptr, STRUCT_OFFSET(AMenuPawn_C__pf4061722237, b0l__K2Node_DynamicCast_AsMain_Screen4__pf), Z_Construct_UClass_UMainScreen_C__pf1232574660_NoRegister, METADATA_PARAMS(NewProp_b0l__K2Node_DynamicCast_AsMain_Screen4__pf_MetaData, ARRAY_COUNT(NewProp_b0l__K2Node_DynamicCast_AsMain_Screen4__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_bSuccess24__pf_MetaData[] = {
				{ "ModuleRelativePath", "Public/MenuPawn__pf4061722237.h" },
				{ "OverrideNativeName", "K2Node_DynamicCast_bSuccess24" },
			};
#endif
			auto NewProp_b0l__K2Node_DynamicCast_bSuccess24__pf_SetBit = [](void* Obj){ ((AMenuPawn_C__pf4061722237*)Obj)->b0l__K2Node_DynamicCast_bSuccess24__pf = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b0l__K2Node_DynamicCast_bSuccess24__pf = { UE4CodeGen_Private::EPropertyClass::Bool, "K2Node_DynamicCast_bSuccess24", RF_Public|RF_Transient, 0x0010000000202000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AMenuPawn_C__pf4061722237), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_b0l__K2Node_DynamicCast_bSuccess24__pf_SetBit)>::SetBit, METADATA_PARAMS(NewProp_b0l__K2Node_DynamicCast_bSuccess24__pf_MetaData, ARRAY_COUNT(NewProp_b0l__K2Node_DynamicCast_bSuccess24__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_AsDebug_State3__pf_MetaData[] = {
				{ "ModuleRelativePath", "Public/MenuPawn__pf4061722237.h" },
				{ "OverrideNativeName", "K2Node_DynamicCast_AsDebug_State3" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__K2Node_DynamicCast_AsDebug_State3__pf = { UE4CodeGen_Private::EPropertyClass::Object, "K2Node_DynamicCast_AsDebug_State3", RF_Public|RF_Transient, 0x0010000000202000, 1, nullptr, STRUCT_OFFSET(AMenuPawn_C__pf4061722237, b0l__K2Node_DynamicCast_AsDebug_State3__pf), Z_Construct_UClass_ADebugState_C__pf4162722864_NoRegister, METADATA_PARAMS(NewProp_b0l__K2Node_DynamicCast_AsDebug_State3__pf_MetaData, ARRAY_COUNT(NewProp_b0l__K2Node_DynamicCast_AsDebug_State3__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_bSuccess23__pf_MetaData[] = {
				{ "ModuleRelativePath", "Public/MenuPawn__pf4061722237.h" },
				{ "OverrideNativeName", "K2Node_DynamicCast_bSuccess23" },
			};
#endif
			auto NewProp_b0l__K2Node_DynamicCast_bSuccess23__pf_SetBit = [](void* Obj){ ((AMenuPawn_C__pf4061722237*)Obj)->b0l__K2Node_DynamicCast_bSuccess23__pf = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b0l__K2Node_DynamicCast_bSuccess23__pf = { UE4CodeGen_Private::EPropertyClass::Bool, "K2Node_DynamicCast_bSuccess23", RF_Public|RF_Transient, 0x0010000000202000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AMenuPawn_C__pf4061722237), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_b0l__K2Node_DynamicCast_bSuccess23__pf_SetBit)>::SetBit, METADATA_PARAMS(NewProp_b0l__K2Node_DynamicCast_bSuccess23__pf_MetaData, ARRAY_COUNT(NewProp_b0l__K2Node_DynamicCast_bSuccess23__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_AsPlayer_C_Regular6__pf_MetaData[] = {
				{ "ModuleRelativePath", "Public/MenuPawn__pf4061722237.h" },
				{ "OverrideNativeName", "K2Node_DynamicCast_AsPlayer_C_Regular6" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__K2Node_DynamicCast_AsPlayer_C_Regular6__pf = { UE4CodeGen_Private::EPropertyClass::Object, "K2Node_DynamicCast_AsPlayer_C_Regular6", RF_Public|RF_Transient, 0x0010000000202000, 1, nullptr, STRUCT_OFFSET(AMenuPawn_C__pf4061722237, b0l__K2Node_DynamicCast_AsPlayer_C_Regular6__pf), Z_Construct_UClass_APlayerC_Regular_C__pf4061722237_NoRegister, METADATA_PARAMS(NewProp_b0l__K2Node_DynamicCast_AsPlayer_C_Regular6__pf_MetaData, ARRAY_COUNT(NewProp_b0l__K2Node_DynamicCast_AsPlayer_C_Regular6__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_SwitchEnum2_CmpSuccess__pf_MetaData[] = {
				{ "ModuleRelativePath", "Public/MenuPawn__pf4061722237.h" },
				{ "OverrideNativeName", "K2Node_SwitchEnum2_CmpSuccess" },
			};
#endif
			auto NewProp_b0l__K2Node_SwitchEnum2_CmpSuccess__pf_SetBit = [](void* Obj){ ((AMenuPawn_C__pf4061722237*)Obj)->b0l__K2Node_SwitchEnum2_CmpSuccess__pf = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b0l__K2Node_SwitchEnum2_CmpSuccess__pf = { UE4CodeGen_Private::EPropertyClass::Bool, "K2Node_SwitchEnum2_CmpSuccess", RF_Public|RF_Transient, 0x0010000000202000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AMenuPawn_C__pf4061722237), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_b0l__K2Node_SwitchEnum2_CmpSuccess__pf_SetBit)>::SetBit, METADATA_PARAMS(NewProp_b0l__K2Node_SwitchEnum2_CmpSuccess__pf_MetaData, ARRAY_COUNT(NewProp_b0l__K2Node_SwitchEnum2_CmpSuccess__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_InputActionEvent_Key4__pf_MetaData[] = {
				{ "ModuleRelativePath", "Public/MenuPawn__pf4061722237.h" },
				{ "OverrideNativeName", "K2Node_InputActionEvent_Key4" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_b0l__K2Node_InputActionEvent_Key4__pf = { UE4CodeGen_Private::EPropertyClass::Struct, "K2Node_InputActionEvent_Key4", RF_Public|RF_Transient, 0x0010000000202000, 1, nullptr, STRUCT_OFFSET(AMenuPawn_C__pf4061722237, b0l__K2Node_InputActionEvent_Key4__pf), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(NewProp_b0l__K2Node_InputActionEvent_Key4__pf_MetaData, ARRAY_COUNT(NewProp_b0l__K2Node_InputActionEvent_Key4__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_bSuccess22__pf_MetaData[] = {
				{ "ModuleRelativePath", "Public/MenuPawn__pf4061722237.h" },
				{ "OverrideNativeName", "K2Node_DynamicCast_bSuccess22" },
			};
#endif
			auto NewProp_b0l__K2Node_DynamicCast_bSuccess22__pf_SetBit = [](void* Obj){ ((AMenuPawn_C__pf4061722237*)Obj)->b0l__K2Node_DynamicCast_bSuccess22__pf = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b0l__K2Node_DynamicCast_bSuccess22__pf = { UE4CodeGen_Private::EPropertyClass::Bool, "K2Node_DynamicCast_bSuccess22", RF_Public|RF_Transient, 0x0010000000202000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AMenuPawn_C__pf4061722237), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_b0l__K2Node_DynamicCast_bSuccess22__pf_SetBit)>::SetBit, METADATA_PARAMS(NewProp_b0l__K2Node_DynamicCast_bSuccess22__pf_MetaData, ARRAY_COUNT(NewProp_b0l__K2Node_DynamicCast_bSuccess22__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_AsDebug_State2__pf_MetaData[] = {
				{ "ModuleRelativePath", "Public/MenuPawn__pf4061722237.h" },
				{ "OverrideNativeName", "K2Node_DynamicCast_AsDebug_State2" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__K2Node_DynamicCast_AsDebug_State2__pf = { UE4CodeGen_Private::EPropertyClass::Object, "K2Node_DynamicCast_AsDebug_State2", RF_Public|RF_Transient, 0x0010000000202000, 1, nullptr, STRUCT_OFFSET(AMenuPawn_C__pf4061722237, b0l__K2Node_DynamicCast_AsDebug_State2__pf), Z_Construct_UClass_ADebugState_C__pf4162722864_NoRegister, METADATA_PARAMS(NewProp_b0l__K2Node_DynamicCast_AsDebug_State2__pf_MetaData, ARRAY_COUNT(NewProp_b0l__K2Node_DynamicCast_AsDebug_State2__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__Temp_struct_Variable1__pf_MetaData[] = {
				{ "ModuleRelativePath", "Public/MenuPawn__pf4061722237.h" },
				{ "OverrideNativeName", "Temp_struct_Variable1" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_b0l__Temp_struct_Variable1__pf = { UE4CodeGen_Private::EPropertyClass::Struct, "Temp_struct_Variable1", RF_Public|RF_Transient, 0x0010000000202000, 1, nullptr, STRUCT_OFFSET(AMenuPawn_C__pf4061722237, b0l__Temp_struct_Variable1__pf), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(NewProp_b0l__Temp_struct_Variable1__pf_MetaData, ARRAY_COUNT(NewProp_b0l__Temp_struct_Variable1__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_InputActionEvent_Key3__pf_MetaData[] = {
				{ "ModuleRelativePath", "Public/MenuPawn__pf4061722237.h" },
				{ "OverrideNativeName", "K2Node_InputActionEvent_Key3" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_b0l__K2Node_InputActionEvent_Key3__pf = { UE4CodeGen_Private::EPropertyClass::Struct, "K2Node_InputActionEvent_Key3", RF_Public|RF_Transient, 0x0010000000202000, 1, nullptr, STRUCT_OFFSET(AMenuPawn_C__pf4061722237, b0l__K2Node_InputActionEvent_Key3__pf), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(NewProp_b0l__K2Node_InputActionEvent_Key3__pf_MetaData, ARRAY_COUNT(NewProp_b0l__K2Node_InputActionEvent_Key3__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_InputActionEvent_Key2__pf_MetaData[] = {
				{ "ModuleRelativePath", "Public/MenuPawn__pf4061722237.h" },
				{ "OverrideNativeName", "K2Node_InputActionEvent_Key2" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_b0l__K2Node_InputActionEvent_Key2__pf = { UE4CodeGen_Private::EPropertyClass::Struct, "K2Node_InputActionEvent_Key2", RF_Public|RF_Transient, 0x0010000000202000, 1, nullptr, STRUCT_OFFSET(AMenuPawn_C__pf4061722237, b0l__K2Node_InputActionEvent_Key2__pf), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(NewProp_b0l__K2Node_InputActionEvent_Key2__pf_MetaData, ARRAY_COUNT(NewProp_b0l__K2Node_InputActionEvent_Key2__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_bSuccess21__pf_MetaData[] = {
				{ "ModuleRelativePath", "Public/MenuPawn__pf4061722237.h" },
				{ "OverrideNativeName", "K2Node_DynamicCast_bSuccess21" },
			};
#endif
			auto NewProp_b0l__K2Node_DynamicCast_bSuccess21__pf_SetBit = [](void* Obj){ ((AMenuPawn_C__pf4061722237*)Obj)->b0l__K2Node_DynamicCast_bSuccess21__pf = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b0l__K2Node_DynamicCast_bSuccess21__pf = { UE4CodeGen_Private::EPropertyClass::Bool, "K2Node_DynamicCast_bSuccess21", RF_Public|RF_Transient, 0x0010000000202000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AMenuPawn_C__pf4061722237), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_b0l__K2Node_DynamicCast_bSuccess21__pf_SetBit)>::SetBit, METADATA_PARAMS(NewProp_b0l__K2Node_DynamicCast_bSuccess21__pf_MetaData, ARRAY_COUNT(NewProp_b0l__K2Node_DynamicCast_bSuccess21__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_AsMain_Screen3__pf_MetaData[] = {
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/MenuPawn__pf4061722237.h" },
				{ "OverrideNativeName", "K2Node_DynamicCast_AsMain_Screen3" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__K2Node_DynamicCast_AsMain_Screen3__pf = { UE4CodeGen_Private::EPropertyClass::Object, "K2Node_DynamicCast_AsMain_Screen3", RF_Public|RF_Transient, 0x0010000000282008, 1, nullptr, STRUCT_OFFSET(AMenuPawn_C__pf4061722237, b0l__K2Node_DynamicCast_AsMain_Screen3__pf), Z_Construct_UClass_UMainScreen_C__pf1232574660_NoRegister, METADATA_PARAMS(NewProp_b0l__K2Node_DynamicCast_AsMain_Screen3__pf_MetaData, ARRAY_COUNT(NewProp_b0l__K2Node_DynamicCast_AsMain_Screen3__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_bSuccess20__pf_MetaData[] = {
				{ "ModuleRelativePath", "Public/MenuPawn__pf4061722237.h" },
				{ "OverrideNativeName", "K2Node_DynamicCast_bSuccess20" },
			};
#endif
			auto NewProp_b0l__K2Node_DynamicCast_bSuccess20__pf_SetBit = [](void* Obj){ ((AMenuPawn_C__pf4061722237*)Obj)->b0l__K2Node_DynamicCast_bSuccess20__pf = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b0l__K2Node_DynamicCast_bSuccess20__pf = { UE4CodeGen_Private::EPropertyClass::Bool, "K2Node_DynamicCast_bSuccess20", RF_Public|RF_Transient, 0x0010000000202000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AMenuPawn_C__pf4061722237), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_b0l__K2Node_DynamicCast_bSuccess20__pf_SetBit)>::SetBit, METADATA_PARAMS(NewProp_b0l__K2Node_DynamicCast_bSuccess20__pf_MetaData, ARRAY_COUNT(NewProp_b0l__K2Node_DynamicCast_bSuccess20__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_AsMenu_Base4__pf_MetaData[] = {
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/MenuPawn__pf4061722237.h" },
				{ "OverrideNativeName", "K2Node_DynamicCast_AsMenu_Base4" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__K2Node_DynamicCast_AsMenu_Base4__pf = { UE4CodeGen_Private::EPropertyClass::Object, "K2Node_DynamicCast_AsMenu_Base4", RF_Public|RF_Transient, 0x0010000000282008, 1, nullptr, STRUCT_OFFSET(AMenuPawn_C__pf4061722237, b0l__K2Node_DynamicCast_AsMenu_Base4__pf), Z_Construct_UClass_UMenuBase_C__pf3166771619_NoRegister, METADATA_PARAMS(NewProp_b0l__K2Node_DynamicCast_AsMenu_Base4__pf_MetaData, ARRAY_COUNT(NewProp_b0l__K2Node_DynamicCast_AsMenu_Base4__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_bSuccess19__pf_MetaData[] = {
				{ "ModuleRelativePath", "Public/MenuPawn__pf4061722237.h" },
				{ "OverrideNativeName", "K2Node_DynamicCast_bSuccess19" },
			};
#endif
			auto NewProp_b0l__K2Node_DynamicCast_bSuccess19__pf_SetBit = [](void* Obj){ ((AMenuPawn_C__pf4061722237*)Obj)->b0l__K2Node_DynamicCast_bSuccess19__pf = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b0l__K2Node_DynamicCast_bSuccess19__pf = { UE4CodeGen_Private::EPropertyClass::Bool, "K2Node_DynamicCast_bSuccess19", RF_Public|RF_Transient, 0x0010000000202000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AMenuPawn_C__pf4061722237), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_b0l__K2Node_DynamicCast_bSuccess19__pf_SetBit)>::SetBit, METADATA_PARAMS(NewProp_b0l__K2Node_DynamicCast_bSuccess19__pf_MetaData, ARRAY_COUNT(NewProp_b0l__K2Node_DynamicCast_bSuccess19__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_AsCoop4__pf_MetaData[] = {
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/MenuPawn__pf4061722237.h" },
				{ "OverrideNativeName", "K2Node_DynamicCast_AsCoop4" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__K2Node_DynamicCast_AsCoop4__pf = { UE4CodeGen_Private::EPropertyClass::Object, "K2Node_DynamicCast_AsCoop4", RF_Public|RF_Transient, 0x0010000000282008, 1, nullptr, STRUCT_OFFSET(AMenuPawn_C__pf4061722237, b0l__K2Node_DynamicCast_AsCoop4__pf), Z_Construct_UClass_UCoop_C__pf1232574660_NoRegister, METADATA_PARAMS(NewProp_b0l__K2Node_DynamicCast_AsCoop4__pf_MetaData, ARRAY_COUNT(NewProp_b0l__K2Node_DynamicCast_AsCoop4__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_bSuccess18__pf_MetaData[] = {
				{ "ModuleRelativePath", "Public/MenuPawn__pf4061722237.h" },
				{ "OverrideNativeName", "K2Node_DynamicCast_bSuccess18" },
			};
#endif
			auto NewProp_b0l__K2Node_DynamicCast_bSuccess18__pf_SetBit = [](void* Obj){ ((AMenuPawn_C__pf4061722237*)Obj)->b0l__K2Node_DynamicCast_bSuccess18__pf = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b0l__K2Node_DynamicCast_bSuccess18__pf = { UE4CodeGen_Private::EPropertyClass::Bool, "K2Node_DynamicCast_bSuccess18", RF_Public|RF_Transient, 0x0010000000202000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AMenuPawn_C__pf4061722237), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_b0l__K2Node_DynamicCast_bSuccess18__pf_SetBit)>::SetBit, METADATA_PARAMS(NewProp_b0l__K2Node_DynamicCast_bSuccess18__pf_MetaData, ARRAY_COUNT(NewProp_b0l__K2Node_DynamicCast_bSuccess18__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_AsPlayer_C_Regular5__pf_MetaData[] = {
				{ "ModuleRelativePath", "Public/MenuPawn__pf4061722237.h" },
				{ "OverrideNativeName", "K2Node_DynamicCast_AsPlayer_C_Regular5" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__K2Node_DynamicCast_AsPlayer_C_Regular5__pf = { UE4CodeGen_Private::EPropertyClass::Object, "K2Node_DynamicCast_AsPlayer_C_Regular5", RF_Public|RF_Transient, 0x0010000000202000, 1, nullptr, STRUCT_OFFSET(AMenuPawn_C__pf4061722237, b0l__K2Node_DynamicCast_AsPlayer_C_Regular5__pf), Z_Construct_UClass_APlayerC_Regular_C__pf4061722237_NoRegister, METADATA_PARAMS(NewProp_b0l__K2Node_DynamicCast_AsPlayer_C_Regular5__pf_MetaData, ARRAY_COUNT(NewProp_b0l__K2Node_DynamicCast_AsPlayer_C_Regular5__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_bSuccess17__pf_MetaData[] = {
				{ "ModuleRelativePath", "Public/MenuPawn__pf4061722237.h" },
				{ "OverrideNativeName", "K2Node_DynamicCast_bSuccess17" },
			};
#endif
			auto NewProp_b0l__K2Node_DynamicCast_bSuccess17__pf_SetBit = [](void* Obj){ ((AMenuPawn_C__pf4061722237*)Obj)->b0l__K2Node_DynamicCast_bSuccess17__pf = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b0l__K2Node_DynamicCast_bSuccess17__pf = { UE4CodeGen_Private::EPropertyClass::Bool, "K2Node_DynamicCast_bSuccess17", RF_Public|RF_Transient, 0x0010000000202000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AMenuPawn_C__pf4061722237), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_b0l__K2Node_DynamicCast_bSuccess17__pf_SetBit)>::SetBit, METADATA_PARAMS(NewProp_b0l__K2Node_DynamicCast_bSuccess17__pf_MetaData, ARRAY_COUNT(NewProp_b0l__K2Node_DynamicCast_bSuccess17__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_AsMenu_Base3__pf_MetaData[] = {
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/MenuPawn__pf4061722237.h" },
				{ "OverrideNativeName", "K2Node_DynamicCast_AsMenu_Base3" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__K2Node_DynamicCast_AsMenu_Base3__pf = { UE4CodeGen_Private::EPropertyClass::Object, "K2Node_DynamicCast_AsMenu_Base3", RF_Public|RF_Transient, 0x0010000000282008, 1, nullptr, STRUCT_OFFSET(AMenuPawn_C__pf4061722237, b0l__K2Node_DynamicCast_AsMenu_Base3__pf), Z_Construct_UClass_UMenuBase_C__pf3166771619_NoRegister, METADATA_PARAMS(NewProp_b0l__K2Node_DynamicCast_AsMenu_Base3__pf_MetaData, ARRAY_COUNT(NewProp_b0l__K2Node_DynamicCast_AsMenu_Base3__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__Temp_struct_Variable__pf_MetaData[] = {
				{ "ModuleRelativePath", "Public/MenuPawn__pf4061722237.h" },
				{ "OverrideNativeName", "Temp_struct_Variable" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_b0l__Temp_struct_Variable__pf = { UE4CodeGen_Private::EPropertyClass::Struct, "Temp_struct_Variable", RF_Public|RF_Transient, 0x0010000000202000, 1, nullptr, STRUCT_OFFSET(AMenuPawn_C__pf4061722237, b0l__Temp_struct_Variable__pf), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(NewProp_b0l__Temp_struct_Variable__pf_MetaData, ARRAY_COUNT(NewProp_b0l__Temp_struct_Variable__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_bSuccess16__pf_MetaData[] = {
				{ "ModuleRelativePath", "Public/MenuPawn__pf4061722237.h" },
				{ "OverrideNativeName", "K2Node_DynamicCast_bSuccess16" },
			};
#endif
			auto NewProp_b0l__K2Node_DynamicCast_bSuccess16__pf_SetBit = [](void* Obj){ ((AMenuPawn_C__pf4061722237*)Obj)->b0l__K2Node_DynamicCast_bSuccess16__pf = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b0l__K2Node_DynamicCast_bSuccess16__pf = { UE4CodeGen_Private::EPropertyClass::Bool, "K2Node_DynamicCast_bSuccess16", RF_Public|RF_Transient, 0x0010000000202000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AMenuPawn_C__pf4061722237), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_b0l__K2Node_DynamicCast_bSuccess16__pf_SetBit)>::SetBit, METADATA_PARAMS(NewProp_b0l__K2Node_DynamicCast_bSuccess16__pf_MetaData, ARRAY_COUNT(NewProp_b0l__K2Node_DynamicCast_bSuccess16__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_AsPlayer_C_Regular4__pf_MetaData[] = {
				{ "ModuleRelativePath", "Public/MenuPawn__pf4061722237.h" },
				{ "OverrideNativeName", "K2Node_DynamicCast_AsPlayer_C_Regular4" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__K2Node_DynamicCast_AsPlayer_C_Regular4__pf = { UE4CodeGen_Private::EPropertyClass::Object, "K2Node_DynamicCast_AsPlayer_C_Regular4", RF_Public|RF_Transient, 0x0010000000202000, 1, nullptr, STRUCT_OFFSET(AMenuPawn_C__pf4061722237, b0l__K2Node_DynamicCast_AsPlayer_C_Regular4__pf), Z_Construct_UClass_APlayerC_Regular_C__pf4061722237_NoRegister, METADATA_PARAMS(NewProp_b0l__K2Node_DynamicCast_AsPlayer_C_Regular4__pf_MetaData, ARRAY_COUNT(NewProp_b0l__K2Node_DynamicCast_AsPlayer_C_Regular4__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_InputActionEvent_Key1__pf_MetaData[] = {
				{ "ModuleRelativePath", "Public/MenuPawn__pf4061722237.h" },
				{ "OverrideNativeName", "K2Node_InputActionEvent_Key1" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_b0l__K2Node_InputActionEvent_Key1__pf = { UE4CodeGen_Private::EPropertyClass::Struct, "K2Node_InputActionEvent_Key1", RF_Public|RF_Transient, 0x0010000000202000, 1, nullptr, STRUCT_OFFSET(AMenuPawn_C__pf4061722237, b0l__K2Node_InputActionEvent_Key1__pf), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(NewProp_b0l__K2Node_InputActionEvent_Key1__pf_MetaData, ARRAY_COUNT(NewProp_b0l__K2Node_InputActionEvent_Key1__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_bSuccess15__pf_MetaData[] = {
				{ "ModuleRelativePath", "Public/MenuPawn__pf4061722237.h" },
				{ "OverrideNativeName", "K2Node_DynamicCast_bSuccess15" },
			};
#endif
			auto NewProp_b0l__K2Node_DynamicCast_bSuccess15__pf_SetBit = [](void* Obj){ ((AMenuPawn_C__pf4061722237*)Obj)->b0l__K2Node_DynamicCast_bSuccess15__pf = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b0l__K2Node_DynamicCast_bSuccess15__pf = { UE4CodeGen_Private::EPropertyClass::Bool, "K2Node_DynamicCast_bSuccess15", RF_Public|RF_Transient, 0x0010000000202000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AMenuPawn_C__pf4061722237), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_b0l__K2Node_DynamicCast_bSuccess15__pf_SetBit)>::SetBit, METADATA_PARAMS(NewProp_b0l__K2Node_DynamicCast_bSuccess15__pf_MetaData, ARRAY_COUNT(NewProp_b0l__K2Node_DynamicCast_bSuccess15__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_AsMain_Screen2__pf_MetaData[] = {
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/MenuPawn__pf4061722237.h" },
				{ "OverrideNativeName", "K2Node_DynamicCast_AsMain_Screen2" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__K2Node_DynamicCast_AsMain_Screen2__pf = { UE4CodeGen_Private::EPropertyClass::Object, "K2Node_DynamicCast_AsMain_Screen2", RF_Public|RF_Transient, 0x0010000000282008, 1, nullptr, STRUCT_OFFSET(AMenuPawn_C__pf4061722237, b0l__K2Node_DynamicCast_AsMain_Screen2__pf), Z_Construct_UClass_UMainScreen_C__pf1232574660_NoRegister, METADATA_PARAMS(NewProp_b0l__K2Node_DynamicCast_AsMain_Screen2__pf_MetaData, ARRAY_COUNT(NewProp_b0l__K2Node_DynamicCast_AsMain_Screen2__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_bSuccess14__pf_MetaData[] = {
				{ "ModuleRelativePath", "Public/MenuPawn__pf4061722237.h" },
				{ "OverrideNativeName", "K2Node_DynamicCast_bSuccess14" },
			};
#endif
			auto NewProp_b0l__K2Node_DynamicCast_bSuccess14__pf_SetBit = [](void* Obj){ ((AMenuPawn_C__pf4061722237*)Obj)->b0l__K2Node_DynamicCast_bSuccess14__pf = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b0l__K2Node_DynamicCast_bSuccess14__pf = { UE4CodeGen_Private::EPropertyClass::Bool, "K2Node_DynamicCast_bSuccess14", RF_Public|RF_Transient, 0x0010000000202000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AMenuPawn_C__pf4061722237), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_b0l__K2Node_DynamicCast_bSuccess14__pf_SetBit)>::SetBit, METADATA_PARAMS(NewProp_b0l__K2Node_DynamicCast_bSuccess14__pf_MetaData, ARRAY_COUNT(NewProp_b0l__K2Node_DynamicCast_bSuccess14__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_AsCoop3__pf_MetaData[] = {
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/MenuPawn__pf4061722237.h" },
				{ "OverrideNativeName", "K2Node_DynamicCast_AsCoop3" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__K2Node_DynamicCast_AsCoop3__pf = { UE4CodeGen_Private::EPropertyClass::Object, "K2Node_DynamicCast_AsCoop3", RF_Public|RF_Transient, 0x0010000000282008, 1, nullptr, STRUCT_OFFSET(AMenuPawn_C__pf4061722237, b0l__K2Node_DynamicCast_AsCoop3__pf), Z_Construct_UClass_UCoop_C__pf1232574660_NoRegister, METADATA_PARAMS(NewProp_b0l__K2Node_DynamicCast_AsCoop3__pf_MetaData, ARRAY_COUNT(NewProp_b0l__K2Node_DynamicCast_AsCoop3__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_bSuccess13__pf_MetaData[] = {
				{ "ModuleRelativePath", "Public/MenuPawn__pf4061722237.h" },
				{ "OverrideNativeName", "K2Node_DynamicCast_bSuccess13" },
			};
#endif
			auto NewProp_b0l__K2Node_DynamicCast_bSuccess13__pf_SetBit = [](void* Obj){ ((AMenuPawn_C__pf4061722237*)Obj)->b0l__K2Node_DynamicCast_bSuccess13__pf = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b0l__K2Node_DynamicCast_bSuccess13__pf = { UE4CodeGen_Private::EPropertyClass::Bool, "K2Node_DynamicCast_bSuccess13", RF_Public|RF_Transient, 0x0010000000202000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AMenuPawn_C__pf4061722237), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_b0l__K2Node_DynamicCast_bSuccess13__pf_SetBit)>::SetBit, METADATA_PARAMS(NewProp_b0l__K2Node_DynamicCast_bSuccess13__pf_MetaData, ARRAY_COUNT(NewProp_b0l__K2Node_DynamicCast_bSuccess13__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_AsMenu_Base2__pf_MetaData[] = {
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/MenuPawn__pf4061722237.h" },
				{ "OverrideNativeName", "K2Node_DynamicCast_AsMenu_Base2" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__K2Node_DynamicCast_AsMenu_Base2__pf = { UE4CodeGen_Private::EPropertyClass::Object, "K2Node_DynamicCast_AsMenu_Base2", RF_Public|RF_Transient, 0x0010000000282008, 1, nullptr, STRUCT_OFFSET(AMenuPawn_C__pf4061722237, b0l__K2Node_DynamicCast_AsMenu_Base2__pf), Z_Construct_UClass_UMenuBase_C__pf3166771619_NoRegister, METADATA_PARAMS(NewProp_b0l__K2Node_DynamicCast_AsMenu_Base2__pf_MetaData, ARRAY_COUNT(NewProp_b0l__K2Node_DynamicCast_AsMenu_Base2__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_SwitchEnum1_CmpSuccess__pf_MetaData[] = {
				{ "ModuleRelativePath", "Public/MenuPawn__pf4061722237.h" },
				{ "OverrideNativeName", "K2Node_SwitchEnum1_CmpSuccess" },
			};
#endif
			auto NewProp_b0l__K2Node_SwitchEnum1_CmpSuccess__pf_SetBit = [](void* Obj){ ((AMenuPawn_C__pf4061722237*)Obj)->b0l__K2Node_SwitchEnum1_CmpSuccess__pf = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b0l__K2Node_SwitchEnum1_CmpSuccess__pf = { UE4CodeGen_Private::EPropertyClass::Bool, "K2Node_SwitchEnum1_CmpSuccess", RF_Public|RF_Transient, 0x0010000000202000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AMenuPawn_C__pf4061722237), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_b0l__K2Node_SwitchEnum1_CmpSuccess__pf_SetBit)>::SetBit, METADATA_PARAMS(NewProp_b0l__K2Node_SwitchEnum1_CmpSuccess__pf_MetaData, ARRAY_COUNT(NewProp_b0l__K2Node_SwitchEnum1_CmpSuccess__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_bSuccess12__pf_MetaData[] = {
				{ "ModuleRelativePath", "Public/MenuPawn__pf4061722237.h" },
				{ "OverrideNativeName", "K2Node_DynamicCast_bSuccess12" },
			};
#endif
			auto NewProp_b0l__K2Node_DynamicCast_bSuccess12__pf_SetBit = [](void* Obj){ ((AMenuPawn_C__pf4061722237*)Obj)->b0l__K2Node_DynamicCast_bSuccess12__pf = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b0l__K2Node_DynamicCast_bSuccess12__pf = { UE4CodeGen_Private::EPropertyClass::Bool, "K2Node_DynamicCast_bSuccess12", RF_Public|RF_Transient, 0x0010000000202000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AMenuPawn_C__pf4061722237), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_b0l__K2Node_DynamicCast_bSuccess12__pf_SetBit)>::SetBit, METADATA_PARAMS(NewProp_b0l__K2Node_DynamicCast_bSuccess12__pf_MetaData, ARRAY_COUNT(NewProp_b0l__K2Node_DynamicCast_bSuccess12__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_AsPlayer_C_Regular3__pf_MetaData[] = {
				{ "ModuleRelativePath", "Public/MenuPawn__pf4061722237.h" },
				{ "OverrideNativeName", "K2Node_DynamicCast_AsPlayer_C_Regular3" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__K2Node_DynamicCast_AsPlayer_C_Regular3__pf = { UE4CodeGen_Private::EPropertyClass::Object, "K2Node_DynamicCast_AsPlayer_C_Regular3", RF_Public|RF_Transient, 0x0010000000202000, 1, nullptr, STRUCT_OFFSET(AMenuPawn_C__pf4061722237, b0l__K2Node_DynamicCast_AsPlayer_C_Regular3__pf), Z_Construct_UClass_APlayerC_Regular_C__pf4061722237_NoRegister, METADATA_PARAMS(NewProp_b0l__K2Node_DynamicCast_AsPlayer_C_Regular3__pf_MetaData, ARRAY_COUNT(NewProp_b0l__K2Node_DynamicCast_AsPlayer_C_Regular3__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_bSuccess11__pf_MetaData[] = {
				{ "ModuleRelativePath", "Public/MenuPawn__pf4061722237.h" },
				{ "OverrideNativeName", "K2Node_DynamicCast_bSuccess11" },
			};
#endif
			auto NewProp_b0l__K2Node_DynamicCast_bSuccess11__pf_SetBit = [](void* Obj){ ((AMenuPawn_C__pf4061722237*)Obj)->b0l__K2Node_DynamicCast_bSuccess11__pf = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b0l__K2Node_DynamicCast_bSuccess11__pf = { UE4CodeGen_Private::EPropertyClass::Bool, "K2Node_DynamicCast_bSuccess11", RF_Public|RF_Transient, 0x0010000000202000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AMenuPawn_C__pf4061722237), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_b0l__K2Node_DynamicCast_bSuccess11__pf_SetBit)>::SetBit, METADATA_PARAMS(NewProp_b0l__K2Node_DynamicCast_bSuccess11__pf_MetaData, ARRAY_COUNT(NewProp_b0l__K2Node_DynamicCast_bSuccess11__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_AsDebug_State1__pf_MetaData[] = {
				{ "ModuleRelativePath", "Public/MenuPawn__pf4061722237.h" },
				{ "OverrideNativeName", "K2Node_DynamicCast_AsDebug_State1" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__K2Node_DynamicCast_AsDebug_State1__pf = { UE4CodeGen_Private::EPropertyClass::Object, "K2Node_DynamicCast_AsDebug_State1", RF_Public|RF_Transient, 0x0010000000202000, 1, nullptr, STRUCT_OFFSET(AMenuPawn_C__pf4061722237, b0l__K2Node_DynamicCast_AsDebug_State1__pf), Z_Construct_UClass_ADebugState_C__pf4162722864_NoRegister, METADATA_PARAMS(NewProp_b0l__K2Node_DynamicCast_AsDebug_State1__pf_MetaData, ARRAY_COUNT(NewProp_b0l__K2Node_DynamicCast_AsDebug_State1__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_InputActionEvent_Key__pf_MetaData[] = {
				{ "ModuleRelativePath", "Public/MenuPawn__pf4061722237.h" },
				{ "OverrideNativeName", "K2Node_InputActionEvent_Key" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_b0l__K2Node_InputActionEvent_Key__pf = { UE4CodeGen_Private::EPropertyClass::Struct, "K2Node_InputActionEvent_Key", RF_Public|RF_Transient, 0x0010000000202000, 1, nullptr, STRUCT_OFFSET(AMenuPawn_C__pf4061722237, b0l__K2Node_InputActionEvent_Key__pf), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(NewProp_b0l__K2Node_InputActionEvent_Key__pf_MetaData, ARRAY_COUNT(NewProp_b0l__K2Node_InputActionEvent_Key__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_bSuccess10__pf_MetaData[] = {
				{ "ModuleRelativePath", "Public/MenuPawn__pf4061722237.h" },
				{ "OverrideNativeName", "K2Node_DynamicCast_bSuccess10" },
			};
#endif
			auto NewProp_b0l__K2Node_DynamicCast_bSuccess10__pf_SetBit = [](void* Obj){ ((AMenuPawn_C__pf4061722237*)Obj)->b0l__K2Node_DynamicCast_bSuccess10__pf = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b0l__K2Node_DynamicCast_bSuccess10__pf = { UE4CodeGen_Private::EPropertyClass::Bool, "K2Node_DynamicCast_bSuccess10", RF_Public|RF_Transient, 0x0010000000202000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AMenuPawn_C__pf4061722237), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_b0l__K2Node_DynamicCast_bSuccess10__pf_SetBit)>::SetBit, METADATA_PARAMS(NewProp_b0l__K2Node_DynamicCast_bSuccess10__pf_MetaData, ARRAY_COUNT(NewProp_b0l__K2Node_DynamicCast_bSuccess10__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_AsMain_Screen1__pf_MetaData[] = {
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/MenuPawn__pf4061722237.h" },
				{ "OverrideNativeName", "K2Node_DynamicCast_AsMain_Screen1" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__K2Node_DynamicCast_AsMain_Screen1__pf = { UE4CodeGen_Private::EPropertyClass::Object, "K2Node_DynamicCast_AsMain_Screen1", RF_Public|RF_Transient, 0x0010000000282008, 1, nullptr, STRUCT_OFFSET(AMenuPawn_C__pf4061722237, b0l__K2Node_DynamicCast_AsMain_Screen1__pf), Z_Construct_UClass_UMainScreen_C__pf1232574660_NoRegister, METADATA_PARAMS(NewProp_b0l__K2Node_DynamicCast_AsMain_Screen1__pf_MetaData, ARRAY_COUNT(NewProp_b0l__K2Node_DynamicCast_AsMain_Screen1__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_bSuccess9__pf_MetaData[] = {
				{ "ModuleRelativePath", "Public/MenuPawn__pf4061722237.h" },
				{ "OverrideNativeName", "K2Node_DynamicCast_bSuccess9" },
			};
#endif
			auto NewProp_b0l__K2Node_DynamicCast_bSuccess9__pf_SetBit = [](void* Obj){ ((AMenuPawn_C__pf4061722237*)Obj)->b0l__K2Node_DynamicCast_bSuccess9__pf = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b0l__K2Node_DynamicCast_bSuccess9__pf = { UE4CodeGen_Private::EPropertyClass::Bool, "K2Node_DynamicCast_bSuccess9", RF_Public|RF_Transient, 0x0010000000202000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AMenuPawn_C__pf4061722237), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_b0l__K2Node_DynamicCast_bSuccess9__pf_SetBit)>::SetBit, METADATA_PARAMS(NewProp_b0l__K2Node_DynamicCast_bSuccess9__pf_MetaData, ARRAY_COUNT(NewProp_b0l__K2Node_DynamicCast_bSuccess9__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_AsCoop2__pf_MetaData[] = {
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/MenuPawn__pf4061722237.h" },
				{ "OverrideNativeName", "K2Node_DynamicCast_AsCoop2" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__K2Node_DynamicCast_AsCoop2__pf = { UE4CodeGen_Private::EPropertyClass::Object, "K2Node_DynamicCast_AsCoop2", RF_Public|RF_Transient, 0x0010000000282008, 1, nullptr, STRUCT_OFFSET(AMenuPawn_C__pf4061722237, b0l__K2Node_DynamicCast_AsCoop2__pf), Z_Construct_UClass_UCoop_C__pf1232574660_NoRegister, METADATA_PARAMS(NewProp_b0l__K2Node_DynamicCast_AsCoop2__pf_MetaData, ARRAY_COUNT(NewProp_b0l__K2Node_DynamicCast_AsCoop2__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_bSuccess8__pf_MetaData[] = {
				{ "ModuleRelativePath", "Public/MenuPawn__pf4061722237.h" },
				{ "OverrideNativeName", "K2Node_DynamicCast_bSuccess8" },
			};
#endif
			auto NewProp_b0l__K2Node_DynamicCast_bSuccess8__pf_SetBit = [](void* Obj){ ((AMenuPawn_C__pf4061722237*)Obj)->b0l__K2Node_DynamicCast_bSuccess8__pf = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b0l__K2Node_DynamicCast_bSuccess8__pf = { UE4CodeGen_Private::EPropertyClass::Bool, "K2Node_DynamicCast_bSuccess8", RF_Public|RF_Transient, 0x0010000000202000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AMenuPawn_C__pf4061722237), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_b0l__K2Node_DynamicCast_bSuccess8__pf_SetBit)>::SetBit, METADATA_PARAMS(NewProp_b0l__K2Node_DynamicCast_bSuccess8__pf_MetaData, ARRAY_COUNT(NewProp_b0l__K2Node_DynamicCast_bSuccess8__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_AsMenu_Base1__pf_MetaData[] = {
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/MenuPawn__pf4061722237.h" },
				{ "OverrideNativeName", "K2Node_DynamicCast_AsMenu_Base1" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__K2Node_DynamicCast_AsMenu_Base1__pf = { UE4CodeGen_Private::EPropertyClass::Object, "K2Node_DynamicCast_AsMenu_Base1", RF_Public|RF_Transient, 0x0010000000282008, 1, nullptr, STRUCT_OFFSET(AMenuPawn_C__pf4061722237, b0l__K2Node_DynamicCast_AsMenu_Base1__pf), Z_Construct_UClass_UMenuBase_C__pf3166771619_NoRegister, METADATA_PARAMS(NewProp_b0l__K2Node_DynamicCast_AsMenu_Base1__pf_MetaData, ARRAY_COUNT(NewProp_b0l__K2Node_DynamicCast_AsMenu_Base1__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_SwitchEnum_CmpSuccess__pf_MetaData[] = {
				{ "ModuleRelativePath", "Public/MenuPawn__pf4061722237.h" },
				{ "OverrideNativeName", "K2Node_SwitchEnum_CmpSuccess" },
			};
#endif
			auto NewProp_b0l__K2Node_SwitchEnum_CmpSuccess__pf_SetBit = [](void* Obj){ ((AMenuPawn_C__pf4061722237*)Obj)->b0l__K2Node_SwitchEnum_CmpSuccess__pf = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b0l__K2Node_SwitchEnum_CmpSuccess__pf = { UE4CodeGen_Private::EPropertyClass::Bool, "K2Node_SwitchEnum_CmpSuccess", RF_Public|RF_Transient, 0x0010000000202000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AMenuPawn_C__pf4061722237), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_b0l__K2Node_SwitchEnum_CmpSuccess__pf_SetBit)>::SetBit, METADATA_PARAMS(NewProp_b0l__K2Node_SwitchEnum_CmpSuccess__pf_MetaData, ARRAY_COUNT(NewProp_b0l__K2Node_SwitchEnum_CmpSuccess__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_bSuccess7__pf_MetaData[] = {
				{ "ModuleRelativePath", "Public/MenuPawn__pf4061722237.h" },
				{ "OverrideNativeName", "K2Node_DynamicCast_bSuccess7" },
			};
#endif
			auto NewProp_b0l__K2Node_DynamicCast_bSuccess7__pf_SetBit = [](void* Obj){ ((AMenuPawn_C__pf4061722237*)Obj)->b0l__K2Node_DynamicCast_bSuccess7__pf = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b0l__K2Node_DynamicCast_bSuccess7__pf = { UE4CodeGen_Private::EPropertyClass::Bool, "K2Node_DynamicCast_bSuccess7", RF_Public|RF_Transient, 0x0010000000202000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AMenuPawn_C__pf4061722237), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_b0l__K2Node_DynamicCast_bSuccess7__pf_SetBit)>::SetBit, METADATA_PARAMS(NewProp_b0l__K2Node_DynamicCast_bSuccess7__pf_MetaData, ARRAY_COUNT(NewProp_b0l__K2Node_DynamicCast_bSuccess7__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_AsPlayer_C_Regular2__pf_MetaData[] = {
				{ "ModuleRelativePath", "Public/MenuPawn__pf4061722237.h" },
				{ "OverrideNativeName", "K2Node_DynamicCast_AsPlayer_C_Regular2" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__K2Node_DynamicCast_AsPlayer_C_Regular2__pf = { UE4CodeGen_Private::EPropertyClass::Object, "K2Node_DynamicCast_AsPlayer_C_Regular2", RF_Public|RF_Transient, 0x0010000000202000, 1, nullptr, STRUCT_OFFSET(AMenuPawn_C__pf4061722237, b0l__K2Node_DynamicCast_AsPlayer_C_Regular2__pf), Z_Construct_UClass_APlayerC_Regular_C__pf4061722237_NoRegister, METADATA_PARAMS(NewProp_b0l__K2Node_DynamicCast_AsPlayer_C_Regular2__pf_MetaData, ARRAY_COUNT(NewProp_b0l__K2Node_DynamicCast_AsPlayer_C_Regular2__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_bSuccess6__pf_MetaData[] = {
				{ "ModuleRelativePath", "Public/MenuPawn__pf4061722237.h" },
				{ "OverrideNativeName", "K2Node_DynamicCast_bSuccess6" },
			};
#endif
			auto NewProp_b0l__K2Node_DynamicCast_bSuccess6__pf_SetBit = [](void* Obj){ ((AMenuPawn_C__pf4061722237*)Obj)->b0l__K2Node_DynamicCast_bSuccess6__pf = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b0l__K2Node_DynamicCast_bSuccess6__pf = { UE4CodeGen_Private::EPropertyClass::Bool, "K2Node_DynamicCast_bSuccess6", RF_Public|RF_Transient, 0x0010000000202000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AMenuPawn_C__pf4061722237), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_b0l__K2Node_DynamicCast_bSuccess6__pf_SetBit)>::SetBit, METADATA_PARAMS(NewProp_b0l__K2Node_DynamicCast_bSuccess6__pf_MetaData, ARRAY_COUNT(NewProp_b0l__K2Node_DynamicCast_bSuccess6__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_AsDebug_State__pf_MetaData[] = {
				{ "ModuleRelativePath", "Public/MenuPawn__pf4061722237.h" },
				{ "OverrideNativeName", "K2Node_DynamicCast_AsDebug_State" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__K2Node_DynamicCast_AsDebug_State__pf = { UE4CodeGen_Private::EPropertyClass::Object, "K2Node_DynamicCast_AsDebug_State", RF_Public|RF_Transient, 0x0010000000202000, 1, nullptr, STRUCT_OFFSET(AMenuPawn_C__pf4061722237, b0l__K2Node_DynamicCast_AsDebug_State__pf), Z_Construct_UClass_ADebugState_C__pf4162722864_NoRegister, METADATA_PARAMS(NewProp_b0l__K2Node_DynamicCast_AsDebug_State__pf_MetaData, ARRAY_COUNT(NewProp_b0l__K2Node_DynamicCast_AsDebug_State__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_bSuccess5__pf_MetaData[] = {
				{ "ModuleRelativePath", "Public/MenuPawn__pf4061722237.h" },
				{ "OverrideNativeName", "K2Node_DynamicCast_bSuccess5" },
			};
#endif
			auto NewProp_b0l__K2Node_DynamicCast_bSuccess5__pf_SetBit = [](void* Obj){ ((AMenuPawn_C__pf4061722237*)Obj)->b0l__K2Node_DynamicCast_bSuccess5__pf = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b0l__K2Node_DynamicCast_bSuccess5__pf = { UE4CodeGen_Private::EPropertyClass::Bool, "K2Node_DynamicCast_bSuccess5", RF_Public|RF_Transient, 0x0010000000202000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AMenuPawn_C__pf4061722237), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_b0l__K2Node_DynamicCast_bSuccess5__pf_SetBit)>::SetBit, METADATA_PARAMS(NewProp_b0l__K2Node_DynamicCast_bSuccess5__pf_MetaData, ARRAY_COUNT(NewProp_b0l__K2Node_DynamicCast_bSuccess5__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_AsMain_Screen__pf_MetaData[] = {
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/MenuPawn__pf4061722237.h" },
				{ "OverrideNativeName", "K2Node_DynamicCast_AsMain_Screen" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__K2Node_DynamicCast_AsMain_Screen__pf = { UE4CodeGen_Private::EPropertyClass::Object, "K2Node_DynamicCast_AsMain_Screen", RF_Public|RF_Transient, 0x0010000000282008, 1, nullptr, STRUCT_OFFSET(AMenuPawn_C__pf4061722237, b0l__K2Node_DynamicCast_AsMain_Screen__pf), Z_Construct_UClass_UMainScreen_C__pf1232574660_NoRegister, METADATA_PARAMS(NewProp_b0l__K2Node_DynamicCast_AsMain_Screen__pf_MetaData, ARRAY_COUNT(NewProp_b0l__K2Node_DynamicCast_AsMain_Screen__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_bSuccess4__pf_MetaData[] = {
				{ "ModuleRelativePath", "Public/MenuPawn__pf4061722237.h" },
				{ "OverrideNativeName", "K2Node_DynamicCast_bSuccess4" },
			};
#endif
			auto NewProp_b0l__K2Node_DynamicCast_bSuccess4__pf_SetBit = [](void* Obj){ ((AMenuPawn_C__pf4061722237*)Obj)->b0l__K2Node_DynamicCast_bSuccess4__pf = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b0l__K2Node_DynamicCast_bSuccess4__pf = { UE4CodeGen_Private::EPropertyClass::Bool, "K2Node_DynamicCast_bSuccess4", RF_Public|RF_Transient, 0x0010000000202000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AMenuPawn_C__pf4061722237), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_b0l__K2Node_DynamicCast_bSuccess4__pf_SetBit)>::SetBit, METADATA_PARAMS(NewProp_b0l__K2Node_DynamicCast_bSuccess4__pf_MetaData, ARRAY_COUNT(NewProp_b0l__K2Node_DynamicCast_bSuccess4__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_AsCoop1__pf_MetaData[] = {
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/MenuPawn__pf4061722237.h" },
				{ "OverrideNativeName", "K2Node_DynamicCast_AsCoop1" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__K2Node_DynamicCast_AsCoop1__pf = { UE4CodeGen_Private::EPropertyClass::Object, "K2Node_DynamicCast_AsCoop1", RF_Public|RF_Transient, 0x0010000000282008, 1, nullptr, STRUCT_OFFSET(AMenuPawn_C__pf4061722237, b0l__K2Node_DynamicCast_AsCoop1__pf), Z_Construct_UClass_UCoop_C__pf1232574660_NoRegister, METADATA_PARAMS(NewProp_b0l__K2Node_DynamicCast_AsCoop1__pf_MetaData, ARRAY_COUNT(NewProp_b0l__K2Node_DynamicCast_AsCoop1__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_bSuccess3__pf_MetaData[] = {
				{ "ModuleRelativePath", "Public/MenuPawn__pf4061722237.h" },
				{ "OverrideNativeName", "K2Node_DynamicCast_bSuccess3" },
			};
#endif
			auto NewProp_b0l__K2Node_DynamicCast_bSuccess3__pf_SetBit = [](void* Obj){ ((AMenuPawn_C__pf4061722237*)Obj)->b0l__K2Node_DynamicCast_bSuccess3__pf = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b0l__K2Node_DynamicCast_bSuccess3__pf = { UE4CodeGen_Private::EPropertyClass::Bool, "K2Node_DynamicCast_bSuccess3", RF_Public|RF_Transient, 0x0010000000202000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AMenuPawn_C__pf4061722237), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_b0l__K2Node_DynamicCast_bSuccess3__pf_SetBit)>::SetBit, METADATA_PARAMS(NewProp_b0l__K2Node_DynamicCast_bSuccess3__pf_MetaData, ARRAY_COUNT(NewProp_b0l__K2Node_DynamicCast_bSuccess3__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_AsMenu_Base__pf_MetaData[] = {
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/MenuPawn__pf4061722237.h" },
				{ "OverrideNativeName", "K2Node_DynamicCast_AsMenu_Base" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__K2Node_DynamicCast_AsMenu_Base__pf = { UE4CodeGen_Private::EPropertyClass::Object, "K2Node_DynamicCast_AsMenu_Base", RF_Public|RF_Transient, 0x0010000000282008, 1, nullptr, STRUCT_OFFSET(AMenuPawn_C__pf4061722237, b0l__K2Node_DynamicCast_AsMenu_Base__pf), Z_Construct_UClass_UMenuBase_C__pf3166771619_NoRegister, METADATA_PARAMS(NewProp_b0l__K2Node_DynamicCast_AsMenu_Base__pf_MetaData, ARRAY_COUNT(NewProp_b0l__K2Node_DynamicCast_AsMenu_Base__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_bSuccess2__pf_MetaData[] = {
				{ "ModuleRelativePath", "Public/MenuPawn__pf4061722237.h" },
				{ "OverrideNativeName", "K2Node_DynamicCast_bSuccess2" },
			};
#endif
			auto NewProp_b0l__K2Node_DynamicCast_bSuccess2__pf_SetBit = [](void* Obj){ ((AMenuPawn_C__pf4061722237*)Obj)->b0l__K2Node_DynamicCast_bSuccess2__pf = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b0l__K2Node_DynamicCast_bSuccess2__pf = { UE4CodeGen_Private::EPropertyClass::Bool, "K2Node_DynamicCast_bSuccess2", RF_Public|RF_Transient, 0x0010000000202000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AMenuPawn_C__pf4061722237), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_b0l__K2Node_DynamicCast_bSuccess2__pf_SetBit)>::SetBit, METADATA_PARAMS(NewProp_b0l__K2Node_DynamicCast_bSuccess2__pf_MetaData, ARRAY_COUNT(NewProp_b0l__K2Node_DynamicCast_bSuccess2__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_AsCoop__pf_MetaData[] = {
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/MenuPawn__pf4061722237.h" },
				{ "OverrideNativeName", "K2Node_DynamicCast_AsCoop" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__K2Node_DynamicCast_AsCoop__pf = { UE4CodeGen_Private::EPropertyClass::Object, "K2Node_DynamicCast_AsCoop", RF_Public|RF_Transient, 0x0010000000282008, 1, nullptr, STRUCT_OFFSET(AMenuPawn_C__pf4061722237, b0l__K2Node_DynamicCast_AsCoop__pf), Z_Construct_UClass_UCoop_C__pf1232574660_NoRegister, METADATA_PARAMS(NewProp_b0l__K2Node_DynamicCast_AsCoop__pf_MetaData, ARRAY_COUNT(NewProp_b0l__K2Node_DynamicCast_AsCoop__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_bSuccess1__pf_MetaData[] = {
				{ "ModuleRelativePath", "Public/MenuPawn__pf4061722237.h" },
				{ "OverrideNativeName", "K2Node_DynamicCast_bSuccess1" },
			};
#endif
			auto NewProp_b0l__K2Node_DynamicCast_bSuccess1__pf_SetBit = [](void* Obj){ ((AMenuPawn_C__pf4061722237*)Obj)->b0l__K2Node_DynamicCast_bSuccess1__pf = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b0l__K2Node_DynamicCast_bSuccess1__pf = { UE4CodeGen_Private::EPropertyClass::Bool, "K2Node_DynamicCast_bSuccess1", RF_Public|RF_Transient, 0x0010000000202000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AMenuPawn_C__pf4061722237), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_b0l__K2Node_DynamicCast_bSuccess1__pf_SetBit)>::SetBit, METADATA_PARAMS(NewProp_b0l__K2Node_DynamicCast_bSuccess1__pf_MetaData, ARRAY_COUNT(NewProp_b0l__K2Node_DynamicCast_bSuccess1__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_AsPlayer_C_Regular1__pf_MetaData[] = {
				{ "ModuleRelativePath", "Public/MenuPawn__pf4061722237.h" },
				{ "OverrideNativeName", "K2Node_DynamicCast_AsPlayer_C_Regular1" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__K2Node_DynamicCast_AsPlayer_C_Regular1__pf = { UE4CodeGen_Private::EPropertyClass::Object, "K2Node_DynamicCast_AsPlayer_C_Regular1", RF_Public|RF_Transient, 0x0010000000202000, 1, nullptr, STRUCT_OFFSET(AMenuPawn_C__pf4061722237, b0l__K2Node_DynamicCast_AsPlayer_C_Regular1__pf), Z_Construct_UClass_APlayerC_Regular_C__pf4061722237_NoRegister, METADATA_PARAMS(NewProp_b0l__K2Node_DynamicCast_AsPlayer_C_Regular1__pf_MetaData, ARRAY_COUNT(NewProp_b0l__K2Node_DynamicCast_AsPlayer_C_Regular1__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_MetaData[] = {
				{ "ModuleRelativePath", "Public/MenuPawn__pf4061722237.h" },
				{ "OverrideNativeName", "K2Node_DynamicCast_bSuccess" },
			};
#endif
			auto NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_SetBit = [](void* Obj){ ((AMenuPawn_C__pf4061722237*)Obj)->b0l__K2Node_DynamicCast_bSuccess__pf = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b0l__K2Node_DynamicCast_bSuccess__pf = { UE4CodeGen_Private::EPropertyClass::Bool, "K2Node_DynamicCast_bSuccess", RF_Public|RF_Transient, 0x0010000000202000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AMenuPawn_C__pf4061722237), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_SetBit)>::SetBit, METADATA_PARAMS(NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_MetaData, ARRAY_COUNT(NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_AsPlayer_C_Regular__pf_MetaData[] = {
				{ "ModuleRelativePath", "Public/MenuPawn__pf4061722237.h" },
				{ "OverrideNativeName", "K2Node_DynamicCast_AsPlayer_C_Regular" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__K2Node_DynamicCast_AsPlayer_C_Regular__pf = { UE4CodeGen_Private::EPropertyClass::Object, "K2Node_DynamicCast_AsPlayer_C_Regular", RF_Public|RF_Transient, 0x0010000000202000, 1, nullptr, STRUCT_OFFSET(AMenuPawn_C__pf4061722237, b0l__K2Node_DynamicCast_AsPlayer_C_Regular__pf), Z_Construct_UClass_APlayerC_Regular_C__pf4061722237_NoRegister, METADATA_PARAMS(NewProp_b0l__K2Node_DynamicCast_AsPlayer_C_Regular__pf_MetaData, ARRAY_COUNT(NewProp_b0l__K2Node_DynamicCast_AsPlayer_C_Regular__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_InputActionEvent_Key5__pf_MetaData[] = {
				{ "ModuleRelativePath", "Public/MenuPawn__pf4061722237.h" },
				{ "OverrideNativeName", "K2Node_InputActionEvent_Key5" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_b0l__K2Node_InputActionEvent_Key5__pf = { UE4CodeGen_Private::EPropertyClass::Struct, "K2Node_InputActionEvent_Key5", RF_Public|RF_Transient, 0x0010000000202000, 1, nullptr, STRUCT_OFFSET(AMenuPawn_C__pf4061722237, b0l__K2Node_InputActionEvent_Key5__pf), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(NewProp_b0l__K2Node_InputActionEvent_Key5__pf_MetaData, ARRAY_COUNT(NewProp_b0l__K2Node_InputActionEvent_Key5__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__DefaultSceneRoot__pf_MetaData[] = {
				{ "Category", "Default" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/MenuPawn__pf4061722237.h" },
				{ "OverrideNativeName", "DefaultSceneRoot" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__DefaultSceneRoot__pf = { UE4CodeGen_Private::EPropertyClass::Object, "DefaultSceneRoot", RF_Public|RF_Transient, 0x001000040008000c, 1, nullptr, STRUCT_OFFSET(AMenuPawn_C__pf4061722237, bpv__DefaultSceneRoot__pf), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(NewProp_bpv__DefaultSceneRoot__pf_MetaData, ARRAY_COUNT(NewProp_bpv__DefaultSceneRoot__pf_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b0l__K2Node_SwitchEnum3_CmpSuccess__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b0l__K2Node_DynamicCast_bSuccess25__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b0l__K2Node_DynamicCast_AsMain_Screen4__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b0l__K2Node_DynamicCast_bSuccess24__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b0l__K2Node_DynamicCast_AsDebug_State3__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b0l__K2Node_DynamicCast_bSuccess23__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b0l__K2Node_DynamicCast_AsPlayer_C_Regular6__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b0l__K2Node_SwitchEnum2_CmpSuccess__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b0l__K2Node_InputActionEvent_Key4__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b0l__K2Node_DynamicCast_bSuccess22__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b0l__K2Node_DynamicCast_AsDebug_State2__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b0l__Temp_struct_Variable1__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b0l__K2Node_InputActionEvent_Key3__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b0l__K2Node_InputActionEvent_Key2__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b0l__K2Node_DynamicCast_bSuccess21__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b0l__K2Node_DynamicCast_AsMain_Screen3__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b0l__K2Node_DynamicCast_bSuccess20__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b0l__K2Node_DynamicCast_AsMenu_Base4__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b0l__K2Node_DynamicCast_bSuccess19__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b0l__K2Node_DynamicCast_AsCoop4__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b0l__K2Node_DynamicCast_bSuccess18__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b0l__K2Node_DynamicCast_AsPlayer_C_Regular5__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b0l__K2Node_DynamicCast_bSuccess17__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b0l__K2Node_DynamicCast_AsMenu_Base3__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b0l__Temp_struct_Variable__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b0l__K2Node_DynamicCast_bSuccess16__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b0l__K2Node_DynamicCast_AsPlayer_C_Regular4__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b0l__K2Node_InputActionEvent_Key1__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b0l__K2Node_DynamicCast_bSuccess15__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b0l__K2Node_DynamicCast_AsMain_Screen2__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b0l__K2Node_DynamicCast_bSuccess14__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b0l__K2Node_DynamicCast_AsCoop3__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b0l__K2Node_DynamicCast_bSuccess13__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b0l__K2Node_DynamicCast_AsMenu_Base2__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b0l__K2Node_SwitchEnum1_CmpSuccess__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b0l__K2Node_DynamicCast_bSuccess12__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b0l__K2Node_DynamicCast_AsPlayer_C_Regular3__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b0l__K2Node_DynamicCast_bSuccess11__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b0l__K2Node_DynamicCast_AsDebug_State1__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b0l__K2Node_InputActionEvent_Key__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b0l__K2Node_DynamicCast_bSuccess10__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b0l__K2Node_DynamicCast_AsMain_Screen1__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b0l__K2Node_DynamicCast_bSuccess9__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b0l__K2Node_DynamicCast_AsCoop2__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b0l__K2Node_DynamicCast_bSuccess8__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b0l__K2Node_DynamicCast_AsMenu_Base1__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b0l__K2Node_SwitchEnum_CmpSuccess__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b0l__K2Node_DynamicCast_bSuccess7__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b0l__K2Node_DynamicCast_AsPlayer_C_Regular2__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b0l__K2Node_DynamicCast_bSuccess6__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b0l__K2Node_DynamicCast_AsDebug_State__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b0l__K2Node_DynamicCast_bSuccess5__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b0l__K2Node_DynamicCast_AsMain_Screen__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b0l__K2Node_DynamicCast_bSuccess4__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b0l__K2Node_DynamicCast_AsCoop1__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b0l__K2Node_DynamicCast_bSuccess3__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b0l__K2Node_DynamicCast_AsMenu_Base__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b0l__K2Node_DynamicCast_bSuccess2__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b0l__K2Node_DynamicCast_AsCoop__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b0l__K2Node_DynamicCast_bSuccess1__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b0l__K2Node_DynamicCast_AsPlayer_C_Regular1__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b0l__K2Node_DynamicCast_bSuccess__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b0l__K2Node_DynamicCast_AsPlayer_C_Regular__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b0l__K2Node_InputActionEvent_Key5__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bpv__DefaultSceneRoot__pf,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AMenuPawn_C__pf4061722237>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AMenuPawn_C__pf4061722237::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00800080u,
				FuncInfo, ARRAY_COUNT(FuncInfo),
				PropPointers, ARRAY_COUNT(PropPointers),
				"Game",
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_DYNAMIC_CLASS(AMenuPawn_C__pf4061722237, TEXT("MenuPawn_C"), 1834534780);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMenuPawn_C__pf4061722237(Z_Construct_UClass_AMenuPawn_C__pf4061722237, &AMenuPawn_C__pf4061722237::StaticClass, TEXT("/Game/Player/MenuPawn"), TEXT("MenuPawn_C"), true, TEXT("/Game/Player/MenuPawn"), TEXT("/Game/Player/MenuPawn.MenuPawn_C"), nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMenuPawn_C__pf4061722237);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
