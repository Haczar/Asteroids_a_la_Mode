// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Private/NativizedAssets.h"
#include "Public/Asteroid__pf2772898577.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAsteroid__pf2772898577() {}
// Cross Module References
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_AAsteroid_C__pf2772898577_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_AAsteroid_C__pf2772898577();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	NATIVIZEDASSETS_API UFunction* Z_Construct_UFunction_AAsteroid_C__pf2772898577_bpf__BndEvt__StaticMesh_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature__pf();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	NATIVIZEDASSETS_API UFunction* Z_Construct_UFunction_AAsteroid_C__pf2772898577_bpf__Break__pf();
	NATIVIZEDASSETS_API UFunction* Z_Construct_UFunction_AAsteroid_C__pf2772898577_bpf__ReceiveBeginPlay__pf();
	NATIVIZEDASSETS_API UFunction* Z_Construct_UFunction_AAsteroid_C__pf2772898577_bpf__ReceiveDestroyed__pf();
	NATIVIZEDASSETS_API UFunction* Z_Construct_UFunction_AAsteroid_C__pf2772898577_bpf__ReceiveTick__pf();
	NATIVIZEDASSETS_API UFunction* Z_Construct_UFunction_AAsteroid_C__pf2772898577_bpf__UserConstructionScript__pf();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_ABP_Projectile_C__pf3227778944_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_ADebugMode_C__pf4162722864_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UProjectileMovementComponent_NoRegister();
// End Cross Module References
	static FName NAME_AAsteroid_C__pf2772898577_bpf__Break__pf = FName(TEXT("Break"));
	void AAsteroid_C__pf2772898577::bpf__Break__pf()
	{
		ProcessEvent(FindFunctionChecked(NAME_AAsteroid_C__pf2772898577_bpf__Break__pf),NULL);
	}
	static FName NAME_AAsteroid_C__pf2772898577_bpf__ReceiveBeginPlay__pf = FName(TEXT("ReceiveBeginPlay"));
	void AAsteroid_C__pf2772898577::eventbpf__ReceiveBeginPlay__pf()
	{
		ProcessEvent(FindFunctionChecked(NAME_AAsteroid_C__pf2772898577_bpf__ReceiveBeginPlay__pf),NULL);
	}
	static FName NAME_AAsteroid_C__pf2772898577_bpf__ReceiveDestroyed__pf = FName(TEXT("ReceiveDestroyed"));
	void AAsteroid_C__pf2772898577::eventbpf__ReceiveDestroyed__pf()
	{
		ProcessEvent(FindFunctionChecked(NAME_AAsteroid_C__pf2772898577_bpf__ReceiveDestroyed__pf),NULL);
	}
	static FName NAME_AAsteroid_C__pf2772898577_bpf__ReceiveTick__pf = FName(TEXT("ReceiveTick"));
	void AAsteroid_C__pf2772898577::eventbpf__ReceiveTick__pf(float bpp__DeltaSeconds__pf)
	{
		Asteroid_C__pf2772898577_eventbpf__ReceiveTick__pf_Parms Parms;
		Parms.bpp__DeltaSeconds__pf=bpp__DeltaSeconds__pf;
		ProcessEvent(FindFunctionChecked(NAME_AAsteroid_C__pf2772898577_bpf__ReceiveTick__pf),&Parms);
	}
	static FName NAME_AAsteroid_C__pf2772898577_bpf__UserConstructionScript__pf = FName(TEXT("UserConstructionScript"));
	void AAsteroid_C__pf2772898577::eventbpf__UserConstructionScript__pf()
	{
		ProcessEvent(FindFunctionChecked(NAME_AAsteroid_C__pf2772898577_bpf__UserConstructionScript__pf),NULL);
	}
	void AAsteroid_C__pf2772898577::StaticRegisterNativesAAsteroid_C__pf2772898577()
	{
		UClass* Class = AAsteroid_C__pf2772898577::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BndEvt__StaticMesh_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature", &AAsteroid_C__pf2772898577::execbpf__BndEvt__StaticMesh_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature__pf },
			{ "Break", &AAsteroid_C__pf2772898577::execbpf__Break__pf },
			{ "ReceiveBeginPlay", &AAsteroid_C__pf2772898577::execbpf__ReceiveBeginPlay__pf },
			{ "ReceiveDestroyed", &AAsteroid_C__pf2772898577::execbpf__ReceiveDestroyed__pf },
			{ "ReceiveTick", &AAsteroid_C__pf2772898577::execbpf__ReceiveTick__pf },
			{ "UserConstructionScript", &AAsteroid_C__pf2772898577::execbpf__UserConstructionScript__pf },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_AAsteroid_C__pf2772898577_bpf__BndEvt__StaticMesh_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature__pf()
	{
		struct Asteroid_C__pf2772898577_eventbpf__BndEvt__StaticMesh_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature__pf_Parms
		{
			UPrimitiveComponent* bpp__OverlappedComponent__pf;
			AActor* bpp__OtherActor__pf;
			UPrimitiveComponent* bpp__OtherComp__pf;
			int32 bpp__OtherBodyIndex__pf;
			bool bpp__bFromSweep__pf;
			FHitResult bpp__SweepResult__pf__const;
		};
		UObject* Outer = Z_Construct_UClass_AAsteroid_C__pf2772898577();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("BndEvt__StaticMesh_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature") ));
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpp__SweepResult__pf__const_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_bpp__SweepResult__pf__const = { UE4CodeGen_Private::EPropertyClass::Struct, "bpp__SweepResult__pf__const", RF_Public|RF_Transient, 0x0010008008000182, 1, nullptr, STRUCT_OFFSET(Asteroid_C__pf2772898577_eventbpf__BndEvt__StaticMesh_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature__pf_Parms, bpp__SweepResult__pf__const), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(NewProp_bpp__SweepResult__pf__const_MetaData, ARRAY_COUNT(NewProp_bpp__SweepResult__pf__const_MetaData)) };
			auto NewProp_bpp__bFromSweep__pf_SetBit = [](void* Obj){ ((Asteroid_C__pf2772898577_eventbpf__BndEvt__StaticMesh_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature__pf_Parms*)Obj)->bpp__bFromSweep__pf = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bpp__bFromSweep__pf = { UE4CodeGen_Private::EPropertyClass::Bool, "bpp__bFromSweep__pf", RF_Public|RF_Transient, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(Asteroid_C__pf2772898577_eventbpf__BndEvt__StaticMesh_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature__pf_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bpp__bFromSweep__pf_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_bpp__OtherBodyIndex__pf = { UE4CodeGen_Private::EPropertyClass::Int, "bpp__OtherBodyIndex__pf", RF_Public|RF_Transient, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Asteroid_C__pf2772898577_eventbpf__BndEvt__StaticMesh_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature__pf_Parms, bpp__OtherBodyIndex__pf), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpp__OtherComp__pf_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpp__OtherComp__pf = { UE4CodeGen_Private::EPropertyClass::Object, "bpp__OtherComp__pf", RF_Public|RF_Transient, 0x0010000000080080, 1, nullptr, STRUCT_OFFSET(Asteroid_C__pf2772898577_eventbpf__BndEvt__StaticMesh_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature__pf_Parms, bpp__OtherComp__pf), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(NewProp_bpp__OtherComp__pf_MetaData, ARRAY_COUNT(NewProp_bpp__OtherComp__pf_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpp__OtherActor__pf = { UE4CodeGen_Private::EPropertyClass::Object, "bpp__OtherActor__pf", RF_Public|RF_Transient, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Asteroid_C__pf2772898577_eventbpf__BndEvt__StaticMesh_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature__pf_Parms, bpp__OtherActor__pf), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpp__OverlappedComponent__pf_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpp__OverlappedComponent__pf = { UE4CodeGen_Private::EPropertyClass::Object, "bpp__OverlappedComponent__pf", RF_Public|RF_Transient, 0x0010000000080080, 1, nullptr, STRUCT_OFFSET(Asteroid_C__pf2772898577_eventbpf__BndEvt__StaticMesh_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature__pf_Parms, bpp__OverlappedComponent__pf), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(NewProp_bpp__OverlappedComponent__pf_MetaData, ARRAY_COUNT(NewProp_bpp__OverlappedComponent__pf_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bpp__SweepResult__pf__const,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bpp__bFromSweep__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bpp__OtherBodyIndex__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bpp__OtherComp__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bpp__OtherActor__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bpp__OverlappedComponent__pf,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/Asteroid__pf2772898577.h" },
				{ "OverrideNativeName", "BndEvt__StaticMesh_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AAsteroid_C__pf2772898577, "BndEvt__StaticMesh_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature", RF_Public|RF_Transient, nullptr, (EFunctionFlags)0x00420400, sizeof(Asteroid_C__pf2772898577_eventbpf__BndEvt__StaticMesh_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature__pf_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AAsteroid_C__pf2772898577_bpf__Break__pf()
	{
		UObject* Outer = Z_Construct_UClass_AAsteroid_C__pf2772898577();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("Break") ));
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "" },
				{ "ModuleRelativePath", "Public/Asteroid__pf2772898577.h" },
				{ "OverrideNativeName", "Break" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AAsteroid_C__pf2772898577, "Break", RF_Public|RF_Transient, nullptr, (EFunctionFlags)0x04220C40, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AAsteroid_C__pf2772898577_bpf__ReceiveBeginPlay__pf()
	{
		UObject* Outer = Z_Construct_UClass_AAsteroid_C__pf2772898577();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("ReceiveBeginPlay") ));
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "CppFromBpEvent", "" },
				{ "DisplayName", "BeginPlay" },
				{ "ModuleRelativePath", "Public/Asteroid__pf2772898577.h" },
				{ "OverrideNativeName", "ReceiveBeginPlay" },
				{ "ToolTip", "Event when play begins for this actor." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AAsteroid_C__pf2772898577, "ReceiveBeginPlay", RF_Public|RF_Transient, nullptr, (EFunctionFlags)0x00020C01, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AAsteroid_C__pf2772898577_bpf__ReceiveDestroyed__pf()
	{
		UObject* Outer = Z_Construct_UClass_AAsteroid_C__pf2772898577();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("ReceiveDestroyed") ));
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "CppFromBpEvent", "" },
				{ "DisplayName", "Destroyed" },
				{ "Keywords", "delete" },
				{ "ModuleRelativePath", "Public/Asteroid__pf2772898577.h" },
				{ "OverrideNativeName", "ReceiveDestroyed" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AAsteroid_C__pf2772898577, "ReceiveDestroyed", RF_Public|RF_Transient, nullptr, (EFunctionFlags)0x00020C01, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AAsteroid_C__pf2772898577_bpf__ReceiveTick__pf()
	{
		UObject* Outer = Z_Construct_UClass_AAsteroid_C__pf2772898577();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("ReceiveTick") ));
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpp__DeltaSeconds__pf = { UE4CodeGen_Private::EPropertyClass::Float, "bpp__DeltaSeconds__pf", RF_Public|RF_Transient, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Asteroid_C__pf2772898577_eventbpf__ReceiveTick__pf_Parms, bpp__DeltaSeconds__pf), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bpp__DeltaSeconds__pf,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "CppFromBpEvent", "" },
				{ "DisplayName", "Tick" },
				{ "ModuleRelativePath", "Public/Asteroid__pf2772898577.h" },
				{ "OverrideNativeName", "ReceiveTick" },
				{ "ToolTip", "Event called every frame" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AAsteroid_C__pf2772898577, "ReceiveTick", RF_Public|RF_Transient, nullptr, (EFunctionFlags)0x00020C01, sizeof(Asteroid_C__pf2772898577_eventbpf__ReceiveTick__pf_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AAsteroid_C__pf2772898577_bpf__UserConstructionScript__pf()
	{
		UObject* Outer = Z_Construct_UClass_AAsteroid_C__pf2772898577();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("UserConstructionScript") ));
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "BlueprintInternalUseOnly", "true" },
				{ "Category", "" },
				{ "CppFromBpEvent", "" },
				{ "DisplayName", "Construction Script" },
				{ "ModuleRelativePath", "Public/Asteroid__pf2772898577.h" },
				{ "OverrideNativeName", "UserConstructionScript" },
				{ "ToolTip", "Construction script, the place to spawn components and do other setup.@note Name used in CreateBlueprint function@param       Location        The location.@param       Rotation        The rotation." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AAsteroid_C__pf2772898577, "UserConstructionScript", RF_Public|RF_Transient, nullptr, (EFunctionFlags)0x04020C01, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AAsteroid_C__pf2772898577_NoRegister()
	{
		return AAsteroid_C__pf2772898577::StaticClass();
	}
	UClass* Z_Construct_UClass_AAsteroid_C__pf2772898577()
	{
		UPackage* OuterPackage = FindOrConstructDynamicTypePackage(TEXT("/Game/Obstacles/Asteroid"));
		UClass* OuterClass = Cast<UClass>(StaticFindObjectFast(UClass::StaticClass(), OuterPackage, TEXT("Asteroid_C")));
		if (!OuterClass || !(OuterClass->ClassFlags & CLASS_Constructed))
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AActor,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_AAsteroid_C__pf2772898577_bpf__BndEvt__StaticMesh_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature__pf, "BndEvt__StaticMesh_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature" }, // 367770336
				{ &Z_Construct_UFunction_AAsteroid_C__pf2772898577_bpf__Break__pf, "Break" }, // 2005910085
				{ &Z_Construct_UFunction_AAsteroid_C__pf2772898577_bpf__ReceiveBeginPlay__pf, "ReceiveBeginPlay" }, // 181276912
				{ &Z_Construct_UFunction_AAsteroid_C__pf2772898577_bpf__ReceiveDestroyed__pf, "ReceiveDestroyed" }, // 750882442
				{ &Z_Construct_UFunction_AAsteroid_C__pf2772898577_bpf__ReceiveTick__pf, "ReceiveTick" }, // 4208249455
				{ &Z_Construct_UFunction_AAsteroid_C__pf2772898577_bpf__UserConstructionScript__pf, "UserConstructionScript" }, // 3786118235
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "IncludePath", "Asteroid__pf2772898577.h" },
				{ "IsBlueprintBase", "true" },
				{ "ModuleRelativePath", "Public/Asteroid__pf2772898577.h" },
				{ "ObjectInitializerConstructorDeclared", "" },
				{ "OverrideNativeName", "Asteroid_C" },
				{ "ReplaceConverted", "/Game/Obstacles/Asteroid.Asteroid_C" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_bSuccess2__pf_MetaData[] = {
				{ "ModuleRelativePath", "Public/Asteroid__pf2772898577.h" },
				{ "OverrideNativeName", "K2Node_DynamicCast_bSuccess2" },
			};
#endif
			auto NewProp_b0l__K2Node_DynamicCast_bSuccess2__pf_SetBit = [](void* Obj){ ((AAsteroid_C__pf2772898577*)Obj)->b0l__K2Node_DynamicCast_bSuccess2__pf = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b0l__K2Node_DynamicCast_bSuccess2__pf = { UE4CodeGen_Private::EPropertyClass::Bool, "K2Node_DynamicCast_bSuccess2", RF_Public|RF_Transient, 0x0010000000202000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AAsteroid_C__pf2772898577), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_b0l__K2Node_DynamicCast_bSuccess2__pf_SetBit)>::SetBit, METADATA_PARAMS(NewProp_b0l__K2Node_DynamicCast_bSuccess2__pf_MetaData, ARRAY_COUNT(NewProp_b0l__K2Node_DynamicCast_bSuccess2__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_AsBP_Projectile__pf_MetaData[] = {
				{ "ModuleRelativePath", "Public/Asteroid__pf2772898577.h" },
				{ "OverrideNativeName", "K2Node_DynamicCast_AsBP_Projectile" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__K2Node_DynamicCast_AsBP_Projectile__pf = { UE4CodeGen_Private::EPropertyClass::Object, "K2Node_DynamicCast_AsBP_Projectile", RF_Public|RF_Transient, 0x0010000000202000, 1, nullptr, STRUCT_OFFSET(AAsteroid_C__pf2772898577, b0l__K2Node_DynamicCast_AsBP_Projectile__pf), Z_Construct_UClass_ABP_Projectile_C__pf3227778944_NoRegister, METADATA_PARAMS(NewProp_b0l__K2Node_DynamicCast_AsBP_Projectile__pf_MetaData, ARRAY_COUNT(NewProp_b0l__K2Node_DynamicCast_AsBP_Projectile__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_ComponentBoundEvent_SweepResult__pf_MetaData[] = {
				{ "ModuleRelativePath", "Public/Asteroid__pf2772898577.h" },
				{ "OverrideNativeName", "K2Node_ComponentBoundEvent_SweepResult" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_b0l__K2Node_ComponentBoundEvent_SweepResult__pf = { UE4CodeGen_Private::EPropertyClass::Struct, "K2Node_ComponentBoundEvent_SweepResult", RF_Public|RF_Transient, 0x0010008000202000, 1, nullptr, STRUCT_OFFSET(AAsteroid_C__pf2772898577, b0l__K2Node_ComponentBoundEvent_SweepResult__pf), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(NewProp_b0l__K2Node_ComponentBoundEvent_SweepResult__pf_MetaData, ARRAY_COUNT(NewProp_b0l__K2Node_ComponentBoundEvent_SweepResult__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_ComponentBoundEvent_bFromSweep__pf_MetaData[] = {
				{ "ModuleRelativePath", "Public/Asteroid__pf2772898577.h" },
				{ "OverrideNativeName", "K2Node_ComponentBoundEvent_bFromSweep" },
			};
#endif
			auto NewProp_b0l__K2Node_ComponentBoundEvent_bFromSweep__pf_SetBit = [](void* Obj){ ((AAsteroid_C__pf2772898577*)Obj)->b0l__K2Node_ComponentBoundEvent_bFromSweep__pf = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b0l__K2Node_ComponentBoundEvent_bFromSweep__pf = { UE4CodeGen_Private::EPropertyClass::Bool, "K2Node_ComponentBoundEvent_bFromSweep", RF_Public|RF_Transient, 0x0010000000202000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AAsteroid_C__pf2772898577), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_b0l__K2Node_ComponentBoundEvent_bFromSweep__pf_SetBit)>::SetBit, METADATA_PARAMS(NewProp_b0l__K2Node_ComponentBoundEvent_bFromSweep__pf_MetaData, ARRAY_COUNT(NewProp_b0l__K2Node_ComponentBoundEvent_bFromSweep__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_ComponentBoundEvent_OtherBodyIndex__pf_MetaData[] = {
				{ "ModuleRelativePath", "Public/Asteroid__pf2772898577.h" },
				{ "OverrideNativeName", "K2Node_ComponentBoundEvent_OtherBodyIndex" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_b0l__K2Node_ComponentBoundEvent_OtherBodyIndex__pf = { UE4CodeGen_Private::EPropertyClass::Int, "K2Node_ComponentBoundEvent_OtherBodyIndex", RF_Public|RF_Transient, 0x0010000000202000, 1, nullptr, STRUCT_OFFSET(AAsteroid_C__pf2772898577, b0l__K2Node_ComponentBoundEvent_OtherBodyIndex__pf), METADATA_PARAMS(NewProp_b0l__K2Node_ComponentBoundEvent_OtherBodyIndex__pf_MetaData, ARRAY_COUNT(NewProp_b0l__K2Node_ComponentBoundEvent_OtherBodyIndex__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_ComponentBoundEvent_OtherComp__pf_MetaData[] = {
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/Asteroid__pf2772898577.h" },
				{ "OverrideNativeName", "K2Node_ComponentBoundEvent_OtherComp" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__K2Node_ComponentBoundEvent_OtherComp__pf = { UE4CodeGen_Private::EPropertyClass::Object, "K2Node_ComponentBoundEvent_OtherComp", RF_Public|RF_Transient, 0x0010000000282008, 1, nullptr, STRUCT_OFFSET(AAsteroid_C__pf2772898577, b0l__K2Node_ComponentBoundEvent_OtherComp__pf), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(NewProp_b0l__K2Node_ComponentBoundEvent_OtherComp__pf_MetaData, ARRAY_COUNT(NewProp_b0l__K2Node_ComponentBoundEvent_OtherComp__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_ComponentBoundEvent_OtherActor__pf_MetaData[] = {
				{ "ModuleRelativePath", "Public/Asteroid__pf2772898577.h" },
				{ "OverrideNativeName", "K2Node_ComponentBoundEvent_OtherActor" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__K2Node_ComponentBoundEvent_OtherActor__pf = { UE4CodeGen_Private::EPropertyClass::Object, "K2Node_ComponentBoundEvent_OtherActor", RF_Public|RF_Transient, 0x0010000000202000, 1, nullptr, STRUCT_OFFSET(AAsteroid_C__pf2772898577, b0l__K2Node_ComponentBoundEvent_OtherActor__pf), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(NewProp_b0l__K2Node_ComponentBoundEvent_OtherActor__pf_MetaData, ARRAY_COUNT(NewProp_b0l__K2Node_ComponentBoundEvent_OtherActor__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_ComponentBoundEvent_OverlappedComponent__pf_MetaData[] = {
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/Asteroid__pf2772898577.h" },
				{ "OverrideNativeName", "K2Node_ComponentBoundEvent_OverlappedComponent" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__K2Node_ComponentBoundEvent_OverlappedComponent__pf = { UE4CodeGen_Private::EPropertyClass::Object, "K2Node_ComponentBoundEvent_OverlappedComponent", RF_Public|RF_Transient, 0x0010000000282008, 1, nullptr, STRUCT_OFFSET(AAsteroid_C__pf2772898577, b0l__K2Node_ComponentBoundEvent_OverlappedComponent__pf), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(NewProp_b0l__K2Node_ComponentBoundEvent_OverlappedComponent__pf_MetaData, ARRAY_COUNT(NewProp_b0l__K2Node_ComponentBoundEvent_OverlappedComponent__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_bSuccess1__pf_MetaData[] = {
				{ "ModuleRelativePath", "Public/Asteroid__pf2772898577.h" },
				{ "OverrideNativeName", "K2Node_DynamicCast_bSuccess1" },
			};
#endif
			auto NewProp_b0l__K2Node_DynamicCast_bSuccess1__pf_SetBit = [](void* Obj){ ((AAsteroid_C__pf2772898577*)Obj)->b0l__K2Node_DynamicCast_bSuccess1__pf = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b0l__K2Node_DynamicCast_bSuccess1__pf = { UE4CodeGen_Private::EPropertyClass::Bool, "K2Node_DynamicCast_bSuccess1", RF_Public|RF_Transient, 0x0010000000202000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AAsteroid_C__pf2772898577), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_b0l__K2Node_DynamicCast_bSuccess1__pf_SetBit)>::SetBit, METADATA_PARAMS(NewProp_b0l__K2Node_DynamicCast_bSuccess1__pf_MetaData, ARRAY_COUNT(NewProp_b0l__K2Node_DynamicCast_bSuccess1__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_AsDebug_Mode1__pf_MetaData[] = {
				{ "ModuleRelativePath", "Public/Asteroid__pf2772898577.h" },
				{ "OverrideNativeName", "K2Node_DynamicCast_AsDebug_Mode1" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__K2Node_DynamicCast_AsDebug_Mode1__pf = { UE4CodeGen_Private::EPropertyClass::Object, "K2Node_DynamicCast_AsDebug_Mode1", RF_Public|RF_Transient, 0x0010000000202000, 1, nullptr, STRUCT_OFFSET(AAsteroid_C__pf2772898577, b0l__K2Node_DynamicCast_AsDebug_Mode1__pf), Z_Construct_UClass_ADebugMode_C__pf4162722864_NoRegister, METADATA_PARAMS(NewProp_b0l__K2Node_DynamicCast_AsDebug_Mode1__pf_MetaData, ARRAY_COUNT(NewProp_b0l__K2Node_DynamicCast_AsDebug_Mode1__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_K2_AddWorldRotation_SweepHitResult__pf_MetaData[] = {
				{ "ModuleRelativePath", "Public/Asteroid__pf2772898577.h" },
				{ "OverrideNativeName", "CallFunc_K2_AddWorldRotation_SweepHitResult" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_b0l__CallFunc_K2_AddWorldRotation_SweepHitResult__pf = { UE4CodeGen_Private::EPropertyClass::Struct, "CallFunc_K2_AddWorldRotation_SweepHitResult", RF_Public|RF_Transient, 0x0010008000202000, 1, nullptr, STRUCT_OFFSET(AAsteroid_C__pf2772898577, b0l__CallFunc_K2_AddWorldRotation_SweepHitResult__pf), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(NewProp_b0l__CallFunc_K2_AddWorldRotation_SweepHitResult__pf_MetaData, ARRAY_COUNT(NewProp_b0l__CallFunc_K2_AddWorldRotation_SweepHitResult__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_Event_DeltaSeconds__pf_MetaData[] = {
				{ "ModuleRelativePath", "Public/Asteroid__pf2772898577.h" },
				{ "OverrideNativeName", "K2Node_Event_DeltaSeconds" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_b0l__K2Node_Event_DeltaSeconds__pf = { UE4CodeGen_Private::EPropertyClass::Float, "K2Node_Event_DeltaSeconds", RF_Public|RF_Transient, 0x0010000000202000, 1, nullptr, STRUCT_OFFSET(AAsteroid_C__pf2772898577, b0l__K2Node_Event_DeltaSeconds__pf), METADATA_PARAMS(NewProp_b0l__K2Node_Event_DeltaSeconds__pf_MetaData, ARRAY_COUNT(NewProp_b0l__K2Node_Event_DeltaSeconds__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_MetaData[] = {
				{ "ModuleRelativePath", "Public/Asteroid__pf2772898577.h" },
				{ "OverrideNativeName", "K2Node_DynamicCast_bSuccess" },
			};
#endif
			auto NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_SetBit = [](void* Obj){ ((AAsteroid_C__pf2772898577*)Obj)->b0l__K2Node_DynamicCast_bSuccess__pf = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b0l__K2Node_DynamicCast_bSuccess__pf = { UE4CodeGen_Private::EPropertyClass::Bool, "K2Node_DynamicCast_bSuccess", RF_Public|RF_Transient, 0x0010000000202000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AAsteroid_C__pf2772898577), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_SetBit)>::SetBit, METADATA_PARAMS(NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_MetaData, ARRAY_COUNT(NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_AsDebug_Mode__pf_MetaData[] = {
				{ "ModuleRelativePath", "Public/Asteroid__pf2772898577.h" },
				{ "OverrideNativeName", "K2Node_DynamicCast_AsDebug_Mode" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__K2Node_DynamicCast_AsDebug_Mode__pf = { UE4CodeGen_Private::EPropertyClass::Object, "K2Node_DynamicCast_AsDebug_Mode", RF_Public|RF_Transient, 0x0010000000202000, 1, nullptr, STRUCT_OFFSET(AAsteroid_C__pf2772898577, b0l__K2Node_DynamicCast_AsDebug_Mode__pf), Z_Construct_UClass_ADebugMode_C__pf4162722864_NoRegister, METADATA_PARAMS(NewProp_b0l__K2Node_DynamicCast_AsDebug_Mode__pf_MetaData, ARRAY_COUNT(NewProp_b0l__K2Node_DynamicCast_AsDebug_Mode__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__EaseConstant__pf_MetaData[] = {
				{ "Category", "Default" },
				{ "DisplayName", "Ease Constant" },
				{ "ModuleRelativePath", "Public/Asteroid__pf2772898577.h" },
				{ "OverrideNativeName", "EaseConstant" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpv__EaseConstant__pf = { UE4CodeGen_Private::EPropertyClass::Float, "EaseConstant", RF_Public|RF_Transient, 0x0010000000010005, 1, nullptr, STRUCT_OFFSET(AAsteroid_C__pf2772898577, bpv__EaseConstant__pf), METADATA_PARAMS(NewProp_bpv__EaseConstant__pf_MetaData, ARRAY_COUNT(NewProp_bpv__EaseConstant__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__EaseCount__pf_MetaData[] = {
				{ "Category", "Default" },
				{ "DisplayName", "Ease Count" },
				{ "ModuleRelativePath", "Public/Asteroid__pf2772898577.h" },
				{ "OverrideNativeName", "EaseCount" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpv__EaseCount__pf = { UE4CodeGen_Private::EPropertyClass::Float, "EaseCount", RF_Public|RF_Transient, 0x0010000000010005, 1, nullptr, STRUCT_OFFSET(AAsteroid_C__pf2772898577, bpv__EaseCount__pf), METADATA_PARAMS(NewProp_bpv__EaseCount__pf_MetaData, ARRAY_COUNT(NewProp_bpv__EaseCount__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__RandRot__pf_MetaData[] = {
				{ "Category", "Default" },
				{ "DisplayName", "Rand Rot" },
				{ "ModuleRelativePath", "Public/Asteroid__pf2772898577.h" },
				{ "OverrideNativeName", "RandRot" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_bpv__RandRot__pf = { UE4CodeGen_Private::EPropertyClass::Struct, "RandRot", RF_Public|RF_Transient, 0x0010000000010005, 1, nullptr, STRUCT_OFFSET(AAsteroid_C__pf2772898577, bpv__RandRot__pf), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(NewProp_bpv__RandRot__pf_MetaData, ARRAY_COUNT(NewProp_bpv__RandRot__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__DefaultSceneRoot__pf_MetaData[] = {
				{ "Category", "Default" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/Asteroid__pf2772898577.h" },
				{ "OverrideNativeName", "DefaultSceneRoot" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__DefaultSceneRoot__pf = { UE4CodeGen_Private::EPropertyClass::Object, "DefaultSceneRoot", RF_Public|RF_Transient, 0x001000040008000c, 1, nullptr, STRUCT_OFFSET(AAsteroid_C__pf2772898577, bpv__DefaultSceneRoot__pf), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(NewProp_bpv__DefaultSceneRoot__pf_MetaData, ARRAY_COUNT(NewProp_bpv__DefaultSceneRoot__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__StaticMesh__pf_MetaData[] = {
				{ "Category", "Default" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/Asteroid__pf2772898577.h" },
				{ "OverrideNativeName", "StaticMesh" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__StaticMesh__pf = { UE4CodeGen_Private::EPropertyClass::Object, "StaticMesh", RF_Public|RF_Transient, 0x001000040008000c, 1, nullptr, STRUCT_OFFSET(AAsteroid_C__pf2772898577, bpv__StaticMesh__pf), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(NewProp_bpv__StaticMesh__pf_MetaData, ARRAY_COUNT(NewProp_bpv__StaticMesh__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__ProjectileMovement__pf_MetaData[] = {
				{ "Category", "Default" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/Asteroid__pf2772898577.h" },
				{ "OverrideNativeName", "ProjectileMovement" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__ProjectileMovement__pf = { UE4CodeGen_Private::EPropertyClass::Object, "ProjectileMovement", RF_Public|RF_Transient, 0x001000040008000c, 1, nullptr, STRUCT_OFFSET(AAsteroid_C__pf2772898577, bpv__ProjectileMovement__pf), Z_Construct_UClass_UProjectileMovementComponent_NoRegister, METADATA_PARAMS(NewProp_bpv__ProjectileMovement__pf_MetaData, ARRAY_COUNT(NewProp_bpv__ProjectileMovement__pf_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b0l__K2Node_DynamicCast_bSuccess2__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b0l__K2Node_DynamicCast_AsBP_Projectile__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b0l__K2Node_ComponentBoundEvent_SweepResult__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b0l__K2Node_ComponentBoundEvent_bFromSweep__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b0l__K2Node_ComponentBoundEvent_OtherBodyIndex__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b0l__K2Node_ComponentBoundEvent_OtherComp__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b0l__K2Node_ComponentBoundEvent_OtherActor__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b0l__K2Node_ComponentBoundEvent_OverlappedComponent__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b0l__K2Node_DynamicCast_bSuccess1__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b0l__K2Node_DynamicCast_AsDebug_Mode1__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b0l__CallFunc_K2_AddWorldRotation_SweepHitResult__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b0l__K2Node_Event_DeltaSeconds__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b0l__K2Node_DynamicCast_bSuccess__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b0l__K2Node_DynamicCast_AsDebug_Mode__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bpv__EaseConstant__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bpv__EaseCount__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bpv__RandRot__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bpv__DefaultSceneRoot__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bpv__StaticMesh__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bpv__ProjectileMovement__pf,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AAsteroid_C__pf2772898577>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AAsteroid_C__pf2772898577::StaticClass,
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
	IMPLEMENT_DYNAMIC_CLASS(AAsteroid_C__pf2772898577, TEXT("Asteroid_C"), 3516779747);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAsteroid_C__pf2772898577(Z_Construct_UClass_AAsteroid_C__pf2772898577, &AAsteroid_C__pf2772898577::StaticClass, TEXT("/Game/Obstacles/Asteroid"), TEXT("Asteroid_C"), true, TEXT("/Game/Obstacles/Asteroid"), TEXT("/Game/Obstacles/Asteroid.Asteroid_C"), nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAsteroid_C__pf2772898577);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
