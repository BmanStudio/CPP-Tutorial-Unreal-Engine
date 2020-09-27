// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef FIRSTCPPGAME_BatteryMan_generated_h
#error "BatteryMan.generated.h already included, missing '#pragma once' in BatteryMan.h"
#endif
#define FIRSTCPPGAME_BatteryMan_generated_h

#define FirstCPPGame_Source_FirstCPPGame_BatteryMan_h_25_SPARSE_DATA
#define FirstCPPGame_Source_FirstCPPGame_BatteryMan_h_25_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnBeginOverlap);


#define FirstCPPGame_Source_FirstCPPGame_BatteryMan_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnBeginOverlap);


#define FirstCPPGame_Source_FirstCPPGame_BatteryMan_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABatteryMan(); \
	friend struct Z_Construct_UClass_ABatteryMan_Statics; \
public: \
	DECLARE_CLASS(ABatteryMan, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FirstCPPGame"), NO_API) \
	DECLARE_SERIALIZER(ABatteryMan)


#define FirstCPPGame_Source_FirstCPPGame_BatteryMan_h_25_INCLASS \
private: \
	static void StaticRegisterNativesABatteryMan(); \
	friend struct Z_Construct_UClass_ABatteryMan_Statics; \
public: \
	DECLARE_CLASS(ABatteryMan, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FirstCPPGame"), NO_API) \
	DECLARE_SERIALIZER(ABatteryMan)


#define FirstCPPGame_Source_FirstCPPGame_BatteryMan_h_25_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABatteryMan(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABatteryMan) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABatteryMan); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABatteryMan); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABatteryMan(ABatteryMan&&); \
	NO_API ABatteryMan(const ABatteryMan&); \
public:


#define FirstCPPGame_Source_FirstCPPGame_BatteryMan_h_25_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABatteryMan(ABatteryMan&&); \
	NO_API ABatteryMan(const ABatteryMan&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABatteryMan); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABatteryMan); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABatteryMan)


#define FirstCPPGame_Source_FirstCPPGame_BatteryMan_h_25_PRIVATE_PROPERTY_OFFSET
#define FirstCPPGame_Source_FirstCPPGame_BatteryMan_h_22_PROLOG
#define FirstCPPGame_Source_FirstCPPGame_BatteryMan_h_25_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FirstCPPGame_Source_FirstCPPGame_BatteryMan_h_25_PRIVATE_PROPERTY_OFFSET \
	FirstCPPGame_Source_FirstCPPGame_BatteryMan_h_25_SPARSE_DATA \
	FirstCPPGame_Source_FirstCPPGame_BatteryMan_h_25_RPC_WRAPPERS \
	FirstCPPGame_Source_FirstCPPGame_BatteryMan_h_25_INCLASS \
	FirstCPPGame_Source_FirstCPPGame_BatteryMan_h_25_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FirstCPPGame_Source_FirstCPPGame_BatteryMan_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FirstCPPGame_Source_FirstCPPGame_BatteryMan_h_25_PRIVATE_PROPERTY_OFFSET \
	FirstCPPGame_Source_FirstCPPGame_BatteryMan_h_25_SPARSE_DATA \
	FirstCPPGame_Source_FirstCPPGame_BatteryMan_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	FirstCPPGame_Source_FirstCPPGame_BatteryMan_h_25_INCLASS_NO_PURE_DECLS \
	FirstCPPGame_Source_FirstCPPGame_BatteryMan_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FIRSTCPPGAME_API UClass* StaticClass<class ABatteryMan>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FirstCPPGame_Source_FirstCPPGame_BatteryMan_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
