// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Sci_fi_42_seconds/MoveAndRotate.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMoveAndRotate() {}
// Cross Module References
	SCI_FI_42_SECONDS_API UClass* Z_Construct_UClass_AMoveAndRotate_NoRegister();
	SCI_FI_42_SECONDS_API UClass* Z_Construct_UClass_AMoveAndRotate();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Sci_fi_42_seconds();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FQuat();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	void AMoveAndRotate::StaticRegisterNativesAMoveAndRotate()
	{
	}
	UClass* Z_Construct_UClass_AMoveAndRotate_NoRegister()
	{
		return AMoveAndRotate::StaticClass();
	}
	struct Z_Construct_UClass_AMoveAndRotate_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewTransform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewTransform;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMoveAndRotate_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Sci_fi_42_seconds,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMoveAndRotate_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MoveAndRotate.h" },
		{ "ModuleRelativePath", "MoveAndRotate.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMoveAndRotate_Statics::NewProp_NewRotation_MetaData[] = {
		{ "Category", "Position" },
		{ "ModuleRelativePath", "MoveAndRotate.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMoveAndRotate_Statics::NewProp_NewRotation = { UE4CodeGen_Private::EPropertyClass::Struct, "NewRotation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(AMoveAndRotate, NewRotation), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UClass_AMoveAndRotate_Statics::NewProp_NewRotation_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMoveAndRotate_Statics::NewProp_NewRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMoveAndRotate_Statics::NewProp_NewTransform_MetaData[] = {
		{ "Category", "Position" },
		{ "ModuleRelativePath", "MoveAndRotate.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMoveAndRotate_Statics::NewProp_NewTransform = { UE4CodeGen_Private::EPropertyClass::Struct, "NewTransform", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(AMoveAndRotate, NewTransform), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AMoveAndRotate_Statics::NewProp_NewTransform_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMoveAndRotate_Statics::NewProp_NewTransform_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMoveAndRotate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMoveAndRotate_Statics::NewProp_NewRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMoveAndRotate_Statics::NewProp_NewTransform,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMoveAndRotate_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMoveAndRotate>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMoveAndRotate_Statics::ClassParams = {
		&AMoveAndRotate::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		nullptr, 0,
		Z_Construct_UClass_AMoveAndRotate_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_AMoveAndRotate_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AMoveAndRotate_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AMoveAndRotate_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMoveAndRotate()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMoveAndRotate_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMoveAndRotate, 227202064);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMoveAndRotate(Z_Construct_UClass_AMoveAndRotate, &AMoveAndRotate::StaticClass, TEXT("/Script/Sci_fi_42_seconds"), TEXT("AMoveAndRotate"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMoveAndRotate);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
