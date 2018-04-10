// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Private/NativizedAssets.h"
#include "Public/GameState_1979__pf2955639682.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameState_1979__pf2955639682() {}
// Cross Module References
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_AGameState_1979_C__pf2955639682_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_AGameState_1979_C__pf2955639682();
	ENGINE_API UClass* Z_Construct_UClass_AGameState();
	NATIVIZEDASSETS_API UFunction* Z_Construct_UFunction_AGameState_1979_C__pf2955639682_bpf__SetPlayerControllers__pf();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
	NATIVIZEDASSETS_API UFunction* Z_Construct_UFunction_AGameState_1979_C__pf2955639682_bpf__UserConstructionScript__pf();
	ENGINE_API UClass* Z_Construct_UClass_ACameraActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
// End Cross Module References
	static FName NAME_AGameState_1979_C__pf2955639682_bpf__UserConstructionScript__pf = FName(TEXT("UserConstructionScript"));
	void AGameState_1979_C__pf2955639682::eventbpf__UserConstructionScript__pf()
	{
		ProcessEvent(FindFunctionChecked(NAME_AGameState_1979_C__pf2955639682_bpf__UserConstructionScript__pf),NULL);
	}
	void AGameState_1979_C__pf2955639682::StaticRegisterNativesAGameState_1979_C__pf2955639682()
	{
		UClass* Class = AGameState_1979_C__pf2955639682::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetPlayerControllers", &AGameState_1979_C__pf2955639682::execbpf__SetPlayerControllers__pf },
			{ "UserConstructionScript", &AGameState_1979_C__pf2955639682::execbpf__UserConstructionScript__pf },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_AGameState_1979_C__pf2955639682_bpf__SetPlayerControllers__pf()
	{
		struct GameState_1979_C__pf2955639682_eventbpf__SetPlayerControllers__pf_Parms
		{
			APlayerController* bpp__Player__pf;
		};
		UObject* Outer = Z_Construct_UClass_AGameState_1979_C__pf2955639682();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("SetPlayerControllers") ));
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpp__Player__pf = { UE4CodeGen_Private::EPropertyClass::Object, "bpp__Player__pf", RF_Public|RF_Transient, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(GameState_1979_C__pf2955639682_eventbpf__SetPlayerControllers__pf_Parms, bpp__Player__pf), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bpp__Player__pf,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "" },
				{ "ModuleRelativePath", "Public/GameState_1979__pf2955639682.h" },
				{ "OverrideNativeName", "SetPlayerControllers" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameState_1979_C__pf2955639682, "SetPlayerControllers", RF_Public|RF_Transient, nullptr, (EFunctionFlags)0x04020400, sizeof(GameState_1979_C__pf2955639682_eventbpf__SetPlayerControllers__pf_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AGameState_1979_C__pf2955639682_bpf__UserConstructionScript__pf()
	{
		UObject* Outer = Z_Construct_UClass_AGameState_1979_C__pf2955639682();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("UserConstructionScript") ));
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "BlueprintInternalUseOnly", "true" },
				{ "Category", "" },
				{ "CppFromBpEvent", "" },
				{ "DisplayName", "Construction Script" },
				{ "ModuleRelativePath", "Public/GameState_1979__pf2955639682.h" },
				{ "OverrideNativeName", "UserConstructionScript" },
				{ "ToolTip", "Construction script, the place to spawn components and do other setup.@note Name used in CreateBlueprint function@param       Location        The location.@param       Rotation        The rotation." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameState_1979_C__pf2955639682, "UserConstructionScript", RF_Public|RF_Transient, nullptr, (EFunctionFlags)0x04020C01, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AGameState_1979_C__pf2955639682_NoRegister()
	{
		return AGameState_1979_C__pf2955639682::StaticClass();
	}
	UClass* Z_Construct_UClass_AGameState_1979_C__pf2955639682()
	{
		UPackage* OuterPackage = FindOrConstructDynamicTypePackage(TEXT("/Game/Modes/Arcade1979/GameState_1979"));
		UClass* OuterClass = Cast<UClass>(StaticFindObjectFast(UClass::StaticClass(), OuterPackage, TEXT("GameState_1979_C")));
		if (!OuterClass || !(OuterClass->ClassFlags & CLASS_Constructed))
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AGameState,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_AGameState_1979_C__pf2955639682_bpf__SetPlayerControllers__pf, "SetPlayerControllers" }, // 3557019348
				{ &Z_Construct_UFunction_AGameState_1979_C__pf2955639682_bpf__UserConstructionScript__pf, "UserConstructionScript" }, // 3116890002
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "HideCategories", "Input Movement Collision Rendering Utilities|Transformation" },
				{ "IncludePath", "GameState_1979__pf2955639682.h" },
				{ "IsBlueprintBase", "true" },
				{ "ModuleRelativePath", "Public/GameState_1979__pf2955639682.h" },
				{ "ObjectInitializerConstructorDeclared", "" },
				{ "OverrideNativeName", "GameState_1979_C" },
				{ "ReplaceConverted", "/Game/Modes/Arcade1979/GameState_1979.GameState_1979_C" },
				{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__OneCamera__pf_MetaData[] = {
				{ "Category", "Default" },
				{ "DisplayName", "One Camera" },
				{ "ModuleRelativePath", "Public/GameState_1979__pf2955639682.h" },
				{ "OverrideNativeName", "OneCamera" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__OneCamera__pf = { UE4CodeGen_Private::EPropertyClass::Object, "OneCamera", RF_Public|RF_Transient, 0x0010000000010005, 1, nullptr, STRUCT_OFFSET(AGameState_1979_C__pf2955639682, bpv__OneCamera__pf), Z_Construct_UClass_ACameraActor_NoRegister, METADATA_PARAMS(NewProp_bpv__OneCamera__pf_MetaData, ARRAY_COUNT(NewProp_bpv__OneCamera__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__PlayerCx2xRef__pfTT_MetaData[] = {
				{ "Category", "Default" },
				{ "DisplayName", "Player C 2 Ref" },
				{ "ModuleRelativePath", "Public/GameState_1979__pf2955639682.h" },
				{ "OverrideNativeName", "PlayerC 2 Ref" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__PlayerCx2xRef__pfTT = { UE4CodeGen_Private::EPropertyClass::Object, "PlayerC 2 Ref", RF_Public|RF_Transient, 0x0010000000010005, 1, nullptr, STRUCT_OFFSET(AGameState_1979_C__pf2955639682, bpv__PlayerCx2xRef__pfTT), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(NewProp_bpv__PlayerCx2xRef__pfTT_MetaData, ARRAY_COUNT(NewProp_bpv__PlayerCx2xRef__pfTT_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__PlayerCx1xRef__pfTT_MetaData[] = {
				{ "Category", "Default" },
				{ "DisplayName", "Player C 1 Ref" },
				{ "ModuleRelativePath", "Public/GameState_1979__pf2955639682.h" },
				{ "OverrideNativeName", "PlayerC 1 Ref" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__PlayerCx1xRef__pfTT = { UE4CodeGen_Private::EPropertyClass::Object, "PlayerC 1 Ref", RF_Public|RF_Transient, 0x0010000000010005, 1, nullptr, STRUCT_OFFSET(AGameState_1979_C__pf2955639682, bpv__PlayerCx1xRef__pfTT), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(NewProp_bpv__PlayerCx1xRef__pfTT_MetaData, ARRAY_COUNT(NewProp_bpv__PlayerCx1xRef__pfTT_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__DefaultSceneRoot__pf_MetaData[] = {
				{ "Category", "Default" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/GameState_1979__pf2955639682.h" },
				{ "OverrideNativeName", "DefaultSceneRoot" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__DefaultSceneRoot__pf = { UE4CodeGen_Private::EPropertyClass::Object, "DefaultSceneRoot", RF_Public|RF_Transient, 0x001000040008000c, 1, nullptr, STRUCT_OFFSET(AGameState_1979_C__pf2955639682, bpv__DefaultSceneRoot__pf), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(NewProp_bpv__DefaultSceneRoot__pf_MetaData, ARRAY_COUNT(NewProp_bpv__DefaultSceneRoot__pf_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bpv__OneCamera__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bpv__PlayerCx2xRef__pfTT,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bpv__PlayerCx1xRef__pfTT,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bpv__DefaultSceneRoot__pf,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AGameState_1979_C__pf2955639682>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AGameState_1979_C__pf2955639682::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00800280u,
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
	IMPLEMENT_DYNAMIC_CLASS(AGameState_1979_C__pf2955639682, TEXT("GameState_1979_C"), 271852183);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGameState_1979_C__pf2955639682(Z_Construct_UClass_AGameState_1979_C__pf2955639682, &AGameState_1979_C__pf2955639682::StaticClass, TEXT("/Game/Modes/Arcade1979/GameState_1979"), TEXT("GameState_1979_C"), true, TEXT("/Game/Modes/Arcade1979/GameState_1979"), TEXT("/Game/Modes/Arcade1979/GameState_1979.GameState_1979_C"), nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGameState_1979_C__pf2955639682);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
