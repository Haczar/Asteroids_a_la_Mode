// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Private/NativizedAssets.h"
#include "Public/AlienProjectile__pf655108736.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAlienProjectile__pf655108736() {}
// Cross Module References
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_AAlienProjectile_C__pf655108736_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_AAlienProjectile_C__pf655108736();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	NATIVIZEDASSETS_API UFunction* Z_Construct_UFunction_AAlienProjectile_C__pf655108736_bpf__ExecuteUbergraph_AlienProjectile__pf_0();
	NATIVIZEDASSETS_API UFunction* Z_Construct_UFunction_AAlienProjectile_C__pf655108736_bpf__ReceiveBeginPlay__pf();
	NATIVIZEDASSETS_API UFunction* Z_Construct_UFunction_AAlienProjectile_C__pf655108736_bpf__UserConstructionScript__pf();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UProjectileMovementComponent_NoRegister();
// End Cross Module References
	static FName NAME_AAlienProjectile_C__pf655108736_bpf__ReceiveBeginPlay__pf = FName(TEXT("ReceiveBeginPlay"));
	void AAlienProjectile_C__pf655108736::eventbpf__ReceiveBeginPlay__pf()
	{
		ProcessEvent(FindFunctionChecked(NAME_AAlienProjectile_C__pf655108736_bpf__ReceiveBeginPlay__pf),NULL);
	}
	static FName NAME_AAlienProjectile_C__pf655108736_bpf__UserConstructionScript__pf = FName(TEXT("UserConstructionScript"));
	void AAlienProjectile_C__pf655108736::eventbpf__UserConstructionScript__pf()
	{
		ProcessEvent(FindFunctionChecked(NAME_AAlienProjectile_C__pf655108736_bpf__UserConstructionScript__pf),NULL);
	}
	void AAlienProjectile_C__pf655108736::StaticRegisterNativesAAlienProjectile_C__pf655108736()
	{
		UClass* Class = AAlienProjectile_C__pf655108736::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ExecuteUbergraph_AlienProjectile_0", &AAlienProjectile_C__pf655108736::execbpf__ExecuteUbergraph_AlienProjectile__pf_0 },
			{ "ReceiveBeginPlay", &AAlienProjectile_C__pf655108736::execbpf__ReceiveBeginPlay__pf },
			{ "UserConstructionScript", &AAlienProjectile_C__pf655108736::execbpf__UserConstructionScript__pf },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_AAlienProjectile_C__pf655108736_bpf__ExecuteUbergraph_AlienProjectile__pf_0()
	{
		struct AlienProjectile_C__pf655108736_eventbpf__ExecuteUbergraph_AlienProjectile__pf_0_Parms
		{
			int32 bpp__EntryPoint__pf;
		};
		UObject* Outer = Z_Construct_UClass_AAlienProjectile_C__pf655108736();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("ExecuteUbergraph_AlienProjectile_0") ));
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_bpp__EntryPoint__pf = { UE4CodeGen_Private::EPropertyClass::Int, "bpp__EntryPoint__pf", RF_Public|RF_Transient, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AlienProjectile_C__pf655108736_eventbpf__ExecuteUbergraph_AlienProjectile__pf_0_Parms, bpp__EntryPoint__pf), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bpp__EntryPoint__pf,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/AlienProjectile__pf655108736.h" },
				{ "OverrideNativeName", "ExecuteUbergraph_AlienProjectile_0" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AAlienProjectile_C__pf655108736, "ExecuteUbergraph_AlienProjectile_0", RF_Public|RF_Transient, nullptr, (EFunctionFlags)0x00020401, sizeof(AlienProjectile_C__pf655108736_eventbpf__ExecuteUbergraph_AlienProjectile__pf_0_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AAlienProjectile_C__pf655108736_bpf__ReceiveBeginPlay__pf()
	{
		UObject* Outer = Z_Construct_UClass_AAlienProjectile_C__pf655108736();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("ReceiveBeginPlay") ));
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "CppFromBpEvent", "" },
				{ "DisplayName", "BeginPlay" },
				{ "ModuleRelativePath", "Public/AlienProjectile__pf655108736.h" },
				{ "OverrideNativeName", "ReceiveBeginPlay" },
				{ "ToolTip", "Event when play begins for this actor." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AAlienProjectile_C__pf655108736, "ReceiveBeginPlay", RF_Public|RF_Transient, nullptr, (EFunctionFlags)0x00020C01, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AAlienProjectile_C__pf655108736_bpf__UserConstructionScript__pf()
	{
		UObject* Outer = Z_Construct_UClass_AAlienProjectile_C__pf655108736();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("UserConstructionScript") ));
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "BlueprintInternalUseOnly", "true" },
				{ "Category", "" },
				{ "CppFromBpEvent", "" },
				{ "DisplayName", "Construction Script" },
				{ "ModuleRelativePath", "Public/AlienProjectile__pf655108736.h" },
				{ "OverrideNativeName", "UserConstructionScript" },
				{ "ToolTip", "Construction script, the place to spawn components and do other setup.@note Name used in CreateBlueprint function@param       Location        The location.@param       Rotation        The rotation." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AAlienProjectile_C__pf655108736, "UserConstructionScript", RF_Public|RF_Transient, nullptr, (EFunctionFlags)0x04020C01, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AAlienProjectile_C__pf655108736_NoRegister()
	{
		return AAlienProjectile_C__pf655108736::StaticClass();
	}
	UClass* Z_Construct_UClass_AAlienProjectile_C__pf655108736()
	{
		UPackage* OuterPackage = FindOrConstructDynamicTypePackage(TEXT("/Game/Enemy/AlienProjectile"));
		UClass* OuterClass = Cast<UClass>(StaticFindObjectFast(UClass::StaticClass(), OuterPackage, TEXT("AlienProjectile_C")));
		if (!OuterClass || !(OuterClass->ClassFlags & CLASS_Constructed))
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AActor,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_AAlienProjectile_C__pf655108736_bpf__ExecuteUbergraph_AlienProjectile__pf_0, "ExecuteUbergraph_AlienProjectile_0" }, // 1560308432
				{ &Z_Construct_UFunction_AAlienProjectile_C__pf655108736_bpf__ReceiveBeginPlay__pf, "ReceiveBeginPlay" }, // 3218690261
				{ &Z_Construct_UFunction_AAlienProjectile_C__pf655108736_bpf__UserConstructionScript__pf, "UserConstructionScript" }, // 3718679107
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "IncludePath", "AlienProjectile__pf655108736.h" },
				{ "IsBlueprintBase", "true" },
				{ "ModuleRelativePath", "Public/AlienProjectile__pf655108736.h" },
				{ "ObjectInitializerConstructorDeclared", "" },
				{ "OverrideNativeName", "AlienProjectile_C" },
				{ "ReplaceConverted", "/Game/Enemy/AlienProjectile.AlienProjectile_C" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__DefaultSceneRoot__pf_MetaData[] = {
				{ "Category", "Default" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/AlienProjectile__pf655108736.h" },
				{ "OverrideNativeName", "DefaultSceneRoot" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__DefaultSceneRoot__pf = { UE4CodeGen_Private::EPropertyClass::Object, "DefaultSceneRoot", RF_Public|RF_Transient, 0x001000040008000c, 1, nullptr, STRUCT_OFFSET(AAlienProjectile_C__pf655108736, bpv__DefaultSceneRoot__pf), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(NewProp_bpv__DefaultSceneRoot__pf_MetaData, ARRAY_COUNT(NewProp_bpv__DefaultSceneRoot__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Cylinder__pf_MetaData[] = {
				{ "Category", "Default" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/AlienProjectile__pf655108736.h" },
				{ "OverrideNativeName", "Cylinder" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__Cylinder__pf = { UE4CodeGen_Private::EPropertyClass::Object, "Cylinder", RF_Public|RF_Transient, 0x001000040008000c, 1, nullptr, STRUCT_OFFSET(AAlienProjectile_C__pf655108736, bpv__Cylinder__pf), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(NewProp_bpv__Cylinder__pf_MetaData, ARRAY_COUNT(NewProp_bpv__Cylinder__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__ProjectileMovement__pf_MetaData[] = {
				{ "Category", "Default" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/AlienProjectile__pf655108736.h" },
				{ "OverrideNativeName", "ProjectileMovement" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__ProjectileMovement__pf = { UE4CodeGen_Private::EPropertyClass::Object, "ProjectileMovement", RF_Public|RF_Transient, 0x001000040008000c, 1, nullptr, STRUCT_OFFSET(AAlienProjectile_C__pf655108736, bpv__ProjectileMovement__pf), Z_Construct_UClass_UProjectileMovementComponent_NoRegister, METADATA_PARAMS(NewProp_bpv__ProjectileMovement__pf_MetaData, ARRAY_COUNT(NewProp_bpv__ProjectileMovement__pf_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bpv__DefaultSceneRoot__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bpv__Cylinder__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bpv__ProjectileMovement__pf,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AAlienProjectile_C__pf655108736>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AAlienProjectile_C__pf655108736::StaticClass,
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
	IMPLEMENT_DYNAMIC_CLASS(AAlienProjectile_C__pf655108736, TEXT("AlienProjectile_C"), 2592890885);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAlienProjectile_C__pf655108736(Z_Construct_UClass_AAlienProjectile_C__pf655108736, &AAlienProjectile_C__pf655108736::StaticClass, TEXT("/Game/Enemy/AlienProjectile"), TEXT("AlienProjectile_C"), true, TEXT("/Game/Enemy/AlienProjectile"), TEXT("/Game/Enemy/AlienProjectile.AlienProjectile_C"), nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAlienProjectile_C__pf655108736);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
