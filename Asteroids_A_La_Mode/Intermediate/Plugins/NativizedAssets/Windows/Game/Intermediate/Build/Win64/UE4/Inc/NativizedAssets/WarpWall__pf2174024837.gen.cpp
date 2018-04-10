// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Private/NativizedAssets.h"
#include "Public/WarpWall__pf2174024837.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWarpWall__pf2174024837() {}
// Cross Module References
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_AWarpWall_C__pf2174024837_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_AWarpWall_C__pf2174024837();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	NATIVIZEDASSETS_API UFunction* Z_Construct_UFunction_AWarpWall_C__pf2174024837_bpf__BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature__pf();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	NATIVIZEDASSETS_API UFunction* Z_Construct_UFunction_AWarpWall_C__pf2174024837_bpf__UserConstructionScript__pf();
	NATIVIZEDASSETS_API UEnum* Z_Construct_UEnum_NativizedAssets_E__BorderSide__pf();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
// End Cross Module References
	static FName NAME_AWarpWall_C__pf2174024837_bpf__UserConstructionScript__pf = FName(TEXT("UserConstructionScript"));
	void AWarpWall_C__pf2174024837::eventbpf__UserConstructionScript__pf()
	{
		ProcessEvent(FindFunctionChecked(NAME_AWarpWall_C__pf2174024837_bpf__UserConstructionScript__pf),NULL);
	}
	void AWarpWall_C__pf2174024837::StaticRegisterNativesAWarpWall_C__pf2174024837()
	{
		UClass* Class = AWarpWall_C__pf2174024837::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature", &AWarpWall_C__pf2174024837::execbpf__BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature__pf },
			{ "UserConstructionScript", &AWarpWall_C__pf2174024837::execbpf__UserConstructionScript__pf },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_AWarpWall_C__pf2174024837_bpf__BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature__pf()
	{
		struct WarpWall_C__pf2174024837_eventbpf__BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature__pf_Parms
		{
			UPrimitiveComponent* bpp__OverlappedComponent__pf;
			AActor* bpp__OtherActor__pf;
			UPrimitiveComponent* bpp__OtherComp__pf;
			int32 bpp__OtherBodyIndex__pf;
			bool bpp__bFromSweep__pf;
			FHitResult bpp__SweepResult__pf__const;
		};
		UObject* Outer = Z_Construct_UClass_AWarpWall_C__pf2174024837();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature") ));
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpp__SweepResult__pf__const_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_bpp__SweepResult__pf__const = { UE4CodeGen_Private::EPropertyClass::Struct, "bpp__SweepResult__pf__const", RF_Public|RF_Transient, 0x0010008008000182, 1, nullptr, STRUCT_OFFSET(WarpWall_C__pf2174024837_eventbpf__BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature__pf_Parms, bpp__SweepResult__pf__const), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(NewProp_bpp__SweepResult__pf__const_MetaData, ARRAY_COUNT(NewProp_bpp__SweepResult__pf__const_MetaData)) };
			auto NewProp_bpp__bFromSweep__pf_SetBit = [](void* Obj){ ((WarpWall_C__pf2174024837_eventbpf__BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature__pf_Parms*)Obj)->bpp__bFromSweep__pf = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bpp__bFromSweep__pf = { UE4CodeGen_Private::EPropertyClass::Bool, "bpp__bFromSweep__pf", RF_Public|RF_Transient, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(WarpWall_C__pf2174024837_eventbpf__BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature__pf_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bpp__bFromSweep__pf_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_bpp__OtherBodyIndex__pf = { UE4CodeGen_Private::EPropertyClass::Int, "bpp__OtherBodyIndex__pf", RF_Public|RF_Transient, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(WarpWall_C__pf2174024837_eventbpf__BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature__pf_Parms, bpp__OtherBodyIndex__pf), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpp__OtherComp__pf_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpp__OtherComp__pf = { UE4CodeGen_Private::EPropertyClass::Object, "bpp__OtherComp__pf", RF_Public|RF_Transient, 0x0010000000080080, 1, nullptr, STRUCT_OFFSET(WarpWall_C__pf2174024837_eventbpf__BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature__pf_Parms, bpp__OtherComp__pf), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(NewProp_bpp__OtherComp__pf_MetaData, ARRAY_COUNT(NewProp_bpp__OtherComp__pf_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpp__OtherActor__pf = { UE4CodeGen_Private::EPropertyClass::Object, "bpp__OtherActor__pf", RF_Public|RF_Transient, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(WarpWall_C__pf2174024837_eventbpf__BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature__pf_Parms, bpp__OtherActor__pf), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpp__OverlappedComponent__pf_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpp__OverlappedComponent__pf = { UE4CodeGen_Private::EPropertyClass::Object, "bpp__OverlappedComponent__pf", RF_Public|RF_Transient, 0x0010000000080080, 1, nullptr, STRUCT_OFFSET(WarpWall_C__pf2174024837_eventbpf__BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature__pf_Parms, bpp__OverlappedComponent__pf), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(NewProp_bpp__OverlappedComponent__pf_MetaData, ARRAY_COUNT(NewProp_bpp__OverlappedComponent__pf_MetaData)) };
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
				{ "ModuleRelativePath", "Public/WarpWall__pf2174024837.h" },
				{ "OverrideNativeName", "BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AWarpWall_C__pf2174024837, "BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature", RF_Public|RF_Transient, nullptr, (EFunctionFlags)0x00420400, sizeof(WarpWall_C__pf2174024837_eventbpf__BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature__pf_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AWarpWall_C__pf2174024837_bpf__UserConstructionScript__pf()
	{
		UObject* Outer = Z_Construct_UClass_AWarpWall_C__pf2174024837();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("UserConstructionScript") ));
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "BlueprintInternalUseOnly", "true" },
				{ "Category", "" },
				{ "CppFromBpEvent", "" },
				{ "DisplayName", "Construction Script" },
				{ "ModuleRelativePath", "Public/WarpWall__pf2174024837.h" },
				{ "OverrideNativeName", "UserConstructionScript" },
				{ "ToolTip", "Construction script, the place to spawn components and do other setup.@note Name used in CreateBlueprint function@param       Location        The location.@param       Rotation        The rotation." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AWarpWall_C__pf2174024837, "UserConstructionScript", RF_Public|RF_Transient, nullptr, (EFunctionFlags)0x04020C01, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AWarpWall_C__pf2174024837_NoRegister()
	{
		return AWarpWall_C__pf2174024837::StaticClass();
	}
	UClass* Z_Construct_UClass_AWarpWall_C__pf2174024837()
	{
		UPackage* OuterPackage = FindOrConstructDynamicTypePackage(TEXT("/Game/Levels/Assets/Colliders/WarpWall"));
		UClass* OuterClass = Cast<UClass>(StaticFindObjectFast(UClass::StaticClass(), OuterPackage, TEXT("WarpWall_C")));
		if (!OuterClass || !(OuterClass->ClassFlags & CLASS_Constructed))
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AActor,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_AWarpWall_C__pf2174024837_bpf__BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature__pf, "BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature" }, // 1020010046
				{ &Z_Construct_UFunction_AWarpWall_C__pf2174024837_bpf__UserConstructionScript__pf, "UserConstructionScript" }, // 1949990811
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "IncludePath", "WarpWall__pf2174024837.h" },
				{ "IsBlueprintBase", "true" },
				{ "ModuleRelativePath", "Public/WarpWall__pf2174024837.h" },
				{ "ObjectInitializerConstructorDeclared", "" },
				{ "OverrideNativeName", "WarpWall_C" },
				{ "ReplaceConverted", "/Game/Levels/Assets/Colliders/WarpWall.WarpWall_C" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_K2_SetActorLocation_SweepHitResult3__pf_MetaData[] = {
				{ "ModuleRelativePath", "Public/WarpWall__pf2174024837.h" },
				{ "OverrideNativeName", "CallFunc_K2_SetActorLocation_SweepHitResult3" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_b0l__CallFunc_K2_SetActorLocation_SweepHitResult3__pf = { UE4CodeGen_Private::EPropertyClass::Struct, "CallFunc_K2_SetActorLocation_SweepHitResult3", RF_Public|RF_Transient, 0x0010008000202000, 1, nullptr, STRUCT_OFFSET(AWarpWall_C__pf2174024837, b0l__CallFunc_K2_SetActorLocation_SweepHitResult3__pf), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(NewProp_b0l__CallFunc_K2_SetActorLocation_SweepHitResult3__pf_MetaData, ARRAY_COUNT(NewProp_b0l__CallFunc_K2_SetActorLocation_SweepHitResult3__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_SwitchEnum_CmpSuccess__pf_MetaData[] = {
				{ "ModuleRelativePath", "Public/WarpWall__pf2174024837.h" },
				{ "OverrideNativeName", "K2Node_SwitchEnum_CmpSuccess" },
			};
#endif
			auto NewProp_b0l__K2Node_SwitchEnum_CmpSuccess__pf_SetBit = [](void* Obj){ ((AWarpWall_C__pf2174024837*)Obj)->b0l__K2Node_SwitchEnum_CmpSuccess__pf = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b0l__K2Node_SwitchEnum_CmpSuccess__pf = { UE4CodeGen_Private::EPropertyClass::Bool, "K2Node_SwitchEnum_CmpSuccess", RF_Public|RF_Transient, 0x0010000000202000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AWarpWall_C__pf2174024837), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_b0l__K2Node_SwitchEnum_CmpSuccess__pf_SetBit)>::SetBit, METADATA_PARAMS(NewProp_b0l__K2Node_SwitchEnum_CmpSuccess__pf_MetaData, ARRAY_COUNT(NewProp_b0l__K2Node_SwitchEnum_CmpSuccess__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_K2_SetActorLocation_SweepHitResult2__pf_MetaData[] = {
				{ "ModuleRelativePath", "Public/WarpWall__pf2174024837.h" },
				{ "OverrideNativeName", "CallFunc_K2_SetActorLocation_SweepHitResult2" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_b0l__CallFunc_K2_SetActorLocation_SweepHitResult2__pf = { UE4CodeGen_Private::EPropertyClass::Struct, "CallFunc_K2_SetActorLocation_SweepHitResult2", RF_Public|RF_Transient, 0x0010008000202000, 1, nullptr, STRUCT_OFFSET(AWarpWall_C__pf2174024837, b0l__CallFunc_K2_SetActorLocation_SweepHitResult2__pf), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(NewProp_b0l__CallFunc_K2_SetActorLocation_SweepHitResult2__pf_MetaData, ARRAY_COUNT(NewProp_b0l__CallFunc_K2_SetActorLocation_SweepHitResult2__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_K2_SetActorLocation_SweepHitResult1__pf_MetaData[] = {
				{ "ModuleRelativePath", "Public/WarpWall__pf2174024837.h" },
				{ "OverrideNativeName", "CallFunc_K2_SetActorLocation_SweepHitResult1" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_b0l__CallFunc_K2_SetActorLocation_SweepHitResult1__pf = { UE4CodeGen_Private::EPropertyClass::Struct, "CallFunc_K2_SetActorLocation_SweepHitResult1", RF_Public|RF_Transient, 0x0010008000202000, 1, nullptr, STRUCT_OFFSET(AWarpWall_C__pf2174024837, b0l__CallFunc_K2_SetActorLocation_SweepHitResult1__pf), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(NewProp_b0l__CallFunc_K2_SetActorLocation_SweepHitResult1__pf_MetaData, ARRAY_COUNT(NewProp_b0l__CallFunc_K2_SetActorLocation_SweepHitResult1__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_BreakVector_Z3__pf_MetaData[] = {
				{ "ModuleRelativePath", "Public/WarpWall__pf2174024837.h" },
				{ "OverrideNativeName", "CallFunc_BreakVector_Z3" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_b0l__CallFunc_BreakVector_Z3__pf = { UE4CodeGen_Private::EPropertyClass::Float, "CallFunc_BreakVector_Z3", RF_Public|RF_Transient, 0x0010000000202000, 1, nullptr, STRUCT_OFFSET(AWarpWall_C__pf2174024837, b0l__CallFunc_BreakVector_Z3__pf), METADATA_PARAMS(NewProp_b0l__CallFunc_BreakVector_Z3__pf_MetaData, ARRAY_COUNT(NewProp_b0l__CallFunc_BreakVector_Z3__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_BreakVector_Y3__pf_MetaData[] = {
				{ "ModuleRelativePath", "Public/WarpWall__pf2174024837.h" },
				{ "OverrideNativeName", "CallFunc_BreakVector_Y3" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_b0l__CallFunc_BreakVector_Y3__pf = { UE4CodeGen_Private::EPropertyClass::Float, "CallFunc_BreakVector_Y3", RF_Public|RF_Transient, 0x0010000000202000, 1, nullptr, STRUCT_OFFSET(AWarpWall_C__pf2174024837, b0l__CallFunc_BreakVector_Y3__pf), METADATA_PARAMS(NewProp_b0l__CallFunc_BreakVector_Y3__pf_MetaData, ARRAY_COUNT(NewProp_b0l__CallFunc_BreakVector_Y3__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_BreakVector_X3__pf_MetaData[] = {
				{ "ModuleRelativePath", "Public/WarpWall__pf2174024837.h" },
				{ "OverrideNativeName", "CallFunc_BreakVector_X3" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_b0l__CallFunc_BreakVector_X3__pf = { UE4CodeGen_Private::EPropertyClass::Float, "CallFunc_BreakVector_X3", RF_Public|RF_Transient, 0x0010000000202000, 1, nullptr, STRUCT_OFFSET(AWarpWall_C__pf2174024837, b0l__CallFunc_BreakVector_X3__pf), METADATA_PARAMS(NewProp_b0l__CallFunc_BreakVector_X3__pf_MetaData, ARRAY_COUNT(NewProp_b0l__CallFunc_BreakVector_X3__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_K2_SetActorLocation_SweepHitResult__pf_MetaData[] = {
				{ "ModuleRelativePath", "Public/WarpWall__pf2174024837.h" },
				{ "OverrideNativeName", "CallFunc_K2_SetActorLocation_SweepHitResult" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_b0l__CallFunc_K2_SetActorLocation_SweepHitResult__pf = { UE4CodeGen_Private::EPropertyClass::Struct, "CallFunc_K2_SetActorLocation_SweepHitResult", RF_Public|RF_Transient, 0x0010008000202000, 1, nullptr, STRUCT_OFFSET(AWarpWall_C__pf2174024837, b0l__CallFunc_K2_SetActorLocation_SweepHitResult__pf), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(NewProp_b0l__CallFunc_K2_SetActorLocation_SweepHitResult__pf_MetaData, ARRAY_COUNT(NewProp_b0l__CallFunc_K2_SetActorLocation_SweepHitResult__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_BreakVector_Z2__pf_MetaData[] = {
				{ "ModuleRelativePath", "Public/WarpWall__pf2174024837.h" },
				{ "OverrideNativeName", "CallFunc_BreakVector_Z2" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_b0l__CallFunc_BreakVector_Z2__pf = { UE4CodeGen_Private::EPropertyClass::Float, "CallFunc_BreakVector_Z2", RF_Public|RF_Transient, 0x0010000000202000, 1, nullptr, STRUCT_OFFSET(AWarpWall_C__pf2174024837, b0l__CallFunc_BreakVector_Z2__pf), METADATA_PARAMS(NewProp_b0l__CallFunc_BreakVector_Z2__pf_MetaData, ARRAY_COUNT(NewProp_b0l__CallFunc_BreakVector_Z2__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_BreakVector_Y2__pf_MetaData[] = {
				{ "ModuleRelativePath", "Public/WarpWall__pf2174024837.h" },
				{ "OverrideNativeName", "CallFunc_BreakVector_Y2" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_b0l__CallFunc_BreakVector_Y2__pf = { UE4CodeGen_Private::EPropertyClass::Float, "CallFunc_BreakVector_Y2", RF_Public|RF_Transient, 0x0010000000202000, 1, nullptr, STRUCT_OFFSET(AWarpWall_C__pf2174024837, b0l__CallFunc_BreakVector_Y2__pf), METADATA_PARAMS(NewProp_b0l__CallFunc_BreakVector_Y2__pf_MetaData, ARRAY_COUNT(NewProp_b0l__CallFunc_BreakVector_Y2__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_BreakVector_X2__pf_MetaData[] = {
				{ "ModuleRelativePath", "Public/WarpWall__pf2174024837.h" },
				{ "OverrideNativeName", "CallFunc_BreakVector_X2" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_b0l__CallFunc_BreakVector_X2__pf = { UE4CodeGen_Private::EPropertyClass::Float, "CallFunc_BreakVector_X2", RF_Public|RF_Transient, 0x0010000000202000, 1, nullptr, STRUCT_OFFSET(AWarpWall_C__pf2174024837, b0l__CallFunc_BreakVector_X2__pf), METADATA_PARAMS(NewProp_b0l__CallFunc_BreakVector_X2__pf_MetaData, ARRAY_COUNT(NewProp_b0l__CallFunc_BreakVector_X2__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_BreakVector_Z1__pf_MetaData[] = {
				{ "ModuleRelativePath", "Public/WarpWall__pf2174024837.h" },
				{ "OverrideNativeName", "CallFunc_BreakVector_Z1" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_b0l__CallFunc_BreakVector_Z1__pf = { UE4CodeGen_Private::EPropertyClass::Float, "CallFunc_BreakVector_Z1", RF_Public|RF_Transient, 0x0010000000202000, 1, nullptr, STRUCT_OFFSET(AWarpWall_C__pf2174024837, b0l__CallFunc_BreakVector_Z1__pf), METADATA_PARAMS(NewProp_b0l__CallFunc_BreakVector_Z1__pf_MetaData, ARRAY_COUNT(NewProp_b0l__CallFunc_BreakVector_Z1__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_BreakVector_Y1__pf_MetaData[] = {
				{ "ModuleRelativePath", "Public/WarpWall__pf2174024837.h" },
				{ "OverrideNativeName", "CallFunc_BreakVector_Y1" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_b0l__CallFunc_BreakVector_Y1__pf = { UE4CodeGen_Private::EPropertyClass::Float, "CallFunc_BreakVector_Y1", RF_Public|RF_Transient, 0x0010000000202000, 1, nullptr, STRUCT_OFFSET(AWarpWall_C__pf2174024837, b0l__CallFunc_BreakVector_Y1__pf), METADATA_PARAMS(NewProp_b0l__CallFunc_BreakVector_Y1__pf_MetaData, ARRAY_COUNT(NewProp_b0l__CallFunc_BreakVector_Y1__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_BreakVector_X1__pf_MetaData[] = {
				{ "ModuleRelativePath", "Public/WarpWall__pf2174024837.h" },
				{ "OverrideNativeName", "CallFunc_BreakVector_X1" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_b0l__CallFunc_BreakVector_X1__pf = { UE4CodeGen_Private::EPropertyClass::Float, "CallFunc_BreakVector_X1", RF_Public|RF_Transient, 0x0010000000202000, 1, nullptr, STRUCT_OFFSET(AWarpWall_C__pf2174024837, b0l__CallFunc_BreakVector_X1__pf), METADATA_PARAMS(NewProp_b0l__CallFunc_BreakVector_X1__pf_MetaData, ARRAY_COUNT(NewProp_b0l__CallFunc_BreakVector_X1__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_BreakVector_Z__pf_MetaData[] = {
				{ "ModuleRelativePath", "Public/WarpWall__pf2174024837.h" },
				{ "OverrideNativeName", "CallFunc_BreakVector_Z" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_b0l__CallFunc_BreakVector_Z__pf = { UE4CodeGen_Private::EPropertyClass::Float, "CallFunc_BreakVector_Z", RF_Public|RF_Transient, 0x0010000000202000, 1, nullptr, STRUCT_OFFSET(AWarpWall_C__pf2174024837, b0l__CallFunc_BreakVector_Z__pf), METADATA_PARAMS(NewProp_b0l__CallFunc_BreakVector_Z__pf_MetaData, ARRAY_COUNT(NewProp_b0l__CallFunc_BreakVector_Z__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_BreakVector_Y__pf_MetaData[] = {
				{ "ModuleRelativePath", "Public/WarpWall__pf2174024837.h" },
				{ "OverrideNativeName", "CallFunc_BreakVector_Y" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_b0l__CallFunc_BreakVector_Y__pf = { UE4CodeGen_Private::EPropertyClass::Float, "CallFunc_BreakVector_Y", RF_Public|RF_Transient, 0x0010000000202000, 1, nullptr, STRUCT_OFFSET(AWarpWall_C__pf2174024837, b0l__CallFunc_BreakVector_Y__pf), METADATA_PARAMS(NewProp_b0l__CallFunc_BreakVector_Y__pf_MetaData, ARRAY_COUNT(NewProp_b0l__CallFunc_BreakVector_Y__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_BreakVector_X__pf_MetaData[] = {
				{ "ModuleRelativePath", "Public/WarpWall__pf2174024837.h" },
				{ "OverrideNativeName", "CallFunc_BreakVector_X" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_b0l__CallFunc_BreakVector_X__pf = { UE4CodeGen_Private::EPropertyClass::Float, "CallFunc_BreakVector_X", RF_Public|RF_Transient, 0x0010000000202000, 1, nullptr, STRUCT_OFFSET(AWarpWall_C__pf2174024837, b0l__CallFunc_BreakVector_X__pf), METADATA_PARAMS(NewProp_b0l__CallFunc_BreakVector_X__pf_MetaData, ARRAY_COUNT(NewProp_b0l__CallFunc_BreakVector_X__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_ComponentBoundEvent_SweepResult__pf_MetaData[] = {
				{ "ModuleRelativePath", "Public/WarpWall__pf2174024837.h" },
				{ "OverrideNativeName", "K2Node_ComponentBoundEvent_SweepResult" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_b0l__K2Node_ComponentBoundEvent_SweepResult__pf = { UE4CodeGen_Private::EPropertyClass::Struct, "K2Node_ComponentBoundEvent_SweepResult", RF_Public|RF_Transient, 0x0010008000202000, 1, nullptr, STRUCT_OFFSET(AWarpWall_C__pf2174024837, b0l__K2Node_ComponentBoundEvent_SweepResult__pf), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(NewProp_b0l__K2Node_ComponentBoundEvent_SweepResult__pf_MetaData, ARRAY_COUNT(NewProp_b0l__K2Node_ComponentBoundEvent_SweepResult__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_ComponentBoundEvent_bFromSweep__pf_MetaData[] = {
				{ "ModuleRelativePath", "Public/WarpWall__pf2174024837.h" },
				{ "OverrideNativeName", "K2Node_ComponentBoundEvent_bFromSweep" },
			};
#endif
			auto NewProp_b0l__K2Node_ComponentBoundEvent_bFromSweep__pf_SetBit = [](void* Obj){ ((AWarpWall_C__pf2174024837*)Obj)->b0l__K2Node_ComponentBoundEvent_bFromSweep__pf = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b0l__K2Node_ComponentBoundEvent_bFromSweep__pf = { UE4CodeGen_Private::EPropertyClass::Bool, "K2Node_ComponentBoundEvent_bFromSweep", RF_Public|RF_Transient, 0x0010000000202000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AWarpWall_C__pf2174024837), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_b0l__K2Node_ComponentBoundEvent_bFromSweep__pf_SetBit)>::SetBit, METADATA_PARAMS(NewProp_b0l__K2Node_ComponentBoundEvent_bFromSweep__pf_MetaData, ARRAY_COUNT(NewProp_b0l__K2Node_ComponentBoundEvent_bFromSweep__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_ComponentBoundEvent_OtherBodyIndex__pf_MetaData[] = {
				{ "ModuleRelativePath", "Public/WarpWall__pf2174024837.h" },
				{ "OverrideNativeName", "K2Node_ComponentBoundEvent_OtherBodyIndex" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_b0l__K2Node_ComponentBoundEvent_OtherBodyIndex__pf = { UE4CodeGen_Private::EPropertyClass::Int, "K2Node_ComponentBoundEvent_OtherBodyIndex", RF_Public|RF_Transient, 0x0010000000202000, 1, nullptr, STRUCT_OFFSET(AWarpWall_C__pf2174024837, b0l__K2Node_ComponentBoundEvent_OtherBodyIndex__pf), METADATA_PARAMS(NewProp_b0l__K2Node_ComponentBoundEvent_OtherBodyIndex__pf_MetaData, ARRAY_COUNT(NewProp_b0l__K2Node_ComponentBoundEvent_OtherBodyIndex__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_ComponentBoundEvent_OtherComp__pf_MetaData[] = {
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/WarpWall__pf2174024837.h" },
				{ "OverrideNativeName", "K2Node_ComponentBoundEvent_OtherComp" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__K2Node_ComponentBoundEvent_OtherComp__pf = { UE4CodeGen_Private::EPropertyClass::Object, "K2Node_ComponentBoundEvent_OtherComp", RF_Public|RF_Transient, 0x0010000000282008, 1, nullptr, STRUCT_OFFSET(AWarpWall_C__pf2174024837, b0l__K2Node_ComponentBoundEvent_OtherComp__pf), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(NewProp_b0l__K2Node_ComponentBoundEvent_OtherComp__pf_MetaData, ARRAY_COUNT(NewProp_b0l__K2Node_ComponentBoundEvent_OtherComp__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_ComponentBoundEvent_OtherActor__pf_MetaData[] = {
				{ "ModuleRelativePath", "Public/WarpWall__pf2174024837.h" },
				{ "OverrideNativeName", "K2Node_ComponentBoundEvent_OtherActor" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__K2Node_ComponentBoundEvent_OtherActor__pf = { UE4CodeGen_Private::EPropertyClass::Object, "K2Node_ComponentBoundEvent_OtherActor", RF_Public|RF_Transient, 0x0010000000202000, 1, nullptr, STRUCT_OFFSET(AWarpWall_C__pf2174024837, b0l__K2Node_ComponentBoundEvent_OtherActor__pf), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(NewProp_b0l__K2Node_ComponentBoundEvent_OtherActor__pf_MetaData, ARRAY_COUNT(NewProp_b0l__K2Node_ComponentBoundEvent_OtherActor__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_ComponentBoundEvent_OverlappedComponent__pf_MetaData[] = {
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/WarpWall__pf2174024837.h" },
				{ "OverrideNativeName", "K2Node_ComponentBoundEvent_OverlappedComponent" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__K2Node_ComponentBoundEvent_OverlappedComponent__pf = { UE4CodeGen_Private::EPropertyClass::Object, "K2Node_ComponentBoundEvent_OverlappedComponent", RF_Public|RF_Transient, 0x0010000000282008, 1, nullptr, STRUCT_OFFSET(AWarpWall_C__pf2174024837, b0l__K2Node_ComponentBoundEvent_OverlappedComponent__pf), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(NewProp_b0l__K2Node_ComponentBoundEvent_OverlappedComponent__pf_MetaData, ARRAY_COUNT(NewProp_b0l__K2Node_ComponentBoundEvent_OverlappedComponent__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__WarpingxOffset__pfT_MetaData[] = {
				{ "Category", "Default" },
				{ "DisplayName", "Warping Offset" },
				{ "ModuleRelativePath", "Public/WarpWall__pf2174024837.h" },
				{ "OverrideNativeName", "Warping Offset" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpv__WarpingxOffset__pfT = { UE4CodeGen_Private::EPropertyClass::Float, "Warping Offset", RF_Public|RF_Transient, 0x0010000000010005, 1, nullptr, STRUCT_OFFSET(AWarpWall_C__pf2174024837, bpv__WarpingxOffset__pfT), METADATA_PARAMS(NewProp_bpv__WarpingxOffset__pfT_MetaData, ARRAY_COUNT(NewProp_bpv__WarpingxOffset__pfT_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Side__pf_MetaData[] = {
				{ "Category", "Default" },
				{ "DisplayName", "Side" },
				{ "ModuleRelativePath", "Public/WarpWall__pf2174024837.h" },
				{ "OverrideNativeName", "Side" },
			};
#endif
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_bpv__Side__pf = { UE4CodeGen_Private::EPropertyClass::Enum, "Side", RF_Public|RF_Transient, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AWarpWall_C__pf2174024837, bpv__Side__pf), Z_Construct_UEnum_NativizedAssets_E__BorderSide__pf, METADATA_PARAMS(NewProp_bpv__Side__pf_MetaData, ARRAY_COUNT(NewProp_bpv__Side__pf_MetaData)) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_bpv__Side__pf_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Box__pf_MetaData[] = {
				{ "Category", "Default" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/WarpWall__pf2174024837.h" },
				{ "OverrideNativeName", "Box" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__Box__pf = { UE4CodeGen_Private::EPropertyClass::Object, "Box", RF_Public|RF_Transient, 0x001000040008000c, 1, nullptr, STRUCT_OFFSET(AWarpWall_C__pf2174024837, bpv__Box__pf), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(NewProp_bpv__Box__pf_MetaData, ARRAY_COUNT(NewProp_bpv__Box__pf_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b0l__CallFunc_K2_SetActorLocation_SweepHitResult3__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b0l__K2Node_SwitchEnum_CmpSuccess__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b0l__CallFunc_K2_SetActorLocation_SweepHitResult2__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b0l__CallFunc_K2_SetActorLocation_SweepHitResult1__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b0l__CallFunc_BreakVector_Z3__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b0l__CallFunc_BreakVector_Y3__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b0l__CallFunc_BreakVector_X3__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b0l__CallFunc_K2_SetActorLocation_SweepHitResult__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b0l__CallFunc_BreakVector_Z2__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b0l__CallFunc_BreakVector_Y2__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b0l__CallFunc_BreakVector_X2__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b0l__CallFunc_BreakVector_Z1__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b0l__CallFunc_BreakVector_Y1__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b0l__CallFunc_BreakVector_X1__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b0l__CallFunc_BreakVector_Z__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b0l__CallFunc_BreakVector_Y__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b0l__CallFunc_BreakVector_X__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b0l__K2Node_ComponentBoundEvent_SweepResult__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b0l__K2Node_ComponentBoundEvent_bFromSweep__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b0l__K2Node_ComponentBoundEvent_OtherBodyIndex__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b0l__K2Node_ComponentBoundEvent_OtherComp__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b0l__K2Node_ComponentBoundEvent_OtherActor__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b0l__K2Node_ComponentBoundEvent_OverlappedComponent__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bpv__WarpingxOffset__pfT,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bpv__Side__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bpv__Side__pf_Underlying,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bpv__Box__pf,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AWarpWall_C__pf2174024837>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AWarpWall_C__pf2174024837::StaticClass,
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
	IMPLEMENT_DYNAMIC_CLASS(AWarpWall_C__pf2174024837, TEXT("WarpWall_C"), 2537930123);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AWarpWall_C__pf2174024837(Z_Construct_UClass_AWarpWall_C__pf2174024837, &AWarpWall_C__pf2174024837::StaticClass, TEXT("/Game/Levels/Assets/Colliders/WarpWall"), TEXT("WarpWall_C"), true, TEXT("/Game/Levels/Assets/Colliders/WarpWall"), TEXT("/Game/Levels/Assets/Colliders/WarpWall.WarpWall_C"), nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AWarpWall_C__pf2174024837);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
