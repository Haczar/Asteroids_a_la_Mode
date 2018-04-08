// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Private/NativizedAssets.h"
#include "Public/Spawn_Volume__pf2174024837.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpawn_Volume__pf2174024837() {}
// Cross Module References
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_ASpawn_Volume_C__pf2174024837_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_ASpawn_Volume_C__pf2174024837();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	NATIVIZEDASSETS_API UFunction* Z_Construct_UFunction_ASpawn_Volume_C__pf2174024837_bpf__SpawnAlienOnServer__pf();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	NATIVIZEDASSETS_API UFunction* Z_Construct_UFunction_ASpawn_Volume_C__pf2174024837_bpf__SpawnAsteroidOnServer__pf();
	NATIVIZEDASSETS_API UFunction* Z_Construct_UFunction_ASpawn_Volume_C__pf2174024837_bpf__SpawnxLargexAsteroid__pfTT();
	NATIVIZEDASSETS_API UFunction* Z_Construct_UFunction_ASpawn_Volume_C__pf2174024837_bpf__UserConstructionScript__pf();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	NATIVIZEDASSETS_API UEnum* Z_Construct_UEnum_NativizedAssets_E__BorderSide__pf();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
// End Cross Module References
	static FName NAME_ASpawn_Volume_C__pf2174024837_bpf__SpawnAlienOnServer__pf = FName(TEXT("SpawnAlienOnServer"));
	void ASpawn_Volume_C__pf2174024837::bpf__SpawnAlienOnServer__pf(UClass* bpp__AlienxClass__pfT)
	{
		Spawn_Volume_C__pf2174024837_eventbpf__SpawnAlienOnServer__pf_Parms Parms;
		Parms.bpp__AlienxClass__pfT=bpp__AlienxClass__pfT;
		ProcessEvent(FindFunctionChecked(NAME_ASpawn_Volume_C__pf2174024837_bpf__SpawnAlienOnServer__pf),&Parms);
	}
	static FName NAME_ASpawn_Volume_C__pf2174024837_bpf__SpawnAsteroidOnServer__pf = FName(TEXT("SpawnAsteroidOnServer"));
	void ASpawn_Volume_C__pf2174024837::bpf__SpawnAsteroidOnServer__pf(UClass* bpp__NewParam__pf)
	{
		Spawn_Volume_C__pf2174024837_eventbpf__SpawnAsteroidOnServer__pf_Parms Parms;
		Parms.bpp__NewParam__pf=bpp__NewParam__pf;
		ProcessEvent(FindFunctionChecked(NAME_ASpawn_Volume_C__pf2174024837_bpf__SpawnAsteroidOnServer__pf),&Parms);
	}
	static FName NAME_ASpawn_Volume_C__pf2174024837_bpf__UserConstructionScript__pf = FName(TEXT("UserConstructionScript"));
	void ASpawn_Volume_C__pf2174024837::eventbpf__UserConstructionScript__pf()
	{
		ProcessEvent(FindFunctionChecked(NAME_ASpawn_Volume_C__pf2174024837_bpf__UserConstructionScript__pf),NULL);
	}
	void ASpawn_Volume_C__pf2174024837::StaticRegisterNativesASpawn_Volume_C__pf2174024837()
	{
		UClass* Class = ASpawn_Volume_C__pf2174024837::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SpawnAlienOnServer", &ASpawn_Volume_C__pf2174024837::execbpf__SpawnAlienOnServer__pf },
			{ "SpawnAsteroidOnServer", &ASpawn_Volume_C__pf2174024837::execbpf__SpawnAsteroidOnServer__pf },
			{ "Spawn Large Asteroid", &ASpawn_Volume_C__pf2174024837::execbpf__SpawnxLargexAsteroid__pfTT },
			{ "UserConstructionScript", &ASpawn_Volume_C__pf2174024837::execbpf__UserConstructionScript__pf },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_ASpawn_Volume_C__pf2174024837_bpf__SpawnAlienOnServer__pf()
	{
		UObject* Outer = Z_Construct_UClass_ASpawn_Volume_C__pf2174024837();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("SpawnAlienOnServer") ));
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FClassPropertyParams NewProp_bpp__AlienxClass__pfT = { UE4CodeGen_Private::EPropertyClass::Class, "bpp__AlienxClass__pfT", RF_Public|RF_Transient, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Spawn_Volume_C__pf2174024837_eventbpf__SpawnAlienOnServer__pf_Parms, bpp__AlienxClass__pfT), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bpp__AlienxClass__pfT,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "" },
				{ "ModuleRelativePath", "Public/Spawn_Volume__pf2174024837.h" },
				{ "OverrideNativeName", "SpawnAlienOnServer" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ASpawn_Volume_C__pf2174024837, "SpawnAlienOnServer", RF_Public|RF_Transient, nullptr, (EFunctionFlags)0x04220CC0, sizeof(Spawn_Volume_C__pf2174024837_eventbpf__SpawnAlienOnServer__pf_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ASpawn_Volume_C__pf2174024837_bpf__SpawnAsteroidOnServer__pf()
	{
		UObject* Outer = Z_Construct_UClass_ASpawn_Volume_C__pf2174024837();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("SpawnAsteroidOnServer") ));
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FClassPropertyParams NewProp_bpp__NewParam__pf = { UE4CodeGen_Private::EPropertyClass::Class, "bpp__NewParam__pf", RF_Public|RF_Transient, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Spawn_Volume_C__pf2174024837_eventbpf__SpawnAsteroidOnServer__pf_Parms, bpp__NewParam__pf), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bpp__NewParam__pf,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "" },
				{ "ModuleRelativePath", "Public/Spawn_Volume__pf2174024837.h" },
				{ "OverrideNativeName", "SpawnAsteroidOnServer" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ASpawn_Volume_C__pf2174024837, "SpawnAsteroidOnServer", RF_Public|RF_Transient, nullptr, (EFunctionFlags)0x04220C40, sizeof(Spawn_Volume_C__pf2174024837_eventbpf__SpawnAsteroidOnServer__pf_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ASpawn_Volume_C__pf2174024837_bpf__SpawnxLargexAsteroid__pfTT()
	{
		UObject* Outer = Z_Construct_UClass_ASpawn_Volume_C__pf2174024837();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("Spawn Large Asteroid") ));
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "" },
				{ "ModuleRelativePath", "Public/Spawn_Volume__pf2174024837.h" },
				{ "OverrideNativeName", "Spawn Large Asteroid" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ASpawn_Volume_C__pf2174024837, "Spawn Large Asteroid", RF_Public|RF_Transient, nullptr, (EFunctionFlags)0x04020400, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ASpawn_Volume_C__pf2174024837_bpf__UserConstructionScript__pf()
	{
		UObject* Outer = Z_Construct_UClass_ASpawn_Volume_C__pf2174024837();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("UserConstructionScript") ));
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "BlueprintInternalUseOnly", "true" },
				{ "Category", "" },
				{ "CppFromBpEvent", "" },
				{ "DisplayName", "Construction Script" },
				{ "ModuleRelativePath", "Public/Spawn_Volume__pf2174024837.h" },
				{ "OverrideNativeName", "UserConstructionScript" },
				{ "ToolTip", "Construction script, the place to spawn components and do other setup.@note Name used in CreateBlueprint function@param       Location        The location.@param       Rotation        The rotation." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ASpawn_Volume_C__pf2174024837, "UserConstructionScript", RF_Public|RF_Transient, nullptr, (EFunctionFlags)0x04020C01, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASpawn_Volume_C__pf2174024837_NoRegister()
	{
		return ASpawn_Volume_C__pf2174024837::StaticClass();
	}
	UClass* Z_Construct_UClass_ASpawn_Volume_C__pf2174024837()
	{
		UPackage* OuterPackage = FindOrConstructDynamicTypePackage(TEXT("/Game/Levels/Assets/Colliders/Spawn_Volume"));
		UClass* OuterClass = Cast<UClass>(StaticFindObjectFast(UClass::StaticClass(), OuterPackage, TEXT("Spawn_Volume_C")));
		if (!OuterClass || !(OuterClass->ClassFlags & CLASS_Constructed))
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AActor,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_ASpawn_Volume_C__pf2174024837_bpf__SpawnAlienOnServer__pf, "SpawnAlienOnServer" }, // 450792257
				{ &Z_Construct_UFunction_ASpawn_Volume_C__pf2174024837_bpf__SpawnAsteroidOnServer__pf, "SpawnAsteroidOnServer" }, // 3574194488
				{ &Z_Construct_UFunction_ASpawn_Volume_C__pf2174024837_bpf__SpawnxLargexAsteroid__pfTT, "Spawn Large Asteroid" }, // 473379625
				{ &Z_Construct_UFunction_ASpawn_Volume_C__pf2174024837_bpf__UserConstructionScript__pf, "UserConstructionScript" }, // 158428738
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "IncludePath", "Spawn_Volume__pf2174024837.h" },
				{ "IsBlueprintBase", "true" },
				{ "ModuleRelativePath", "Public/Spawn_Volume__pf2174024837.h" },
				{ "ObjectInitializerConstructorDeclared", "" },
				{ "OverrideNativeName", "Spawn_Volume_C" },
				{ "ReplaceConverted", "/Game/Levels/Assets/Colliders/Spawn_Volume.Spawn_Volume_C" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_BreakRotator_Yaw2__pf_MetaData[] = {
				{ "ModuleRelativePath", "Public/Spawn_Volume__pf2174024837.h" },
				{ "OverrideNativeName", "CallFunc_BreakRotator_Yaw2" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_b0l__CallFunc_BreakRotator_Yaw2__pf = { UE4CodeGen_Private::EPropertyClass::Float, "CallFunc_BreakRotator_Yaw2", RF_Public|RF_Transient, 0x0010000000202000, 1, nullptr, STRUCT_OFFSET(ASpawn_Volume_C__pf2174024837, b0l__CallFunc_BreakRotator_Yaw2__pf), METADATA_PARAMS(NewProp_b0l__CallFunc_BreakRotator_Yaw2__pf_MetaData, ARRAY_COUNT(NewProp_b0l__CallFunc_BreakRotator_Yaw2__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_BreakRotator_Pitch2__pf_MetaData[] = {
				{ "ModuleRelativePath", "Public/Spawn_Volume__pf2174024837.h" },
				{ "OverrideNativeName", "CallFunc_BreakRotator_Pitch2" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_b0l__CallFunc_BreakRotator_Pitch2__pf = { UE4CodeGen_Private::EPropertyClass::Float, "CallFunc_BreakRotator_Pitch2", RF_Public|RF_Transient, 0x0010000000202000, 1, nullptr, STRUCT_OFFSET(ASpawn_Volume_C__pf2174024837, b0l__CallFunc_BreakRotator_Pitch2__pf), METADATA_PARAMS(NewProp_b0l__CallFunc_BreakRotator_Pitch2__pf_MetaData, ARRAY_COUNT(NewProp_b0l__CallFunc_BreakRotator_Pitch2__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_BreakRotator_Roll2__pf_MetaData[] = {
				{ "ModuleRelativePath", "Public/Spawn_Volume__pf2174024837.h" },
				{ "OverrideNativeName", "CallFunc_BreakRotator_Roll2" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_b0l__CallFunc_BreakRotator_Roll2__pf = { UE4CodeGen_Private::EPropertyClass::Float, "CallFunc_BreakRotator_Roll2", RF_Public|RF_Transient, 0x0010000000202000, 1, nullptr, STRUCT_OFFSET(ASpawn_Volume_C__pf2174024837, b0l__CallFunc_BreakRotator_Roll2__pf), METADATA_PARAMS(NewProp_b0l__CallFunc_BreakRotator_Roll2__pf_MetaData, ARRAY_COUNT(NewProp_b0l__CallFunc_BreakRotator_Roll2__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_BreakRotator_Yaw1__pf_MetaData[] = {
				{ "ModuleRelativePath", "Public/Spawn_Volume__pf2174024837.h" },
				{ "OverrideNativeName", "CallFunc_BreakRotator_Yaw1" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_b0l__CallFunc_BreakRotator_Yaw1__pf = { UE4CodeGen_Private::EPropertyClass::Float, "CallFunc_BreakRotator_Yaw1", RF_Public|RF_Transient, 0x0010000000202000, 1, nullptr, STRUCT_OFFSET(ASpawn_Volume_C__pf2174024837, b0l__CallFunc_BreakRotator_Yaw1__pf), METADATA_PARAMS(NewProp_b0l__CallFunc_BreakRotator_Yaw1__pf_MetaData, ARRAY_COUNT(NewProp_b0l__CallFunc_BreakRotator_Yaw1__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_BreakRotator_Pitch1__pf_MetaData[] = {
				{ "ModuleRelativePath", "Public/Spawn_Volume__pf2174024837.h" },
				{ "OverrideNativeName", "CallFunc_BreakRotator_Pitch1" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_b0l__CallFunc_BreakRotator_Pitch1__pf = { UE4CodeGen_Private::EPropertyClass::Float, "CallFunc_BreakRotator_Pitch1", RF_Public|RF_Transient, 0x0010000000202000, 1, nullptr, STRUCT_OFFSET(ASpawn_Volume_C__pf2174024837, b0l__CallFunc_BreakRotator_Pitch1__pf), METADATA_PARAMS(NewProp_b0l__CallFunc_BreakRotator_Pitch1__pf_MetaData, ARRAY_COUNT(NewProp_b0l__CallFunc_BreakRotator_Pitch1__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_BreakRotator_Roll1__pf_MetaData[] = {
				{ "ModuleRelativePath", "Public/Spawn_Volume__pf2174024837.h" },
				{ "OverrideNativeName", "CallFunc_BreakRotator_Roll1" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_b0l__CallFunc_BreakRotator_Roll1__pf = { UE4CodeGen_Private::EPropertyClass::Float, "CallFunc_BreakRotator_Roll1", RF_Public|RF_Transient, 0x0010000000202000, 1, nullptr, STRUCT_OFFSET(ASpawn_Volume_C__pf2174024837, b0l__CallFunc_BreakRotator_Roll1__pf), METADATA_PARAMS(NewProp_b0l__CallFunc_BreakRotator_Roll1__pf_MetaData, ARRAY_COUNT(NewProp_b0l__CallFunc_BreakRotator_Roll1__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_GetComponentBounds_SphereRadius2__pf_MetaData[] = {
				{ "ModuleRelativePath", "Public/Spawn_Volume__pf2174024837.h" },
				{ "OverrideNativeName", "CallFunc_GetComponentBounds_SphereRadius2" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_b0l__CallFunc_GetComponentBounds_SphereRadius2__pf = { UE4CodeGen_Private::EPropertyClass::Float, "CallFunc_GetComponentBounds_SphereRadius2", RF_Public|RF_Transient, 0x0010000000202000, 1, nullptr, STRUCT_OFFSET(ASpawn_Volume_C__pf2174024837, b0l__CallFunc_GetComponentBounds_SphereRadius2__pf), METADATA_PARAMS(NewProp_b0l__CallFunc_GetComponentBounds_SphereRadius2__pf_MetaData, ARRAY_COUNT(NewProp_b0l__CallFunc_GetComponentBounds_SphereRadius2__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_GetComponentBounds_BoxExtent2__pf_MetaData[] = {
				{ "ModuleRelativePath", "Public/Spawn_Volume__pf2174024837.h" },
				{ "OverrideNativeName", "CallFunc_GetComponentBounds_BoxExtent2" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_b0l__CallFunc_GetComponentBounds_BoxExtent2__pf = { UE4CodeGen_Private::EPropertyClass::Struct, "CallFunc_GetComponentBounds_BoxExtent2", RF_Public|RF_Transient, 0x0010000000202000, 1, nullptr, STRUCT_OFFSET(ASpawn_Volume_C__pf2174024837, b0l__CallFunc_GetComponentBounds_BoxExtent2__pf), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_b0l__CallFunc_GetComponentBounds_BoxExtent2__pf_MetaData, ARRAY_COUNT(NewProp_b0l__CallFunc_GetComponentBounds_BoxExtent2__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_GetComponentBounds_Origin2__pf_MetaData[] = {
				{ "ModuleRelativePath", "Public/Spawn_Volume__pf2174024837.h" },
				{ "OverrideNativeName", "CallFunc_GetComponentBounds_Origin2" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_b0l__CallFunc_GetComponentBounds_Origin2__pf = { UE4CodeGen_Private::EPropertyClass::Struct, "CallFunc_GetComponentBounds_Origin2", RF_Public|RF_Transient, 0x0010000000202000, 1, nullptr, STRUCT_OFFSET(ASpawn_Volume_C__pf2174024837, b0l__CallFunc_GetComponentBounds_Origin2__pf), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_b0l__CallFunc_GetComponentBounds_Origin2__pf_MetaData, ARRAY_COUNT(NewProp_b0l__CallFunc_GetComponentBounds_Origin2__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_GetComponentBounds_SphereRadius1__pf_MetaData[] = {
				{ "ModuleRelativePath", "Public/Spawn_Volume__pf2174024837.h" },
				{ "OverrideNativeName", "CallFunc_GetComponentBounds_SphereRadius1" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_b0l__CallFunc_GetComponentBounds_SphereRadius1__pf = { UE4CodeGen_Private::EPropertyClass::Float, "CallFunc_GetComponentBounds_SphereRadius1", RF_Public|RF_Transient, 0x0010000000202000, 1, nullptr, STRUCT_OFFSET(ASpawn_Volume_C__pf2174024837, b0l__CallFunc_GetComponentBounds_SphereRadius1__pf), METADATA_PARAMS(NewProp_b0l__CallFunc_GetComponentBounds_SphereRadius1__pf_MetaData, ARRAY_COUNT(NewProp_b0l__CallFunc_GetComponentBounds_SphereRadius1__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_GetComponentBounds_BoxExtent1__pf_MetaData[] = {
				{ "ModuleRelativePath", "Public/Spawn_Volume__pf2174024837.h" },
				{ "OverrideNativeName", "CallFunc_GetComponentBounds_BoxExtent1" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_b0l__CallFunc_GetComponentBounds_BoxExtent1__pf = { UE4CodeGen_Private::EPropertyClass::Struct, "CallFunc_GetComponentBounds_BoxExtent1", RF_Public|RF_Transient, 0x0010000000202000, 1, nullptr, STRUCT_OFFSET(ASpawn_Volume_C__pf2174024837, b0l__CallFunc_GetComponentBounds_BoxExtent1__pf), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_b0l__CallFunc_GetComponentBounds_BoxExtent1__pf_MetaData, ARRAY_COUNT(NewProp_b0l__CallFunc_GetComponentBounds_BoxExtent1__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_GetComponentBounds_Origin1__pf_MetaData[] = {
				{ "ModuleRelativePath", "Public/Spawn_Volume__pf2174024837.h" },
				{ "OverrideNativeName", "CallFunc_GetComponentBounds_Origin1" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_b0l__CallFunc_GetComponentBounds_Origin1__pf = { UE4CodeGen_Private::EPropertyClass::Struct, "CallFunc_GetComponentBounds_Origin1", RF_Public|RF_Transient, 0x0010000000202000, 1, nullptr, STRUCT_OFFSET(ASpawn_Volume_C__pf2174024837, b0l__CallFunc_GetComponentBounds_Origin1__pf), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_b0l__CallFunc_GetComponentBounds_Origin1__pf_MetaData, ARRAY_COUNT(NewProp_b0l__CallFunc_GetComponentBounds_Origin1__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_BreakRotator_Yaw__pf_MetaData[] = {
				{ "ModuleRelativePath", "Public/Spawn_Volume__pf2174024837.h" },
				{ "OverrideNativeName", "CallFunc_BreakRotator_Yaw" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_b0l__CallFunc_BreakRotator_Yaw__pf = { UE4CodeGen_Private::EPropertyClass::Float, "CallFunc_BreakRotator_Yaw", RF_Public|RF_Transient, 0x0010000000202000, 1, nullptr, STRUCT_OFFSET(ASpawn_Volume_C__pf2174024837, b0l__CallFunc_BreakRotator_Yaw__pf), METADATA_PARAMS(NewProp_b0l__CallFunc_BreakRotator_Yaw__pf_MetaData, ARRAY_COUNT(NewProp_b0l__CallFunc_BreakRotator_Yaw__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_BreakRotator_Pitch__pf_MetaData[] = {
				{ "ModuleRelativePath", "Public/Spawn_Volume__pf2174024837.h" },
				{ "OverrideNativeName", "CallFunc_BreakRotator_Pitch" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_b0l__CallFunc_BreakRotator_Pitch__pf = { UE4CodeGen_Private::EPropertyClass::Float, "CallFunc_BreakRotator_Pitch", RF_Public|RF_Transient, 0x0010000000202000, 1, nullptr, STRUCT_OFFSET(ASpawn_Volume_C__pf2174024837, b0l__CallFunc_BreakRotator_Pitch__pf), METADATA_PARAMS(NewProp_b0l__CallFunc_BreakRotator_Pitch__pf_MetaData, ARRAY_COUNT(NewProp_b0l__CallFunc_BreakRotator_Pitch__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_BreakRotator_Roll__pf_MetaData[] = {
				{ "ModuleRelativePath", "Public/Spawn_Volume__pf2174024837.h" },
				{ "OverrideNativeName", "CallFunc_BreakRotator_Roll" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_b0l__CallFunc_BreakRotator_Roll__pf = { UE4CodeGen_Private::EPropertyClass::Float, "CallFunc_BreakRotator_Roll", RF_Public|RF_Transient, 0x0010000000202000, 1, nullptr, STRUCT_OFFSET(ASpawn_Volume_C__pf2174024837, b0l__CallFunc_BreakRotator_Roll__pf), METADATA_PARAMS(NewProp_b0l__CallFunc_BreakRotator_Roll__pf_MetaData, ARRAY_COUNT(NewProp_b0l__CallFunc_BreakRotator_Roll__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_GetComponentBounds_SphereRadius__pf_MetaData[] = {
				{ "ModuleRelativePath", "Public/Spawn_Volume__pf2174024837.h" },
				{ "OverrideNativeName", "CallFunc_GetComponentBounds_SphereRadius" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_b0l__CallFunc_GetComponentBounds_SphereRadius__pf = { UE4CodeGen_Private::EPropertyClass::Float, "CallFunc_GetComponentBounds_SphereRadius", RF_Public|RF_Transient, 0x0010000000202000, 1, nullptr, STRUCT_OFFSET(ASpawn_Volume_C__pf2174024837, b0l__CallFunc_GetComponentBounds_SphereRadius__pf), METADATA_PARAMS(NewProp_b0l__CallFunc_GetComponentBounds_SphereRadius__pf_MetaData, ARRAY_COUNT(NewProp_b0l__CallFunc_GetComponentBounds_SphereRadius__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_GetComponentBounds_BoxExtent__pf_MetaData[] = {
				{ "ModuleRelativePath", "Public/Spawn_Volume__pf2174024837.h" },
				{ "OverrideNativeName", "CallFunc_GetComponentBounds_BoxExtent" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_b0l__CallFunc_GetComponentBounds_BoxExtent__pf = { UE4CodeGen_Private::EPropertyClass::Struct, "CallFunc_GetComponentBounds_BoxExtent", RF_Public|RF_Transient, 0x0010000000202000, 1, nullptr, STRUCT_OFFSET(ASpawn_Volume_C__pf2174024837, b0l__CallFunc_GetComponentBounds_BoxExtent__pf), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_b0l__CallFunc_GetComponentBounds_BoxExtent__pf_MetaData, ARRAY_COUNT(NewProp_b0l__CallFunc_GetComponentBounds_BoxExtent__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_GetComponentBounds_Origin__pf_MetaData[] = {
				{ "ModuleRelativePath", "Public/Spawn_Volume__pf2174024837.h" },
				{ "OverrideNativeName", "CallFunc_GetComponentBounds_Origin" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_b0l__CallFunc_GetComponentBounds_Origin__pf = { UE4CodeGen_Private::EPropertyClass::Struct, "CallFunc_GetComponentBounds_Origin", RF_Public|RF_Transient, 0x0010000000202000, 1, nullptr, STRUCT_OFFSET(ASpawn_Volume_C__pf2174024837, b0l__CallFunc_GetComponentBounds_Origin__pf), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_b0l__CallFunc_GetComponentBounds_Origin__pf_MetaData, ARRAY_COUNT(NewProp_b0l__CallFunc_GetComponentBounds_Origin__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_CustomEvent_Alien_Class__pf_MetaData[] = {
				{ "ModuleRelativePath", "Public/Spawn_Volume__pf2174024837.h" },
				{ "OverrideNativeName", "K2Node_CustomEvent_Alien_Class" },
			};
#endif
			static const UE4CodeGen_Private::FClassPropertyParams NewProp_b0l__K2Node_CustomEvent_Alien_Class__pf = { UE4CodeGen_Private::EPropertyClass::Class, "K2Node_CustomEvent_Alien_Class", RF_Public|RF_Transient, 0x0010000000202000, 1, nullptr, STRUCT_OFFSET(ASpawn_Volume_C__pf2174024837, b0l__K2Node_CustomEvent_Alien_Class__pf), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(NewProp_b0l__K2Node_CustomEvent_Alien_Class__pf_MetaData, ARRAY_COUNT(NewProp_b0l__K2Node_CustomEvent_Alien_Class__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_CustomEvent_NewParam__pf_MetaData[] = {
				{ "ModuleRelativePath", "Public/Spawn_Volume__pf2174024837.h" },
				{ "OverrideNativeName", "K2Node_CustomEvent_NewParam" },
			};
#endif
			static const UE4CodeGen_Private::FClassPropertyParams NewProp_b0l__K2Node_CustomEvent_NewParam__pf = { UE4CodeGen_Private::EPropertyClass::Class, "K2Node_CustomEvent_NewParam", RF_Public|RF_Transient, 0x0010000000202000, 1, nullptr, STRUCT_OFFSET(ASpawn_Volume_C__pf2174024837, b0l__K2Node_CustomEvent_NewParam__pf), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(NewProp_b0l__K2Node_CustomEvent_NewParam__pf_MetaData, ARRAY_COUNT(NewProp_b0l__K2Node_CustomEvent_NewParam__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__SpawnRot_Max__pf_MetaData[] = {
				{ "Category", "Default" },
				{ "DisplayName", "Spawn Rot Max" },
				{ "ModuleRelativePath", "Public/Spawn_Volume__pf2174024837.h" },
				{ "OverrideNativeName", "SpawnRot_Max" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpv__SpawnRot_Max__pf = { UE4CodeGen_Private::EPropertyClass::Float, "SpawnRot_Max", RF_Public|RF_Transient, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(ASpawn_Volume_C__pf2174024837, bpv__SpawnRot_Max__pf), METADATA_PARAMS(NewProp_bpv__SpawnRot_Max__pf_MetaData, ARRAY_COUNT(NewProp_bpv__SpawnRot_Max__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__SpawnRot_Min__pf_MetaData[] = {
				{ "Category", "Default" },
				{ "DisplayName", "Spawn Rot Min" },
				{ "ModuleRelativePath", "Public/Spawn_Volume__pf2174024837.h" },
				{ "OverrideNativeName", "SpawnRot_Min" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpv__SpawnRot_Min__pf = { UE4CodeGen_Private::EPropertyClass::Float, "SpawnRot_Min", RF_Public|RF_Transient, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(ASpawn_Volume_C__pf2174024837, bpv__SpawnRot_Min__pf), METADATA_PARAMS(NewProp_bpv__SpawnRot_Min__pf_MetaData, ARRAY_COUNT(NewProp_bpv__SpawnRot_Min__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__WarpingOffset__pf_MetaData[] = {
				{ "Category", "Default" },
				{ "DisplayName", "Warping Offset" },
				{ "ModuleRelativePath", "Public/Spawn_Volume__pf2174024837.h" },
				{ "OverrideNativeName", "WarpingOffset" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpv__WarpingOffset__pf = { UE4CodeGen_Private::EPropertyClass::Float, "WarpingOffset", RF_Public|RF_Transient, 0x0010000000010005, 1, nullptr, STRUCT_OFFSET(ASpawn_Volume_C__pf2174024837, bpv__WarpingOffset__pf), METADATA_PARAMS(NewProp_bpv__WarpingOffset__pf_MetaData, ARRAY_COUNT(NewProp_bpv__WarpingOffset__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Side__pf_MetaData[] = {
				{ "Category", "Default" },
				{ "DisplayName", "Side" },
				{ "ModuleRelativePath", "Public/Spawn_Volume__pf2174024837.h" },
				{ "OverrideNativeName", "Side" },
			};
#endif
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_bpv__Side__pf = { UE4CodeGen_Private::EPropertyClass::Enum, "Side", RF_Public|RF_Transient, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(ASpawn_Volume_C__pf2174024837, bpv__Side__pf), Z_Construct_UEnum_NativizedAssets_E__BorderSide__pf, METADATA_PARAMS(NewProp_bpv__Side__pf_MetaData, ARRAY_COUNT(NewProp_bpv__Side__pf_MetaData)) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_bpv__Side__pf_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__BoxxCollider__pfT_MetaData[] = {
				{ "Category", "Default" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/Spawn_Volume__pf2174024837.h" },
				{ "OverrideNativeName", "Box Collider" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__BoxxCollider__pfT = { UE4CodeGen_Private::EPropertyClass::Object, "Box Collider", RF_Public|RF_Transient, 0x001000040008000c, 1, nullptr, STRUCT_OFFSET(ASpawn_Volume_C__pf2174024837, bpv__BoxxCollider__pfT), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(NewProp_bpv__BoxxCollider__pfT_MetaData, ARRAY_COUNT(NewProp_bpv__BoxxCollider__pfT_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b0l__CallFunc_BreakRotator_Yaw2__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b0l__CallFunc_BreakRotator_Pitch2__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b0l__CallFunc_BreakRotator_Roll2__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b0l__CallFunc_BreakRotator_Yaw1__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b0l__CallFunc_BreakRotator_Pitch1__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b0l__CallFunc_BreakRotator_Roll1__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b0l__CallFunc_GetComponentBounds_SphereRadius2__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b0l__CallFunc_GetComponentBounds_BoxExtent2__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b0l__CallFunc_GetComponentBounds_Origin2__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b0l__CallFunc_GetComponentBounds_SphereRadius1__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b0l__CallFunc_GetComponentBounds_BoxExtent1__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b0l__CallFunc_GetComponentBounds_Origin1__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b0l__CallFunc_BreakRotator_Yaw__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b0l__CallFunc_BreakRotator_Pitch__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b0l__CallFunc_BreakRotator_Roll__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b0l__CallFunc_GetComponentBounds_SphereRadius__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b0l__CallFunc_GetComponentBounds_BoxExtent__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b0l__CallFunc_GetComponentBounds_Origin__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b0l__K2Node_CustomEvent_Alien_Class__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b0l__K2Node_CustomEvent_NewParam__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bpv__SpawnRot_Max__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bpv__SpawnRot_Min__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bpv__WarpingOffset__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bpv__Side__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bpv__Side__pf_Underlying,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bpv__BoxxCollider__pfT,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<ASpawn_Volume_C__pf2174024837>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&ASpawn_Volume_C__pf2174024837::StaticClass,
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
	IMPLEMENT_DYNAMIC_CLASS(ASpawn_Volume_C__pf2174024837, TEXT("Spawn_Volume_C"), 2727290221);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASpawn_Volume_C__pf2174024837(Z_Construct_UClass_ASpawn_Volume_C__pf2174024837, &ASpawn_Volume_C__pf2174024837::StaticClass, TEXT("/Game/Levels/Assets/Colliders/Spawn_Volume"), TEXT("Spawn_Volume_C"), true, TEXT("/Game/Levels/Assets/Colliders/Spawn_Volume"), TEXT("/Game/Levels/Assets/Colliders/Spawn_Volume.Spawn_Volume_C"), nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASpawn_Volume_C__pf2174024837);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
