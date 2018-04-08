// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Private/NativizedAssets.h"
#include "Public/Alien__pf655108736.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAlien__pf655108736() {}
// Cross Module References
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_AAlien_C__pf655108736_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_AAlien_C__pf655108736();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	NATIVIZEDASSETS_API UFunction* Z_Construct_UFunction_AAlien_C__pf655108736_bpf__ReceiveTick__pf();
	NATIVIZEDASSETS_API UFunction* Z_Construct_UFunction_AAlien_C__pf655108736_bpf__UserConstructionScript__pf();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	static FName NAME_AAlien_C__pf655108736_bpf__ReceiveTick__pf = FName(TEXT("ReceiveTick"));
	void AAlien_C__pf655108736::eventbpf__ReceiveTick__pf(float bpp__DeltaSeconds__pf)
	{
		Alien_C__pf655108736_eventbpf__ReceiveTick__pf_Parms Parms;
		Parms.bpp__DeltaSeconds__pf=bpp__DeltaSeconds__pf;
		ProcessEvent(FindFunctionChecked(NAME_AAlien_C__pf655108736_bpf__ReceiveTick__pf),&Parms);
	}
	static FName NAME_AAlien_C__pf655108736_bpf__UserConstructionScript__pf = FName(TEXT("UserConstructionScript"));
	void AAlien_C__pf655108736::eventbpf__UserConstructionScript__pf()
	{
		ProcessEvent(FindFunctionChecked(NAME_AAlien_C__pf655108736_bpf__UserConstructionScript__pf),NULL);
	}
	void AAlien_C__pf655108736::StaticRegisterNativesAAlien_C__pf655108736()
	{
		UClass* Class = AAlien_C__pf655108736::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ReceiveTick", &AAlien_C__pf655108736::execbpf__ReceiveTick__pf },
			{ "UserConstructionScript", &AAlien_C__pf655108736::execbpf__UserConstructionScript__pf },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_AAlien_C__pf655108736_bpf__ReceiveTick__pf()
	{
		UObject* Outer = Z_Construct_UClass_AAlien_C__pf655108736();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("ReceiveTick") ));
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpp__DeltaSeconds__pf = { UE4CodeGen_Private::EPropertyClass::Float, "bpp__DeltaSeconds__pf", RF_Public|RF_Transient, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Alien_C__pf655108736_eventbpf__ReceiveTick__pf_Parms, bpp__DeltaSeconds__pf), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bpp__DeltaSeconds__pf,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "CppFromBpEvent", "" },
				{ "DisplayName", "Tick" },
				{ "ModuleRelativePath", "Public/Alien__pf655108736.h" },
				{ "OverrideNativeName", "ReceiveTick" },
				{ "ToolTip", "Event called every frame" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AAlien_C__pf655108736, "ReceiveTick", RF_Public|RF_Transient, nullptr, (EFunctionFlags)0x00020C01, sizeof(Alien_C__pf655108736_eventbpf__ReceiveTick__pf_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AAlien_C__pf655108736_bpf__UserConstructionScript__pf()
	{
		UObject* Outer = Z_Construct_UClass_AAlien_C__pf655108736();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("UserConstructionScript") ));
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "BlueprintInternalUseOnly", "true" },
				{ "Category", "" },
				{ "CppFromBpEvent", "" },
				{ "DisplayName", "Construction Script" },
				{ "ModuleRelativePath", "Public/Alien__pf655108736.h" },
				{ "OverrideNativeName", "UserConstructionScript" },
				{ "ToolTip", "Construction script, the place to spawn components and do other setup.@note Name used in CreateBlueprint function@param       Location        The location.@param       Rotation        The rotation." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AAlien_C__pf655108736, "UserConstructionScript", RF_Public|RF_Transient, nullptr, (EFunctionFlags)0x04020C01, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AAlien_C__pf655108736_NoRegister()
	{
		return AAlien_C__pf655108736::StaticClass();
	}
	UClass* Z_Construct_UClass_AAlien_C__pf655108736()
	{
		UPackage* OuterPackage = FindOrConstructDynamicTypePackage(TEXT("/Game/Enemy/Alien"));
		UClass* OuterClass = Cast<UClass>(StaticFindObjectFast(UClass::StaticClass(), OuterPackage, TEXT("Alien_C")));
		if (!OuterClass || !(OuterClass->ClassFlags & CLASS_Constructed))
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AActor,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_AAlien_C__pf655108736_bpf__ReceiveTick__pf, "ReceiveTick" }, // 3952252136
				{ &Z_Construct_UFunction_AAlien_C__pf655108736_bpf__UserConstructionScript__pf, "UserConstructionScript" }, // 340175406
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "IncludePath", "Alien__pf655108736.h" },
				{ "IsBlueprintBase", "true" },
				{ "ModuleRelativePath", "Public/Alien__pf655108736.h" },
				{ "ObjectInitializerConstructorDeclared", "" },
				{ "OverrideNativeName", "Alien_C" },
				{ "ReplaceConverted", "/Game/Enemy/Alien.Alien_C" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_K2_AddWorldRotation_SweepHitResult__pf_MetaData[] = {
				{ "ModuleRelativePath", "Public/Alien__pf655108736.h" },
				{ "OverrideNativeName", "CallFunc_K2_AddWorldRotation_SweepHitResult" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_b0l__CallFunc_K2_AddWorldRotation_SweepHitResult__pf = { UE4CodeGen_Private::EPropertyClass::Struct, "CallFunc_K2_AddWorldRotation_SweepHitResult", RF_Public|RF_Transient, 0x0010008000202000, 1, nullptr, STRUCT_OFFSET(AAlien_C__pf655108736, b0l__CallFunc_K2_AddWorldRotation_SweepHitResult__pf), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(NewProp_b0l__CallFunc_K2_AddWorldRotation_SweepHitResult__pf_MetaData, ARRAY_COUNT(NewProp_b0l__CallFunc_K2_AddWorldRotation_SweepHitResult__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_K2_AddActorWorldOffset_SweepHitResult__pf_MetaData[] = {
				{ "ModuleRelativePath", "Public/Alien__pf655108736.h" },
				{ "OverrideNativeName", "CallFunc_K2_AddActorWorldOffset_SweepHitResult" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_b0l__CallFunc_K2_AddActorWorldOffset_SweepHitResult__pf = { UE4CodeGen_Private::EPropertyClass::Struct, "CallFunc_K2_AddActorWorldOffset_SweepHitResult", RF_Public|RF_Transient, 0x0010008000202000, 1, nullptr, STRUCT_OFFSET(AAlien_C__pf655108736, b0l__CallFunc_K2_AddActorWorldOffset_SweepHitResult__pf), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(NewProp_b0l__CallFunc_K2_AddActorWorldOffset_SweepHitResult__pf_MetaData, ARRAY_COUNT(NewProp_b0l__CallFunc_K2_AddActorWorldOffset_SweepHitResult__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_Event_DeltaSeconds__pf_MetaData[] = {
				{ "ModuleRelativePath", "Public/Alien__pf655108736.h" },
				{ "OverrideNativeName", "K2Node_Event_DeltaSeconds" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_b0l__K2Node_Event_DeltaSeconds__pf = { UE4CodeGen_Private::EPropertyClass::Float, "K2Node_Event_DeltaSeconds", RF_Public|RF_Transient, 0x0010000000202000, 1, nullptr, STRUCT_OFFSET(AAlien_C__pf655108736, b0l__K2Node_Event_DeltaSeconds__pf), METADATA_PARAMS(NewProp_b0l__K2Node_Event_DeltaSeconds__pf_MetaData, ARRAY_COUNT(NewProp_b0l__K2Node_Event_DeltaSeconds__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__WeaponDelay__pf_MetaData[] = {
				{ "Category", "Default" },
				{ "DisplayName", "Weapon Delay" },
				{ "ModuleRelativePath", "Public/Alien__pf655108736.h" },
				{ "OverrideNativeName", "WeaponDelay" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpv__WeaponDelay__pf = { UE4CodeGen_Private::EPropertyClass::Float, "WeaponDelay", RF_Public|RF_Transient, 0x0010000000010005, 1, nullptr, STRUCT_OFFSET(AAlien_C__pf655108736, bpv__WeaponDelay__pf), METADATA_PARAMS(NewProp_bpv__WeaponDelay__pf_MetaData, ARRAY_COUNT(NewProp_bpv__WeaponDelay__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__DefaultSceneRoot__pf_MetaData[] = {
				{ "Category", "Default" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/Alien__pf655108736.h" },
				{ "OverrideNativeName", "DefaultSceneRoot" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__DefaultSceneRoot__pf = { UE4CodeGen_Private::EPropertyClass::Object, "DefaultSceneRoot", RF_Public|RF_Transient, 0x001000040008000c, 1, nullptr, STRUCT_OFFSET(AAlien_C__pf655108736, bpv__DefaultSceneRoot__pf), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(NewProp_bpv__DefaultSceneRoot__pf_MetaData, ARRAY_COUNT(NewProp_bpv__DefaultSceneRoot__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__UFO_Mesh__pf_MetaData[] = {
				{ "Category", "Default" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/Alien__pf655108736.h" },
				{ "OverrideNativeName", "UFO_Mesh" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__UFO_Mesh__pf = { UE4CodeGen_Private::EPropertyClass::Object, "UFO_Mesh", RF_Public|RF_Transient, 0x001000040008000c, 1, nullptr, STRUCT_OFFSET(AAlien_C__pf655108736, bpv__UFO_Mesh__pf), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(NewProp_bpv__UFO_Mesh__pf_MetaData, ARRAY_COUNT(NewProp_bpv__UFO_Mesh__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__CockPit_Mesh__pf_MetaData[] = {
				{ "Category", "Default" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/Alien__pf655108736.h" },
				{ "OverrideNativeName", "CockPit_Mesh" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__CockPit_Mesh__pf = { UE4CodeGen_Private::EPropertyClass::Object, "CockPit_Mesh", RF_Public|RF_Transient, 0x001000040008000c, 1, nullptr, STRUCT_OFFSET(AAlien_C__pf655108736, bpv__CockPit_Mesh__pf), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(NewProp_bpv__CockPit_Mesh__pf_MetaData, ARRAY_COUNT(NewProp_bpv__CockPit_Mesh__pf_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b0l__CallFunc_K2_AddWorldRotation_SweepHitResult__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b0l__CallFunc_K2_AddActorWorldOffset_SweepHitResult__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b0l__K2Node_Event_DeltaSeconds__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bpv__WeaponDelay__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bpv__DefaultSceneRoot__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bpv__UFO_Mesh__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bpv__CockPit_Mesh__pf,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AAlien_C__pf655108736>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AAlien_C__pf655108736::StaticClass,
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
	IMPLEMENT_DYNAMIC_CLASS(AAlien_C__pf655108736, TEXT("Alien_C"), 1554403480);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAlien_C__pf655108736(Z_Construct_UClass_AAlien_C__pf655108736, &AAlien_C__pf655108736::StaticClass, TEXT("/Game/Enemy/Alien"), TEXT("Alien_C"), true, TEXT("/Game/Enemy/Alien"), TEXT("/Game/Enemy/Alien.Alien_C"), nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAlien_C__pf655108736);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
