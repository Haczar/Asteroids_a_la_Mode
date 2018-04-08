// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Private/NativizedAssets.h"
#include "Public/PlayerState_1979__pf2955639682.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerState_1979__pf2955639682() {}
// Cross Module References
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_APlayerState_1979_C__pf2955639682_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_APlayerState_1979_C__pf2955639682();
	ENGINE_API UClass* Z_Construct_UClass_APlayerState();
	NATIVIZEDASSETS_API UFunction* Z_Construct_UFunction_APlayerState_1979_C__pf2955639682_bpf__OnRep_PlyrLives__pf();
	NATIVIZEDASSETS_API UFunction* Z_Construct_UFunction_APlayerState_1979_C__pf2955639682_bpf__OnRep_PlyrScore__pf();
	NATIVIZEDASSETS_API UFunction* Z_Construct_UFunction_APlayerState_1979_C__pf2955639682_bpf__P2Joined__pf();
	NATIVIZEDASSETS_API UFunction* Z_Construct_UFunction_APlayerState_1979_C__pf2955639682_bpf__PlayerHudSetup__pf();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_UInGameHud_C__pf515974370_NoRegister();
	NATIVIZEDASSETS_API UFunction* Z_Construct_UFunction_APlayerState_1979_C__pf2955639682_bpf__ReceiveBeginPlay__pf();
	NATIVIZEDASSETS_API UFunction* Z_Construct_UFunction_APlayerState_1979_C__pf2955639682_bpf__SetPlayerLives__pf();
	NATIVIZEDASSETS_API UFunction* Z_Construct_UFunction_APlayerState_1979_C__pf2955639682_bpf__UpdatePlayerLives__pf();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
	NATIVIZEDASSETS_API UFunction* Z_Construct_UFunction_APlayerState_1979_C__pf2955639682_bpf__UserConstructionScript__pf();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_APlayerController_1979_C__pf2955639682_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
// End Cross Module References
	static FName NAME_APlayerState_1979_C__pf2955639682_bpf__P2Joined__pf = FName(TEXT("P2Joined"));
	void APlayerState_1979_C__pf2955639682::bpf__P2Joined__pf()
	{
		ProcessEvent(FindFunctionChecked(NAME_APlayerState_1979_C__pf2955639682_bpf__P2Joined__pf),NULL);
	}
	static FName NAME_APlayerState_1979_C__pf2955639682_bpf__ReceiveBeginPlay__pf = FName(TEXT("ReceiveBeginPlay"));
	void APlayerState_1979_C__pf2955639682::eventbpf__ReceiveBeginPlay__pf()
	{
		ProcessEvent(FindFunctionChecked(NAME_APlayerState_1979_C__pf2955639682_bpf__ReceiveBeginPlay__pf),NULL);
	}
	static FName NAME_APlayerState_1979_C__pf2955639682_bpf__UserConstructionScript__pf = FName(TEXT("UserConstructionScript"));
	void APlayerState_1979_C__pf2955639682::eventbpf__UserConstructionScript__pf()
	{
		ProcessEvent(FindFunctionChecked(NAME_APlayerState_1979_C__pf2955639682_bpf__UserConstructionScript__pf),NULL);
	}
	void APlayerState_1979_C__pf2955639682::StaticRegisterNativesAPlayerState_1979_C__pf2955639682()
	{
		UClass* Class = APlayerState_1979_C__pf2955639682::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnRep_PlyrLives", &APlayerState_1979_C__pf2955639682::execbpf__OnRep_PlyrLives__pf },
			{ "OnRep_PlyrScore", &APlayerState_1979_C__pf2955639682::execbpf__OnRep_PlyrScore__pf },
			{ "P2Joined", &APlayerState_1979_C__pf2955639682::execbpf__P2Joined__pf },
			{ "PlayerHudSetup", &APlayerState_1979_C__pf2955639682::execbpf__PlayerHudSetup__pf },
			{ "ReceiveBeginPlay", &APlayerState_1979_C__pf2955639682::execbpf__ReceiveBeginPlay__pf },
			{ "SetPlayerLives", &APlayerState_1979_C__pf2955639682::execbpf__SetPlayerLives__pf },
			{ "UpdatePlayerLives", &APlayerState_1979_C__pf2955639682::execbpf__UpdatePlayerLives__pf },
			{ "UserConstructionScript", &APlayerState_1979_C__pf2955639682::execbpf__UserConstructionScript__pf },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_APlayerState_1979_C__pf2955639682_bpf__OnRep_PlyrLives__pf()
	{
		UObject* Outer = Z_Construct_UClass_APlayerState_1979_C__pf2955639682();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("OnRep_PlyrLives") ));
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "" },
				{ "ModuleRelativePath", "Public/PlayerState_1979__pf2955639682.h" },
				{ "OverrideNativeName", "OnRep_PlyrLives" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerState_1979_C__pf2955639682, "OnRep_PlyrLives", RF_Public|RF_Transient, nullptr, (EFunctionFlags)0x04020400, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_APlayerState_1979_C__pf2955639682_bpf__OnRep_PlyrScore__pf()
	{
		UObject* Outer = Z_Construct_UClass_APlayerState_1979_C__pf2955639682();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("OnRep_PlyrScore") ));
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "" },
				{ "ModuleRelativePath", "Public/PlayerState_1979__pf2955639682.h" },
				{ "OverrideNativeName", "OnRep_PlyrScore" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerState_1979_C__pf2955639682, "OnRep_PlyrScore", RF_Public|RF_Transient, nullptr, (EFunctionFlags)0x04020400, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_APlayerState_1979_C__pf2955639682_bpf__P2Joined__pf()
	{
		UObject* Outer = Z_Construct_UClass_APlayerState_1979_C__pf2955639682();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("P2Joined") ));
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "" },
				{ "ModuleRelativePath", "Public/PlayerState_1979__pf2955639682.h" },
				{ "OverrideNativeName", "P2Joined" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerState_1979_C__pf2955639682, "P2Joined", RF_Public|RF_Transient, nullptr, (EFunctionFlags)0x04220C40, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_APlayerState_1979_C__pf2955639682_bpf__PlayerHudSetup__pf()
	{
		struct PlayerState_1979_C__pf2955639682_eventbpf__PlayerHudSetup__pf_Parms
		{
			UInGameHud_C__pf515974370* bpp__HudRef__pf;
		};
		UObject* Outer = Z_Construct_UClass_APlayerState_1979_C__pf2955639682();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("PlayerHudSetup") ));
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpp__HudRef__pf_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpp__HudRef__pf = { UE4CodeGen_Private::EPropertyClass::Object, "bpp__HudRef__pf", RF_Public|RF_Transient, 0x0010000000080080, 1, nullptr, STRUCT_OFFSET(PlayerState_1979_C__pf2955639682_eventbpf__PlayerHudSetup__pf_Parms, bpp__HudRef__pf), Z_Construct_UClass_UInGameHud_C__pf515974370_NoRegister, METADATA_PARAMS(NewProp_bpp__HudRef__pf_MetaData, ARRAY_COUNT(NewProp_bpp__HudRef__pf_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bpp__HudRef__pf,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "" },
				{ "ModuleRelativePath", "Public/PlayerState_1979__pf2955639682.h" },
				{ "OverrideNativeName", "PlayerHudSetup" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerState_1979_C__pf2955639682, "PlayerHudSetup", RF_Public|RF_Transient, nullptr, (EFunctionFlags)0x04020400, sizeof(PlayerState_1979_C__pf2955639682_eventbpf__PlayerHudSetup__pf_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_APlayerState_1979_C__pf2955639682_bpf__ReceiveBeginPlay__pf()
	{
		UObject* Outer = Z_Construct_UClass_APlayerState_1979_C__pf2955639682();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("ReceiveBeginPlay") ));
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "CppFromBpEvent", "" },
				{ "DisplayName", "BeginPlay" },
				{ "ModuleRelativePath", "Public/PlayerState_1979__pf2955639682.h" },
				{ "OverrideNativeName", "ReceiveBeginPlay" },
				{ "ToolTip", "Event when play begins for this actor." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerState_1979_C__pf2955639682, "ReceiveBeginPlay", RF_Public|RF_Transient, nullptr, (EFunctionFlags)0x00020C01, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_APlayerState_1979_C__pf2955639682_bpf__SetPlayerLives__pf()
	{
		struct PlayerState_1979_C__pf2955639682_eventbpf__SetPlayerLives__pf_Parms
		{
			int32 bpp__NumLives__pf;
			UInGameHud_C__pf515974370* bpp__PlayerHud__pf;
		};
		UObject* Outer = Z_Construct_UClass_APlayerState_1979_C__pf2955639682();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("SetPlayerLives") ));
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpp__PlayerHud__pf_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpp__PlayerHud__pf = { UE4CodeGen_Private::EPropertyClass::Object, "bpp__PlayerHud__pf", RF_Public|RF_Transient, 0x0010000000080080, 1, nullptr, STRUCT_OFFSET(PlayerState_1979_C__pf2955639682_eventbpf__SetPlayerLives__pf_Parms, bpp__PlayerHud__pf), Z_Construct_UClass_UInGameHud_C__pf515974370_NoRegister, METADATA_PARAMS(NewProp_bpp__PlayerHud__pf_MetaData, ARRAY_COUNT(NewProp_bpp__PlayerHud__pf_MetaData)) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_bpp__NumLives__pf = { UE4CodeGen_Private::EPropertyClass::Int, "bpp__NumLives__pf", RF_Public|RF_Transient, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(PlayerState_1979_C__pf2955639682_eventbpf__SetPlayerLives__pf_Parms, bpp__NumLives__pf), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bpp__PlayerHud__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bpp__NumLives__pf,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "" },
				{ "ModuleRelativePath", "Public/PlayerState_1979__pf2955639682.h" },
				{ "OverrideNativeName", "SetPlayerLives" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerState_1979_C__pf2955639682, "SetPlayerLives", RF_Public|RF_Transient, nullptr, (EFunctionFlags)0x04020400, sizeof(PlayerState_1979_C__pf2955639682_eventbpf__SetPlayerLives__pf_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_APlayerState_1979_C__pf2955639682_bpf__UpdatePlayerLives__pf()
	{
		struct PlayerState_1979_C__pf2955639682_eventbpf__UpdatePlayerLives__pf_Parms
		{
			APlayerController* bpp__PlayerController__pf;
		};
		UObject* Outer = Z_Construct_UClass_APlayerState_1979_C__pf2955639682();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("UpdatePlayerLives") ));
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpp__PlayerController__pf = { UE4CodeGen_Private::EPropertyClass::Object, "bpp__PlayerController__pf", RF_Public|RF_Transient, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(PlayerState_1979_C__pf2955639682_eventbpf__UpdatePlayerLives__pf_Parms, bpp__PlayerController__pf), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bpp__PlayerController__pf,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "" },
				{ "ModuleRelativePath", "Public/PlayerState_1979__pf2955639682.h" },
				{ "OverrideNativeName", "UpdatePlayerLives" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerState_1979_C__pf2955639682, "UpdatePlayerLives", RF_Public|RF_Transient, nullptr, (EFunctionFlags)0x04020400, sizeof(PlayerState_1979_C__pf2955639682_eventbpf__UpdatePlayerLives__pf_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_APlayerState_1979_C__pf2955639682_bpf__UserConstructionScript__pf()
	{
		UObject* Outer = Z_Construct_UClass_APlayerState_1979_C__pf2955639682();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("UserConstructionScript") ));
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "BlueprintInternalUseOnly", "true" },
				{ "Category", "" },
				{ "CppFromBpEvent", "" },
				{ "DisplayName", "Construction Script" },
				{ "ModuleRelativePath", "Public/PlayerState_1979__pf2955639682.h" },
				{ "OverrideNativeName", "UserConstructionScript" },
				{ "ToolTip", "Construction script, the place to spawn components and do other setup.@note Name used in CreateBlueprint function@param       Location        The location.@param       Rotation        The rotation." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerState_1979_C__pf2955639682, "UserConstructionScript", RF_Public|RF_Transient, nullptr, (EFunctionFlags)0x04020C01, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_APlayerState_1979_C__pf2955639682_NoRegister()
	{
		return APlayerState_1979_C__pf2955639682::StaticClass();
	}
	UClass* Z_Construct_UClass_APlayerState_1979_C__pf2955639682()
	{
		UPackage* OuterPackage = FindOrConstructDynamicTypePackage(TEXT("/Game/Modes/Arcade1979/PlayerState_1979"));
		UClass* OuterClass = Cast<UClass>(StaticFindObjectFast(UClass::StaticClass(), OuterPackage, TEXT("PlayerState_1979_C")));
		if (!OuterClass || !(OuterClass->ClassFlags & CLASS_Constructed))
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_APlayerState,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_APlayerState_1979_C__pf2955639682_bpf__OnRep_PlyrLives__pf, "OnRep_PlyrLives" }, // 1176704654
				{ &Z_Construct_UFunction_APlayerState_1979_C__pf2955639682_bpf__OnRep_PlyrScore__pf, "OnRep_PlyrScore" }, // 3948396397
				{ &Z_Construct_UFunction_APlayerState_1979_C__pf2955639682_bpf__P2Joined__pf, "P2Joined" }, // 3951714854
				{ &Z_Construct_UFunction_APlayerState_1979_C__pf2955639682_bpf__PlayerHudSetup__pf, "PlayerHudSetup" }, // 2866147424
				{ &Z_Construct_UFunction_APlayerState_1979_C__pf2955639682_bpf__ReceiveBeginPlay__pf, "ReceiveBeginPlay" }, // 1050890909
				{ &Z_Construct_UFunction_APlayerState_1979_C__pf2955639682_bpf__SetPlayerLives__pf, "SetPlayerLives" }, // 1430130679
				{ &Z_Construct_UFunction_APlayerState_1979_C__pf2955639682_bpf__UpdatePlayerLives__pf, "UpdatePlayerLives" }, // 4121951466
				{ &Z_Construct_UFunction_APlayerState_1979_C__pf2955639682_bpf__UserConstructionScript__pf, "UserConstructionScript" }, // 3162971540
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "HideCategories", "Input Movement Collision Rendering Utilities|Transformation" },
				{ "IncludePath", "PlayerState_1979__pf2955639682.h" },
				{ "IsBlueprintBase", "true" },
				{ "ModuleRelativePath", "Public/PlayerState_1979__pf2955639682.h" },
				{ "ObjectInitializerConstructorDeclared", "" },
				{ "OverrideNativeName", "PlayerState_1979_C" },
				{ "ReplaceConverted", "/Game/Modes/Arcade1979/PlayerState_1979.PlayerState_1979_C" },
				{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_bSuccess1__pf_MetaData[] = {
				{ "ModuleRelativePath", "Public/PlayerState_1979__pf2955639682.h" },
				{ "OverrideNativeName", "K2Node_DynamicCast_bSuccess1" },
			};
#endif
			auto NewProp_b0l__K2Node_DynamicCast_bSuccess1__pf_SetBit = [](void* Obj){ ((APlayerState_1979_C__pf2955639682*)Obj)->b0l__K2Node_DynamicCast_bSuccess1__pf = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b0l__K2Node_DynamicCast_bSuccess1__pf = { UE4CodeGen_Private::EPropertyClass::Bool, "K2Node_DynamicCast_bSuccess1", RF_Public|RF_Transient, 0x0010000000202000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(APlayerState_1979_C__pf2955639682), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_b0l__K2Node_DynamicCast_bSuccess1__pf_SetBit)>::SetBit, METADATA_PARAMS(NewProp_b0l__K2Node_DynamicCast_bSuccess1__pf_MetaData, ARRAY_COUNT(NewProp_b0l__K2Node_DynamicCast_bSuccess1__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_AsPlayer_Controller_19791__pf_MetaData[] = {
				{ "ModuleRelativePath", "Public/PlayerState_1979__pf2955639682.h" },
				{ "OverrideNativeName", "K2Node_DynamicCast_AsPlayer_Controller_19791" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__K2Node_DynamicCast_AsPlayer_Controller_19791__pf = { UE4CodeGen_Private::EPropertyClass::Object, "K2Node_DynamicCast_AsPlayer_Controller_19791", RF_Public|RF_Transient, 0x0010000000202000, 1, nullptr, STRUCT_OFFSET(APlayerState_1979_C__pf2955639682, b0l__K2Node_DynamicCast_AsPlayer_Controller_19791__pf), Z_Construct_UClass_APlayerController_1979_C__pf2955639682_NoRegister, METADATA_PARAMS(NewProp_b0l__K2Node_DynamicCast_AsPlayer_Controller_19791__pf_MetaData, ARRAY_COUNT(NewProp_b0l__K2Node_DynamicCast_AsPlayer_Controller_19791__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_MetaData[] = {
				{ "ModuleRelativePath", "Public/PlayerState_1979__pf2955639682.h" },
				{ "OverrideNativeName", "K2Node_DynamicCast_bSuccess" },
			};
#endif
			auto NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_SetBit = [](void* Obj){ ((APlayerState_1979_C__pf2955639682*)Obj)->b0l__K2Node_DynamicCast_bSuccess__pf = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b0l__K2Node_DynamicCast_bSuccess__pf = { UE4CodeGen_Private::EPropertyClass::Bool, "K2Node_DynamicCast_bSuccess", RF_Public|RF_Transient, 0x0010000000202000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(APlayerState_1979_C__pf2955639682), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_SetBit)>::SetBit, METADATA_PARAMS(NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_MetaData, ARRAY_COUNT(NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_AsPlayer_Controller_1979__pf_MetaData[] = {
				{ "ModuleRelativePath", "Public/PlayerState_1979__pf2955639682.h" },
				{ "OverrideNativeName", "K2Node_DynamicCast_AsPlayer_Controller_1979" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__K2Node_DynamicCast_AsPlayer_Controller_1979__pf = { UE4CodeGen_Private::EPropertyClass::Object, "K2Node_DynamicCast_AsPlayer_Controller_1979", RF_Public|RF_Transient, 0x0010000000202000, 1, nullptr, STRUCT_OFFSET(APlayerState_1979_C__pf2955639682, b0l__K2Node_DynamicCast_AsPlayer_Controller_1979__pf), Z_Construct_UClass_APlayerController_1979_C__pf2955639682_NoRegister, METADATA_PARAMS(NewProp_b0l__K2Node_DynamicCast_AsPlayer_Controller_1979__pf_MetaData, ARRAY_COUNT(NewProp_b0l__K2Node_DynamicCast_AsPlayer_Controller_1979__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_CustomEvent_PlayerHud__pf_MetaData[] = {
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/PlayerState_1979__pf2955639682.h" },
				{ "OverrideNativeName", "K2Node_CustomEvent_PlayerHud" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__K2Node_CustomEvent_PlayerHud__pf = { UE4CodeGen_Private::EPropertyClass::Object, "K2Node_CustomEvent_PlayerHud", RF_Public|RF_Transient, 0x0010000000282008, 1, nullptr, STRUCT_OFFSET(APlayerState_1979_C__pf2955639682, b0l__K2Node_CustomEvent_PlayerHud__pf), Z_Construct_UClass_UInGameHud_C__pf515974370_NoRegister, METADATA_PARAMS(NewProp_b0l__K2Node_CustomEvent_PlayerHud__pf_MetaData, ARRAY_COUNT(NewProp_b0l__K2Node_CustomEvent_PlayerHud__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_CustomEvent_NumLives__pf_MetaData[] = {
				{ "ModuleRelativePath", "Public/PlayerState_1979__pf2955639682.h" },
				{ "OverrideNativeName", "K2Node_CustomEvent_NumLives" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_b0l__K2Node_CustomEvent_NumLives__pf = { UE4CodeGen_Private::EPropertyClass::Int, "K2Node_CustomEvent_NumLives", RF_Public|RF_Transient, 0x0010000000202000, 1, nullptr, STRUCT_OFFSET(APlayerState_1979_C__pf2955639682, b0l__K2Node_CustomEvent_NumLives__pf), METADATA_PARAMS(NewProp_b0l__K2Node_CustomEvent_NumLives__pf_MetaData, ARRAY_COUNT(NewProp_b0l__K2Node_CustomEvent_NumLives__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__PlayerReady__pf_MetaData[] = {
				{ "Category", "Default" },
				{ "DisplayName", "Player Ready" },
				{ "ModuleRelativePath", "Public/PlayerState_1979__pf2955639682.h" },
				{ "OverrideNativeName", "PlayerReady" },
			};
#endif
			auto NewProp_bpv__PlayerReady__pf_SetBit = [](void* Obj){ ((APlayerState_1979_C__pf2955639682*)Obj)->bpv__PlayerReady__pf = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bpv__PlayerReady__pf = { UE4CodeGen_Private::EPropertyClass::Bool, "PlayerReady", RF_Public|RF_Transient, 0x0010000000010005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(APlayerState_1979_C__pf2955639682), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bpv__PlayerReady__pf_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bpv__PlayerReady__pf_MetaData, ARRAY_COUNT(NewProp_bpv__PlayerReady__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__PlyrLives__pf_MetaData[] = {
				{ "Category", "Default" },
				{ "DisplayName", "Plyr Lives" },
				{ "ModuleRelativePath", "Public/PlayerState_1979__pf2955639682.h" },
				{ "OverrideNativeName", "PlyrLives" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_bpv__PlyrLives__pf = { UE4CodeGen_Private::EPropertyClass::Int, "PlyrLives", RF_Public|RF_Transient, 0x0010000100010025, 1, "OnRep_PlyrLives", STRUCT_OFFSET(APlayerState_1979_C__pf2955639682, bpv__PlyrLives__pf), METADATA_PARAMS(NewProp_bpv__PlyrLives__pf_MetaData, ARRAY_COUNT(NewProp_bpv__PlyrLives__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__PlyrScore__pf_MetaData[] = {
				{ "Category", "Default" },
				{ "DisplayName", "Plyr Score" },
				{ "ModuleRelativePath", "Public/PlayerState_1979__pf2955639682.h" },
				{ "OverrideNativeName", "PlyrScore" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_bpv__PlyrScore__pf = { UE4CodeGen_Private::EPropertyClass::Int, "PlyrScore", RF_Public|RF_Transient, 0x0010000100010025, 1, "OnRep_PlyrScore", STRUCT_OFFSET(APlayerState_1979_C__pf2955639682, bpv__PlyrScore__pf), METADATA_PARAMS(NewProp_bpv__PlyrScore__pf_MetaData, ARRAY_COUNT(NewProp_bpv__PlyrScore__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__PlyrName__pf_MetaData[] = {
				{ "Category", "Default" },
				{ "DisplayName", "Plyr Name" },
				{ "ModuleRelativePath", "Public/PlayerState_1979__pf2955639682.h" },
				{ "OverrideNativeName", "PlyrName" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_bpv__PlyrName__pf = { UE4CodeGen_Private::EPropertyClass::Str, "PlyrName", RF_Public|RF_Transient, 0x0010000000010025, 1, nullptr, STRUCT_OFFSET(APlayerState_1979_C__pf2955639682, bpv__PlyrName__pf), METADATA_PARAMS(NewProp_bpv__PlyrName__pf_MetaData, ARRAY_COUNT(NewProp_bpv__PlyrName__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__DefaultSceneRoot__pf_MetaData[] = {
				{ "Category", "Default" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/PlayerState_1979__pf2955639682.h" },
				{ "OverrideNativeName", "DefaultSceneRoot" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__DefaultSceneRoot__pf = { UE4CodeGen_Private::EPropertyClass::Object, "DefaultSceneRoot", RF_Public|RF_Transient, 0x001000040008000c, 1, nullptr, STRUCT_OFFSET(APlayerState_1979_C__pf2955639682, bpv__DefaultSceneRoot__pf), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(NewProp_bpv__DefaultSceneRoot__pf_MetaData, ARRAY_COUNT(NewProp_bpv__DefaultSceneRoot__pf_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b0l__K2Node_DynamicCast_bSuccess1__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b0l__K2Node_DynamicCast_AsPlayer_Controller_19791__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b0l__K2Node_DynamicCast_bSuccess__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b0l__K2Node_DynamicCast_AsPlayer_Controller_1979__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b0l__K2Node_CustomEvent_PlayerHud__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b0l__K2Node_CustomEvent_NumLives__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bpv__PlayerReady__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bpv__PlyrLives__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bpv__PlyrScore__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bpv__PlyrName__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bpv__DefaultSceneRoot__pf,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<APlayerState_1979_C__pf2955639682>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&APlayerState_1979_C__pf2955639682::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00800280u,
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
	IMPLEMENT_DYNAMIC_CLASS(APlayerState_1979_C__pf2955639682, TEXT("PlayerState_1979_C"), 4248111873);
	static FCompiledInDefer Z_CompiledInDefer_UClass_APlayerState_1979_C__pf2955639682(Z_Construct_UClass_APlayerState_1979_C__pf2955639682, &APlayerState_1979_C__pf2955639682::StaticClass, TEXT("/Game/Modes/Arcade1979/PlayerState_1979"), TEXT("PlayerState_1979_C"), true, TEXT("/Game/Modes/Arcade1979/PlayerState_1979"), TEXT("/Game/Modes/Arcade1979/PlayerState_1979.PlayerState_1979_C"), nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APlayerState_1979_C__pf2955639682);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
