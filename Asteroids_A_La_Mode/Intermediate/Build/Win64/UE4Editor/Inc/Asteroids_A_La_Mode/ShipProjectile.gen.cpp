// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "ShipProjectile.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeShipProjectile() {}
// Cross Module References
	ASTEROIDS_A_LA_MODE_API UClass* Z_Construct_UClass_AShipProjectile_NoRegister();
	ASTEROIDS_A_LA_MODE_API UClass* Z_Construct_UClass_AShipProjectile();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Asteroids_A_La_Mode();
	ASTEROIDS_A_LA_MODE_API UFunction* Z_Construct_UFunction_AShipProjectile_Collided();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ASTEROIDS_A_LA_MODE_API UFunction* Z_Construct_UFunction_AShipProjectile_HandleAsteroidCollision();
	ENGINE_API UClass* Z_Construct_UClass_UProjectileMovementComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
// End Cross Module References
	static FName NAME_AShipProjectile_Collided = FName(TEXT("Collided"));
	void AShipProjectile::Collided(UObject* objectCollided)
	{
		ShipProjectile_eventCollided_Parms Parms;
		Parms.objectCollided=objectCollided;
		ProcessEvent(FindFunctionChecked(NAME_AShipProjectile_Collided),&Parms);
	}
	static FName NAME_AShipProjectile_HandleAsteroidCollision = FName(TEXT("HandleAsteroidCollision"));
	void AShipProjectile::HandleAsteroidCollision(UObject* AsteroidObj)
	{
		ShipProjectile_eventHandleAsteroidCollision_Parms Parms;
		Parms.AsteroidObj=AsteroidObj;
		ProcessEvent(FindFunctionChecked(NAME_AShipProjectile_HandleAsteroidCollision),&Parms);
	}
	void AShipProjectile::StaticRegisterNativesAShipProjectile()
	{
		UClass* Class = AShipProjectile::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Collided", &AShipProjectile::execCollided },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_AShipProjectile_Collided()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_objectCollided = { UE4CodeGen_Private::EPropertyClass::Object, "objectCollided", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ShipProjectile_eventCollided_Parms, objectCollided), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_objectCollided,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "ShipProjectile.h" },
				{ "ToolTip", "Blueprint Events" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AShipProjectile, "Collided", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0C020C00, sizeof(ShipProjectile_eventCollided_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AShipProjectile_HandleAsteroidCollision()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AsteroidObj = { UE4CodeGen_Private::EPropertyClass::Object, "AsteroidObj", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ShipProjectile_eventHandleAsteroidCollision_Parms, AsteroidObj), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AsteroidObj,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "ShipProjectile.h" },
				{ "ToolTip", "Blueprint Functions" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AShipProjectile, "HandleAsteroidCollision", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08020800, sizeof(ShipProjectile_eventHandleAsteroidCollision_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AShipProjectile_NoRegister()
	{
		return AShipProjectile::StaticClass();
	}
	UClass* Z_Construct_UClass_AShipProjectile()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AActor,
				(UObject* (*)())Z_Construct_UPackage__Script_Asteroids_A_La_Mode,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_AShipProjectile_Collided, "Collided" }, // 425105597
				{ &Z_Construct_UFunction_AShipProjectile_HandleAsteroidCollision, "HandleAsteroidCollision" }, // 627610865
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "ShipProjectile.h" },
				{ "ModuleRelativePath", "ShipProjectile.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_projMoveComp_MetaData[] = {
				{ "Category", "ShipProjectile" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "ShipProjectile.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_projMoveComp = { UE4CodeGen_Private::EPropertyClass::Object, "projMoveComp", RF_Public|RF_Transient|RF_MarkAsNative, 0x00100000000a001d, 1, nullptr, STRUCT_OFFSET(AShipProjectile, projMoveComp), Z_Construct_UClass_UProjectileMovementComponent_NoRegister, METADATA_PARAMS(NewProp_projMoveComp_MetaData, ARRAY_COUNT(NewProp_projMoveComp_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_projectileMesh_MetaData[] = {
				{ "Category", "ShipProjectile" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "ShipProjectile.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_projectileMesh = { UE4CodeGen_Private::EPropertyClass::Object, "projectileMesh", RF_Public|RF_Transient|RF_MarkAsNative, 0x00100000000a000d, 1, nullptr, STRUCT_OFFSET(AShipProjectile, projectileMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(NewProp_projectileMesh_MetaData, ARRAY_COUNT(NewProp_projectileMesh_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_sceneRoot_MetaData[] = {
				{ "Category", "ShipProjectile" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "ShipProjectile.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_sceneRoot = { UE4CodeGen_Private::EPropertyClass::Object, "sceneRoot", RF_Public|RF_Transient|RF_MarkAsNative, 0x00100000000a001d, 1, nullptr, STRUCT_OFFSET(AShipProjectile, sceneRoot), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(NewProp_sceneRoot_MetaData, ARRAY_COUNT(NewProp_sceneRoot_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_projMoveComp,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_projectileMesh,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_sceneRoot,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AShipProjectile>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AShipProjectile::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900080u,
				FuncInfo, ARRAY_COUNT(FuncInfo),
				PropPointers, ARRAY_COUNT(PropPointers),
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AShipProjectile, 4128269452);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AShipProjectile(Z_Construct_UClass_AShipProjectile, &AShipProjectile::StaticClass, TEXT("/Script/Asteroids_A_La_Mode"), TEXT("AShipProjectile"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AShipProjectile);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
