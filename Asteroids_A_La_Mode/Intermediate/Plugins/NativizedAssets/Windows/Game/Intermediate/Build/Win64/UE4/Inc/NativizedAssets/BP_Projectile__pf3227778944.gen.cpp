// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Private/NativizedAssets.h"
#include "Public/BP_Projectile__pf3227778944.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBP_Projectile__pf3227778944() {}
// Cross Module References
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_ABP_Projectile_C__pf3227778944_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_ABP_Projectile_C__pf3227778944();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	NATIVIZEDASSETS_API UFunction* Z_Construct_UFunction_ABP_Projectile_C__pf3227778944_bpf__KillxYurself__pfT();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	NATIVIZEDASSETS_API UFunction* Z_Construct_UFunction_ABP_Projectile_C__pf3227778944_bpf__ReceiveBeginPlay__pf();
	NATIVIZEDASSETS_API UFunction* Z_Construct_UFunction_ABP_Projectile_C__pf3227778944_bpf__ReceiveTick__pf();
	NATIVIZEDASSETS_API UFunction* Z_Construct_UFunction_ABP_Projectile_C__pf3227778944_bpf__UserConstructionScript__pf();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_AShip_C__pf3227778944_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_ADebugState_C__pf4162722864_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_AAsteroid_Large_C__pf2772898577_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_AAsteroid_Medium_C__pf2772898577_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_AAsteroid_C__pf2772898577_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_APlyrState_C__pf4061722237_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UProjectileMovementComponent_NoRegister();
// End Cross Module References
	static FName NAME_ABP_Projectile_C__pf3227778944_bpf__ReceiveBeginPlay__pf = FName(TEXT("ReceiveBeginPlay"));
	void ABP_Projectile_C__pf3227778944::eventbpf__ReceiveBeginPlay__pf()
	{
		ProcessEvent(FindFunctionChecked(NAME_ABP_Projectile_C__pf3227778944_bpf__ReceiveBeginPlay__pf),NULL);
	}
	static FName NAME_ABP_Projectile_C__pf3227778944_bpf__ReceiveTick__pf = FName(TEXT("ReceiveTick"));
	void ABP_Projectile_C__pf3227778944::eventbpf__ReceiveTick__pf(float bpp__DeltaSeconds__pf)
	{
		BP_Projectile_C__pf3227778944_eventbpf__ReceiveTick__pf_Parms Parms;
		Parms.bpp__DeltaSeconds__pf=bpp__DeltaSeconds__pf;
		ProcessEvent(FindFunctionChecked(NAME_ABP_Projectile_C__pf3227778944_bpf__ReceiveTick__pf),&Parms);
	}
	static FName NAME_ABP_Projectile_C__pf3227778944_bpf__UserConstructionScript__pf = FName(TEXT("UserConstructionScript"));
	void ABP_Projectile_C__pf3227778944::eventbpf__UserConstructionScript__pf()
	{
		ProcessEvent(FindFunctionChecked(NAME_ABP_Projectile_C__pf3227778944_bpf__UserConstructionScript__pf),NULL);
	}
	void ABP_Projectile_C__pf3227778944::StaticRegisterNativesABP_Projectile_C__pf3227778944()
	{
		UClass* Class = ABP_Projectile_C__pf3227778944::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Kill Yurself", &ABP_Projectile_C__pf3227778944::execbpf__KillxYurself__pfT },
			{ "ReceiveBeginPlay", &ABP_Projectile_C__pf3227778944::execbpf__ReceiveBeginPlay__pf },
			{ "ReceiveTick", &ABP_Projectile_C__pf3227778944::execbpf__ReceiveTick__pf },
			{ "UserConstructionScript", &ABP_Projectile_C__pf3227778944::execbpf__UserConstructionScript__pf },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_ABP_Projectile_C__pf3227778944_bpf__KillxYurself__pfT()
	{
		struct BP_Projectile_C__pf3227778944_eventbpf__KillxYurself__pfT_Parms
		{
			UObject* bpp__ObjectxCollided__pfT;
		};
		UObject* Outer = Z_Construct_UClass_ABP_Projectile_C__pf3227778944();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("Kill Yurself") ));
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpp__ObjectxCollided__pfT = { UE4CodeGen_Private::EPropertyClass::Object, "bpp__ObjectxCollided__pfT", RF_Public|RF_Transient, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BP_Projectile_C__pf3227778944_eventbpf__KillxYurself__pfT_Parms, bpp__ObjectxCollided__pfT), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bpp__ObjectxCollided__pfT,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "" },
				{ "ModuleRelativePath", "Public/BP_Projectile__pf3227778944.h" },
				{ "OverrideNativeName", "Kill Yurself" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ABP_Projectile_C__pf3227778944, "Kill Yurself", RF_Public|RF_Transient, nullptr, (EFunctionFlags)0x04020400, sizeof(BP_Projectile_C__pf3227778944_eventbpf__KillxYurself__pfT_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ABP_Projectile_C__pf3227778944_bpf__ReceiveBeginPlay__pf()
	{
		UObject* Outer = Z_Construct_UClass_ABP_Projectile_C__pf3227778944();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("ReceiveBeginPlay") ));
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "CppFromBpEvent", "" },
				{ "DisplayName", "BeginPlay" },
				{ "ModuleRelativePath", "Public/BP_Projectile__pf3227778944.h" },
				{ "OverrideNativeName", "ReceiveBeginPlay" },
				{ "ToolTip", "Event when play begins for this actor." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ABP_Projectile_C__pf3227778944, "ReceiveBeginPlay", RF_Public|RF_Transient, nullptr, (EFunctionFlags)0x00020C01, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ABP_Projectile_C__pf3227778944_bpf__ReceiveTick__pf()
	{
		UObject* Outer = Z_Construct_UClass_ABP_Projectile_C__pf3227778944();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("ReceiveTick") ));
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpp__DeltaSeconds__pf = { UE4CodeGen_Private::EPropertyClass::Float, "bpp__DeltaSeconds__pf", RF_Public|RF_Transient, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BP_Projectile_C__pf3227778944_eventbpf__ReceiveTick__pf_Parms, bpp__DeltaSeconds__pf), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bpp__DeltaSeconds__pf,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "CppFromBpEvent", "" },
				{ "DisplayName", "Tick" },
				{ "ModuleRelativePath", "Public/BP_Projectile__pf3227778944.h" },
				{ "OverrideNativeName", "ReceiveTick" },
				{ "ToolTip", "Event called every frame" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ABP_Projectile_C__pf3227778944, "ReceiveTick", RF_Public|RF_Transient, nullptr, (EFunctionFlags)0x00020C01, sizeof(BP_Projectile_C__pf3227778944_eventbpf__ReceiveTick__pf_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ABP_Projectile_C__pf3227778944_bpf__UserConstructionScript__pf()
	{
		UObject* Outer = Z_Construct_UClass_ABP_Projectile_C__pf3227778944();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("UserConstructionScript") ));
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "BlueprintInternalUseOnly", "true" },
				{ "Category", "" },
				{ "CppFromBpEvent", "" },
				{ "DisplayName", "Construction Script" },
				{ "ModuleRelativePath", "Public/BP_Projectile__pf3227778944.h" },
				{ "OverrideNativeName", "UserConstructionScript" },
				{ "ToolTip", "Construction script, the place to spawn components and do other setup.@note Name used in CreateBlueprint function@param       Location        The location.@param       Rotation        The rotation." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ABP_Projectile_C__pf3227778944, "UserConstructionScript", RF_Public|RF_Transient, nullptr, (EFunctionFlags)0x04020C01, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ABP_Projectile_C__pf3227778944_NoRegister()
	{
		return ABP_Projectile_C__pf3227778944::StaticClass();
	}
	UClass* Z_Construct_UClass_ABP_Projectile_C__pf3227778944()
	{
		UPackage* OuterPackage = FindOrConstructDynamicTypePackage(TEXT("/Game/Ship/BP_Projectile"));
		UClass* OuterClass = Cast<UClass>(StaticFindObjectFast(UClass::StaticClass(), OuterPackage, TEXT("BP_Projectile_C")));
		if (!OuterClass || !(OuterClass->ClassFlags & CLASS_Constructed))
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AActor,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_ABP_Projectile_C__pf3227778944_bpf__KillxYurself__pfT, "Kill Yurself" }, // 2645434753
				{ &Z_Construct_UFunction_ABP_Projectile_C__pf3227778944_bpf__ReceiveBeginPlay__pf, "ReceiveBeginPlay" }, // 4047231802
				{ &Z_Construct_UFunction_ABP_Projectile_C__pf3227778944_bpf__ReceiveTick__pf, "ReceiveTick" }, // 1816291736
				{ &Z_Construct_UFunction_ABP_Projectile_C__pf3227778944_bpf__UserConstructionScript__pf, "UserConstructionScript" }, // 1781793179
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "IncludePath", "BP_Projectile__pf3227778944.h" },
				{ "IsBlueprintBase", "true" },
				{ "ModuleRelativePath", "Public/BP_Projectile__pf3227778944.h" },
				{ "ObjectInitializerConstructorDeclared", "" },
				{ "OverrideNativeName", "BP_Projectile_C" },
				{ "ReplaceConverted", "/Game/Ship/BP_Projectile.BP_Projectile_C" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_Event_DeltaSeconds__pf_MetaData[] = {
				{ "ModuleRelativePath", "Public/BP_Projectile__pf3227778944.h" },
				{ "OverrideNativeName", "K2Node_Event_DeltaSeconds" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_b0l__K2Node_Event_DeltaSeconds__pf = { UE4CodeGen_Private::EPropertyClass::Float, "K2Node_Event_DeltaSeconds", RF_Public|RF_Transient, 0x0010000000202000, 1, nullptr, STRUCT_OFFSET(ABP_Projectile_C__pf3227778944, b0l__K2Node_Event_DeltaSeconds__pf), METADATA_PARAMS(NewProp_b0l__K2Node_Event_DeltaSeconds__pf_MetaData, ARRAY_COUNT(NewProp_b0l__K2Node_Event_DeltaSeconds__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_bSuccess6__pf_MetaData[] = {
				{ "ModuleRelativePath", "Public/BP_Projectile__pf3227778944.h" },
				{ "OverrideNativeName", "K2Node_DynamicCast_bSuccess6" },
			};
#endif
			auto NewProp_b0l__K2Node_DynamicCast_bSuccess6__pf_SetBit = [](void* Obj){ ((ABP_Projectile_C__pf3227778944*)Obj)->b0l__K2Node_DynamicCast_bSuccess6__pf = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b0l__K2Node_DynamicCast_bSuccess6__pf = { UE4CodeGen_Private::EPropertyClass::Bool, "K2Node_DynamicCast_bSuccess6", RF_Public|RF_Transient, 0x0010000000202000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ABP_Projectile_C__pf3227778944), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_b0l__K2Node_DynamicCast_bSuccess6__pf_SetBit)>::SetBit, METADATA_PARAMS(NewProp_b0l__K2Node_DynamicCast_bSuccess6__pf_MetaData, ARRAY_COUNT(NewProp_b0l__K2Node_DynamicCast_bSuccess6__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_AsShip1__pf_MetaData[] = {
				{ "ModuleRelativePath", "Public/BP_Projectile__pf3227778944.h" },
				{ "OverrideNativeName", "K2Node_DynamicCast_AsShip1" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__K2Node_DynamicCast_AsShip1__pf = { UE4CodeGen_Private::EPropertyClass::Object, "K2Node_DynamicCast_AsShip1", RF_Public|RF_Transient, 0x0010000000202000, 1, nullptr, STRUCT_OFFSET(ABP_Projectile_C__pf3227778944, b0l__K2Node_DynamicCast_AsShip1__pf), Z_Construct_UClass_AShip_C__pf3227778944_NoRegister, METADATA_PARAMS(NewProp_b0l__K2Node_DynamicCast_AsShip1__pf_MetaData, ARRAY_COUNT(NewProp_b0l__K2Node_DynamicCast_AsShip1__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_bSuccess5__pf_MetaData[] = {
				{ "ModuleRelativePath", "Public/BP_Projectile__pf3227778944.h" },
				{ "OverrideNativeName", "K2Node_DynamicCast_bSuccess5" },
			};
#endif
			auto NewProp_b0l__K2Node_DynamicCast_bSuccess5__pf_SetBit = [](void* Obj){ ((ABP_Projectile_C__pf3227778944*)Obj)->b0l__K2Node_DynamicCast_bSuccess5__pf = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b0l__K2Node_DynamicCast_bSuccess5__pf = { UE4CodeGen_Private::EPropertyClass::Bool, "K2Node_DynamicCast_bSuccess5", RF_Public|RF_Transient, 0x0010000000202000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ABP_Projectile_C__pf3227778944), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_b0l__K2Node_DynamicCast_bSuccess5__pf_SetBit)>::SetBit, METADATA_PARAMS(NewProp_b0l__K2Node_DynamicCast_bSuccess5__pf_MetaData, ARRAY_COUNT(NewProp_b0l__K2Node_DynamicCast_bSuccess5__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_AsDebug_State__pf_MetaData[] = {
				{ "ModuleRelativePath", "Public/BP_Projectile__pf3227778944.h" },
				{ "OverrideNativeName", "K2Node_DynamicCast_AsDebug_State" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__K2Node_DynamicCast_AsDebug_State__pf = { UE4CodeGen_Private::EPropertyClass::Object, "K2Node_DynamicCast_AsDebug_State", RF_Public|RF_Transient, 0x0010000000202000, 1, nullptr, STRUCT_OFFSET(ABP_Projectile_C__pf3227778944, b0l__K2Node_DynamicCast_AsDebug_State__pf), Z_Construct_UClass_ADebugState_C__pf4162722864_NoRegister, METADATA_PARAMS(NewProp_b0l__K2Node_DynamicCast_AsDebug_State__pf_MetaData, ARRAY_COUNT(NewProp_b0l__K2Node_DynamicCast_AsDebug_State__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_bSuccess4__pf_MetaData[] = {
				{ "ModuleRelativePath", "Public/BP_Projectile__pf3227778944.h" },
				{ "OverrideNativeName", "K2Node_DynamicCast_bSuccess4" },
			};
#endif
			auto NewProp_b0l__K2Node_DynamicCast_bSuccess4__pf_SetBit = [](void* Obj){ ((ABP_Projectile_C__pf3227778944*)Obj)->b0l__K2Node_DynamicCast_bSuccess4__pf = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b0l__K2Node_DynamicCast_bSuccess4__pf = { UE4CodeGen_Private::EPropertyClass::Bool, "K2Node_DynamicCast_bSuccess4", RF_Public|RF_Transient, 0x0010000000202000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ABP_Projectile_C__pf3227778944), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_b0l__K2Node_DynamicCast_bSuccess4__pf_SetBit)>::SetBit, METADATA_PARAMS(NewProp_b0l__K2Node_DynamicCast_bSuccess4__pf_MetaData, ARRAY_COUNT(NewProp_b0l__K2Node_DynamicCast_bSuccess4__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_AsAsteroid_Large__pf_MetaData[] = {
				{ "ModuleRelativePath", "Public/BP_Projectile__pf3227778944.h" },
				{ "OverrideNativeName", "K2Node_DynamicCast_AsAsteroid_Large" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__K2Node_DynamicCast_AsAsteroid_Large__pf = { UE4CodeGen_Private::EPropertyClass::Object, "K2Node_DynamicCast_AsAsteroid_Large", RF_Public|RF_Transient, 0x0010000000202000, 1, nullptr, STRUCT_OFFSET(ABP_Projectile_C__pf3227778944, b0l__K2Node_DynamicCast_AsAsteroid_Large__pf), Z_Construct_UClass_AAsteroid_Large_C__pf2772898577_NoRegister, METADATA_PARAMS(NewProp_b0l__K2Node_DynamicCast_AsAsteroid_Large__pf_MetaData, ARRAY_COUNT(NewProp_b0l__K2Node_DynamicCast_AsAsteroid_Large__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_bSuccess3__pf_MetaData[] = {
				{ "ModuleRelativePath", "Public/BP_Projectile__pf3227778944.h" },
				{ "OverrideNativeName", "K2Node_DynamicCast_bSuccess3" },
			};
#endif
			auto NewProp_b0l__K2Node_DynamicCast_bSuccess3__pf_SetBit = [](void* Obj){ ((ABP_Projectile_C__pf3227778944*)Obj)->b0l__K2Node_DynamicCast_bSuccess3__pf = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b0l__K2Node_DynamicCast_bSuccess3__pf = { UE4CodeGen_Private::EPropertyClass::Bool, "K2Node_DynamicCast_bSuccess3", RF_Public|RF_Transient, 0x0010000000202000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ABP_Projectile_C__pf3227778944), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_b0l__K2Node_DynamicCast_bSuccess3__pf_SetBit)>::SetBit, METADATA_PARAMS(NewProp_b0l__K2Node_DynamicCast_bSuccess3__pf_MetaData, ARRAY_COUNT(NewProp_b0l__K2Node_DynamicCast_bSuccess3__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_AsAsteroid_Medium__pf_MetaData[] = {
				{ "ModuleRelativePath", "Public/BP_Projectile__pf3227778944.h" },
				{ "OverrideNativeName", "K2Node_DynamicCast_AsAsteroid_Medium" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__K2Node_DynamicCast_AsAsteroid_Medium__pf = { UE4CodeGen_Private::EPropertyClass::Object, "K2Node_DynamicCast_AsAsteroid_Medium", RF_Public|RF_Transient, 0x0010000000202000, 1, nullptr, STRUCT_OFFSET(ABP_Projectile_C__pf3227778944, b0l__K2Node_DynamicCast_AsAsteroid_Medium__pf), Z_Construct_UClass_AAsteroid_Medium_C__pf2772898577_NoRegister, METADATA_PARAMS(NewProp_b0l__K2Node_DynamicCast_AsAsteroid_Medium__pf_MetaData, ARRAY_COUNT(NewProp_b0l__K2Node_DynamicCast_AsAsteroid_Medium__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_bSuccess2__pf_MetaData[] = {
				{ "ModuleRelativePath", "Public/BP_Projectile__pf3227778944.h" },
				{ "OverrideNativeName", "K2Node_DynamicCast_bSuccess2" },
			};
#endif
			auto NewProp_b0l__K2Node_DynamicCast_bSuccess2__pf_SetBit = [](void* Obj){ ((ABP_Projectile_C__pf3227778944*)Obj)->b0l__K2Node_DynamicCast_bSuccess2__pf = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b0l__K2Node_DynamicCast_bSuccess2__pf = { UE4CodeGen_Private::EPropertyClass::Bool, "K2Node_DynamicCast_bSuccess2", RF_Public|RF_Transient, 0x0010000000202000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ABP_Projectile_C__pf3227778944), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_b0l__K2Node_DynamicCast_bSuccess2__pf_SetBit)>::SetBit, METADATA_PARAMS(NewProp_b0l__K2Node_DynamicCast_bSuccess2__pf_MetaData, ARRAY_COUNT(NewProp_b0l__K2Node_DynamicCast_bSuccess2__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_AsAsteroid_Small__pf_MetaData[] = {
				{ "ModuleRelativePath", "Public/BP_Projectile__pf3227778944.h" },
				{ "OverrideNativeName", "K2Node_DynamicCast_AsAsteroid_Small" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__K2Node_DynamicCast_AsAsteroid_Small__pf = { UE4CodeGen_Private::EPropertyClass::Object, "K2Node_DynamicCast_AsAsteroid_Small", RF_Public|RF_Transient, 0x0010000000202000, 1, nullptr, STRUCT_OFFSET(ABP_Projectile_C__pf3227778944, b0l__K2Node_DynamicCast_AsAsteroid_Small__pf), Z_Construct_UClass_AAsteroid_C__pf2772898577_NoRegister, METADATA_PARAMS(NewProp_b0l__K2Node_DynamicCast_AsAsteroid_Small__pf_MetaData, ARRAY_COUNT(NewProp_b0l__K2Node_DynamicCast_AsAsteroid_Small__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_CustomEvent_Object_Collided__pf_MetaData[] = {
				{ "ModuleRelativePath", "Public/BP_Projectile__pf3227778944.h" },
				{ "OverrideNativeName", "K2Node_CustomEvent_Object_Collided" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__K2Node_CustomEvent_Object_Collided__pf = { UE4CodeGen_Private::EPropertyClass::Object, "K2Node_CustomEvent_Object_Collided", RF_Public|RF_Transient, 0x0010000000202000, 1, nullptr, STRUCT_OFFSET(ABP_Projectile_C__pf3227778944, b0l__K2Node_CustomEvent_Object_Collided__pf), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(NewProp_b0l__K2Node_CustomEvent_Object_Collided__pf_MetaData, ARRAY_COUNT(NewProp_b0l__K2Node_CustomEvent_Object_Collided__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_bSuccess1__pf_MetaData[] = {
				{ "ModuleRelativePath", "Public/BP_Projectile__pf3227778944.h" },
				{ "OverrideNativeName", "K2Node_DynamicCast_bSuccess1" },
			};
#endif
			auto NewProp_b0l__K2Node_DynamicCast_bSuccess1__pf_SetBit = [](void* Obj){ ((ABP_Projectile_C__pf3227778944*)Obj)->b0l__K2Node_DynamicCast_bSuccess1__pf = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b0l__K2Node_DynamicCast_bSuccess1__pf = { UE4CodeGen_Private::EPropertyClass::Bool, "K2Node_DynamicCast_bSuccess1", RF_Public|RF_Transient, 0x0010000000202000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ABP_Projectile_C__pf3227778944), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_b0l__K2Node_DynamicCast_bSuccess1__pf_SetBit)>::SetBit, METADATA_PARAMS(NewProp_b0l__K2Node_DynamicCast_bSuccess1__pf_MetaData, ARRAY_COUNT(NewProp_b0l__K2Node_DynamicCast_bSuccess1__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_AsPlyr_State__pf_MetaData[] = {
				{ "ModuleRelativePath", "Public/BP_Projectile__pf3227778944.h" },
				{ "OverrideNativeName", "K2Node_DynamicCast_AsPlyr_State" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__K2Node_DynamicCast_AsPlyr_State__pf = { UE4CodeGen_Private::EPropertyClass::Object, "K2Node_DynamicCast_AsPlyr_State", RF_Public|RF_Transient, 0x0010000000202000, 1, nullptr, STRUCT_OFFSET(ABP_Projectile_C__pf3227778944, b0l__K2Node_DynamicCast_AsPlyr_State__pf), Z_Construct_UClass_APlyrState_C__pf4061722237_NoRegister, METADATA_PARAMS(NewProp_b0l__K2Node_DynamicCast_AsPlyr_State__pf_MetaData, ARRAY_COUNT(NewProp_b0l__K2Node_DynamicCast_AsPlyr_State__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_MetaData[] = {
				{ "ModuleRelativePath", "Public/BP_Projectile__pf3227778944.h" },
				{ "OverrideNativeName", "K2Node_DynamicCast_bSuccess" },
			};
#endif
			auto NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_SetBit = [](void* Obj){ ((ABP_Projectile_C__pf3227778944*)Obj)->b0l__K2Node_DynamicCast_bSuccess__pf = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b0l__K2Node_DynamicCast_bSuccess__pf = { UE4CodeGen_Private::EPropertyClass::Bool, "K2Node_DynamicCast_bSuccess", RF_Public|RF_Transient, 0x0010000000202000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ABP_Projectile_C__pf3227778944), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_SetBit)>::SetBit, METADATA_PARAMS(NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_MetaData, ARRAY_COUNT(NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_AsShip__pf_MetaData[] = {
				{ "ModuleRelativePath", "Public/BP_Projectile__pf3227778944.h" },
				{ "OverrideNativeName", "K2Node_DynamicCast_AsShip" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__K2Node_DynamicCast_AsShip__pf = { UE4CodeGen_Private::EPropertyClass::Object, "K2Node_DynamicCast_AsShip", RF_Public|RF_Transient, 0x0010000000202000, 1, nullptr, STRUCT_OFFSET(ABP_Projectile_C__pf3227778944, b0l__K2Node_DynamicCast_AsShip__pf), Z_Construct_UClass_AShip_C__pf3227778944_NoRegister, METADATA_PARAMS(NewProp_b0l__K2Node_DynamicCast_AsShip__pf_MetaData, ARRAY_COUNT(NewProp_b0l__K2Node_DynamicCast_AsShip__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__TimeElapsed__pf_MetaData[] = {
				{ "Category", "Default" },
				{ "DisplayName", "Time Elapsed" },
				{ "ModuleRelativePath", "Public/BP_Projectile__pf3227778944.h" },
				{ "OverrideNativeName", "TimeElapsed" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpv__TimeElapsed__pf = { UE4CodeGen_Private::EPropertyClass::Float, "TimeElapsed", RF_Public|RF_Transient, 0x0010000000010005, 1, nullptr, STRUCT_OFFSET(ABP_Projectile_C__pf3227778944, bpv__TimeElapsed__pf), METADATA_PARAMS(NewProp_bpv__TimeElapsed__pf_MetaData, ARRAY_COUNT(NewProp_bpv__TimeElapsed__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__DefaultSceneRoot__pf_MetaData[] = {
				{ "Category", "Default" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/BP_Projectile__pf3227778944.h" },
				{ "OverrideNativeName", "DefaultSceneRoot" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__DefaultSceneRoot__pf = { UE4CodeGen_Private::EPropertyClass::Object, "DefaultSceneRoot", RF_Public|RF_Transient, 0x001000040008000c, 1, nullptr, STRUCT_OFFSET(ABP_Projectile_C__pf3227778944, bpv__DefaultSceneRoot__pf), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(NewProp_bpv__DefaultSceneRoot__pf_MetaData, ARRAY_COUNT(NewProp_bpv__DefaultSceneRoot__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__StaticMesh__pf_MetaData[] = {
				{ "Category", "Default" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/BP_Projectile__pf3227778944.h" },
				{ "OverrideNativeName", "StaticMesh" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__StaticMesh__pf = { UE4CodeGen_Private::EPropertyClass::Object, "StaticMesh", RF_Public|RF_Transient, 0x001000040008000c, 1, nullptr, STRUCT_OFFSET(ABP_Projectile_C__pf3227778944, bpv__StaticMesh__pf), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(NewProp_bpv__StaticMesh__pf_MetaData, ARRAY_COUNT(NewProp_bpv__StaticMesh__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__ProjectileMovement__pf_MetaData[] = {
				{ "Category", "Default" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/BP_Projectile__pf3227778944.h" },
				{ "OverrideNativeName", "ProjectileMovement" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__ProjectileMovement__pf = { UE4CodeGen_Private::EPropertyClass::Object, "ProjectileMovement", RF_Public|RF_Transient, 0x001000040008000c, 1, nullptr, STRUCT_OFFSET(ABP_Projectile_C__pf3227778944, bpv__ProjectileMovement__pf), Z_Construct_UClass_UProjectileMovementComponent_NoRegister, METADATA_PARAMS(NewProp_bpv__ProjectileMovement__pf_MetaData, ARRAY_COUNT(NewProp_bpv__ProjectileMovement__pf_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b0l__K2Node_Event_DeltaSeconds__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b0l__K2Node_DynamicCast_bSuccess6__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b0l__K2Node_DynamicCast_AsShip1__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b0l__K2Node_DynamicCast_bSuccess5__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b0l__K2Node_DynamicCast_AsDebug_State__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b0l__K2Node_DynamicCast_bSuccess4__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b0l__K2Node_DynamicCast_AsAsteroid_Large__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b0l__K2Node_DynamicCast_bSuccess3__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b0l__K2Node_DynamicCast_AsAsteroid_Medium__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b0l__K2Node_DynamicCast_bSuccess2__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b0l__K2Node_DynamicCast_AsAsteroid_Small__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b0l__K2Node_CustomEvent_Object_Collided__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b0l__K2Node_DynamicCast_bSuccess1__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b0l__K2Node_DynamicCast_AsPlyr_State__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b0l__K2Node_DynamicCast_bSuccess__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b0l__K2Node_DynamicCast_AsShip__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bpv__TimeElapsed__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bpv__DefaultSceneRoot__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bpv__StaticMesh__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bpv__ProjectileMovement__pf,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<ABP_Projectile_C__pf3227778944>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&ABP_Projectile_C__pf3227778944::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00800080u,
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
	IMPLEMENT_DYNAMIC_CLASS(ABP_Projectile_C__pf3227778944, TEXT("BP_Projectile_C"), 2722093588);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABP_Projectile_C__pf3227778944(Z_Construct_UClass_ABP_Projectile_C__pf3227778944, &ABP_Projectile_C__pf3227778944::StaticClass, TEXT("/Game/Ship/BP_Projectile"), TEXT("BP_Projectile_C"), true, TEXT("/Game/Ship/BP_Projectile"), TEXT("/Game/Ship/BP_Projectile.BP_Projectile_C"), nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABP_Projectile_C__pf3227778944);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
