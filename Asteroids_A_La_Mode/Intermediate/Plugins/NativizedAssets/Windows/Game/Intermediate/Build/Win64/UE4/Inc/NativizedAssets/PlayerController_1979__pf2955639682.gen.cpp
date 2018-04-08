// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Private/NativizedAssets.h"
#include "Public/PlayerController_1979__pf2955639682.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerController_1979__pf2955639682() {}
// Cross Module References
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_APlayerController_1979_C__pf2955639682_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_APlayerController_1979_C__pf2955639682();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	NATIVIZEDASSETS_API UFunction* Z_Construct_UFunction_APlayerController_1979_C__pf2955639682_bpf__InpActEvt_PlayerxStart_K2Node_InputActionEvent_1__pfT();
	INPUTCORE_API UScriptStruct* Z_Construct_UScriptStruct_FKey();
	NATIVIZEDASSETS_API UFunction* Z_Construct_UFunction_APlayerController_1979_C__pf2955639682_bpf__ReceiveBeginPlay__pf();
	NATIVIZEDASSETS_API UFunction* Z_Construct_UFunction_APlayerController_1979_C__pf2955639682_bpf__SetCamera__pf();
	NATIVIZEDASSETS_API UFunction* Z_Construct_UFunction_APlayerController_1979_C__pf2955639682_bpf__StartLevel__pf();
	NATIVIZEDASSETS_API UFunction* Z_Construct_UFunction_APlayerController_1979_C__pf2955639682_bpf__UserConstructionScript__pf();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_APlayerState_1979_C__pf2955639682_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APlayerStart_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_AAsteroids1979_C__pf2955639682_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ACameraActor_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_ULevelStart_Widget_C__pf515974370_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_UInGameHud_C__pf515974370_NoRegister();
// End Cross Module References
	static FName NAME_APlayerController_1979_C__pf2955639682_bpf__ReceiveBeginPlay__pf = FName(TEXT("ReceiveBeginPlay"));
	void APlayerController_1979_C__pf2955639682::eventbpf__ReceiveBeginPlay__pf()
	{
		ProcessEvent(FindFunctionChecked(NAME_APlayerController_1979_C__pf2955639682_bpf__ReceiveBeginPlay__pf),NULL);
	}
	static FName NAME_APlayerController_1979_C__pf2955639682_bpf__StartLevel__pf = FName(TEXT("StartLevel"));
	void APlayerController_1979_C__pf2955639682::bpf__StartLevel__pf()
	{
		ProcessEvent(FindFunctionChecked(NAME_APlayerController_1979_C__pf2955639682_bpf__StartLevel__pf),NULL);
	}
	static FName NAME_APlayerController_1979_C__pf2955639682_bpf__UserConstructionScript__pf = FName(TEXT("UserConstructionScript"));
	void APlayerController_1979_C__pf2955639682::eventbpf__UserConstructionScript__pf()
	{
		ProcessEvent(FindFunctionChecked(NAME_APlayerController_1979_C__pf2955639682_bpf__UserConstructionScript__pf),NULL);
	}
	void APlayerController_1979_C__pf2955639682::StaticRegisterNativesAPlayerController_1979_C__pf2955639682()
	{
		UClass* Class = APlayerController_1979_C__pf2955639682::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "InpActEvt_Player Start_K2Node_InputActionEvent_1", &APlayerController_1979_C__pf2955639682::execbpf__InpActEvt_PlayerxStart_K2Node_InputActionEvent_1__pfT },
			{ "ReceiveBeginPlay", &APlayerController_1979_C__pf2955639682::execbpf__ReceiveBeginPlay__pf },
			{ "SetCamera", &APlayerController_1979_C__pf2955639682::execbpf__SetCamera__pf },
			{ "StartLevel", &APlayerController_1979_C__pf2955639682::execbpf__StartLevel__pf },
			{ "UserConstructionScript", &APlayerController_1979_C__pf2955639682::execbpf__UserConstructionScript__pf },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_APlayerController_1979_C__pf2955639682_bpf__InpActEvt_PlayerxStart_K2Node_InputActionEvent_1__pfT()
	{
		struct PlayerController_1979_C__pf2955639682_eventbpf__InpActEvt_PlayerxStart_K2Node_InputActionEvent_1__pfT_Parms
		{
			FKey bpp__Key__pf;
		};
		UObject* Outer = Z_Construct_UClass_APlayerController_1979_C__pf2955639682();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("InpActEvt_Player Start_K2Node_InputActionEvent_1") ));
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_bpp__Key__pf = { UE4CodeGen_Private::EPropertyClass::Struct, "bpp__Key__pf", RF_Public|RF_Transient, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(PlayerController_1979_C__pf2955639682_eventbpf__InpActEvt_PlayerxStart_K2Node_InputActionEvent_1__pfT_Parms, bpp__Key__pf), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bpp__Key__pf,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/PlayerController_1979__pf2955639682.h" },
				{ "OverrideNativeName", "InpActEvt_Player Start_K2Node_InputActionEvent_1" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerController_1979_C__pf2955639682, "InpActEvt_Player Start_K2Node_InputActionEvent_1", RF_Public|RF_Transient, nullptr, (EFunctionFlags)0x00020400, sizeof(PlayerController_1979_C__pf2955639682_eventbpf__InpActEvt_PlayerxStart_K2Node_InputActionEvent_1__pfT_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_APlayerController_1979_C__pf2955639682_bpf__ReceiveBeginPlay__pf()
	{
		UObject* Outer = Z_Construct_UClass_APlayerController_1979_C__pf2955639682();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("ReceiveBeginPlay") ));
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "CppFromBpEvent", "" },
				{ "DisplayName", "BeginPlay" },
				{ "ModuleRelativePath", "Public/PlayerController_1979__pf2955639682.h" },
				{ "OverrideNativeName", "ReceiveBeginPlay" },
				{ "ToolTip", "Event when play begins for this actor." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerController_1979_C__pf2955639682, "ReceiveBeginPlay", RF_Public|RF_Transient, nullptr, (EFunctionFlags)0x00020C01, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_APlayerController_1979_C__pf2955639682_bpf__SetCamera__pf()
	{
		UObject* Outer = Z_Construct_UClass_APlayerController_1979_C__pf2955639682();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("SetCamera") ));
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "" },
				{ "ModuleRelativePath", "Public/PlayerController_1979__pf2955639682.h" },
				{ "OverrideNativeName", "SetCamera" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerController_1979_C__pf2955639682, "SetCamera", RF_Public|RF_Transient, nullptr, (EFunctionFlags)0x04020400, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_APlayerController_1979_C__pf2955639682_bpf__StartLevel__pf()
	{
		UObject* Outer = Z_Construct_UClass_APlayerController_1979_C__pf2955639682();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("StartLevel") ));
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "" },
				{ "ModuleRelativePath", "Public/PlayerController_1979__pf2955639682.h" },
				{ "OverrideNativeName", "StartLevel" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerController_1979_C__pf2955639682, "StartLevel", RF_Public|RF_Transient, nullptr, (EFunctionFlags)0x04220C40, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_APlayerController_1979_C__pf2955639682_bpf__UserConstructionScript__pf()
	{
		UObject* Outer = Z_Construct_UClass_APlayerController_1979_C__pf2955639682();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("UserConstructionScript") ));
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "BlueprintInternalUseOnly", "true" },
				{ "Category", "" },
				{ "CppFromBpEvent", "" },
				{ "DisplayName", "Construction Script" },
				{ "ModuleRelativePath", "Public/PlayerController_1979__pf2955639682.h" },
				{ "OverrideNativeName", "UserConstructionScript" },
				{ "ToolTip", "Construction script, the place to spawn components and do other setup.@note Name used in CreateBlueprint function@param       Location        The location.@param       Rotation        The rotation." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerController_1979_C__pf2955639682, "UserConstructionScript", RF_Public|RF_Transient, nullptr, (EFunctionFlags)0x04020C01, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_APlayerController_1979_C__pf2955639682_NoRegister()
	{
		return APlayerController_1979_C__pf2955639682::StaticClass();
	}
	UClass* Z_Construct_UClass_APlayerController_1979_C__pf2955639682()
	{
		UPackage* OuterPackage = FindOrConstructDynamicTypePackage(TEXT("/Game/Modes/Arcade1979/PlayerController_1979"));
		UClass* OuterClass = Cast<UClass>(StaticFindObjectFast(UClass::StaticClass(), OuterPackage, TEXT("PlayerController_1979_C")));
		if (!OuterClass || !(OuterClass->ClassFlags & CLASS_Constructed))
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_APlayerController,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_APlayerController_1979_C__pf2955639682_bpf__InpActEvt_PlayerxStart_K2Node_InputActionEvent_1__pfT, "InpActEvt_Player Start_K2Node_InputActionEvent_1" }, // 1029447110
				{ &Z_Construct_UFunction_APlayerController_1979_C__pf2955639682_bpf__ReceiveBeginPlay__pf, "ReceiveBeginPlay" }, // 2498195231
				{ &Z_Construct_UFunction_APlayerController_1979_C__pf2955639682_bpf__SetCamera__pf, "SetCamera" }, // 159364389
				{ &Z_Construct_UFunction_APlayerController_1979_C__pf2955639682_bpf__StartLevel__pf, "StartLevel" }, // 2202778151
				{ &Z_Construct_UFunction_APlayerController_1979_C__pf2955639682_bpf__UserConstructionScript__pf, "UserConstructionScript" }, // 1526785332
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "HideCategories", "Collision Rendering Utilities|Transformation" },
				{ "IncludePath", "PlayerController_1979__pf2955639682.h" },
				{ "IsBlueprintBase", "true" },
				{ "ModuleRelativePath", "Public/PlayerController_1979__pf2955639682.h" },
				{ "ObjectInitializerConstructorDeclared", "" },
				{ "OverrideNativeName", "PlayerController_1979_C" },
				{ "ReplaceConverted", "/Game/Modes/Arcade1979/PlayerController_1979.PlayerController_1979_C" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_bSuccess2__pf_MetaData[] = {
				{ "ModuleRelativePath", "Public/PlayerController_1979__pf2955639682.h" },
				{ "OverrideNativeName", "K2Node_DynamicCast_bSuccess2" },
			};
#endif
			auto NewProp_b0l__K2Node_DynamicCast_bSuccess2__pf_SetBit = [](void* Obj){ ((APlayerController_1979_C__pf2955639682*)Obj)->b0l__K2Node_DynamicCast_bSuccess2__pf = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b0l__K2Node_DynamicCast_bSuccess2__pf = { UE4CodeGen_Private::EPropertyClass::Bool, "K2Node_DynamicCast_bSuccess2", RF_Public|RF_Transient, 0x0010000000202000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(APlayerController_1979_C__pf2955639682), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_b0l__K2Node_DynamicCast_bSuccess2__pf_SetBit)>::SetBit, METADATA_PARAMS(NewProp_b0l__K2Node_DynamicCast_bSuccess2__pf_MetaData, ARRAY_COUNT(NewProp_b0l__K2Node_DynamicCast_bSuccess2__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_AsPlayer_State_19791__pf_MetaData[] = {
				{ "ModuleRelativePath", "Public/PlayerController_1979__pf2955639682.h" },
				{ "OverrideNativeName", "K2Node_DynamicCast_AsPlayer_State_19791" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__K2Node_DynamicCast_AsPlayer_State_19791__pf = { UE4CodeGen_Private::EPropertyClass::Object, "K2Node_DynamicCast_AsPlayer_State_19791", RF_Public|RF_Transient, 0x0010000000202000, 1, nullptr, STRUCT_OFFSET(APlayerController_1979_C__pf2955639682, b0l__K2Node_DynamicCast_AsPlayer_State_19791__pf), Z_Construct_UClass_APlayerState_1979_C__pf2955639682_NoRegister, METADATA_PARAMS(NewProp_b0l__K2Node_DynamicCast_AsPlayer_State_19791__pf_MetaData, ARRAY_COUNT(NewProp_b0l__K2Node_DynamicCast_AsPlayer_State_19791__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_bSuccess1__pf_MetaData[] = {
				{ "ModuleRelativePath", "Public/PlayerController_1979__pf2955639682.h" },
				{ "OverrideNativeName", "K2Node_DynamicCast_bSuccess1" },
			};
#endif
			auto NewProp_b0l__K2Node_DynamicCast_bSuccess1__pf_SetBit = [](void* Obj){ ((APlayerController_1979_C__pf2955639682*)Obj)->b0l__K2Node_DynamicCast_bSuccess1__pf = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b0l__K2Node_DynamicCast_bSuccess1__pf = { UE4CodeGen_Private::EPropertyClass::Bool, "K2Node_DynamicCast_bSuccess1", RF_Public|RF_Transient, 0x0010000000202000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(APlayerController_1979_C__pf2955639682), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_b0l__K2Node_DynamicCast_bSuccess1__pf_SetBit)>::SetBit, METADATA_PARAMS(NewProp_b0l__K2Node_DynamicCast_bSuccess1__pf_MetaData, ARRAY_COUNT(NewProp_b0l__K2Node_DynamicCast_bSuccess1__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_AsPlayer_State_1979__pf_MetaData[] = {
				{ "ModuleRelativePath", "Public/PlayerController_1979__pf2955639682.h" },
				{ "OverrideNativeName", "K2Node_DynamicCast_AsPlayer_State_1979" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__K2Node_DynamicCast_AsPlayer_State_1979__pf = { UE4CodeGen_Private::EPropertyClass::Object, "K2Node_DynamicCast_AsPlayer_State_1979", RF_Public|RF_Transient, 0x0010000000202000, 1, nullptr, STRUCT_OFFSET(APlayerController_1979_C__pf2955639682, b0l__K2Node_DynamicCast_AsPlayer_State_1979__pf), Z_Construct_UClass_APlayerState_1979_C__pf2955639682_NoRegister, METADATA_PARAMS(NewProp_b0l__K2Node_DynamicCast_AsPlayer_State_1979__pf_MetaData, ARRAY_COUNT(NewProp_b0l__K2Node_DynamicCast_AsPlayer_State_1979__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_Array_Get_Item__pf_MetaData[] = {
				{ "ModuleRelativePath", "Public/PlayerController_1979__pf2955639682.h" },
				{ "OverrideNativeName", "CallFunc_Array_Get_Item" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__CallFunc_Array_Get_Item__pf = { UE4CodeGen_Private::EPropertyClass::Object, "CallFunc_Array_Get_Item", RF_Public|RF_Transient, 0x0010000000202000, 1, nullptr, STRUCT_OFFSET(APlayerController_1979_C__pf2955639682, b0l__CallFunc_Array_Get_Item__pf), Z_Construct_UClass_APlayerStart_NoRegister, METADATA_PARAMS(NewProp_b0l__CallFunc_Array_Get_Item__pf_MetaData, ARRAY_COUNT(NewProp_b0l__CallFunc_Array_Get_Item__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_MetaData[] = {
				{ "ModuleRelativePath", "Public/PlayerController_1979__pf2955639682.h" },
				{ "OverrideNativeName", "K2Node_DynamicCast_bSuccess" },
			};
#endif
			auto NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_SetBit = [](void* Obj){ ((APlayerController_1979_C__pf2955639682*)Obj)->b0l__K2Node_DynamicCast_bSuccess__pf = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b0l__K2Node_DynamicCast_bSuccess__pf = { UE4CodeGen_Private::EPropertyClass::Bool, "K2Node_DynamicCast_bSuccess", RF_Public|RF_Transient, 0x0010000000202000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(APlayerController_1979_C__pf2955639682), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_SetBit)>::SetBit, METADATA_PARAMS(NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_MetaData, ARRAY_COUNT(NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_AsAsteroids_1979__pf_MetaData[] = {
				{ "ModuleRelativePath", "Public/PlayerController_1979__pf2955639682.h" },
				{ "OverrideNativeName", "K2Node_DynamicCast_AsAsteroids_1979" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__K2Node_DynamicCast_AsAsteroids_1979__pf = { UE4CodeGen_Private::EPropertyClass::Object, "K2Node_DynamicCast_AsAsteroids_1979", RF_Public|RF_Transient, 0x0010000000202000, 1, nullptr, STRUCT_OFFSET(APlayerController_1979_C__pf2955639682, b0l__K2Node_DynamicCast_AsAsteroids_1979__pf), Z_Construct_UClass_AAsteroids1979_C__pf2955639682_NoRegister, METADATA_PARAMS(NewProp_b0l__K2Node_DynamicCast_AsAsteroids_1979__pf_MetaData, ARRAY_COUNT(NewProp_b0l__K2Node_DynamicCast_AsAsteroids_1979__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_InputActionEvent_Key__pf_MetaData[] = {
				{ "ModuleRelativePath", "Public/PlayerController_1979__pf2955639682.h" },
				{ "OverrideNativeName", "K2Node_InputActionEvent_Key" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_b0l__K2Node_InputActionEvent_Key__pf = { UE4CodeGen_Private::EPropertyClass::Struct, "K2Node_InputActionEvent_Key", RF_Public|RF_Transient, 0x0010000000202000, 1, nullptr, STRUCT_OFFSET(APlayerController_1979_C__pf2955639682, b0l__K2Node_InputActionEvent_Key__pf), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(NewProp_b0l__K2Node_InputActionEvent_Key__pf_MetaData, ARRAY_COUNT(NewProp_b0l__K2Node_InputActionEvent_Key__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__OneCam__pf_MetaData[] = {
				{ "Category", "Default" },
				{ "DisplayName", "One Cam" },
				{ "ModuleRelativePath", "Public/PlayerController_1979__pf2955639682.h" },
				{ "OverrideNativeName", "OneCam" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__OneCam__pf = { UE4CodeGen_Private::EPropertyClass::Object, "OneCam", RF_Public|RF_Transient, 0x0010000000010005, 1, nullptr, STRUCT_OFFSET(APlayerController_1979_C__pf2955639682, bpv__OneCam__pf), Z_Construct_UClass_ACameraActor_NoRegister, METADATA_PARAMS(NewProp_bpv__OneCam__pf_MetaData, ARRAY_COUNT(NewProp_bpv__OneCam__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__LevelStartRef__pf_MetaData[] = {
				{ "Category", "Default" },
				{ "DisplayName", "Level Start Ref" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/PlayerController_1979__pf2955639682.h" },
				{ "OverrideNativeName", "LevelStartRef" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__LevelStartRef__pf = { UE4CodeGen_Private::EPropertyClass::Object, "LevelStartRef", RF_Public|RF_Transient, 0x001000000009000d, 1, nullptr, STRUCT_OFFSET(APlayerController_1979_C__pf2955639682, bpv__LevelStartRef__pf), Z_Construct_UClass_ULevelStart_Widget_C__pf515974370_NoRegister, METADATA_PARAMS(NewProp_bpv__LevelStartRef__pf_MetaData, ARRAY_COUNT(NewProp_bpv__LevelStartRef__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__PlayerHudRef__pf_MetaData[] = {
				{ "Category", "Default" },
				{ "DisplayName", "Player Hud Ref" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/PlayerController_1979__pf2955639682.h" },
				{ "OverrideNativeName", "PlayerHudRef" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__PlayerHudRef__pf = { UE4CodeGen_Private::EPropertyClass::Object, "PlayerHudRef", RF_Public|RF_Transient, 0x001000000009002d, 1, nullptr, STRUCT_OFFSET(APlayerController_1979_C__pf2955639682, bpv__PlayerHudRef__pf), Z_Construct_UClass_UInGameHud_C__pf515974370_NoRegister, METADATA_PARAMS(NewProp_bpv__PlayerHudRef__pf_MetaData, ARRAY_COUNT(NewProp_bpv__PlayerHudRef__pf_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b0l__K2Node_DynamicCast_bSuccess2__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b0l__K2Node_DynamicCast_AsPlayer_State_19791__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b0l__K2Node_DynamicCast_bSuccess1__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b0l__K2Node_DynamicCast_AsPlayer_State_1979__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b0l__CallFunc_Array_Get_Item__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b0l__K2Node_DynamicCast_bSuccess__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b0l__K2Node_DynamicCast_AsAsteroids_1979__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b0l__K2Node_InputActionEvent_Key__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bpv__OneCam__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bpv__LevelStartRef__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bpv__PlayerHudRef__pf,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<APlayerController_1979_C__pf2955639682>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&APlayerController_1979_C__pf2955639682::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00800284u,
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
	IMPLEMENT_DYNAMIC_CLASS(APlayerController_1979_C__pf2955639682, TEXT("PlayerController_1979_C"), 676195762);
	static FCompiledInDefer Z_CompiledInDefer_UClass_APlayerController_1979_C__pf2955639682(Z_Construct_UClass_APlayerController_1979_C__pf2955639682, &APlayerController_1979_C__pf2955639682::StaticClass, TEXT("/Game/Modes/Arcade1979/PlayerController_1979"), TEXT("PlayerController_1979_C"), true, TEXT("/Game/Modes/Arcade1979/PlayerController_1979"), TEXT("/Game/Modes/Arcade1979/PlayerController_1979.PlayerController_1979_C"), nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APlayerController_1979_C__pf2955639682);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
