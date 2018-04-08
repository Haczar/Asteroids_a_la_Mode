// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Private/NativizedAssets.h"
#include "Public/Asteroid_Medium__pf2772898577.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAsteroid_Medium__pf2772898577() {}
// Cross Module References
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_AAsteroid_Medium_C__pf2772898577_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_AAsteroid_Medium_C__pf2772898577();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_AAsteroid_C__pf2772898577();
	NATIVIZEDASSETS_API UFunction* Z_Construct_UFunction_AAsteroid_Medium_C__pf2772898577_bpf__UserConstructionScript__pf();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
// End Cross Module References
	static FName NAME_AAsteroid_Medium_C__pf2772898577_bpf__UserConstructionScript__pf = FName(TEXT("UserConstructionScript"));
	void AAsteroid_Medium_C__pf2772898577::eventbpf__UserConstructionScript__pf()
	{
		ProcessEvent(FindFunctionChecked(NAME_AAsteroid_Medium_C__pf2772898577_bpf__UserConstructionScript__pf),NULL);
	}
	void AAsteroid_Medium_C__pf2772898577::StaticRegisterNativesAAsteroid_Medium_C__pf2772898577()
	{
		UClass* Class = AAsteroid_Medium_C__pf2772898577::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "UserConstructionScript", &AAsteroid_Medium_C__pf2772898577::execbpf__UserConstructionScript__pf },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_AAsteroid_Medium_C__pf2772898577_bpf__UserConstructionScript__pf()
	{
		UObject* Outer = Z_Construct_UClass_AAsteroid_Medium_C__pf2772898577();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("UserConstructionScript") ));
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "BlueprintInternalUseOnly", "true" },
				{ "Category", "" },
				{ "CppFromBpEvent", "" },
				{ "DisplayName", "Construction Script" },
				{ "ModuleRelativePath", "Public/Asteroid_Medium__pf2772898577.h" },
				{ "OverrideNativeName", "UserConstructionScript" },
				{ "ToolTip", "Construction script, the place to spawn components and do other setup.@note Name used in CreateBlueprint function@param       Location        The location.@param       Rotation        The rotation." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AAsteroid_Medium_C__pf2772898577, "UserConstructionScript", RF_Public|RF_Transient, nullptr, (EFunctionFlags)0x04020C01, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AAsteroid_Medium_C__pf2772898577_NoRegister()
	{
		return AAsteroid_Medium_C__pf2772898577::StaticClass();
	}
	UClass* Z_Construct_UClass_AAsteroid_Medium_C__pf2772898577()
	{
		UPackage* OuterPackage = FindOrConstructDynamicTypePackage(TEXT("/Game/Obstacles/Asteroid_Medium"));
		UClass* OuterClass = Cast<UClass>(StaticFindObjectFast(UClass::StaticClass(), OuterPackage, TEXT("Asteroid_Medium_C")));
		if (!OuterClass || !(OuterClass->ClassFlags & CLASS_Constructed))
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AAsteroid_C__pf2772898577,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_AAsteroid_Medium_C__pf2772898577_bpf__UserConstructionScript__pf, "UserConstructionScript" }, // 3393317483
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "IncludePath", "Asteroid_Medium__pf2772898577.h" },
				{ "IsBlueprintBase", "true" },
				{ "ModuleRelativePath", "Public/Asteroid_Medium__pf2772898577.h" },
				{ "ObjectInitializerConstructorDeclared", "" },
				{ "OverrideNativeName", "Asteroid_Medium_C" },
				{ "ReplaceConverted", "/Game/Obstacles/Asteroid_Medium.Asteroid_Medium_C" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b1l__CallFunc_BreakTransform_Scale__pf_MetaData[] = {
				{ "ModuleRelativePath", "Public/Asteroid_Medium__pf2772898577.h" },
				{ "OverrideNativeName", "CallFunc_BreakTransform_Scale" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_b1l__CallFunc_BreakTransform_Scale__pf = { UE4CodeGen_Private::EPropertyClass::Struct, "CallFunc_BreakTransform_Scale", RF_Public|RF_Transient, 0x0010000000202000, 1, nullptr, STRUCT_OFFSET(AAsteroid_Medium_C__pf2772898577, b1l__CallFunc_BreakTransform_Scale__pf), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_b1l__CallFunc_BreakTransform_Scale__pf_MetaData, ARRAY_COUNT(NewProp_b1l__CallFunc_BreakTransform_Scale__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b1l__CallFunc_BreakTransform_Rotation__pf_MetaData[] = {
				{ "ModuleRelativePath", "Public/Asteroid_Medium__pf2772898577.h" },
				{ "OverrideNativeName", "CallFunc_BreakTransform_Rotation" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_b1l__CallFunc_BreakTransform_Rotation__pf = { UE4CodeGen_Private::EPropertyClass::Struct, "CallFunc_BreakTransform_Rotation", RF_Public|RF_Transient, 0x0010000000202000, 1, nullptr, STRUCT_OFFSET(AAsteroid_Medium_C__pf2772898577, b1l__CallFunc_BreakTransform_Rotation__pf), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(NewProp_b1l__CallFunc_BreakTransform_Rotation__pf_MetaData, ARRAY_COUNT(NewProp_b1l__CallFunc_BreakTransform_Rotation__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b1l__CallFunc_BreakTransform_Location__pf_MetaData[] = {
				{ "ModuleRelativePath", "Public/Asteroid_Medium__pf2772898577.h" },
				{ "OverrideNativeName", "CallFunc_BreakTransform_Location" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_b1l__CallFunc_BreakTransform_Location__pf = { UE4CodeGen_Private::EPropertyClass::Struct, "CallFunc_BreakTransform_Location", RF_Public|RF_Transient, 0x0010000000202000, 1, nullptr, STRUCT_OFFSET(AAsteroid_Medium_C__pf2772898577, b1l__CallFunc_BreakTransform_Location__pf), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_b1l__CallFunc_BreakTransform_Location__pf_MetaData, ARRAY_COUNT(NewProp_b1l__CallFunc_BreakTransform_Location__pf_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b1l__CallFunc_BreakTransform_Scale__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b1l__CallFunc_BreakTransform_Rotation__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b1l__CallFunc_BreakTransform_Location__pf,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AAsteroid_Medium_C__pf2772898577>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AAsteroid_Medium_C__pf2772898577::StaticClass,
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
	IMPLEMENT_DYNAMIC_CLASS(AAsteroid_Medium_C__pf2772898577, TEXT("Asteroid_Medium_C"), 2220374637);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAsteroid_Medium_C__pf2772898577(Z_Construct_UClass_AAsteroid_Medium_C__pf2772898577, &AAsteroid_Medium_C__pf2772898577::StaticClass, TEXT("/Game/Obstacles/Asteroid_Medium"), TEXT("Asteroid_Medium_C"), true, TEXT("/Game/Obstacles/Asteroid_Medium"), TEXT("/Game/Obstacles/Asteroid_Medium.Asteroid_Medium_C"), nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAsteroid_Medium_C__pf2772898577);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
