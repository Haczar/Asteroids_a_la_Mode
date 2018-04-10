// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Private/NativizedAssets.h"
#include "Public/Asteroids1979__pf2955639682.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAsteroids1979__pf2955639682() {}
// Cross Module References
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_AAsteroids1979_C__pf2955639682_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_AAsteroids1979_C__pf2955639682();
	ENGINE_API UClass* Z_Construct_UClass_AGameMode();
	NATIVIZEDASSETS_API UFunction* Z_Construct_UFunction_AAsteroids1979_C__pf2955639682_bpf__ExecuteUbergraph_Asteroids1979__pf_1();
	NATIVIZEDASSETS_API UFunction* Z_Construct_UFunction_AAsteroids1979_C__pf2955639682_bpf__K2_PostLogin__pf();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
	NATIVIZEDASSETS_API UFunction* Z_Construct_UFunction_AAsteroids1979_C__pf2955639682_bpf__PlayerDied__pf();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	NATIVIZEDASSETS_API UFunction* Z_Construct_UFunction_AAsteroids1979_C__pf2955639682_bpf__ReceiveBeginPlay__pf();
	NATIVIZEDASSETS_API UFunction* Z_Construct_UFunction_AAsteroids1979_C__pf2955639682_bpf__ReceiveTick__pf();
	NATIVIZEDASSETS_API UFunction* Z_Construct_UFunction_AAsteroids1979_C__pf2955639682_bpf__SpawnAliens__pf();
	NATIVIZEDASSETS_API UFunction* Z_Construct_UFunction_AAsteroids1979_C__pf2955639682_bpf__SpawnLargeAsteroids__pf();
	NATIVIZEDASSETS_API UFunction* Z_Construct_UFunction_AAsteroids1979_C__pf2955639682_bpf__UserConstructionScript__pf();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_AGameState_1979_C__pf2955639682_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_ASpawn_Volume_C__pf2174024837_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APlayerStart_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_APlayerState_1979_C__pf2955639682_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_APlayerController_1979_C__pf2955639682_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
// End Cross Module References
	static FName NAME_AAsteroids1979_C__pf2955639682_bpf__K2_PostLogin__pf = FName(TEXT("K2_PostLogin"));
	void AAsteroids1979_C__pf2955639682::eventbpf__K2_PostLogin__pf(APlayerController* bpp__NewPlayer__pf)
	{
		Asteroids1979_C__pf2955639682_eventbpf__K2_PostLogin__pf_Parms Parms;
		Parms.bpp__NewPlayer__pf=bpp__NewPlayer__pf;
		ProcessEvent(FindFunctionChecked(NAME_AAsteroids1979_C__pf2955639682_bpf__K2_PostLogin__pf),&Parms);
	}
	static FName NAME_AAsteroids1979_C__pf2955639682_bpf__PlayerDied__pf = FName(TEXT("PlayerDied"));
	void AAsteroids1979_C__pf2955639682::bpf__PlayerDied__pf(AActor* bpp__Instigator__pf)
	{
		Asteroids1979_C__pf2955639682_eventbpf__PlayerDied__pf_Parms Parms;
		Parms.bpp__Instigator__pf=bpp__Instigator__pf;
		ProcessEvent(FindFunctionChecked(NAME_AAsteroids1979_C__pf2955639682_bpf__PlayerDied__pf),&Parms);
	}
	static FName NAME_AAsteroids1979_C__pf2955639682_bpf__ReceiveBeginPlay__pf = FName(TEXT("ReceiveBeginPlay"));
	void AAsteroids1979_C__pf2955639682::eventbpf__ReceiveBeginPlay__pf()
	{
		ProcessEvent(FindFunctionChecked(NAME_AAsteroids1979_C__pf2955639682_bpf__ReceiveBeginPlay__pf),NULL);
	}
	static FName NAME_AAsteroids1979_C__pf2955639682_bpf__ReceiveTick__pf = FName(TEXT("ReceiveTick"));
	void AAsteroids1979_C__pf2955639682::eventbpf__ReceiveTick__pf(float bpp__DeltaSeconds__pf)
	{
		Asteroids1979_C__pf2955639682_eventbpf__ReceiveTick__pf_Parms Parms;
		Parms.bpp__DeltaSeconds__pf=bpp__DeltaSeconds__pf;
		ProcessEvent(FindFunctionChecked(NAME_AAsteroids1979_C__pf2955639682_bpf__ReceiveTick__pf),&Parms);
	}
	static FName NAME_AAsteroids1979_C__pf2955639682_bpf__UserConstructionScript__pf = FName(TEXT("UserConstructionScript"));
	void AAsteroids1979_C__pf2955639682::eventbpf__UserConstructionScript__pf()
	{
		ProcessEvent(FindFunctionChecked(NAME_AAsteroids1979_C__pf2955639682_bpf__UserConstructionScript__pf),NULL);
	}
	void AAsteroids1979_C__pf2955639682::StaticRegisterNativesAAsteroids1979_C__pf2955639682()
	{
		UClass* Class = AAsteroids1979_C__pf2955639682::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ExecuteUbergraph_Asteroids1979_1", &AAsteroids1979_C__pf2955639682::execbpf__ExecuteUbergraph_Asteroids1979__pf_1 },
			{ "K2_PostLogin", &AAsteroids1979_C__pf2955639682::execbpf__K2_PostLogin__pf },
			{ "PlayerDied", &AAsteroids1979_C__pf2955639682::execbpf__PlayerDied__pf },
			{ "ReceiveBeginPlay", &AAsteroids1979_C__pf2955639682::execbpf__ReceiveBeginPlay__pf },
			{ "ReceiveTick", &AAsteroids1979_C__pf2955639682::execbpf__ReceiveTick__pf },
			{ "SpawnAliens", &AAsteroids1979_C__pf2955639682::execbpf__SpawnAliens__pf },
			{ "SpawnLargeAsteroids", &AAsteroids1979_C__pf2955639682::execbpf__SpawnLargeAsteroids__pf },
			{ "UserConstructionScript", &AAsteroids1979_C__pf2955639682::execbpf__UserConstructionScript__pf },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_AAsteroids1979_C__pf2955639682_bpf__ExecuteUbergraph_Asteroids1979__pf_1()
	{
		struct Asteroids1979_C__pf2955639682_eventbpf__ExecuteUbergraph_Asteroids1979__pf_1_Parms
		{
			int32 bpp__EntryPoint__pf;
		};
		UObject* Outer = Z_Construct_UClass_AAsteroids1979_C__pf2955639682();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("ExecuteUbergraph_Asteroids1979_1") ));
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_bpp__EntryPoint__pf = { UE4CodeGen_Private::EPropertyClass::Int, "bpp__EntryPoint__pf", RF_Public|RF_Transient, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Asteroids1979_C__pf2955639682_eventbpf__ExecuteUbergraph_Asteroids1979__pf_1_Parms, bpp__EntryPoint__pf), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bpp__EntryPoint__pf,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/Asteroids1979__pf2955639682.h" },
				{ "OverrideNativeName", "ExecuteUbergraph_Asteroids1979_1" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AAsteroids1979_C__pf2955639682, "ExecuteUbergraph_Asteroids1979_1", RF_Public|RF_Transient, nullptr, (EFunctionFlags)0x00020401, sizeof(Asteroids1979_C__pf2955639682_eventbpf__ExecuteUbergraph_Asteroids1979__pf_1_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AAsteroids1979_C__pf2955639682_bpf__K2_PostLogin__pf()
	{
		UObject* Outer = Z_Construct_UClass_AAsteroids1979_C__pf2955639682();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("K2_PostLogin") ));
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpp__NewPlayer__pf = { UE4CodeGen_Private::EPropertyClass::Object, "bpp__NewPlayer__pf", RF_Public|RF_Transient, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Asteroids1979_C__pf2955639682_eventbpf__K2_PostLogin__pf_Parms, bpp__NewPlayer__pf), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bpp__NewPlayer__pf,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Game" },
				{ "CppFromBpEvent", "" },
				{ "DisplayName", "OnPostLogin" },
				{ "ModuleRelativePath", "Public/Asteroids1979__pf2955639682.h" },
				{ "OverrideNativeName", "K2_PostLogin" },
				{ "ScriptName", "OnPostLogin" },
				{ "ToolTip", "Notification that a player has successfully logged in, and has been given a player controller" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AAsteroids1979_C__pf2955639682, "K2_PostLogin", RF_Public|RF_Transient, nullptr, (EFunctionFlags)0x00020C01, sizeof(Asteroids1979_C__pf2955639682_eventbpf__K2_PostLogin__pf_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AAsteroids1979_C__pf2955639682_bpf__PlayerDied__pf()
	{
		UObject* Outer = Z_Construct_UClass_AAsteroids1979_C__pf2955639682();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("PlayerDied") ));
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpp__Instigator__pf = { UE4CodeGen_Private::EPropertyClass::Object, "bpp__Instigator__pf", RF_Public|RF_Transient, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Asteroids1979_C__pf2955639682_eventbpf__PlayerDied__pf_Parms, bpp__Instigator__pf), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bpp__Instigator__pf,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "" },
				{ "ModuleRelativePath", "Public/Asteroids1979__pf2955639682.h" },
				{ "OverrideNativeName", "PlayerDied" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AAsteroids1979_C__pf2955639682, "PlayerDied", RF_Public|RF_Transient, nullptr, (EFunctionFlags)0x04220C40, sizeof(Asteroids1979_C__pf2955639682_eventbpf__PlayerDied__pf_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AAsteroids1979_C__pf2955639682_bpf__ReceiveBeginPlay__pf()
	{
		UObject* Outer = Z_Construct_UClass_AAsteroids1979_C__pf2955639682();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("ReceiveBeginPlay") ));
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "CppFromBpEvent", "" },
				{ "DisplayName", "BeginPlay" },
				{ "ModuleRelativePath", "Public/Asteroids1979__pf2955639682.h" },
				{ "OverrideNativeName", "ReceiveBeginPlay" },
				{ "ToolTip", "Event when play begins for this actor." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AAsteroids1979_C__pf2955639682, "ReceiveBeginPlay", RF_Public|RF_Transient, nullptr, (EFunctionFlags)0x00020C01, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AAsteroids1979_C__pf2955639682_bpf__ReceiveTick__pf()
	{
		UObject* Outer = Z_Construct_UClass_AAsteroids1979_C__pf2955639682();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("ReceiveTick") ));
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpp__DeltaSeconds__pf = { UE4CodeGen_Private::EPropertyClass::Float, "bpp__DeltaSeconds__pf", RF_Public|RF_Transient, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Asteroids1979_C__pf2955639682_eventbpf__ReceiveTick__pf_Parms, bpp__DeltaSeconds__pf), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bpp__DeltaSeconds__pf,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "CppFromBpEvent", "" },
				{ "DisplayName", "Tick" },
				{ "ModuleRelativePath", "Public/Asteroids1979__pf2955639682.h" },
				{ "OverrideNativeName", "ReceiveTick" },
				{ "ToolTip", "Event called every frame" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AAsteroids1979_C__pf2955639682, "ReceiveTick", RF_Public|RF_Transient, nullptr, (EFunctionFlags)0x00020C01, sizeof(Asteroids1979_C__pf2955639682_eventbpf__ReceiveTick__pf_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AAsteroids1979_C__pf2955639682_bpf__SpawnAliens__pf()
	{
		UObject* Outer = Z_Construct_UClass_AAsteroids1979_C__pf2955639682();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("SpawnAliens") ));
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "" },
				{ "ModuleRelativePath", "Public/Asteroids1979__pf2955639682.h" },
				{ "OverrideNativeName", "SpawnAliens" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AAsteroids1979_C__pf2955639682, "SpawnAliens", RF_Public|RF_Transient, nullptr, (EFunctionFlags)0x04020400, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AAsteroids1979_C__pf2955639682_bpf__SpawnLargeAsteroids__pf()
	{
		struct Asteroids1979_C__pf2955639682_eventbpf__SpawnLargeAsteroids__pf_Parms
		{
			int32 bpp__HowMany__pf;
		};
		UObject* Outer = Z_Construct_UClass_AAsteroids1979_C__pf2955639682();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("SpawnLargeAsteroids") ));
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_bpp__HowMany__pf = { UE4CodeGen_Private::EPropertyClass::Int, "bpp__HowMany__pf", RF_Public|RF_Transient, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Asteroids1979_C__pf2955639682_eventbpf__SpawnLargeAsteroids__pf_Parms, bpp__HowMany__pf), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bpp__HowMany__pf,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "" },
				{ "ModuleRelativePath", "Public/Asteroids1979__pf2955639682.h" },
				{ "OverrideNativeName", "SpawnLargeAsteroids" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AAsteroids1979_C__pf2955639682, "SpawnLargeAsteroids", RF_Public|RF_Transient, nullptr, (EFunctionFlags)0x04020400, sizeof(Asteroids1979_C__pf2955639682_eventbpf__SpawnLargeAsteroids__pf_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AAsteroids1979_C__pf2955639682_bpf__UserConstructionScript__pf()
	{
		UObject* Outer = Z_Construct_UClass_AAsteroids1979_C__pf2955639682();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("UserConstructionScript") ));
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "BlueprintInternalUseOnly", "true" },
				{ "Category", "" },
				{ "CppFromBpEvent", "" },
				{ "DisplayName", "Construction Script" },
				{ "ModuleRelativePath", "Public/Asteroids1979__pf2955639682.h" },
				{ "OverrideNativeName", "UserConstructionScript" },
				{ "ToolTip", "Construction script, the place to spawn components and do other setup.@note Name used in CreateBlueprint function@param       Location        The location.@param       Rotation        The rotation." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AAsteroids1979_C__pf2955639682, "UserConstructionScript", RF_Public|RF_Transient, nullptr, (EFunctionFlags)0x04020C01, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AAsteroids1979_C__pf2955639682_NoRegister()
	{
		return AAsteroids1979_C__pf2955639682::StaticClass();
	}
	UClass* Z_Construct_UClass_AAsteroids1979_C__pf2955639682()
	{
		UPackage* OuterPackage = FindOrConstructDynamicTypePackage(TEXT("/Game/Modes/Arcade1979/Asteroids1979"));
		UClass* OuterClass = Cast<UClass>(StaticFindObjectFast(UClass::StaticClass(), OuterPackage, TEXT("Asteroids1979_C")));
		if (!OuterClass || !(OuterClass->ClassFlags & CLASS_Constructed))
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AGameMode,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_AAsteroids1979_C__pf2955639682_bpf__ExecuteUbergraph_Asteroids1979__pf_1, "ExecuteUbergraph_Asteroids1979_1" }, // 3888225536
				{ &Z_Construct_UFunction_AAsteroids1979_C__pf2955639682_bpf__K2_PostLogin__pf, "K2_PostLogin" }, // 3082451774
				{ &Z_Construct_UFunction_AAsteroids1979_C__pf2955639682_bpf__PlayerDied__pf, "PlayerDied" }, // 162233700
				{ &Z_Construct_UFunction_AAsteroids1979_C__pf2955639682_bpf__ReceiveBeginPlay__pf, "ReceiveBeginPlay" }, // 2363826361
				{ &Z_Construct_UFunction_AAsteroids1979_C__pf2955639682_bpf__ReceiveTick__pf, "ReceiveTick" }, // 2388575631
				{ &Z_Construct_UFunction_AAsteroids1979_C__pf2955639682_bpf__SpawnAliens__pf, "SpawnAliens" }, // 2114559801
				{ &Z_Construct_UFunction_AAsteroids1979_C__pf2955639682_bpf__SpawnLargeAsteroids__pf, "SpawnLargeAsteroids" }, // 2211423237
				{ &Z_Construct_UFunction_AAsteroids1979_C__pf2955639682_bpf__UserConstructionScript__pf, "UserConstructionScript" }, // 3314893814
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
				{ "IncludePath", "Asteroids1979__pf2955639682.h" },
				{ "IsBlueprintBase", "true" },
				{ "ModuleRelativePath", "Public/Asteroids1979__pf2955639682.h" },
				{ "ObjectInitializerConstructorDeclared", "" },
				{ "OverrideNativeName", "Asteroids1979_C" },
				{ "ReplaceConverted", "/Game/Modes/Arcade1979/Asteroids1979.Asteroids1979_C" },
				{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_bSuccess2__pf_MetaData[] = {
				{ "ModuleRelativePath", "Public/Asteroids1979__pf2955639682.h" },
				{ "OverrideNativeName", "K2Node_DynamicCast_bSuccess2" },
			};
#endif
			auto NewProp_b0l__K2Node_DynamicCast_bSuccess2__pf_SetBit = [](void* Obj){ ((AAsteroids1979_C__pf2955639682*)Obj)->b0l__K2Node_DynamicCast_bSuccess2__pf = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b0l__K2Node_DynamicCast_bSuccess2__pf = { UE4CodeGen_Private::EPropertyClass::Bool, "K2Node_DynamicCast_bSuccess2", RF_Public|RF_Transient, 0x0010000000202000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AAsteroids1979_C__pf2955639682), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_b0l__K2Node_DynamicCast_bSuccess2__pf_SetBit)>::SetBit, METADATA_PARAMS(NewProp_b0l__K2Node_DynamicCast_bSuccess2__pf_MetaData, ARRAY_COUNT(NewProp_b0l__K2Node_DynamicCast_bSuccess2__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_AsGame_State_1979__pf_MetaData[] = {
				{ "ModuleRelativePath", "Public/Asteroids1979__pf2955639682.h" },
				{ "OverrideNativeName", "K2Node_DynamicCast_AsGame_State_1979" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__K2Node_DynamicCast_AsGame_State_1979__pf = { UE4CodeGen_Private::EPropertyClass::Object, "K2Node_DynamicCast_AsGame_State_1979", RF_Public|RF_Transient, 0x0010000000202000, 1, nullptr, STRUCT_OFFSET(AAsteroids1979_C__pf2955639682, b0l__K2Node_DynamicCast_AsGame_State_1979__pf), Z_Construct_UClass_AGameState_1979_C__pf2955639682_NoRegister, METADATA_PARAMS(NewProp_b0l__K2Node_DynamicCast_AsGame_State_1979__pf_MetaData, ARRAY_COUNT(NewProp_b0l__K2Node_DynamicCast_AsGame_State_1979__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors1__pf_MetaData[] = {
				{ "ModuleRelativePath", "Public/Asteroids1979__pf2955639682.h" },
				{ "OverrideNativeName", "CallFunc_GetAllActorsOfClass_OutActors1" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors1__pf = { UE4CodeGen_Private::EPropertyClass::Array, "CallFunc_GetAllActorsOfClass_OutActors1", RF_Public|RF_Transient, 0x0010000000202000, 1, nullptr, STRUCT_OFFSET(AAsteroids1979_C__pf2955639682, b0l__CallFunc_GetAllActorsOfClass_OutActors1__pf), METADATA_PARAMS(NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors1__pf_MetaData, ARRAY_COUNT(NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors1__pf_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors1__pf_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "b0l__CallFunc_GetAllActorsOfClass_OutActors1__pf", RF_Public|RF_Transient, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_ASpawn_Volume_C__pf2174024837_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_Event_NewPlayer__pf_MetaData[] = {
				{ "ModuleRelativePath", "Public/Asteroids1979__pf2955639682.h" },
				{ "OverrideNativeName", "K2Node_Event_NewPlayer" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__K2Node_Event_NewPlayer__pf = { UE4CodeGen_Private::EPropertyClass::Object, "K2Node_Event_NewPlayer", RF_Public|RF_Transient, 0x0010000000202000, 1, nullptr, STRUCT_OFFSET(AAsteroids1979_C__pf2955639682, b0l__K2Node_Event_NewPlayer__pf), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(NewProp_b0l__K2Node_Event_NewPlayer__pf_MetaData, ARRAY_COUNT(NewProp_b0l__K2Node_Event_NewPlayer__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors__pf_MetaData[] = {
				{ "ModuleRelativePath", "Public/Asteroids1979__pf2955639682.h" },
				{ "OverrideNativeName", "CallFunc_GetAllActorsOfClass_OutActors" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors__pf = { UE4CodeGen_Private::EPropertyClass::Array, "CallFunc_GetAllActorsOfClass_OutActors", RF_Public|RF_Transient, 0x0010000000202000, 1, nullptr, STRUCT_OFFSET(AAsteroids1979_C__pf2955639682, b0l__CallFunc_GetAllActorsOfClass_OutActors__pf), METADATA_PARAMS(NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors__pf_MetaData, ARRAY_COUNT(NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors__pf_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors__pf_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "b0l__CallFunc_GetAllActorsOfClass_OutActors__pf", RF_Public|RF_Transient, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_APlayerStart_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_Event_DeltaSeconds__pf_MetaData[] = {
				{ "ModuleRelativePath", "Public/Asteroids1979__pf2955639682.h" },
				{ "OverrideNativeName", "K2Node_Event_DeltaSeconds" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_b0l__K2Node_Event_DeltaSeconds__pf = { UE4CodeGen_Private::EPropertyClass::Float, "K2Node_Event_DeltaSeconds", RF_Public|RF_Transient, 0x0010000000202000, 1, nullptr, STRUCT_OFFSET(AAsteroids1979_C__pf2955639682, b0l__K2Node_Event_DeltaSeconds__pf), METADATA_PARAMS(NewProp_b0l__K2Node_Event_DeltaSeconds__pf_MetaData, ARRAY_COUNT(NewProp_b0l__K2Node_Event_DeltaSeconds__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_bSuccess1__pf_MetaData[] = {
				{ "ModuleRelativePath", "Public/Asteroids1979__pf2955639682.h" },
				{ "OverrideNativeName", "K2Node_DynamicCast_bSuccess1" },
			};
#endif
			auto NewProp_b0l__K2Node_DynamicCast_bSuccess1__pf_SetBit = [](void* Obj){ ((AAsteroids1979_C__pf2955639682*)Obj)->b0l__K2Node_DynamicCast_bSuccess1__pf = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b0l__K2Node_DynamicCast_bSuccess1__pf = { UE4CodeGen_Private::EPropertyClass::Bool, "K2Node_DynamicCast_bSuccess1", RF_Public|RF_Transient, 0x0010000000202000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AAsteroids1979_C__pf2955639682), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_b0l__K2Node_DynamicCast_bSuccess1__pf_SetBit)>::SetBit, METADATA_PARAMS(NewProp_b0l__K2Node_DynamicCast_bSuccess1__pf_MetaData, ARRAY_COUNT(NewProp_b0l__K2Node_DynamicCast_bSuccess1__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_AsPlayer_State_1979__pf_MetaData[] = {
				{ "ModuleRelativePath", "Public/Asteroids1979__pf2955639682.h" },
				{ "OverrideNativeName", "K2Node_DynamicCast_AsPlayer_State_1979" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__K2Node_DynamicCast_AsPlayer_State_1979__pf = { UE4CodeGen_Private::EPropertyClass::Object, "K2Node_DynamicCast_AsPlayer_State_1979", RF_Public|RF_Transient, 0x0010000000202000, 1, nullptr, STRUCT_OFFSET(AAsteroids1979_C__pf2955639682, b0l__K2Node_DynamicCast_AsPlayer_State_1979__pf), Z_Construct_UClass_APlayerState_1979_C__pf2955639682_NoRegister, METADATA_PARAMS(NewProp_b0l__K2Node_DynamicCast_AsPlayer_State_1979__pf_MetaData, ARRAY_COUNT(NewProp_b0l__K2Node_DynamicCast_AsPlayer_State_1979__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_MetaData[] = {
				{ "ModuleRelativePath", "Public/Asteroids1979__pf2955639682.h" },
				{ "OverrideNativeName", "K2Node_DynamicCast_bSuccess" },
			};
#endif
			auto NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_SetBit = [](void* Obj){ ((AAsteroids1979_C__pf2955639682*)Obj)->b0l__K2Node_DynamicCast_bSuccess__pf = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b0l__K2Node_DynamicCast_bSuccess__pf = { UE4CodeGen_Private::EPropertyClass::Bool, "K2Node_DynamicCast_bSuccess", RF_Public|RF_Transient, 0x0010000000202000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AAsteroids1979_C__pf2955639682), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_SetBit)>::SetBit, METADATA_PARAMS(NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_MetaData, ARRAY_COUNT(NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_AsPlayer_Controller_1979__pf_MetaData[] = {
				{ "ModuleRelativePath", "Public/Asteroids1979__pf2955639682.h" },
				{ "OverrideNativeName", "K2Node_DynamicCast_AsPlayer_Controller_1979" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__K2Node_DynamicCast_AsPlayer_Controller_1979__pf = { UE4CodeGen_Private::EPropertyClass::Object, "K2Node_DynamicCast_AsPlayer_Controller_1979", RF_Public|RF_Transient, 0x0010000000202000, 1, nullptr, STRUCT_OFFSET(AAsteroids1979_C__pf2955639682, b0l__K2Node_DynamicCast_AsPlayer_Controller_1979__pf), Z_Construct_UClass_APlayerController_1979_C__pf2955639682_NoRegister, METADATA_PARAMS(NewProp_b0l__K2Node_DynamicCast_AsPlayer_Controller_1979__pf_MetaData, ARRAY_COUNT(NewProp_b0l__K2Node_DynamicCast_AsPlayer_Controller_1979__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_CustomEvent_Instigator__pf_MetaData[] = {
				{ "ModuleRelativePath", "Public/Asteroids1979__pf2955639682.h" },
				{ "OverrideNativeName", "K2Node_CustomEvent_Instigator" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__K2Node_CustomEvent_Instigator__pf = { UE4CodeGen_Private::EPropertyClass::Object, "K2Node_CustomEvent_Instigator", RF_Public|RF_Transient, 0x0010000000202000, 1, nullptr, STRUCT_OFFSET(AAsteroids1979_C__pf2955639682, b0l__K2Node_CustomEvent_Instigator__pf), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(NewProp_b0l__K2Node_CustomEvent_Instigator__pf_MetaData, ARRAY_COUNT(NewProp_b0l__K2Node_CustomEvent_Instigator__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Aliens__pf_MetaData[] = {
				{ "Category", "Default" },
				{ "DisplayName", "Aliens" },
				{ "ModuleRelativePath", "Public/Asteroids1979__pf2955639682.h" },
				{ "OverrideNativeName", "Aliens" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_bpv__Aliens__pf = { UE4CodeGen_Private::EPropertyClass::Array, "Aliens", RF_Public|RF_Transient, 0x0010000000010005, 1, nullptr, STRUCT_OFFSET(AAsteroids1979_C__pf2955639682, bpv__Aliens__pf), METADATA_PARAMS(NewProp_bpv__Aliens__pf_MetaData, ARRAY_COUNT(NewProp_bpv__Aliens__pf_MetaData)) };
			static const UE4CodeGen_Private::FClassPropertyParams NewProp_bpv__Aliens__pf_Inner = { UE4CodeGen_Private::EPropertyClass::Class, "bpv__Aliens__pf", RF_Public|RF_Transient, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__LevelStartedx__pfzy_MetaData[] = {
				{ "Category", "Default" },
				{ "DisplayName", "Level Started?" },
				{ "ModuleRelativePath", "Public/Asteroids1979__pf2955639682.h" },
				{ "OverrideNativeName", "LevelStarted?" },
			};
#endif
			auto NewProp_bpv__LevelStartedx__pfzy_SetBit = [](void* Obj){ ((AAsteroids1979_C__pf2955639682*)Obj)->bpv__LevelStartedx__pfzy = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bpv__LevelStartedx__pfzy = { UE4CodeGen_Private::EPropertyClass::Bool, "LevelStarted?", RF_Public|RF_Transient, 0x0010000000010005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AAsteroids1979_C__pf2955639682), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bpv__LevelStartedx__pfzy_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bpv__LevelStartedx__pfzy_MetaData, ARRAY_COUNT(NewProp_bpv__LevelStartedx__pfzy_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__AlienSpawnRate__pf_MetaData[] = {
				{ "Category", "Default" },
				{ "DisplayName", "Alien Spawn Rate" },
				{ "ModuleRelativePath", "Public/Asteroids1979__pf2955639682.h" },
				{ "OverrideNativeName", "AlienSpawnRate" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpv__AlienSpawnRate__pf = { UE4CodeGen_Private::EPropertyClass::Float, "AlienSpawnRate", RF_Public|RF_Transient, 0x0010000000010005, 1, nullptr, STRUCT_OFFSET(AAsteroids1979_C__pf2955639682, bpv__AlienSpawnRate__pf), METADATA_PARAMS(NewProp_bpv__AlienSpawnRate__pf_MetaData, ARRAY_COUNT(NewProp_bpv__AlienSpawnRate__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__AlienSpawnCount__pf_MetaData[] = {
				{ "Category", "Default" },
				{ "DisplayName", "Alien Spawn Count" },
				{ "ModuleRelativePath", "Public/Asteroids1979__pf2955639682.h" },
				{ "OverrideNativeName", "AlienSpawnCount" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpv__AlienSpawnCount__pf = { UE4CodeGen_Private::EPropertyClass::Float, "AlienSpawnCount", RF_Public|RF_Transient, 0x0010000000010005, 1, nullptr, STRUCT_OFFSET(AAsteroids1979_C__pf2955639682, bpv__AlienSpawnCount__pf), METADATA_PARAMS(NewProp_bpv__AlienSpawnCount__pf_MetaData, ARRAY_COUNT(NewProp_bpv__AlienSpawnCount__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__PlayerStarts__pf_MetaData[] = {
				{ "Category", "Default" },
				{ "DisplayName", "Player Starts" },
				{ "ModuleRelativePath", "Public/Asteroids1979__pf2955639682.h" },
				{ "OverrideNativeName", "PlayerStarts" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_bpv__PlayerStarts__pf = { UE4CodeGen_Private::EPropertyClass::Array, "PlayerStarts", RF_Public|RF_Transient, 0x0010000000010005, 1, nullptr, STRUCT_OFFSET(AAsteroids1979_C__pf2955639682, bpv__PlayerStarts__pf), METADATA_PARAMS(NewProp_bpv__PlayerStarts__pf_MetaData, ARRAY_COUNT(NewProp_bpv__PlayerStarts__pf_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__PlayerStarts__pf_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "bpv__PlayerStarts__pf", RF_Public|RF_Transient, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_APlayerStart_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__SpawnVolumes__pf_MetaData[] = {
				{ "Category", "Default" },
				{ "DisplayName", "Spawn Volumes" },
				{ "ModuleRelativePath", "Public/Asteroids1979__pf2955639682.h" },
				{ "OverrideNativeName", "SpawnVolumes" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_bpv__SpawnVolumes__pf = { UE4CodeGen_Private::EPropertyClass::Array, "SpawnVolumes", RF_Public|RF_Transient, 0x0010000000010005, 1, nullptr, STRUCT_OFFSET(AAsteroids1979_C__pf2955639682, bpv__SpawnVolumes__pf), METADATA_PARAMS(NewProp_bpv__SpawnVolumes__pf_MetaData, ARRAY_COUNT(NewProp_bpv__SpawnVolumes__pf_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__SpawnVolumes__pf_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "bpv__SpawnVolumes__pf", RF_Public|RF_Transient, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_ASpawn_Volume_C__pf2174024837_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__DefaultSceneRoot__pf_MetaData[] = {
				{ "Category", "Default" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/Asteroids1979__pf2955639682.h" },
				{ "OverrideNativeName", "DefaultSceneRoot" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__DefaultSceneRoot__pf = { UE4CodeGen_Private::EPropertyClass::Object, "DefaultSceneRoot", RF_Public|RF_Transient, 0x001000040008000c, 1, nullptr, STRUCT_OFFSET(AAsteroids1979_C__pf2955639682, bpv__DefaultSceneRoot__pf), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(NewProp_bpv__DefaultSceneRoot__pf_MetaData, ARRAY_COUNT(NewProp_bpv__DefaultSceneRoot__pf_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b0l__K2Node_DynamicCast_bSuccess2__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b0l__K2Node_DynamicCast_AsGame_State_1979__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors1__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors1__pf_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b0l__K2Node_Event_NewPlayer__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors__pf_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b0l__K2Node_Event_DeltaSeconds__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b0l__K2Node_DynamicCast_bSuccess1__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b0l__K2Node_DynamicCast_AsPlayer_State_1979__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b0l__K2Node_DynamicCast_bSuccess__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b0l__K2Node_DynamicCast_AsPlayer_Controller_1979__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b0l__K2Node_CustomEvent_Instigator__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bpv__Aliens__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bpv__Aliens__pf_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bpv__LevelStartedx__pfzy,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bpv__AlienSpawnRate__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bpv__AlienSpawnCount__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bpv__PlayerStarts__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bpv__PlayerStarts__pf_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bpv__SpawnVolumes__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bpv__SpawnVolumes__pf_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bpv__DefaultSceneRoot__pf,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AAsteroids1979_C__pf2955639682>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AAsteroids1979_C__pf2955639682::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x0080028Cu,
				FuncInfo, ARRAY_COUNT(FuncInfo),
				PropPointers, ARRAY_COUNT(PropPointers),
				"Game",
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_DYNAMIC_CLASS(AAsteroids1979_C__pf2955639682, TEXT("Asteroids1979_C"), 861011291);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAsteroids1979_C__pf2955639682(Z_Construct_UClass_AAsteroids1979_C__pf2955639682, &AAsteroids1979_C__pf2955639682::StaticClass, TEXT("/Game/Modes/Arcade1979/Asteroids1979"), TEXT("Asteroids1979_C"), true, TEXT("/Game/Modes/Arcade1979/Asteroids1979"), TEXT("/Game/Modes/Arcade1979/Asteroids1979.Asteroids1979_C"), nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAsteroids1979_C__pf2955639682);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
