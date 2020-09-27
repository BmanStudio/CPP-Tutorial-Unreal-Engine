// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PACMAN_PacmanPawn_generated_h
#error "PacmanPawn.generated.h already included, missing '#pragma once' in PacmanPawn.h"
#endif
#define PACMAN_PacmanPawn_generated_h

#define PacMan_Source_PacMan_PacmanPawn_h_12_SPARSE_DATA
#define PacMan_Source_PacMan_PacmanPawn_h_12_RPC_WRAPPERS
#define PacMan_Source_PacMan_PacmanPawn_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define PacMan_Source_PacMan_PacmanPawn_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPacmanPawn(); \
	friend struct Z_Construct_UClass_APacmanPawn_Statics; \
public: \
	DECLARE_CLASS(APacmanPawn, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PacMan"), NO_API) \
	DECLARE_SERIALIZER(APacmanPawn)


#define PacMan_Source_PacMan_PacmanPawn_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAPacmanPawn(); \
	friend struct Z_Construct_UClass_APacmanPawn_Statics; \
public: \
	DECLARE_CLASS(APacmanPawn, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PacMan"), NO_API) \
	DECLARE_SERIALIZER(APacmanPawn)


#define PacMan_Source_PacMan_PacmanPawn_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APacmanPawn(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APacmanPawn) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APacmanPawn); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APacmanPawn); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APacmanPawn(APacmanPawn&&); \
	NO_API APacmanPawn(const APacmanPawn&); \
public:


#define PacMan_Source_PacMan_PacmanPawn_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APacmanPawn(APacmanPawn&&); \
	NO_API APacmanPawn(const APacmanPawn&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APacmanPawn); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APacmanPawn); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APacmanPawn)


#define PacMan_Source_PacMan_PacmanPawn_h_12_PRIVATE_PROPERTY_OFFSET
#define PacMan_Source_PacMan_PacmanPawn_h_9_PROLOG
#define PacMan_Source_PacMan_PacmanPawn_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PacMan_Source_PacMan_PacmanPawn_h_12_PRIVATE_PROPERTY_OFFSET \
	PacMan_Source_PacMan_PacmanPawn_h_12_SPARSE_DATA \
	PacMan_Source_PacMan_PacmanPawn_h_12_RPC_WRAPPERS \
	PacMan_Source_PacMan_PacmanPawn_h_12_INCLASS \
	PacMan_Source_PacMan_PacmanPawn_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PacMan_Source_PacMan_PacmanPawn_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PacMan_Source_PacMan_PacmanPawn_h_12_PRIVATE_PROPERTY_OFFSET \
	PacMan_Source_PacMan_PacmanPawn_h_12_SPARSE_DATA \
	PacMan_Source_PacMan_PacmanPawn_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	PacMan_Source_PacMan_PacmanPawn_h_12_INCLASS_NO_PURE_DECLS \
	PacMan_Source_PacMan_PacmanPawn_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PACMAN_API UClass* StaticClass<class APacmanPawn>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PacMan_Source_PacMan_PacmanPawn_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
