// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
#ifdef SCI_FI_42_SECONDS_MovingPlatform_generated_h
#error "MovingPlatform.generated.h already included, missing '#pragma once' in MovingPlatform.h"
#endif
#define SCI_FI_42_SECONDS_MovingPlatform_generated_h

#define Sci_fi_42_seconds_Source_Sci_fi_42_seconds_MovingPlatform_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execUpdatePosition) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_Start); \
		P_GET_STRUCT(FVector,Z_Param_End); \
		P_GET_STRUCT(FVector,Z_Param_Current); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_speed); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->UpdatePosition(Z_Param_Start,Z_Param_End,Z_Param_Current,Z_Param_speed); \
		P_NATIVE_END; \
	}


#define Sci_fi_42_seconds_Source_Sci_fi_42_seconds_MovingPlatform_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execUpdatePosition) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_Start); \
		P_GET_STRUCT(FVector,Z_Param_End); \
		P_GET_STRUCT(FVector,Z_Param_Current); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_speed); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->UpdatePosition(Z_Param_Start,Z_Param_End,Z_Param_Current,Z_Param_speed); \
		P_NATIVE_END; \
	}


#define Sci_fi_42_seconds_Source_Sci_fi_42_seconds_MovingPlatform_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMovingPlatform(); \
	friend struct Z_Construct_UClass_AMovingPlatform_Statics; \
public: \
	DECLARE_CLASS(AMovingPlatform, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Sci_fi_42_seconds"), NO_API) \
	DECLARE_SERIALIZER(AMovingPlatform)


#define Sci_fi_42_seconds_Source_Sci_fi_42_seconds_MovingPlatform_h_13_INCLASS \
private: \
	static void StaticRegisterNativesAMovingPlatform(); \
	friend struct Z_Construct_UClass_AMovingPlatform_Statics; \
public: \
	DECLARE_CLASS(AMovingPlatform, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Sci_fi_42_seconds"), NO_API) \
	DECLARE_SERIALIZER(AMovingPlatform)


#define Sci_fi_42_seconds_Source_Sci_fi_42_seconds_MovingPlatform_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMovingPlatform(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMovingPlatform) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMovingPlatform); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMovingPlatform); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMovingPlatform(AMovingPlatform&&); \
	NO_API AMovingPlatform(const AMovingPlatform&); \
public:


#define Sci_fi_42_seconds_Source_Sci_fi_42_seconds_MovingPlatform_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMovingPlatform(AMovingPlatform&&); \
	NO_API AMovingPlatform(const AMovingPlatform&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMovingPlatform); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMovingPlatform); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMovingPlatform)


#define Sci_fi_42_seconds_Source_Sci_fi_42_seconds_MovingPlatform_h_13_PRIVATE_PROPERTY_OFFSET
#define Sci_fi_42_seconds_Source_Sci_fi_42_seconds_MovingPlatform_h_10_PROLOG
#define Sci_fi_42_seconds_Source_Sci_fi_42_seconds_MovingPlatform_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Sci_fi_42_seconds_Source_Sci_fi_42_seconds_MovingPlatform_h_13_PRIVATE_PROPERTY_OFFSET \
	Sci_fi_42_seconds_Source_Sci_fi_42_seconds_MovingPlatform_h_13_RPC_WRAPPERS \
	Sci_fi_42_seconds_Source_Sci_fi_42_seconds_MovingPlatform_h_13_INCLASS \
	Sci_fi_42_seconds_Source_Sci_fi_42_seconds_MovingPlatform_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Sci_fi_42_seconds_Source_Sci_fi_42_seconds_MovingPlatform_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Sci_fi_42_seconds_Source_Sci_fi_42_seconds_MovingPlatform_h_13_PRIVATE_PROPERTY_OFFSET \
	Sci_fi_42_seconds_Source_Sci_fi_42_seconds_MovingPlatform_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	Sci_fi_42_seconds_Source_Sci_fi_42_seconds_MovingPlatform_h_13_INCLASS_NO_PURE_DECLS \
	Sci_fi_42_seconds_Source_Sci_fi_42_seconds_MovingPlatform_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Sci_fi_42_seconds_Source_Sci_fi_42_seconds_MovingPlatform_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
