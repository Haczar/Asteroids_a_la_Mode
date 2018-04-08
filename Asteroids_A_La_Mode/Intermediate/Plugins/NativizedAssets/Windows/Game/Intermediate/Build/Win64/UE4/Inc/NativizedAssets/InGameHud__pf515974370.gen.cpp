// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Private/NativizedAssets.h"
#include "Public/InGameHud__pf515974370.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInGameHud__pf515974370() {}
// Cross Module References
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_UInGameHud_C__pf515974370_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_UInGameHud_C__pf515974370();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	NATIVIZEDASSETS_API UFunction* Z_Construct_UFunction_UInGameHud_C__pf515974370_bpf__DeterminexPlayer__pfT();
	ENGINE_API UClass* Z_Construct_UClass_AController_NoRegister();
	NATIVIZEDASSETS_API UFunction* Z_Construct_UFunction_UInGameHud_C__pf515974370_bpf__Makexp2xvisible__pfTT();
	NATIVIZEDASSETS_API UFunction* Z_Construct_UFunction_UInGameHud_C__pf515974370_bpf__UpdatexLives__pfT();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
	NATIVIZEDASSETS_API UFunction* Z_Construct_UFunction_UInGameHud_C__pf515974370_bpf__UpdatexScore__pfT();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_ADebugState_C__pf4162722864_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UVerticalBox_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
// End Cross Module References
	void UInGameHud_C__pf515974370::StaticRegisterNativesUInGameHud_C__pf515974370()
	{
		UClass* Class = UInGameHud_C__pf515974370::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Determine Player", &UInGameHud_C__pf515974370::execbpf__DeterminexPlayer__pfT },
			{ "Make p2 visible", &UInGameHud_C__pf515974370::execbpf__Makexp2xvisible__pfTT },
			{ "Update Lives", &UInGameHud_C__pf515974370::execbpf__UpdatexLives__pfT },
			{ "Update Score", &UInGameHud_C__pf515974370::execbpf__UpdatexScore__pfT },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UInGameHud_C__pf515974370_bpf__DeterminexPlayer__pfT()
	{
		struct InGameHud_C__pf515974370_eventbpf__DeterminexPlayer__pfT_Parms
		{
			AController* bpp__Playah__pf;
			bool bpp__determination__pf;
		};
		UObject* Outer = Z_Construct_UClass_UInGameHud_C__pf515974370();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("Determine Player") ));
		if (!ReturnFunction)
		{
			auto NewProp_bpp__determination__pf_SetBit = [](void* Obj){ ((InGameHud_C__pf515974370_eventbpf__DeterminexPlayer__pfT_Parms*)Obj)->bpp__determination__pf = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bpp__determination__pf = { UE4CodeGen_Private::EPropertyClass::Bool, "bpp__determination__pf", RF_Public|RF_Transient, 0x0010000000000180, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(InGameHud_C__pf515974370_eventbpf__DeterminexPlayer__pfT_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bpp__determination__pf_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpp__Playah__pf = { UE4CodeGen_Private::EPropertyClass::Object, "bpp__Playah__pf", RF_Public|RF_Transient, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(InGameHud_C__pf515974370_eventbpf__DeterminexPlayer__pfT_Parms, bpp__Playah__pf), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bpp__determination__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bpp__Playah__pf,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "" },
				{ "ModuleRelativePath", "Public/InGameHud__pf515974370.h" },
				{ "OverrideNativeName", "Determine Player" },
				{ "ToolTip", "out" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UInGameHud_C__pf515974370, "Determine Player", RF_Public|RF_Transient, nullptr, (EFunctionFlags)0x14420400, sizeof(InGameHud_C__pf515974370_eventbpf__DeterminexPlayer__pfT_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UInGameHud_C__pf515974370_bpf__Makexp2xvisible__pfTT()
	{
		UObject* Outer = Z_Construct_UClass_UInGameHud_C__pf515974370();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("Make p2 visible") ));
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "" },
				{ "ModuleRelativePath", "Public/InGameHud__pf515974370.h" },
				{ "OverrideNativeName", "Make p2 visible" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UInGameHud_C__pf515974370, "Make p2 visible", RF_Public|RF_Transient, nullptr, (EFunctionFlags)0x04020400, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UInGameHud_C__pf515974370_bpf__UpdatexLives__pfT()
	{
		struct InGameHud_C__pf515974370_eventbpf__UpdatexLives__pfT_Parms
		{
			APlayerController* bpp__Player__pf;
		};
		UObject* Outer = Z_Construct_UClass_UInGameHud_C__pf515974370();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("Update Lives") ));
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpp__Player__pf = { UE4CodeGen_Private::EPropertyClass::Object, "bpp__Player__pf", RF_Public|RF_Transient, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(InGameHud_C__pf515974370_eventbpf__UpdatexLives__pfT_Parms, bpp__Player__pf), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bpp__Player__pf,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "" },
				{ "ModuleRelativePath", "Public/InGameHud__pf515974370.h" },
				{ "OverrideNativeName", "Update Lives" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UInGameHud_C__pf515974370, "Update Lives", RF_Public|RF_Transient, nullptr, (EFunctionFlags)0x04020400, sizeof(InGameHud_C__pf515974370_eventbpf__UpdatexLives__pfT_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UInGameHud_C__pf515974370_bpf__UpdatexScore__pfT()
	{
		struct InGameHud_C__pf515974370_eventbpf__UpdatexScore__pfT_Parms
		{
			APlayerController* bpp__Player__pf;
		};
		UObject* Outer = Z_Construct_UClass_UInGameHud_C__pf515974370();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("Update Score") ));
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpp__Player__pf = { UE4CodeGen_Private::EPropertyClass::Object, "bpp__Player__pf", RF_Public|RF_Transient, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(InGameHud_C__pf515974370_eventbpf__UpdatexScore__pfT_Parms, bpp__Player__pf), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bpp__Player__pf,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "" },
				{ "ModuleRelativePath", "Public/InGameHud__pf515974370.h" },
				{ "OverrideNativeName", "Update Score" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UInGameHud_C__pf515974370, "Update Score", RF_Public|RF_Transient, nullptr, (EFunctionFlags)0x04020400, sizeof(InGameHud_C__pf515974370_eventbpf__UpdatexScore__pfT_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UInGameHud_C__pf515974370_NoRegister()
	{
		return UInGameHud_C__pf515974370::StaticClass();
	}
	UClass* Z_Construct_UClass_UInGameHud_C__pf515974370()
	{
		UPackage* OuterPackage = FindOrConstructDynamicTypePackage(TEXT("/Game/UserInterface/Dev_Test/InGameHud"));
		UClass* OuterClass = Cast<UClass>(StaticFindObjectFast(UClass::StaticClass(), OuterPackage, TEXT("InGameHud_C")));
		if (!OuterClass || !(OuterClass->ClassFlags & CLASS_Constructed))
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UUserWidget,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UInGameHud_C__pf515974370_bpf__DeterminexPlayer__pfT, "Determine Player" }, // 251480103
				{ &Z_Construct_UFunction_UInGameHud_C__pf515974370_bpf__Makexp2xvisible__pfTT, "Make p2 visible" }, // 2178253996
				{ &Z_Construct_UFunction_UInGameHud_C__pf515974370_bpf__UpdatexLives__pfT, "Update Lives" }, // 831618721
				{ &Z_Construct_UFunction_UInGameHud_C__pf515974370_bpf__UpdatexScore__pfT, "Update Score" }, // 2417011628
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "IncludePath", "InGameHud__pf515974370.h" },
				{ "IsBlueprintBase", "true" },
				{ "ModuleRelativePath", "Public/InGameHud__pf515974370.h" },
				{ "ObjectInitializerConstructorDeclared", "" },
				{ "OverrideNativeName", "InGameHud_C" },
				{ "ReplaceConverted", "/Game/UserInterface/Dev_Test/InGameHud.InGameHud_C" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_SwitchInteger3_CmpSuccess__pf_MetaData[] = {
				{ "ModuleRelativePath", "Public/InGameHud__pf515974370.h" },
				{ "OverrideNativeName", "K2Node_SwitchInteger3_CmpSuccess" },
			};
#endif
			auto NewProp_b0l__K2Node_SwitchInteger3_CmpSuccess__pf_SetBit = [](void* Obj){ ((UInGameHud_C__pf515974370*)Obj)->b0l__K2Node_SwitchInteger3_CmpSuccess__pf = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b0l__K2Node_SwitchInteger3_CmpSuccess__pf = { UE4CodeGen_Private::EPropertyClass::Bool, "K2Node_SwitchInteger3_CmpSuccess", RF_Public|RF_Transient, 0x0010000000202000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UInGameHud_C__pf515974370), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_b0l__K2Node_SwitchInteger3_CmpSuccess__pf_SetBit)>::SetBit, METADATA_PARAMS(NewProp_b0l__K2Node_SwitchInteger3_CmpSuccess__pf_MetaData, ARRAY_COUNT(NewProp_b0l__K2Node_SwitchInteger3_CmpSuccess__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__Temp_int_Variable3__pf_MetaData[] = {
				{ "ModuleRelativePath", "Public/InGameHud__pf515974370.h" },
				{ "OverrideNativeName", "Temp_int_Variable3" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_b0l__Temp_int_Variable3__pf = { UE4CodeGen_Private::EPropertyClass::Int, "Temp_int_Variable3", RF_Public|RF_Transient, 0x0010000000202000, 1, nullptr, STRUCT_OFFSET(UInGameHud_C__pf515974370, b0l__Temp_int_Variable3__pf), METADATA_PARAMS(NewProp_b0l__Temp_int_Variable3__pf_MetaData, ARRAY_COUNT(NewProp_b0l__Temp_int_Variable3__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_bSuccess3__pf_MetaData[] = {
				{ "ModuleRelativePath", "Public/InGameHud__pf515974370.h" },
				{ "OverrideNativeName", "K2Node_DynamicCast_bSuccess3" },
			};
#endif
			auto NewProp_b0l__K2Node_DynamicCast_bSuccess3__pf_SetBit = [](void* Obj){ ((UInGameHud_C__pf515974370*)Obj)->b0l__K2Node_DynamicCast_bSuccess3__pf = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b0l__K2Node_DynamicCast_bSuccess3__pf = { UE4CodeGen_Private::EPropertyClass::Bool, "K2Node_DynamicCast_bSuccess3", RF_Public|RF_Transient, 0x0010000000202000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UInGameHud_C__pf515974370), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_b0l__K2Node_DynamicCast_bSuccess3__pf_SetBit)>::SetBit, METADATA_PARAMS(NewProp_b0l__K2Node_DynamicCast_bSuccess3__pf_MetaData, ARRAY_COUNT(NewProp_b0l__K2Node_DynamicCast_bSuccess3__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_AsDebug_State3__pf_MetaData[] = {
				{ "ModuleRelativePath", "Public/InGameHud__pf515974370.h" },
				{ "OverrideNativeName", "K2Node_DynamicCast_AsDebug_State3" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__K2Node_DynamicCast_AsDebug_State3__pf = { UE4CodeGen_Private::EPropertyClass::Object, "K2Node_DynamicCast_AsDebug_State3", RF_Public|RF_Transient, 0x0010000000202000, 1, nullptr, STRUCT_OFFSET(UInGameHud_C__pf515974370, b0l__K2Node_DynamicCast_AsDebug_State3__pf), Z_Construct_UClass_ADebugState_C__pf4162722864_NoRegister, METADATA_PARAMS(NewProp_b0l__K2Node_DynamicCast_AsDebug_State3__pf_MetaData, ARRAY_COUNT(NewProp_b0l__K2Node_DynamicCast_AsDebug_State3__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_bSuccess2__pf_MetaData[] = {
				{ "ModuleRelativePath", "Public/InGameHud__pf515974370.h" },
				{ "OverrideNativeName", "K2Node_DynamicCast_bSuccess2" },
			};
#endif
			auto NewProp_b0l__K2Node_DynamicCast_bSuccess2__pf_SetBit = [](void* Obj){ ((UInGameHud_C__pf515974370*)Obj)->b0l__K2Node_DynamicCast_bSuccess2__pf = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b0l__K2Node_DynamicCast_bSuccess2__pf = { UE4CodeGen_Private::EPropertyClass::Bool, "K2Node_DynamicCast_bSuccess2", RF_Public|RF_Transient, 0x0010000000202000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UInGameHud_C__pf515974370), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_b0l__K2Node_DynamicCast_bSuccess2__pf_SetBit)>::SetBit, METADATA_PARAMS(NewProp_b0l__K2Node_DynamicCast_bSuccess2__pf_MetaData, ARRAY_COUNT(NewProp_b0l__K2Node_DynamicCast_bSuccess2__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_AsDebug_State2__pf_MetaData[] = {
				{ "ModuleRelativePath", "Public/InGameHud__pf515974370.h" },
				{ "OverrideNativeName", "K2Node_DynamicCast_AsDebug_State2" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__K2Node_DynamicCast_AsDebug_State2__pf = { UE4CodeGen_Private::EPropertyClass::Object, "K2Node_DynamicCast_AsDebug_State2", RF_Public|RF_Transient, 0x0010000000202000, 1, nullptr, STRUCT_OFFSET(UInGameHud_C__pf515974370, b0l__K2Node_DynamicCast_AsDebug_State2__pf), Z_Construct_UClass_ADebugState_C__pf4162722864_NoRegister, METADATA_PARAMS(NewProp_b0l__K2Node_DynamicCast_AsDebug_State2__pf_MetaData, ARRAY_COUNT(NewProp_b0l__K2Node_DynamicCast_AsDebug_State2__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_CustomEvent_Player__pf_MetaData[] = {
				{ "ModuleRelativePath", "Public/InGameHud__pf515974370.h" },
				{ "OverrideNativeName", "K2Node_CustomEvent_Player" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__K2Node_CustomEvent_Player__pf = { UE4CodeGen_Private::EPropertyClass::Object, "K2Node_CustomEvent_Player", RF_Public|RF_Transient, 0x0010000000202000, 1, nullptr, STRUCT_OFFSET(UInGameHud_C__pf515974370, b0l__K2Node_CustomEvent_Player__pf), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(NewProp_b0l__K2Node_CustomEvent_Player__pf_MetaData, ARRAY_COUNT(NewProp_b0l__K2Node_CustomEvent_Player__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_CustomEvent_Player1__pf_MetaData[] = {
				{ "ModuleRelativePath", "Public/InGameHud__pf515974370.h" },
				{ "OverrideNativeName", "K2Node_CustomEvent_Player1" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__K2Node_CustomEvent_Player1__pf = { UE4CodeGen_Private::EPropertyClass::Object, "K2Node_CustomEvent_Player1", RF_Public|RF_Transient, 0x0010000000202000, 1, nullptr, STRUCT_OFFSET(UInGameHud_C__pf515974370, b0l__K2Node_CustomEvent_Player1__pf), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(NewProp_b0l__K2Node_CustomEvent_Player1__pf_MetaData, ARRAY_COUNT(NewProp_b0l__K2Node_CustomEvent_Player1__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_bSuccess1__pf_MetaData[] = {
				{ "ModuleRelativePath", "Public/InGameHud__pf515974370.h" },
				{ "OverrideNativeName", "K2Node_DynamicCast_bSuccess1" },
			};
#endif
			auto NewProp_b0l__K2Node_DynamicCast_bSuccess1__pf_SetBit = [](void* Obj){ ((UInGameHud_C__pf515974370*)Obj)->b0l__K2Node_DynamicCast_bSuccess1__pf = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b0l__K2Node_DynamicCast_bSuccess1__pf = { UE4CodeGen_Private::EPropertyClass::Bool, "K2Node_DynamicCast_bSuccess1", RF_Public|RF_Transient, 0x0010000000202000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UInGameHud_C__pf515974370), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_b0l__K2Node_DynamicCast_bSuccess1__pf_SetBit)>::SetBit, METADATA_PARAMS(NewProp_b0l__K2Node_DynamicCast_bSuccess1__pf_MetaData, ARRAY_COUNT(NewProp_b0l__K2Node_DynamicCast_bSuccess1__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_AsDebug_State1__pf_MetaData[] = {
				{ "ModuleRelativePath", "Public/InGameHud__pf515974370.h" },
				{ "OverrideNativeName", "K2Node_DynamicCast_AsDebug_State1" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__K2Node_DynamicCast_AsDebug_State1__pf = { UE4CodeGen_Private::EPropertyClass::Object, "K2Node_DynamicCast_AsDebug_State1", RF_Public|RF_Transient, 0x0010000000202000, 1, nullptr, STRUCT_OFFSET(UInGameHud_C__pf515974370, b0l__K2Node_DynamicCast_AsDebug_State1__pf), Z_Construct_UClass_ADebugState_C__pf4162722864_NoRegister, METADATA_PARAMS(NewProp_b0l__K2Node_DynamicCast_AsDebug_State1__pf_MetaData, ARRAY_COUNT(NewProp_b0l__K2Node_DynamicCast_AsDebug_State1__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_SwitchInteger2_CmpSuccess__pf_MetaData[] = {
				{ "ModuleRelativePath", "Public/InGameHud__pf515974370.h" },
				{ "OverrideNativeName", "K2Node_SwitchInteger2_CmpSuccess" },
			};
#endif
			auto NewProp_b0l__K2Node_SwitchInteger2_CmpSuccess__pf_SetBit = [](void* Obj){ ((UInGameHud_C__pf515974370*)Obj)->b0l__K2Node_SwitchInteger2_CmpSuccess__pf = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b0l__K2Node_SwitchInteger2_CmpSuccess__pf = { UE4CodeGen_Private::EPropertyClass::Bool, "K2Node_SwitchInteger2_CmpSuccess", RF_Public|RF_Transient, 0x0010000000202000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UInGameHud_C__pf515974370), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_b0l__K2Node_SwitchInteger2_CmpSuccess__pf_SetBit)>::SetBit, METADATA_PARAMS(NewProp_b0l__K2Node_SwitchInteger2_CmpSuccess__pf_MetaData, ARRAY_COUNT(NewProp_b0l__K2Node_SwitchInteger2_CmpSuccess__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__Temp_int_Variable2__pf_MetaData[] = {
				{ "ModuleRelativePath", "Public/InGameHud__pf515974370.h" },
				{ "OverrideNativeName", "Temp_int_Variable2" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_b0l__Temp_int_Variable2__pf = { UE4CodeGen_Private::EPropertyClass::Int, "Temp_int_Variable2", RF_Public|RF_Transient, 0x0010000000202000, 1, nullptr, STRUCT_OFFSET(UInGameHud_C__pf515974370, b0l__Temp_int_Variable2__pf), METADATA_PARAMS(NewProp_b0l__Temp_int_Variable2__pf_MetaData, ARRAY_COUNT(NewProp_b0l__Temp_int_Variable2__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_SwitchInteger1_CmpSuccess__pf_MetaData[] = {
				{ "ModuleRelativePath", "Public/InGameHud__pf515974370.h" },
				{ "OverrideNativeName", "K2Node_SwitchInteger1_CmpSuccess" },
			};
#endif
			auto NewProp_b0l__K2Node_SwitchInteger1_CmpSuccess__pf_SetBit = [](void* Obj){ ((UInGameHud_C__pf515974370*)Obj)->b0l__K2Node_SwitchInteger1_CmpSuccess__pf = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b0l__K2Node_SwitchInteger1_CmpSuccess__pf = { UE4CodeGen_Private::EPropertyClass::Bool, "K2Node_SwitchInteger1_CmpSuccess", RF_Public|RF_Transient, 0x0010000000202000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UInGameHud_C__pf515974370), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_b0l__K2Node_SwitchInteger1_CmpSuccess__pf_SetBit)>::SetBit, METADATA_PARAMS(NewProp_b0l__K2Node_SwitchInteger1_CmpSuccess__pf_MetaData, ARRAY_COUNT(NewProp_b0l__K2Node_SwitchInteger1_CmpSuccess__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__Temp_int_Variable1__pf_MetaData[] = {
				{ "ModuleRelativePath", "Public/InGameHud__pf515974370.h" },
				{ "OverrideNativeName", "Temp_int_Variable1" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_b0l__Temp_int_Variable1__pf = { UE4CodeGen_Private::EPropertyClass::Int, "Temp_int_Variable1", RF_Public|RF_Transient, 0x0010000000202000, 1, nullptr, STRUCT_OFFSET(UInGameHud_C__pf515974370, b0l__Temp_int_Variable1__pf), METADATA_PARAMS(NewProp_b0l__Temp_int_Variable1__pf_MetaData, ARRAY_COUNT(NewProp_b0l__Temp_int_Variable1__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_MetaData[] = {
				{ "ModuleRelativePath", "Public/InGameHud__pf515974370.h" },
				{ "OverrideNativeName", "K2Node_DynamicCast_bSuccess" },
			};
#endif
			auto NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_SetBit = [](void* Obj){ ((UInGameHud_C__pf515974370*)Obj)->b0l__K2Node_DynamicCast_bSuccess__pf = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b0l__K2Node_DynamicCast_bSuccess__pf = { UE4CodeGen_Private::EPropertyClass::Bool, "K2Node_DynamicCast_bSuccess", RF_Public|RF_Transient, 0x0010000000202000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UInGameHud_C__pf515974370), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_SetBit)>::SetBit, METADATA_PARAMS(NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_MetaData, ARRAY_COUNT(NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_AsDebug_State__pf_MetaData[] = {
				{ "ModuleRelativePath", "Public/InGameHud__pf515974370.h" },
				{ "OverrideNativeName", "K2Node_DynamicCast_AsDebug_State" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__K2Node_DynamicCast_AsDebug_State__pf = { UE4CodeGen_Private::EPropertyClass::Object, "K2Node_DynamicCast_AsDebug_State", RF_Public|RF_Transient, 0x0010000000202000, 1, nullptr, STRUCT_OFFSET(UInGameHud_C__pf515974370, b0l__K2Node_DynamicCast_AsDebug_State__pf), Z_Construct_UClass_ADebugState_C__pf4162722864_NoRegister, METADATA_PARAMS(NewProp_b0l__K2Node_DynamicCast_AsDebug_State__pf_MetaData, ARRAY_COUNT(NewProp_b0l__K2Node_DynamicCast_AsDebug_State__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_SwitchInteger_CmpSuccess__pf_MetaData[] = {
				{ "ModuleRelativePath", "Public/InGameHud__pf515974370.h" },
				{ "OverrideNativeName", "K2Node_SwitchInteger_CmpSuccess" },
			};
#endif
			auto NewProp_b0l__K2Node_SwitchInteger_CmpSuccess__pf_SetBit = [](void* Obj){ ((UInGameHud_C__pf515974370*)Obj)->b0l__K2Node_SwitchInteger_CmpSuccess__pf = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b0l__K2Node_SwitchInteger_CmpSuccess__pf = { UE4CodeGen_Private::EPropertyClass::Bool, "K2Node_SwitchInteger_CmpSuccess", RF_Public|RF_Transient, 0x0010000000202000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UInGameHud_C__pf515974370), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_b0l__K2Node_SwitchInteger_CmpSuccess__pf_SetBit)>::SetBit, METADATA_PARAMS(NewProp_b0l__K2Node_SwitchInteger_CmpSuccess__pf_MetaData, ARRAY_COUNT(NewProp_b0l__K2Node_SwitchInteger_CmpSuccess__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__Temp_int_Variable__pf_MetaData[] = {
				{ "ModuleRelativePath", "Public/InGameHud__pf515974370.h" },
				{ "OverrideNativeName", "Temp_int_Variable" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_b0l__Temp_int_Variable__pf = { UE4CodeGen_Private::EPropertyClass::Int, "Temp_int_Variable", RF_Public|RF_Transient, 0x0010000000202000, 1, nullptr, STRUCT_OFFSET(UInGameHud_C__pf515974370, b0l__Temp_int_Variable__pf), METADATA_PARAMS(NewProp_b0l__Temp_int_Variable__pf_MetaData, ARRAY_COUNT(NewProp_b0l__Temp_int_Variable__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Player1__pf_MetaData[] = {
				{ "Category", "Default" },
				{ "DisplayName", "Player 1" },
				{ "ModuleRelativePath", "Public/InGameHud__pf515974370.h" },
				{ "OverrideNativeName", "Player1" },
			};
#endif
			auto NewProp_bpv__Player1__pf_SetBit = [](void* Obj){ ((UInGameHud_C__pf515974370*)Obj)->bpv__Player1__pf = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bpv__Player1__pf = { UE4CodeGen_Private::EPropertyClass::Bool, "Player1", RF_Public|RF_Transient, 0x0010000000010005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UInGameHud_C__pf515974370), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bpv__Player1__pf_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bpv__Player1__pf_MetaData, ARRAY_COUNT(NewProp_bpv__Player1__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__PlayerLifeIcon2_7__pf_MetaData[] = {
				{ "Category", "InGameHud" },
				{ "DisplayName", "PlayerLifeIcon2_7" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/InGameHud__pf515974370.h" },
				{ "OverrideNativeName", "PlayerLifeIcon2_7" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__PlayerLifeIcon2_7__pf = { UE4CodeGen_Private::EPropertyClass::Object, "PlayerLifeIcon2_7", RF_Public|RF_Transient, 0x001000000008000c, 1, nullptr, STRUCT_OFFSET(UInGameHud_C__pf515974370, bpv__PlayerLifeIcon2_7__pf), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(NewProp_bpv__PlayerLifeIcon2_7__pf_MetaData, ARRAY_COUNT(NewProp_bpv__PlayerLifeIcon2_7__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__PlayerLifeIcon2_6__pf_MetaData[] = {
				{ "Category", "InGameHud" },
				{ "DisplayName", "PlayerLifeIcon2_6" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/InGameHud__pf515974370.h" },
				{ "OverrideNativeName", "PlayerLifeIcon2_6" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__PlayerLifeIcon2_6__pf = { UE4CodeGen_Private::EPropertyClass::Object, "PlayerLifeIcon2_6", RF_Public|RF_Transient, 0x001000000008000c, 1, nullptr, STRUCT_OFFSET(UInGameHud_C__pf515974370, bpv__PlayerLifeIcon2_6__pf), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(NewProp_bpv__PlayerLifeIcon2_6__pf_MetaData, ARRAY_COUNT(NewProp_bpv__PlayerLifeIcon2_6__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__PlayerLifeIcon2_5__pf_MetaData[] = {
				{ "Category", "InGameHud" },
				{ "DisplayName", "PlayerLifeIcon2_5" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/InGameHud__pf515974370.h" },
				{ "OverrideNativeName", "PlayerLifeIcon2_5" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__PlayerLifeIcon2_5__pf = { UE4CodeGen_Private::EPropertyClass::Object, "PlayerLifeIcon2_5", RF_Public|RF_Transient, 0x001000000008000c, 1, nullptr, STRUCT_OFFSET(UInGameHud_C__pf515974370, bpv__PlayerLifeIcon2_5__pf), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(NewProp_bpv__PlayerLifeIcon2_5__pf_MetaData, ARRAY_COUNT(NewProp_bpv__PlayerLifeIcon2_5__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__PlayerLifeIcon2_4__pf_MetaData[] = {
				{ "Category", "InGameHud" },
				{ "DisplayName", "PlayerLifeIcon2_4" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/InGameHud__pf515974370.h" },
				{ "OverrideNativeName", "PlayerLifeIcon2_4" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__PlayerLifeIcon2_4__pf = { UE4CodeGen_Private::EPropertyClass::Object, "PlayerLifeIcon2_4", RF_Public|RF_Transient, 0x001000000008000c, 1, nullptr, STRUCT_OFFSET(UInGameHud_C__pf515974370, bpv__PlayerLifeIcon2_4__pf), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(NewProp_bpv__PlayerLifeIcon2_4__pf_MetaData, ARRAY_COUNT(NewProp_bpv__PlayerLifeIcon2_4__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__PlayerLifeIcon2_3__pf_MetaData[] = {
				{ "Category", "InGameHud" },
				{ "DisplayName", "PlayerLifeIcon2_3" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/InGameHud__pf515974370.h" },
				{ "OverrideNativeName", "PlayerLifeIcon2_3" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__PlayerLifeIcon2_3__pf = { UE4CodeGen_Private::EPropertyClass::Object, "PlayerLifeIcon2_3", RF_Public|RF_Transient, 0x001000000008000c, 1, nullptr, STRUCT_OFFSET(UInGameHud_C__pf515974370, bpv__PlayerLifeIcon2_3__pf), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(NewProp_bpv__PlayerLifeIcon2_3__pf_MetaData, ARRAY_COUNT(NewProp_bpv__PlayerLifeIcon2_3__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__PlayerLifeIcon2_2__pf_MetaData[] = {
				{ "Category", "InGameHud" },
				{ "DisplayName", "PlayerLifeIcon2_2" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/InGameHud__pf515974370.h" },
				{ "OverrideNativeName", "PlayerLifeIcon2_2" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__PlayerLifeIcon2_2__pf = { UE4CodeGen_Private::EPropertyClass::Object, "PlayerLifeIcon2_2", RF_Public|RF_Transient, 0x001000000008000c, 1, nullptr, STRUCT_OFFSET(UInGameHud_C__pf515974370, bpv__PlayerLifeIcon2_2__pf), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(NewProp_bpv__PlayerLifeIcon2_2__pf_MetaData, ARRAY_COUNT(NewProp_bpv__PlayerLifeIcon2_2__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__PlayerLifeIcon2_1__pf_MetaData[] = {
				{ "Category", "InGameHud" },
				{ "DisplayName", "PlayerLifeIcon2_1" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/InGameHud__pf515974370.h" },
				{ "OverrideNativeName", "PlayerLifeIcon2_1" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__PlayerLifeIcon2_1__pf = { UE4CodeGen_Private::EPropertyClass::Object, "PlayerLifeIcon2_1", RF_Public|RF_Transient, 0x001000000008000c, 1, nullptr, STRUCT_OFFSET(UInGameHud_C__pf515974370, bpv__PlayerLifeIcon2_1__pf), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(NewProp_bpv__PlayerLifeIcon2_1__pf_MetaData, ARRAY_COUNT(NewProp_bpv__PlayerLifeIcon2_1__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__PlayerLifeIcon1_7__pf_MetaData[] = {
				{ "Category", "InGameHud" },
				{ "DisplayName", "PlayerLifeIcon1_7" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/InGameHud__pf515974370.h" },
				{ "OverrideNativeName", "PlayerLifeIcon1_7" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__PlayerLifeIcon1_7__pf = { UE4CodeGen_Private::EPropertyClass::Object, "PlayerLifeIcon1_7", RF_Public|RF_Transient, 0x001000000008000c, 1, nullptr, STRUCT_OFFSET(UInGameHud_C__pf515974370, bpv__PlayerLifeIcon1_7__pf), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(NewProp_bpv__PlayerLifeIcon1_7__pf_MetaData, ARRAY_COUNT(NewProp_bpv__PlayerLifeIcon1_7__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__PlayerLifeIcon1_6__pf_MetaData[] = {
				{ "Category", "InGameHud" },
				{ "DisplayName", "PlayerLifeIcon1_6" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/InGameHud__pf515974370.h" },
				{ "OverrideNativeName", "PlayerLifeIcon1_6" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__PlayerLifeIcon1_6__pf = { UE4CodeGen_Private::EPropertyClass::Object, "PlayerLifeIcon1_6", RF_Public|RF_Transient, 0x001000000008000c, 1, nullptr, STRUCT_OFFSET(UInGameHud_C__pf515974370, bpv__PlayerLifeIcon1_6__pf), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(NewProp_bpv__PlayerLifeIcon1_6__pf_MetaData, ARRAY_COUNT(NewProp_bpv__PlayerLifeIcon1_6__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__PlayerLifeIcon1_5__pf_MetaData[] = {
				{ "Category", "InGameHud" },
				{ "DisplayName", "PlayerLifeIcon1_5" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/InGameHud__pf515974370.h" },
				{ "OverrideNativeName", "PlayerLifeIcon1_5" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__PlayerLifeIcon1_5__pf = { UE4CodeGen_Private::EPropertyClass::Object, "PlayerLifeIcon1_5", RF_Public|RF_Transient, 0x001000000008000c, 1, nullptr, STRUCT_OFFSET(UInGameHud_C__pf515974370, bpv__PlayerLifeIcon1_5__pf), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(NewProp_bpv__PlayerLifeIcon1_5__pf_MetaData, ARRAY_COUNT(NewProp_bpv__PlayerLifeIcon1_5__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__PlayerLifeIcon1_4__pf_MetaData[] = {
				{ "Category", "InGameHud" },
				{ "DisplayName", "PlayerLifeIcon1_4" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/InGameHud__pf515974370.h" },
				{ "OverrideNativeName", "PlayerLifeIcon1_4" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__PlayerLifeIcon1_4__pf = { UE4CodeGen_Private::EPropertyClass::Object, "PlayerLifeIcon1_4", RF_Public|RF_Transient, 0x001000000008000c, 1, nullptr, STRUCT_OFFSET(UInGameHud_C__pf515974370, bpv__PlayerLifeIcon1_4__pf), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(NewProp_bpv__PlayerLifeIcon1_4__pf_MetaData, ARRAY_COUNT(NewProp_bpv__PlayerLifeIcon1_4__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__PlayerLifeIcon1_3__pf_MetaData[] = {
				{ "Category", "InGameHud" },
				{ "DisplayName", "PlayerLifeIcon1_3" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/InGameHud__pf515974370.h" },
				{ "OverrideNativeName", "PlayerLifeIcon1_3" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__PlayerLifeIcon1_3__pf = { UE4CodeGen_Private::EPropertyClass::Object, "PlayerLifeIcon1_3", RF_Public|RF_Transient, 0x001000000008000c, 1, nullptr, STRUCT_OFFSET(UInGameHud_C__pf515974370, bpv__PlayerLifeIcon1_3__pf), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(NewProp_bpv__PlayerLifeIcon1_3__pf_MetaData, ARRAY_COUNT(NewProp_bpv__PlayerLifeIcon1_3__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__PlayerLifeIcon1_2__pf_MetaData[] = {
				{ "Category", "InGameHud" },
				{ "DisplayName", "PlayerLifeIcon1_2" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/InGameHud__pf515974370.h" },
				{ "OverrideNativeName", "PlayerLifeIcon1_2" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__PlayerLifeIcon1_2__pf = { UE4CodeGen_Private::EPropertyClass::Object, "PlayerLifeIcon1_2", RF_Public|RF_Transient, 0x001000000008000c, 1, nullptr, STRUCT_OFFSET(UInGameHud_C__pf515974370, bpv__PlayerLifeIcon1_2__pf), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(NewProp_bpv__PlayerLifeIcon1_2__pf_MetaData, ARRAY_COUNT(NewProp_bpv__PlayerLifeIcon1_2__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__PlayerLifeIcon1_1__pf_MetaData[] = {
				{ "Category", "InGameHud" },
				{ "DisplayName", "PlayerLifeIcon1_1" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/InGameHud__pf515974370.h" },
				{ "OverrideNativeName", "PlayerLifeIcon1_1" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__PlayerLifeIcon1_1__pf = { UE4CodeGen_Private::EPropertyClass::Object, "PlayerLifeIcon1_1", RF_Public|RF_Transient, 0x001000000008000c, 1, nullptr, STRUCT_OFFSET(UInGameHud_C__pf515974370, bpv__PlayerLifeIcon1_1__pf), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(NewProp_bpv__PlayerLifeIcon1_1__pf_MetaData, ARRAY_COUNT(NewProp_bpv__PlayerLifeIcon1_1__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Player2StatsVB__pf_MetaData[] = {
				{ "Category", "InGameHud" },
				{ "DisplayName", "Player2 Stats VB" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/InGameHud__pf515974370.h" },
				{ "OverrideNativeName", "Player2StatsVB" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__Player2StatsVB__pf = { UE4CodeGen_Private::EPropertyClass::Object, "Player2StatsVB", RF_Public|RF_Transient, 0x001000000008000c, 1, nullptr, STRUCT_OFFSET(UInGameHud_C__pf515974370, bpv__Player2StatsVB__pf), Z_Construct_UClass_UVerticalBox_NoRegister, METADATA_PARAMS(NewProp_bpv__Player2StatsVB__pf_MetaData, ARRAY_COUNT(NewProp_bpv__Player2StatsVB__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Player2_Score__pf_MetaData[] = {
				{ "Category", "InGameHud" },
				{ "DisplayName", "Player2_Score" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/InGameHud__pf515974370.h" },
				{ "OverrideNativeName", "Player2_Score" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__Player2_Score__pf = { UE4CodeGen_Private::EPropertyClass::Object, "Player2_Score", RF_Public|RF_Transient, 0x001000000008000c, 1, nullptr, STRUCT_OFFSET(UInGameHud_C__pf515974370, bpv__Player2_Score__pf), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(NewProp_bpv__Player2_Score__pf_MetaData, ARRAY_COUNT(NewProp_bpv__Player2_Score__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Player2_Name__pf_MetaData[] = {
				{ "Category", "InGameHud" },
				{ "DisplayName", "Player2_Name" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/InGameHud__pf515974370.h" },
				{ "OverrideNativeName", "Player2_Name" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__Player2_Name__pf = { UE4CodeGen_Private::EPropertyClass::Object, "Player2_Name", RF_Public|RF_Transient, 0x001000000008000c, 1, nullptr, STRUCT_OFFSET(UInGameHud_C__pf515974370, bpv__Player2_Name__pf), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(NewProp_bpv__Player2_Name__pf_MetaData, ARRAY_COUNT(NewProp_bpv__Player2_Name__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Player1_Score__pf_MetaData[] = {
				{ "Category", "InGameHud" },
				{ "DisplayName", "Player1_Score" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/InGameHud__pf515974370.h" },
				{ "OverrideNativeName", "Player1_Score" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__Player1_Score__pf = { UE4CodeGen_Private::EPropertyClass::Object, "Player1_Score", RF_Public|RF_Transient, 0x001000000008000c, 1, nullptr, STRUCT_OFFSET(UInGameHud_C__pf515974370, bpv__Player1_Score__pf), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(NewProp_bpv__Player1_Score__pf_MetaData, ARRAY_COUNT(NewProp_bpv__Player1_Score__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Player1_Name__pf_MetaData[] = {
				{ "Category", "InGameHud" },
				{ "DisplayName", "Player1_Name" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/InGameHud__pf515974370.h" },
				{ "OverrideNativeName", "Player1_Name" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__Player1_Name__pf = { UE4CodeGen_Private::EPropertyClass::Object, "Player1_Name", RF_Public|RF_Transient, 0x001000000008000c, 1, nullptr, STRUCT_OFFSET(UInGameHud_C__pf515974370, bpv__Player1_Name__pf), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(NewProp_bpv__Player1_Name__pf_MetaData, ARRAY_COUNT(NewProp_bpv__Player1_Name__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__HS_PlayerName__pf_MetaData[] = {
				{ "Category", "InGameHud" },
				{ "DisplayName", "HS_PlayerName" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/InGameHud__pf515974370.h" },
				{ "OverrideNativeName", "HS_PlayerName" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__HS_PlayerName__pf = { UE4CodeGen_Private::EPropertyClass::Object, "HS_PlayerName", RF_Public|RF_Transient, 0x001000000008000c, 1, nullptr, STRUCT_OFFSET(UInGameHud_C__pf515974370, bpv__HS_PlayerName__pf), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(NewProp_bpv__HS_PlayerName__pf_MetaData, ARRAY_COUNT(NewProp_bpv__HS_PlayerName__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__HighScore__pf_MetaData[] = {
				{ "Category", "InGameHud" },
				{ "DisplayName", "HighScore" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/InGameHud__pf515974370.h" },
				{ "OverrideNativeName", "HighScore" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__HighScore__pf = { UE4CodeGen_Private::EPropertyClass::Object, "HighScore", RF_Public|RF_Transient, 0x001000000008000c, 1, nullptr, STRUCT_OFFSET(UInGameHud_C__pf515974370, bpv__HighScore__pf), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(NewProp_bpv__HighScore__pf_MetaData, ARRAY_COUNT(NewProp_bpv__HighScore__pf_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b0l__K2Node_SwitchInteger3_CmpSuccess__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b0l__Temp_int_Variable3__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b0l__K2Node_DynamicCast_bSuccess3__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b0l__K2Node_DynamicCast_AsDebug_State3__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b0l__K2Node_DynamicCast_bSuccess2__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b0l__K2Node_DynamicCast_AsDebug_State2__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b0l__K2Node_CustomEvent_Player__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b0l__K2Node_CustomEvent_Player1__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b0l__K2Node_DynamicCast_bSuccess1__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b0l__K2Node_DynamicCast_AsDebug_State1__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b0l__K2Node_SwitchInteger2_CmpSuccess__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b0l__Temp_int_Variable2__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b0l__K2Node_SwitchInteger1_CmpSuccess__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b0l__Temp_int_Variable1__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b0l__K2Node_DynamicCast_bSuccess__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b0l__K2Node_DynamicCast_AsDebug_State__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b0l__K2Node_SwitchInteger_CmpSuccess__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b0l__Temp_int_Variable__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bpv__Player1__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bpv__PlayerLifeIcon2_7__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bpv__PlayerLifeIcon2_6__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bpv__PlayerLifeIcon2_5__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bpv__PlayerLifeIcon2_4__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bpv__PlayerLifeIcon2_3__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bpv__PlayerLifeIcon2_2__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bpv__PlayerLifeIcon2_1__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bpv__PlayerLifeIcon1_7__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bpv__PlayerLifeIcon1_6__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bpv__PlayerLifeIcon1_5__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bpv__PlayerLifeIcon1_4__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bpv__PlayerLifeIcon1_3__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bpv__PlayerLifeIcon1_2__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bpv__PlayerLifeIcon1_1__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bpv__Player2StatsVB__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bpv__Player2_Score__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bpv__Player2_Name__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bpv__Player1_Score__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bpv__Player1_Name__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bpv__HS_PlayerName__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bpv__HighScore__pf,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UInGameHud_C__pf515974370>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UInGameHud_C__pf515974370::StaticClass,
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
	IMPLEMENT_DYNAMIC_CLASS(UInGameHud_C__pf515974370, TEXT("InGameHud_C"), 1878703067);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInGameHud_C__pf515974370(Z_Construct_UClass_UInGameHud_C__pf515974370, &UInGameHud_C__pf515974370::StaticClass, TEXT("/Game/UserInterface/Dev_Test/InGameHud"), TEXT("InGameHud_C"), true, TEXT("/Game/UserInterface/Dev_Test/InGameHud"), TEXT("/Game/UserInterface/Dev_Test/InGameHud.InGameHud_C"), nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInGameHud_C__pf515974370);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
