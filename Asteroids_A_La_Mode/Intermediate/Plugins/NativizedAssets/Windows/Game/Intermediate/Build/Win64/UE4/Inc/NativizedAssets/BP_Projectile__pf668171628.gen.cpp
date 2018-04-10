// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Private/NativizedAssets.h"
#include "Public/BP_Projectile__pf668171628.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBP_Projectile__pf668171628() {}
// Cross Module References
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_ABP_Projectile_C__pf668171628_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_ABP_Projectile_C__pf668171628();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	NATIVIZEDASSETS_API UFunction* Z_Construct_UFunction_ABP_Projectile_C__pf668171628_bpf__KillxYurself__pfT();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	NATIVIZEDASSETS_API UFunction* Z_Construct_UFunction_ABP_Projectile_C__pf668171628_bpf__processxdeath__pfT();
	NATIVIZEDASSETS_API UFunction* Z_Construct_UFunction_ABP_Projectile_C__pf668171628_bpf__ReceiveBeginPlay__pf();
	NATIVIZEDASSETS_API UFunction* Z_Construct_UFunction_ABP_Projectile_C__pf668171628_bpf__ReceiveTick__pf();
	NATIVIZEDASSETS_API UFunction* Z_Construct_UFunction_ABP_Projectile_C__pf668171628_bpf__UserConstructionScript__pf();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_AShip_C__pf668171628_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_AUserData_C__pf4061722237_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_ARegUser_C__pf4061722237_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_ADebugMData_C__pf4162722864_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_AAsteroid_Large_C__pf2772898577_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_AAsteroid_Medium_C__pf2772898577_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_AAsteroid_C__pf2772898577_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UProjectileMovementComponent_NoRegister();
// End Cross Module References
	static FName NAME_ABP_Projectile_C__pf668171628_bpf__processxdeath__pfT = FName(TEXT("process death"));
	void ABP_Projectile_C__pf668171628::bpf__processxdeath__pfT()
	{
		ProcessEvent(FindFunctionChecked(NAME_ABP_Projectile_C__pf668171628_bpf__processxdeath__pfT),NULL);
	}
	static FName NAME_ABP_Projectile_C__pf668171628_bpf__ReceiveBeginPlay__pf = FName(TEXT("ReceiveBeginPlay"));
	void ABP_Projectile_C__pf668171628::eventbpf__ReceiveBeginPlay__pf()
	{
		ProcessEvent(FindFunctionChecked(NAME_ABP_Projectile_C__pf668171628_bpf__ReceiveBeginPlay__pf),NULL);
	}
	static FName NAME_ABP_Projectile_C__pf668171628_bpf__ReceiveTick__pf = FName(TEXT("ReceiveTick"));
	void ABP_Projectile_C__pf668171628::eventbpf__ReceiveTick__pf(float bpp__DeltaSeconds__pf)
	{
		BP_Projectile_C__pf668171628_eventbpf__ReceiveTick__pf_Parms Parms;
		Parms.bpp__DeltaSeconds__pf=bpp__DeltaSeconds__pf;
		ProcessEvent(FindFunctionChecked(NAME_ABP_Projectile_C__pf668171628_bpf__ReceiveTick__pf),&Parms);
	}
	static FName NAME_ABP_Projectile_C__pf668171628_bpf__UserConstructionScript__pf = FName(TEXT("UserConstructionScript"));
	void ABP_Projectile_C__pf668171628::eventbpf__UserConstructionScript__pf()
	{
		ProcessEvent(FindFunctionChecked(NAME_ABP_Projectile_C__pf668171628_bpf__UserConstructionScript__pf),NULL);
	}
	void ABP_Projectile_C__pf668171628::StaticRegisterNativesABP_Projectile_C__pf668171628()
	{
		UClass* Class = ABP_Projectile_C__pf668171628::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Kill Yurself", &ABP_Projectile_C__pf668171628::execbpf__KillxYurself__pfT },
			{ "process death", &ABP_Projectile_C__pf668171628::execbpf__processxdeath__pfT },
			{ "ReceiveBeginPlay", &ABP_Projectile_C__pf668171628::execbpf__ReceiveBeginPlay__pf },
			{ "ReceiveTick", &ABP_Projectile_C__pf668171628::execbpf__ReceiveTick__pf },
			{ "UserConstructionScript", &ABP_Projectile_C__pf668171628::execbpf__UserConstructionScript__pf },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_ABP_Projectile_C__pf668171628_bpf__KillxYurself__pfT()
	{
		struct BP_Projectile_C__pf668171628_eventbpf__KillxYurself__pfT_Parms
		{
			UObject* bpp__ObjectxCollided__pfT;
		};
		UObject* Outer = Z_Construct_UClass_ABP_Projectile_C__pf668171628();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("Kill Yurself") ));
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpp__ObjectxCollided__pfT = { UE4CodeGen_Private::EPropertyClass::Object, "bpp__ObjectxCollided__pfT", RF_Public|RF_Transient, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BP_Projectile_C__pf668171628_eventbpf__KillxYurself__pfT_Parms, bpp__ObjectxCollided__pfT), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bpp__ObjectxCollided__pfT,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "" },
				{ "ModuleRelativePath", "Public/BP_Projectile__pf668171628.h" },
				{ "OverrideNativeName", "Kill Yurself" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ABP_Projectile_C__pf668171628, "Kill Yurself", RF_Public|RF_Transient, nullptr, (EFunctionFlags)0x04020400, sizeof(BP_Projectile_C__pf668171628_eventbpf__KillxYurself__pfT_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ABP_Projectile_C__pf668171628_bpf__processxdeath__pfT()
	{
		UObject* Outer = Z_Construct_UClass_ABP_Projectile_C__pf668171628();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("process death") ));
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "" },
				{ "ModuleRelativePath", "Public/BP_Projectile__pf668171628.h" },
				{ "OverrideNativeName", "process death" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ABP_Projectile_C__pf668171628, "process death", RF_Public|RF_Transient, nullptr, (EFunctionFlags)0x04024CC0, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ABP_Projectile_C__pf668171628_bpf__ReceiveBeginPlay__pf()
	{
		UObject* Outer = Z_Construct_UClass_ABP_Projectile_C__pf668171628();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("ReceiveBeginPlay") ));
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "CppFromBpEvent", "" },
				{ "DisplayName", "BeginPlay" },
				{ "ModuleRelativePath", "Public/BP_Projectile__pf668171628.h" },
				{ "OverrideNativeName", "ReceiveBeginPlay" },
				{ "ToolTip", "Event when play begins for this actor." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ABP_Projectile_C__pf668171628, "ReceiveBeginPlay", RF_Public|RF_Transient, nullptr, (EFunctionFlags)0x00020C01, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ABP_Projectile_C__pf668171628_bpf__ReceiveTick__pf()
	{
		UObject* Outer = Z_Construct_UClass_ABP_Projectile_C__pf668171628();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("ReceiveTick") ));
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpp__DeltaSeconds__pf = { UE4CodeGen_Private::EPropertyClass::Float, "bpp__DeltaSeconds__pf", RF_Public|RF_Transient, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BP_Projectile_C__pf668171628_eventbpf__ReceiveTick__pf_Parms, bpp__DeltaSeconds__pf), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bpp__DeltaSeconds__pf,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "CppFromBpEvent", "" },
				{ "DisplayName", "Tick" },
				{ "ModuleRelativePath", "Public/BP_Projectile__pf668171628.h" },
				{ "OverrideNativeName", "ReceiveTick" },
				{ "ToolTip", "Event called every frame" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ABP_Projectile_C__pf668171628, "ReceiveTick", RF_Public|RF_Transient, nullptr, (EFunctionFlags)0x00020C01, sizeof(BP_Projectile_C__pf668171628_eventbpf__ReceiveTick__pf_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ABP_Projectile_C__pf668171628_bpf__UserConstructionScript__pf()
	{
		UObject* Outer = Z_Construct_UClass_ABP_Projectile_C__pf668171628();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("UserConstructionScript") ));
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "BlueprintInternalUseOnly", "true" },
				{ "Category", "" },
				{ "CppFromBpEvent", "" },
				{ "DisplayName", "Construction Script" },
				{ "ModuleRelativePath", "Public/BP_Projectile__pf668171628.h" },
				{ "OverrideNativeName", "UserConstructionScript" },
				{ "ToolTip", "Construction script, the place to spawn components and do other setup.@note Name used in CreateBlueprint function@param       Location        The location.@param       Rotation        The rotation." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ABP_Projectile_C__pf668171628, "UserConstructionScript", RF_Public|RF_Transient, nullptr, (EFunctionFlags)0x04020C01, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ABP_Projectile_C__pf668171628_NoRegister()
	{
		return ABP_Projectile_C__pf668171628::StaticClass();
	}
	UClass* Z_Construct_UClass_ABP_Projectile_C__pf668171628()
	{
		UPackage* OuterPackage = FindOrConstructDynamicTypePackage(TEXT("/Game/Pawns/Ship/BP_Projectile"));
		UClass* OuterClass = Cast<UClass>(StaticFindObjectFast(UClass::StaticClass(), OuterPackage, TEXT("BP_Projectile_C")));
		if (!OuterClass || !(OuterClass->ClassFlags & CLASS_Constructed))
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AActor,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_ABP_Projectile_C__pf668171628_bpf__KillxYurself__pfT, "Kill Yurself" }, // 306578128
				{ &Z_Construct_UFunction_ABP_Projectile_C__pf668171628_bpf__processxdeath__pfT, "process death" }, // 1071499037
				{ &Z_Construct_UFunction_ABP_Projectile_C__pf668171628_bpf__ReceiveBeginPlay__pf, "ReceiveBeginPlay" }, // 1862473358
				{ &Z_Construct_UFunction_ABP_Projectile_C__pf668171628_bpf__ReceiveTick__pf, "ReceiveTick" }, // 305949053
				{ &Z_Construct_UFunction_ABP_Projectile_C__pf668171628_bpf__UserConstructionScript__pf, "UserConstructionScript" }, // 1006549770
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "IncludePath", "BP_Projectile__pf668171628.h" },
				{ "IsBlueprintBase", "true" },
				{ "ModuleRelativePath", "Public/BP_Projectile__pf668171628.h" },
				{ "ObjectInitializerConstructorDeclared", "" },
				{ "OverrideNativeName", "BP_Projectile_C" },
				{ "ReplaceConverted", "/Game/Pawns/Ship/BP_Projectile.BP_Projectile_C" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_bSuccess7__pf_MetaData[] = {
				{ "ModuleRelativePath", "Public/BP_Projectile__pf668171628.h" },
				{ "OverrideNativeName", "K2Node_DynamicCast_bSuccess7" },
			};
#endif
			auto NewProp_b0l__K2Node_DynamicCast_bSuccess7__pf_SetBit = [](void* Obj){ ((ABP_Projectile_C__pf668171628*)Obj)->b0l__K2Node_DynamicCast_bSuccess7__pf = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b0l__K2Node_DynamicCast_bSuccess7__pf = { UE4CodeGen_Private::EPropertyClass::Bool, "K2Node_DynamicCast_bSuccess7", RF_Public|RF_Transient, 0x0010000000202000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ABP_Projectile_C__pf668171628), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_b0l__K2Node_DynamicCast_bSuccess7__pf_SetBit)>::SetBit, METADATA_PARAMS(NewProp_b0l__K2Node_DynamicCast_bSuccess7__pf_MetaData, ARRAY_COUNT(NewProp_b0l__K2Node_DynamicCast_bSuccess7__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_AsShip1__pf_MetaData[] = {
				{ "ModuleRelativePath", "Public/BP_Projectile__pf668171628.h" },
				{ "OverrideNativeName", "K2Node_DynamicCast_AsShip1" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__K2Node_DynamicCast_AsShip1__pf = { UE4CodeGen_Private::EPropertyClass::Object, "K2Node_DynamicCast_AsShip1", RF_Public|RF_Transient, 0x0010000000202000, 1, nullptr, STRUCT_OFFSET(ABP_Projectile_C__pf668171628, b0l__K2Node_DynamicCast_AsShip1__pf), Z_Construct_UClass_AShip_C__pf668171628_NoRegister, METADATA_PARAMS(NewProp_b0l__K2Node_DynamicCast_AsShip1__pf_MetaData, ARRAY_COUNT(NewProp_b0l__K2Node_DynamicCast_AsShip1__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_Event_DeltaSeconds__pf_MetaData[] = {
				{ "ModuleRelativePath", "Public/BP_Projectile__pf668171628.h" },
				{ "OverrideNativeName", "K2Node_Event_DeltaSeconds" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_b0l__K2Node_Event_DeltaSeconds__pf = { UE4CodeGen_Private::EPropertyClass::Float, "K2Node_Event_DeltaSeconds", RF_Public|RF_Transient, 0x0010000000202000, 1, nullptr, STRUCT_OFFSET(ABP_Projectile_C__pf668171628, b0l__K2Node_Event_DeltaSeconds__pf), METADATA_PARAMS(NewProp_b0l__K2Node_Event_DeltaSeconds__pf_MetaData, ARRAY_COUNT(NewProp_b0l__K2Node_Event_DeltaSeconds__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_bSuccess6__pf_MetaData[] = {
				{ "ModuleRelativePath", "Public/BP_Projectile__pf668171628.h" },
				{ "OverrideNativeName", "K2Node_DynamicCast_bSuccess6" },
			};
#endif
			auto NewProp_b0l__K2Node_DynamicCast_bSuccess6__pf_SetBit = [](void* Obj){ ((ABP_Projectile_C__pf668171628*)Obj)->b0l__K2Node_DynamicCast_bSuccess6__pf = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b0l__K2Node_DynamicCast_bSuccess6__pf = { UE4CodeGen_Private::EPropertyClass::Bool, "K2Node_DynamicCast_bSuccess6", RF_Public|RF_Transient, 0x0010000000202000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ABP_Projectile_C__pf668171628), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_b0l__K2Node_DynamicCast_bSuccess6__pf_SetBit)>::SetBit, METADATA_PARAMS(NewProp_b0l__K2Node_DynamicCast_bSuccess6__pf_MetaData, ARRAY_COUNT(NewProp_b0l__K2Node_DynamicCast_bSuccess6__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_AsUser_Data__pf_MetaData[] = {
				{ "ModuleRelativePath", "Public/BP_Projectile__pf668171628.h" },
				{ "OverrideNativeName", "K2Node_DynamicCast_AsUser_Data" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__K2Node_DynamicCast_AsUser_Data__pf = { UE4CodeGen_Private::EPropertyClass::Object, "K2Node_DynamicCast_AsUser_Data", RF_Public|RF_Transient, 0x0010000000202000, 1, nullptr, STRUCT_OFFSET(ABP_Projectile_C__pf668171628, b0l__K2Node_DynamicCast_AsUser_Data__pf), Z_Construct_UClass_AUserData_C__pf4061722237_NoRegister, METADATA_PARAMS(NewProp_b0l__K2Node_DynamicCast_AsUser_Data__pf_MetaData, ARRAY_COUNT(NewProp_b0l__K2Node_DynamicCast_AsUser_Data__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_bSuccess5__pf_MetaData[] = {
				{ "ModuleRelativePath", "Public/BP_Projectile__pf668171628.h" },
				{ "OverrideNativeName", "K2Node_DynamicCast_bSuccess5" },
			};
#endif
			auto NewProp_b0l__K2Node_DynamicCast_bSuccess5__pf_SetBit = [](void* Obj){ ((ABP_Projectile_C__pf668171628*)Obj)->b0l__K2Node_DynamicCast_bSuccess5__pf = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b0l__K2Node_DynamicCast_bSuccess5__pf = { UE4CodeGen_Private::EPropertyClass::Bool, "K2Node_DynamicCast_bSuccess5", RF_Public|RF_Transient, 0x0010000000202000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ABP_Projectile_C__pf668171628), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_b0l__K2Node_DynamicCast_bSuccess5__pf_SetBit)>::SetBit, METADATA_PARAMS(NewProp_b0l__K2Node_DynamicCast_bSuccess5__pf_MetaData, ARRAY_COUNT(NewProp_b0l__K2Node_DynamicCast_bSuccess5__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_AsShip__pf_MetaData[] = {
				{ "ModuleRelativePath", "Public/BP_Projectile__pf668171628.h" },
				{ "OverrideNativeName", "K2Node_DynamicCast_AsShip" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__K2Node_DynamicCast_AsShip__pf = { UE4CodeGen_Private::EPropertyClass::Object, "K2Node_DynamicCast_AsShip", RF_Public|RF_Transient, 0x0010000000202000, 1, nullptr, STRUCT_OFFSET(ABP_Projectile_C__pf668171628, b0l__K2Node_DynamicCast_AsShip__pf), Z_Construct_UClass_AShip_C__pf668171628_NoRegister, METADATA_PARAMS(NewProp_b0l__K2Node_DynamicCast_AsShip__pf_MetaData, ARRAY_COUNT(NewProp_b0l__K2Node_DynamicCast_AsShip__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_bSuccess4__pf_MetaData[] = {
				{ "ModuleRelativePath", "Public/BP_Projectile__pf668171628.h" },
				{ "OverrideNativeName", "K2Node_DynamicCast_bSuccess4" },
			};
#endif
			auto NewProp_b0l__K2Node_DynamicCast_bSuccess4__pf_SetBit = [](void* Obj){ ((ABP_Projectile_C__pf668171628*)Obj)->b0l__K2Node_DynamicCast_bSuccess4__pf = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b0l__K2Node_DynamicCast_bSuccess4__pf = { UE4CodeGen_Private::EPropertyClass::Bool, "K2Node_DynamicCast_bSuccess4", RF_Public|RF_Transient, 0x0010000000202000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ABP_Projectile_C__pf668171628), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_b0l__K2Node_DynamicCast_bSuccess4__pf_SetBit)>::SetBit, METADATA_PARAMS(NewProp_b0l__K2Node_DynamicCast_bSuccess4__pf_MetaData, ARRAY_COUNT(NewProp_b0l__K2Node_DynamicCast_bSuccess4__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_AsReg_User__pf_MetaData[] = {
				{ "ModuleRelativePath", "Public/BP_Projectile__pf668171628.h" },
				{ "OverrideNativeName", "K2Node_DynamicCast_AsReg_User" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__K2Node_DynamicCast_AsReg_User__pf = { UE4CodeGen_Private::EPropertyClass::Object, "K2Node_DynamicCast_AsReg_User", RF_Public|RF_Transient, 0x0010000000202000, 1, nullptr, STRUCT_OFFSET(ABP_Projectile_C__pf668171628, b0l__K2Node_DynamicCast_AsReg_User__pf), Z_Construct_UClass_ARegUser_C__pf4061722237_NoRegister, METADATA_PARAMS(NewProp_b0l__K2Node_DynamicCast_AsReg_User__pf_MetaData, ARRAY_COUNT(NewProp_b0l__K2Node_DynamicCast_AsReg_User__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_bSuccess3__pf_MetaData[] = {
				{ "ModuleRelativePath", "Public/BP_Projectile__pf668171628.h" },
				{ "OverrideNativeName", "K2Node_DynamicCast_bSuccess3" },
			};
#endif
			auto NewProp_b0l__K2Node_DynamicCast_bSuccess3__pf_SetBit = [](void* Obj){ ((ABP_Projectile_C__pf668171628*)Obj)->b0l__K2Node_DynamicCast_bSuccess3__pf = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b0l__K2Node_DynamicCast_bSuccess3__pf = { UE4CodeGen_Private::EPropertyClass::Bool, "K2Node_DynamicCast_bSuccess3", RF_Public|RF_Transient, 0x0010000000202000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ABP_Projectile_C__pf668171628), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_b0l__K2Node_DynamicCast_bSuccess3__pf_SetBit)>::SetBit, METADATA_PARAMS(NewProp_b0l__K2Node_DynamicCast_bSuccess3__pf_MetaData, ARRAY_COUNT(NewProp_b0l__K2Node_DynamicCast_bSuccess3__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_AsDebug_MData__pf_MetaData[] = {
				{ "ModuleRelativePath", "Public/BP_Projectile__pf668171628.h" },
				{ "OverrideNativeName", "K2Node_DynamicCast_AsDebug_MData" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__K2Node_DynamicCast_AsDebug_MData__pf = { UE4CodeGen_Private::EPropertyClass::Object, "K2Node_DynamicCast_AsDebug_MData", RF_Public|RF_Transient, 0x0010000000202000, 1, nullptr, STRUCT_OFFSET(ABP_Projectile_C__pf668171628, b0l__K2Node_DynamicCast_AsDebug_MData__pf), Z_Construct_UClass_ADebugMData_C__pf4162722864_NoRegister, METADATA_PARAMS(NewProp_b0l__K2Node_DynamicCast_AsDebug_MData__pf_MetaData, ARRAY_COUNT(NewProp_b0l__K2Node_DynamicCast_AsDebug_MData__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_bSuccess2__pf_MetaData[] = {
				{ "ModuleRelativePath", "Public/BP_Projectile__pf668171628.h" },
				{ "OverrideNativeName", "K2Node_DynamicCast_bSuccess2" },
			};
#endif
			auto NewProp_b0l__K2Node_DynamicCast_bSuccess2__pf_SetBit = [](void* Obj){ ((ABP_Projectile_C__pf668171628*)Obj)->b0l__K2Node_DynamicCast_bSuccess2__pf = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b0l__K2Node_DynamicCast_bSuccess2__pf = { UE4CodeGen_Private::EPropertyClass::Bool, "K2Node_DynamicCast_bSuccess2", RF_Public|RF_Transient, 0x0010000000202000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ABP_Projectile_C__pf668171628), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_b0l__K2Node_DynamicCast_bSuccess2__pf_SetBit)>::SetBit, METADATA_PARAMS(NewProp_b0l__K2Node_DynamicCast_bSuccess2__pf_MetaData, ARRAY_COUNT(NewProp_b0l__K2Node_DynamicCast_bSuccess2__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_AsAsteroid_Large__pf_MetaData[] = {
				{ "ModuleRelativePath", "Public/BP_Projectile__pf668171628.h" },
				{ "OverrideNativeName", "K2Node_DynamicCast_AsAsteroid_Large" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__K2Node_DynamicCast_AsAsteroid_Large__pf = { UE4CodeGen_Private::EPropertyClass::Object, "K2Node_DynamicCast_AsAsteroid_Large", RF_Public|RF_Transient, 0x0010000000202000, 1, nullptr, STRUCT_OFFSET(ABP_Projectile_C__pf668171628, b0l__K2Node_DynamicCast_AsAsteroid_Large__pf), Z_Construct_UClass_AAsteroid_Large_C__pf2772898577_NoRegister, METADATA_PARAMS(NewProp_b0l__K2Node_DynamicCast_AsAsteroid_Large__pf_MetaData, ARRAY_COUNT(NewProp_b0l__K2Node_DynamicCast_AsAsteroid_Large__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_bSuccess1__pf_MetaData[] = {
				{ "ModuleRelativePath", "Public/BP_Projectile__pf668171628.h" },
				{ "OverrideNativeName", "K2Node_DynamicCast_bSuccess1" },
			};
#endif
			auto NewProp_b0l__K2Node_DynamicCast_bSuccess1__pf_SetBit = [](void* Obj){ ((ABP_Projectile_C__pf668171628*)Obj)->b0l__K2Node_DynamicCast_bSuccess1__pf = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b0l__K2Node_DynamicCast_bSuccess1__pf = { UE4CodeGen_Private::EPropertyClass::Bool, "K2Node_DynamicCast_bSuccess1", RF_Public|RF_Transient, 0x0010000000202000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ABP_Projectile_C__pf668171628), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_b0l__K2Node_DynamicCast_bSuccess1__pf_SetBit)>::SetBit, METADATA_PARAMS(NewProp_b0l__K2Node_DynamicCast_bSuccess1__pf_MetaData, ARRAY_COUNT(NewProp_b0l__K2Node_DynamicCast_bSuccess1__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_AsAsteroid_Medium__pf_MetaData[] = {
				{ "ModuleRelativePath", "Public/BP_Projectile__pf668171628.h" },
				{ "OverrideNativeName", "K2Node_DynamicCast_AsAsteroid_Medium" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__K2Node_DynamicCast_AsAsteroid_Medium__pf = { UE4CodeGen_Private::EPropertyClass::Object, "K2Node_DynamicCast_AsAsteroid_Medium", RF_Public|RF_Transient, 0x0010000000202000, 1, nullptr, STRUCT_OFFSET(ABP_Projectile_C__pf668171628, b0l__K2Node_DynamicCast_AsAsteroid_Medium__pf), Z_Construct_UClass_AAsteroid_Medium_C__pf2772898577_NoRegister, METADATA_PARAMS(NewProp_b0l__K2Node_DynamicCast_AsAsteroid_Medium__pf_MetaData, ARRAY_COUNT(NewProp_b0l__K2Node_DynamicCast_AsAsteroid_Medium__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_MetaData[] = {
				{ "ModuleRelativePath", "Public/BP_Projectile__pf668171628.h" },
				{ "OverrideNativeName", "K2Node_DynamicCast_bSuccess" },
			};
#endif
			auto NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_SetBit = [](void* Obj){ ((ABP_Projectile_C__pf668171628*)Obj)->b0l__K2Node_DynamicCast_bSuccess__pf = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b0l__K2Node_DynamicCast_bSuccess__pf = { UE4CodeGen_Private::EPropertyClass::Bool, "K2Node_DynamicCast_bSuccess", RF_Public|RF_Transient, 0x0010000000202000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ABP_Projectile_C__pf668171628), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_SetBit)>::SetBit, METADATA_PARAMS(NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_MetaData, ARRAY_COUNT(NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_AsAsteroid_Small__pf_MetaData[] = {
				{ "ModuleRelativePath", "Public/BP_Projectile__pf668171628.h" },
				{ "OverrideNativeName", "K2Node_DynamicCast_AsAsteroid_Small" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__K2Node_DynamicCast_AsAsteroid_Small__pf = { UE4CodeGen_Private::EPropertyClass::Object, "K2Node_DynamicCast_AsAsteroid_Small", RF_Public|RF_Transient, 0x0010000000202000, 1, nullptr, STRUCT_OFFSET(ABP_Projectile_C__pf668171628, b0l__K2Node_DynamicCast_AsAsteroid_Small__pf), Z_Construct_UClass_AAsteroid_C__pf2772898577_NoRegister, METADATA_PARAMS(NewProp_b0l__K2Node_DynamicCast_AsAsteroid_Small__pf_MetaData, ARRAY_COUNT(NewProp_b0l__K2Node_DynamicCast_AsAsteroid_Small__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_CustomEvent_Object_Collided__pf_MetaData[] = {
				{ "ModuleRelativePath", "Public/BP_Projectile__pf668171628.h" },
				{ "OverrideNativeName", "K2Node_CustomEvent_Object_Collided" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__K2Node_CustomEvent_Object_Collided__pf = { UE4CodeGen_Private::EPropertyClass::Object, "K2Node_CustomEvent_Object_Collided", RF_Public|RF_Transient, 0x0010000000202000, 1, nullptr, STRUCT_OFFSET(ABP_Projectile_C__pf668171628, b0l__K2Node_CustomEvent_Object_Collided__pf), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(NewProp_b0l__K2Node_CustomEvent_Object_Collided__pf_MetaData, ARRAY_COUNT(NewProp_b0l__K2Node_CustomEvent_Object_Collided__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__TimeElapsed__pf_MetaData[] = {
				{ "Category", "Default" },
				{ "DisplayName", "Time Elapsed" },
				{ "ModuleRelativePath", "Public/BP_Projectile__pf668171628.h" },
				{ "OverrideNativeName", "TimeElapsed" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpv__TimeElapsed__pf = { UE4CodeGen_Private::EPropertyClass::Float, "TimeElapsed", RF_Public|RF_Transient, 0x0010000000010005, 1, nullptr, STRUCT_OFFSET(ABP_Projectile_C__pf668171628, bpv__TimeElapsed__pf), METADATA_PARAMS(NewProp_bpv__TimeElapsed__pf_MetaData, ARRAY_COUNT(NewProp_bpv__TimeElapsed__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__DefaultSceneRoot__pf_MetaData[] = {
				{ "Category", "Default" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/BP_Projectile__pf668171628.h" },
				{ "OverrideNativeName", "DefaultSceneRoot" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__DefaultSceneRoot__pf = { UE4CodeGen_Private::EPropertyClass::Object, "DefaultSceneRoot", RF_Public|RF_Transient, 0x001000040008000c, 1, nullptr, STRUCT_OFFSET(ABP_Projectile_C__pf668171628, bpv__DefaultSceneRoot__pf), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(NewProp_bpv__DefaultSceneRoot__pf_MetaData, ARRAY_COUNT(NewProp_bpv__DefaultSceneRoot__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__StaticMesh__pf_MetaData[] = {
				{ "Category", "Default" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/BP_Projectile__pf668171628.h" },
				{ "OverrideNativeName", "StaticMesh" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__StaticMesh__pf = { UE4CodeGen_Private::EPropertyClass::Object, "StaticMesh", RF_Public|RF_Transient, 0x001000040008000c, 1, nullptr, STRUCT_OFFSET(ABP_Projectile_C__pf668171628, bpv__StaticMesh__pf), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(NewProp_bpv__StaticMesh__pf_MetaData, ARRAY_COUNT(NewProp_bpv__StaticMesh__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__ProjectileMovement__pf_MetaData[] = {
				{ "Category", "Default" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/BP_Projectile__pf668171628.h" },
				{ "OverrideNativeName", "ProjectileMovement" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__ProjectileMovement__pf = { UE4CodeGen_Private::EPropertyClass::Object, "ProjectileMovement", RF_Public|RF_Transient, 0x001000040008000c, 1, nullptr, STRUCT_OFFSET(ABP_Projectile_C__pf668171628, bpv__ProjectileMovement__pf), Z_Construct_UClass_UProjectileMovementComponent_NoRegister, METADATA_PARAMS(NewProp_bpv__ProjectileMovement__pf_MetaData, ARRAY_COUNT(NewProp_bpv__ProjectileMovement__pf_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b0l__K2Node_DynamicCast_bSuccess7__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b0l__K2Node_DynamicCast_AsShip1__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b0l__K2Node_Event_DeltaSeconds__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b0l__K2Node_DynamicCast_bSuccess6__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b0l__K2Node_DynamicCast_AsUser_Data__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b0l__K2Node_DynamicCast_bSuccess5__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b0l__K2Node_DynamicCast_AsShip__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b0l__K2Node_DynamicCast_bSuccess4__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b0l__K2Node_DynamicCast_AsReg_User__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b0l__K2Node_DynamicCast_bSuccess3__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b0l__K2Node_DynamicCast_AsDebug_MData__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b0l__K2Node_DynamicCast_bSuccess2__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b0l__K2Node_DynamicCast_AsAsteroid_Large__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b0l__K2Node_DynamicCast_bSuccess1__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b0l__K2Node_DynamicCast_AsAsteroid_Medium__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b0l__K2Node_DynamicCast_bSuccess__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b0l__K2Node_DynamicCast_AsAsteroid_Small__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b0l__K2Node_CustomEvent_Object_Collided__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bpv__TimeElapsed__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bpv__DefaultSceneRoot__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bpv__StaticMesh__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bpv__ProjectileMovement__pf,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<ABP_Projectile_C__pf668171628>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&ABP_Projectile_C__pf668171628::StaticClass,
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
	IMPLEMENT_DYNAMIC_CLASS(ABP_Projectile_C__pf668171628, TEXT("BP_Projectile_C"), 4081880288);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABP_Projectile_C__pf668171628(Z_Construct_UClass_ABP_Projectile_C__pf668171628, &ABP_Projectile_C__pf668171628::StaticClass, TEXT("/Game/Pawns/Ship/BP_Projectile"), TEXT("BP_Projectile_C"), true, TEXT("/Game/Pawns/Ship/BP_Projectile"), TEXT("/Game/Pawns/Ship/BP_Projectile.BP_Projectile_C"), nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABP_Projectile_C__pf668171628);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
