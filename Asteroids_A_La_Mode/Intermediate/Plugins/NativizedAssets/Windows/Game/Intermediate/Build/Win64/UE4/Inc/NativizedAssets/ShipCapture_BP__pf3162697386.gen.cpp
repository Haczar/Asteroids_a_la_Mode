// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Private/NativizedAssets.h"
#include "Public/ShipCapture_BP__pf3162697386.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeShipCapture_BP__pf3162697386() {}
// Cross Module References
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_AShipCapture_BP_C__pf3162697386_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_AShipCapture_BP_C__pf3162697386();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	NATIVIZEDASSETS_API UFunction* Z_Construct_UFunction_AShipCapture_BP_C__pf3162697386_bpf__ReceiveTick__pf();
	NATIVIZEDASSETS_API UFunction* Z_Construct_UFunction_AShipCapture_BP_C__pf3162697386_bpf__UserConstructionScript__pf();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneCaptureComponent2D_NoRegister();
// End Cross Module References
	static FName NAME_AShipCapture_BP_C__pf3162697386_bpf__ReceiveTick__pf = FName(TEXT("ReceiveTick"));
	void AShipCapture_BP_C__pf3162697386::eventbpf__ReceiveTick__pf(float bpp__DeltaSeconds__pf)
	{
		ShipCapture_BP_C__pf3162697386_eventbpf__ReceiveTick__pf_Parms Parms;
		Parms.bpp__DeltaSeconds__pf=bpp__DeltaSeconds__pf;
		ProcessEvent(FindFunctionChecked(NAME_AShipCapture_BP_C__pf3162697386_bpf__ReceiveTick__pf),&Parms);
	}
	static FName NAME_AShipCapture_BP_C__pf3162697386_bpf__UserConstructionScript__pf = FName(TEXT("UserConstructionScript"));
	void AShipCapture_BP_C__pf3162697386::eventbpf__UserConstructionScript__pf()
	{
		ProcessEvent(FindFunctionChecked(NAME_AShipCapture_BP_C__pf3162697386_bpf__UserConstructionScript__pf),NULL);
	}
	void AShipCapture_BP_C__pf3162697386::StaticRegisterNativesAShipCapture_BP_C__pf3162697386()
	{
		UClass* Class = AShipCapture_BP_C__pf3162697386::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ReceiveTick", &AShipCapture_BP_C__pf3162697386::execbpf__ReceiveTick__pf },
			{ "UserConstructionScript", &AShipCapture_BP_C__pf3162697386::execbpf__UserConstructionScript__pf },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_AShipCapture_BP_C__pf3162697386_bpf__ReceiveTick__pf()
	{
		UObject* Outer = Z_Construct_UClass_AShipCapture_BP_C__pf3162697386();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("ReceiveTick") ));
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpp__DeltaSeconds__pf = { UE4CodeGen_Private::EPropertyClass::Float, "bpp__DeltaSeconds__pf", RF_Public|RF_Transient, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ShipCapture_BP_C__pf3162697386_eventbpf__ReceiveTick__pf_Parms, bpp__DeltaSeconds__pf), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bpp__DeltaSeconds__pf,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "CppFromBpEvent", "" },
				{ "DisplayName", "Tick" },
				{ "ModuleRelativePath", "Public/ShipCapture_BP__pf3162697386.h" },
				{ "OverrideNativeName", "ReceiveTick" },
				{ "ToolTip", "Event called every frame" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AShipCapture_BP_C__pf3162697386, "ReceiveTick", RF_Public|RF_Transient, nullptr, (EFunctionFlags)0x00020C01, sizeof(ShipCapture_BP_C__pf3162697386_eventbpf__ReceiveTick__pf_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AShipCapture_BP_C__pf3162697386_bpf__UserConstructionScript__pf()
	{
		UObject* Outer = Z_Construct_UClass_AShipCapture_BP_C__pf3162697386();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("UserConstructionScript") ));
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "BlueprintInternalUseOnly", "true" },
				{ "Category", "" },
				{ "CppFromBpEvent", "" },
				{ "DisplayName", "Construction Script" },
				{ "ModuleRelativePath", "Public/ShipCapture_BP__pf3162697386.h" },
				{ "OverrideNativeName", "UserConstructionScript" },
				{ "ToolTip", "Construction script, the place to spawn components and do other setup.@note Name used in CreateBlueprint function@param       Location        The location.@param       Rotation        The rotation." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AShipCapture_BP_C__pf3162697386, "UserConstructionScript", RF_Public|RF_Transient, nullptr, (EFunctionFlags)0x04020C01, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AShipCapture_BP_C__pf3162697386_NoRegister()
	{
		return AShipCapture_BP_C__pf3162697386::StaticClass();
	}
	UClass* Z_Construct_UClass_AShipCapture_BP_C__pf3162697386()
	{
		UPackage* OuterPackage = FindOrConstructDynamicTypePackage(TEXT("/Game/UserInterface/Assets/ShipCapture_BP"));
		UClass* OuterClass = Cast<UClass>(StaticFindObjectFast(UClass::StaticClass(), OuterPackage, TEXT("ShipCapture_BP_C")));
		if (!OuterClass || !(OuterClass->ClassFlags & CLASS_Constructed))
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AActor,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_AShipCapture_BP_C__pf3162697386_bpf__ReceiveTick__pf, "ReceiveTick" }, // 1113670257
				{ &Z_Construct_UFunction_AShipCapture_BP_C__pf3162697386_bpf__UserConstructionScript__pf, "UserConstructionScript" }, // 1242905455
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "IncludePath", "ShipCapture_BP__pf3162697386.h" },
				{ "IsBlueprintBase", "true" },
				{ "ModuleRelativePath", "Public/ShipCapture_BP__pf3162697386.h" },
				{ "ObjectInitializerConstructorDeclared", "" },
				{ "OverrideNativeName", "ShipCapture_BP_C" },
				{ "ReplaceConverted", "/Game/UserInterface/Assets/ShipCapture_BP.ShipCapture_BP_C" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_Event_DeltaSeconds__pf_MetaData[] = {
				{ "ModuleRelativePath", "Public/ShipCapture_BP__pf3162697386.h" },
				{ "OverrideNativeName", "K2Node_Event_DeltaSeconds" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_b0l__K2Node_Event_DeltaSeconds__pf = { UE4CodeGen_Private::EPropertyClass::Float, "K2Node_Event_DeltaSeconds", RF_Public|RF_Transient, 0x0010000000202000, 1, nullptr, STRUCT_OFFSET(AShipCapture_BP_C__pf3162697386, b0l__K2Node_Event_DeltaSeconds__pf), METADATA_PARAMS(NewProp_b0l__K2Node_Event_DeltaSeconds__pf_MetaData, ARRAY_COUNT(NewProp_b0l__K2Node_Event_DeltaSeconds__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_K2_AddActorWorldRotation_SweepHitResult__pf_MetaData[] = {
				{ "ModuleRelativePath", "Public/ShipCapture_BP__pf3162697386.h" },
				{ "OverrideNativeName", "CallFunc_K2_AddActorWorldRotation_SweepHitResult" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_b0l__CallFunc_K2_AddActorWorldRotation_SweepHitResult__pf = { UE4CodeGen_Private::EPropertyClass::Struct, "CallFunc_K2_AddActorWorldRotation_SweepHitResult", RF_Public|RF_Transient, 0x0010008000202000, 1, nullptr, STRUCT_OFFSET(AShipCapture_BP_C__pf3162697386, b0l__CallFunc_K2_AddActorWorldRotation_SweepHitResult__pf), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(NewProp_b0l__CallFunc_K2_AddActorWorldRotation_SweepHitResult__pf_MetaData, ARRAY_COUNT(NewProp_b0l__CallFunc_K2_AddActorWorldRotation_SweepHitResult__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__DefaultSceneRoot__pf_MetaData[] = {
				{ "Category", "Default" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/ShipCapture_BP__pf3162697386.h" },
				{ "OverrideNativeName", "DefaultSceneRoot" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__DefaultSceneRoot__pf = { UE4CodeGen_Private::EPropertyClass::Object, "DefaultSceneRoot", RF_Public|RF_Transient, 0x001000040008000c, 1, nullptr, STRUCT_OFFSET(AShipCapture_BP_C__pf3162697386, bpv__DefaultSceneRoot__pf), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(NewProp_bpv__DefaultSceneRoot__pf_MetaData, ARRAY_COUNT(NewProp_bpv__DefaultSceneRoot__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__StaticMesh__pf_MetaData[] = {
				{ "Category", "Default" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/ShipCapture_BP__pf3162697386.h" },
				{ "OverrideNativeName", "StaticMesh" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__StaticMesh__pf = { UE4CodeGen_Private::EPropertyClass::Object, "StaticMesh", RF_Public|RF_Transient, 0x001000040008000c, 1, nullptr, STRUCT_OFFSET(AShipCapture_BP_C__pf3162697386, bpv__StaticMesh__pf), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(NewProp_bpv__StaticMesh__pf_MetaData, ARRAY_COUNT(NewProp_bpv__StaticMesh__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__StaticMesh1__pf_MetaData[] = {
				{ "Category", "Default" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/ShipCapture_BP__pf3162697386.h" },
				{ "OverrideNativeName", "StaticMesh1" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__StaticMesh1__pf = { UE4CodeGen_Private::EPropertyClass::Object, "StaticMesh1", RF_Public|RF_Transient, 0x001000040008000c, 1, nullptr, STRUCT_OFFSET(AShipCapture_BP_C__pf3162697386, bpv__StaticMesh1__pf), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(NewProp_bpv__StaticMesh1__pf_MetaData, ARRAY_COUNT(NewProp_bpv__StaticMesh1__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__StaticMesh2__pf_MetaData[] = {
				{ "Category", "Default" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/ShipCapture_BP__pf3162697386.h" },
				{ "OverrideNativeName", "StaticMesh2" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__StaticMesh2__pf = { UE4CodeGen_Private::EPropertyClass::Object, "StaticMesh2", RF_Public|RF_Transient, 0x001000040008000c, 1, nullptr, STRUCT_OFFSET(AShipCapture_BP_C__pf3162697386, bpv__StaticMesh2__pf), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(NewProp_bpv__StaticMesh2__pf_MetaData, ARRAY_COUNT(NewProp_bpv__StaticMesh2__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__StaticMesh3__pf_MetaData[] = {
				{ "Category", "Default" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/ShipCapture_BP__pf3162697386.h" },
				{ "OverrideNativeName", "StaticMesh3" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__StaticMesh3__pf = { UE4CodeGen_Private::EPropertyClass::Object, "StaticMesh3", RF_Public|RF_Transient, 0x001000040008000c, 1, nullptr, STRUCT_OFFSET(AShipCapture_BP_C__pf3162697386, bpv__StaticMesh3__pf), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(NewProp_bpv__StaticMesh3__pf_MetaData, ARRAY_COUNT(NewProp_bpv__StaticMesh3__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__StaticMesh4__pf_MetaData[] = {
				{ "Category", "Default" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/ShipCapture_BP__pf3162697386.h" },
				{ "OverrideNativeName", "StaticMesh4" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__StaticMesh4__pf = { UE4CodeGen_Private::EPropertyClass::Object, "StaticMesh4", RF_Public|RF_Transient, 0x001000040008000c, 1, nullptr, STRUCT_OFFSET(AShipCapture_BP_C__pf3162697386, bpv__StaticMesh4__pf), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(NewProp_bpv__StaticMesh4__pf_MetaData, ARRAY_COUNT(NewProp_bpv__StaticMesh4__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__ShipMesh__pf_MetaData[] = {
				{ "Category", "Default" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/ShipCapture_BP__pf3162697386.h" },
				{ "OverrideNativeName", "ShipMesh" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__ShipMesh__pf = { UE4CodeGen_Private::EPropertyClass::Object, "ShipMesh", RF_Public|RF_Transient, 0x001000040008000c, 1, nullptr, STRUCT_OFFSET(AShipCapture_BP_C__pf3162697386, bpv__ShipMesh__pf), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(NewProp_bpv__ShipMesh__pf_MetaData, ARRAY_COUNT(NewProp_bpv__ShipMesh__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Camera__pf_MetaData[] = {
				{ "Category", "Default" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/ShipCapture_BP__pf3162697386.h" },
				{ "OverrideNativeName", "Camera" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__Camera__pf = { UE4CodeGen_Private::EPropertyClass::Object, "Camera", RF_Public|RF_Transient, 0x001000040008000c, 1, nullptr, STRUCT_OFFSET(AShipCapture_BP_C__pf3162697386, bpv__Camera__pf), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(NewProp_bpv__Camera__pf_MetaData, ARRAY_COUNT(NewProp_bpv__Camera__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__SceneCaptureComponent2D__pf_MetaData[] = {
				{ "Category", "Default" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/ShipCapture_BP__pf3162697386.h" },
				{ "OverrideNativeName", "SceneCaptureComponent2D" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__SceneCaptureComponent2D__pf = { UE4CodeGen_Private::EPropertyClass::Object, "SceneCaptureComponent2D", RF_Public|RF_Transient, 0x001000040008000c, 1, nullptr, STRUCT_OFFSET(AShipCapture_BP_C__pf3162697386, bpv__SceneCaptureComponent2D__pf), Z_Construct_UClass_USceneCaptureComponent2D_NoRegister, METADATA_PARAMS(NewProp_bpv__SceneCaptureComponent2D__pf_MetaData, ARRAY_COUNT(NewProp_bpv__SceneCaptureComponent2D__pf_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b0l__K2Node_Event_DeltaSeconds__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b0l__CallFunc_K2_AddActorWorldRotation_SweepHitResult__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bpv__DefaultSceneRoot__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bpv__StaticMesh__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bpv__StaticMesh1__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bpv__StaticMesh2__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bpv__StaticMesh3__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bpv__StaticMesh4__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bpv__ShipMesh__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bpv__Camera__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bpv__SceneCaptureComponent2D__pf,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AShipCapture_BP_C__pf3162697386>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AShipCapture_BP_C__pf3162697386::StaticClass,
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
	IMPLEMENT_DYNAMIC_CLASS(AShipCapture_BP_C__pf3162697386, TEXT("ShipCapture_BP_C"), 3983633031);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AShipCapture_BP_C__pf3162697386(Z_Construct_UClass_AShipCapture_BP_C__pf3162697386, &AShipCapture_BP_C__pf3162697386::StaticClass, TEXT("/Game/UserInterface/Assets/ShipCapture_BP"), TEXT("ShipCapture_BP_C"), true, TEXT("/Game/UserInterface/Assets/ShipCapture_BP"), TEXT("/Game/UserInterface/Assets/ShipCapture_BP.ShipCapture_BP_C"), nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AShipCapture_BP_C__pf3162697386);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
