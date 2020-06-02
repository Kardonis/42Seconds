// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APawn;
#ifdef SCI_FI_42_SECONDS_BonusChip_generated_h
#error "BonusChip.generated.h already included, missing '#pragma once' in BonusChip.h"
#endif
#define SCI_FI_42_SECONDS_BonusChip_generated_h

#define Sci_fi_42_seconds_Source_Sci_fi_42_seconds_BonusChip_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnCollect) \
	{ \
		P_GET_OBJECT(APawn,Z_Param_player); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnCollect(Z_Param_player); \
		P_NATIVE_END; \
	}


#define Sci_fi_42_seconds_Source_Sci_fi_42_seconds_BonusChip_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnCollect) \
	{ \
		P_GET_OBJECT(APawn,Z_Param_player); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnCollect(Z_Param_player); \
		P_NATIVE_END; \
	}


#define Sci_fi_42_seconds_Source_Sci_fi_42_seconds_BonusChip_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABonusChip(); \
	friend struct Z_Construct_UClass_ABonusChip_Statics; \
public: \
	DECLARE_CLASS(ABonusChip, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Sci_fi_42_seconds"), NO_API) \
	DECLARE_SERIALIZER(ABonusChip)


#define Sci_fi_42_seconds_Source_Sci_fi_42_seconds_BonusChip_h_13_INCLASS \
private: \
	static void StaticRegisterNativesABonusChip(); \
	friend struct Z_Construct_UClass_ABonusChip_Statics; \
public: \
	DECLARE_CLASS(ABonusChip, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Sci_fi_42_seconds"), NO_API) \
	DECLARE_SERIALIZER(ABonusChip)


#define Sci_fi_42_seconds_Source_Sci_fi_42_seconds_BonusChip_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABonusChip(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABonusChip) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABonusChip); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABonusChip); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABonusChip(ABonusChip&&); \
	NO_API ABonusChip(const ABonusChip&); \
public:


#define Sci_fi_42_seconds_Source_Sci_fi_42_seconds_BonusChip_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABonusChip(ABonusChip&&); \
	NO_API ABonusChip(const ABonusChip&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABonusChip); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABonusChip); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABonusChip)


#define Sci_fi_42_seconds_Source_Sci_fi_42_seconds_BonusChip_h_13_PRIVATE_PROPERTY_OFFSET
#define Sci_fi_42_seconds_Source_Sci_fi_42_seconds_BonusChip_h_10_PROLOG
#define Sci_fi_42_seconds_Source_Sci_fi_42_seconds_BonusChip_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Sci_fi_42_seconds_Source_Sci_fi_42_seconds_BonusChip_h_13_PRIVATE_PROPERTY_OFFSET \
	Sci_fi_42_seconds_Source_Sci_fi_42_seconds_BonusChip_h_13_RPC_WRAPPERS \
	Sci_fi_42_seconds_Source_Sci_fi_42_seconds_BonusChip_h_13_INCLASS \
	Sci_fi_42_seconds_Source_Sci_fi_42_seconds_BonusChip_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Sci_fi_42_seconds_Source_Sci_fi_42_seconds_BonusChip_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Sci_fi_42_seconds_Source_Sci_fi_42_seconds_BonusChip_h_13_PRIVATE_PROPERTY_OFFSET \
	Sci_fi_42_seconds_Source_Sci_fi_42_seconds_BonusChip_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	Sci_fi_42_seconds_Source_Sci_fi_42_seconds_BonusChip_h_13_INCLASS_NO_PURE_DECLS \
	Sci_fi_42_seconds_Source_Sci_fi_42_seconds_BonusChip_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Sci_fi_42_seconds_Source_Sci_fi_42_seconds_BonusChip_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
