// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef VR_GAME_DeathMatchGameState_generated_h
#error "DeathMatchGameState.generated.h already included, missing '#pragma once' in DeathMatchGameState.h"
#endif
#define VR_GAME_DeathMatchGameState_generated_h

#define vr_game_Source_vr_game_DeathMatchGameState_h_14_RPC_WRAPPERS
#define vr_game_Source_vr_game_DeathMatchGameState_h_14_RPC_WRAPPERS_NO_PURE_DECLS
#define vr_game_Source_vr_game_DeathMatchGameState_h_14_INCLASS_NO_PURE_DECLS \
	private: \
	static void StaticRegisterNativesADeathMatchGameState(); \
	friend VR_GAME_API class UClass* Z_Construct_UClass_ADeathMatchGameState(); \
	public: \
	DECLARE_CLASS(ADeathMatchGameState, AGameState, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/vr_game"), NO_API) \
	DECLARE_SERIALIZER(ADeathMatchGameState) \
	/** Indicates whether the class is compiled into the engine */ \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define vr_game_Source_vr_game_DeathMatchGameState_h_14_INCLASS \
	private: \
	static void StaticRegisterNativesADeathMatchGameState(); \
	friend VR_GAME_API class UClass* Z_Construct_UClass_ADeathMatchGameState(); \
	public: \
	DECLARE_CLASS(ADeathMatchGameState, AGameState, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/vr_game"), NO_API) \
	DECLARE_SERIALIZER(ADeathMatchGameState) \
	/** Indicates whether the class is compiled into the engine */ \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define vr_game_Source_vr_game_DeathMatchGameState_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ADeathMatchGameState(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ADeathMatchGameState) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADeathMatchGameState); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADeathMatchGameState); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADeathMatchGameState(ADeathMatchGameState&&); \
	NO_API ADeathMatchGameState(const ADeathMatchGameState&); \
public:


#define vr_game_Source_vr_game_DeathMatchGameState_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ADeathMatchGameState(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADeathMatchGameState(ADeathMatchGameState&&); \
	NO_API ADeathMatchGameState(const ADeathMatchGameState&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADeathMatchGameState); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADeathMatchGameState); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ADeathMatchGameState)


#define vr_game_Source_vr_game_DeathMatchGameState_h_14_PRIVATE_PROPERTY_OFFSET
#define vr_game_Source_vr_game_DeathMatchGameState_h_11_PROLOG
#define vr_game_Source_vr_game_DeathMatchGameState_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	vr_game_Source_vr_game_DeathMatchGameState_h_14_PRIVATE_PROPERTY_OFFSET \
	vr_game_Source_vr_game_DeathMatchGameState_h_14_RPC_WRAPPERS \
	vr_game_Source_vr_game_DeathMatchGameState_h_14_INCLASS \
	vr_game_Source_vr_game_DeathMatchGameState_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define vr_game_Source_vr_game_DeathMatchGameState_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	vr_game_Source_vr_game_DeathMatchGameState_h_14_PRIVATE_PROPERTY_OFFSET \
	vr_game_Source_vr_game_DeathMatchGameState_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	vr_game_Source_vr_game_DeathMatchGameState_h_14_INCLASS_NO_PURE_DECLS \
	vr_game_Source_vr_game_DeathMatchGameState_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID vr_game_Source_vr_game_DeathMatchGameState_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
