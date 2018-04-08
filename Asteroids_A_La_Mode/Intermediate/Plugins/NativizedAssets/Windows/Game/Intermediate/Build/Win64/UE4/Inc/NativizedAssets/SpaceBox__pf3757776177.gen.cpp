// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Private/NativizedAssets.h"
#include "Public/SpaceBox__pf3757776177.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpaceBox__pf3757776177() {}
// Cross Module References
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_ASpaceBox_C__pf3757776177_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_ASpaceBox_C__pf3757776177();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	NATIVIZEDASSETS_API UFunction* Z_Construct_UFunction_ASpaceBox_C__pf3757776177_bpf__UserConstructionScript__pf();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	static FName NAME_ASpaceBox_C__pf3757776177_bpf__UserConstructionScript__pf = FName(TEXT("UserConstructionScript"));
	void ASpaceBox_C__pf3757776177::eventbpf__UserConstructionScript__pf()
	{
		ProcessEvent(FindFunctionChecked(NAME_ASpaceBox_C__pf3757776177_bpf__UserConstructionScript__pf),NULL);
	}
	void ASpaceBox_C__pf3757776177::StaticRegisterNativesASpaceBox_C__pf3757776177()
	{
		UClass* Class = ASpaceBox_C__pf3757776177::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "UserConstructionScript", &ASpaceBox_C__pf3757776177::execbpf__UserConstructionScript__pf },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_ASpaceBox_C__pf3757776177_bpf__UserConstructionScript__pf()
	{
		UObject* Outer = Z_Construct_UClass_ASpaceBox_C__pf3757776177();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("UserConstructionScript") ));
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "BlueprintInternalUseOnly", "true" },
				{ "Category", "" },
				{ "CppFromBpEvent", "" },
				{ "DisplayName", "Construction Script" },
				{ "ModuleRelativePath", "Public/SpaceBox__pf3757776177.h" },
				{ "OverrideNativeName", "UserConstructionScript" },
				{ "ToolTip", "Construction script, the place to spawn components and do other setup.@note Name used in CreateBlueprint function@param       Location        The location.@param       Rotation        The rotation." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ASpaceBox_C__pf3757776177, "UserConstructionScript", RF_Public|RF_Transient, nullptr, (EFunctionFlags)0x04020C01, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASpaceBox_C__pf3757776177_NoRegister()
	{
		return ASpaceBox_C__pf3757776177::StaticClass();
	}
	UClass* Z_Construct_UClass_ASpaceBox_C__pf3757776177()
	{
		UPackage* OuterPackage = FindOrConstructDynamicTypePackage(TEXT("/Game/Levels/Assets/Skybox/SpaceBox"));
		UClass* OuterClass = Cast<UClass>(StaticFindObjectFast(UClass::StaticClass(), OuterPackage, TEXT("SpaceBox_C")));
		if (!OuterClass || !(OuterClass->ClassFlags & CLASS_Constructed))
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AActor,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_ASpaceBox_C__pf3757776177_bpf__UserConstructionScript__pf, "UserConstructionScript" }, // 554530909
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "IncludePath", "SpaceBox__pf3757776177.h" },
				{ "IsBlueprintBase", "true" },
				{ "ModuleRelativePath", "Public/SpaceBox__pf3757776177.h" },
				{ "ObjectInitializerConstructorDeclared", "" },
				{ "OverrideNativeName", "SpaceBox_C" },
				{ "ReplaceConverted", "/Game/Levels/Assets/Skybox/SpaceBox.SpaceBox_C,/Game/Levels/Assets/SpaceBox.SpaceBox_C" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__DefaultSceneRoot__pf_MetaData[] = {
				{ "Category", "Default" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/SpaceBox__pf3757776177.h" },
				{ "OverrideNativeName", "DefaultSceneRoot" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__DefaultSceneRoot__pf = { UE4CodeGen_Private::EPropertyClass::Object, "DefaultSceneRoot", RF_Public|RF_Transient, 0x001000040008000c, 1, nullptr, STRUCT_OFFSET(ASpaceBox_C__pf3757776177, bpv__DefaultSceneRoot__pf), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(NewProp_bpv__DefaultSceneRoot__pf_MetaData, ARRAY_COUNT(NewProp_bpv__DefaultSceneRoot__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Skybox__pf_MetaData[] = {
				{ "Category", "Default" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/SpaceBox__pf3757776177.h" },
				{ "OverrideNativeName", "Skybox" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__Skybox__pf = { UE4CodeGen_Private::EPropertyClass::Object, "Skybox", RF_Public|RF_Transient, 0x001000040008000c, 1, nullptr, STRUCT_OFFSET(ASpaceBox_C__pf3757776177, bpv__Skybox__pf), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(NewProp_bpv__Skybox__pf_MetaData, ARRAY_COUNT(NewProp_bpv__Skybox__pf_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bpv__DefaultSceneRoot__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bpv__Skybox__pf,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<ASpaceBox_C__pf3757776177>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&ASpaceBox_C__pf3757776177::StaticClass,
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
	IMPLEMENT_DYNAMIC_CLASS(ASpaceBox_C__pf3757776177, TEXT("SpaceBox_C"), 3918183805);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASpaceBox_C__pf3757776177(Z_Construct_UClass_ASpaceBox_C__pf3757776177, &ASpaceBox_C__pf3757776177::StaticClass, TEXT("/Game/Levels/Assets/Skybox/SpaceBox"), TEXT("SpaceBox_C"), true, TEXT("/Game/Levels/Assets/Skybox/SpaceBox"), TEXT("/Game/Levels/Assets/Skybox/SpaceBox.SpaceBox_C"), nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASpaceBox_C__pf3757776177);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
