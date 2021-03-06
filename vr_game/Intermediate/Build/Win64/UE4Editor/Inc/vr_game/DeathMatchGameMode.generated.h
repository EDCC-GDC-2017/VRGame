// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef VR_GAME_DeathMatchGameMode_generated_h
#error "DeathMatchGameMode.generated.h already included, missing '#pragma once' in DeathMatchGameMode.h"
#endif
#define VR_GAME_DeathMatchGameMode_generated_h

#define vr_game_Source_vr_game_DeathMatchGameMode_h_13_RPC_WRAPPERS
#define vr_game_Source_vr_game_DeathMatchGameMode_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define vr_game_Source_vr_game_DeathMatchGameMode_h_13_INCLASS_NO_PURE_DECLS \
	private: \
	static void StaticRegisterNativesADeathMatchGameMode(); \
	friend VR_GAME_API class UClass* Z_Construct_UClass_ADeathMatchGameMode(); \
	public: \
	DECLARE_CLASS(ADeathMatchGameMode, AGameMode, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), 0, TEXT("/Script/vr_game"), NO_API) \
	DECLARE_SERIALIZER(ADeathMatchGameMode) \
	/** Indicates whether the class is compiled into the engine */ \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define vr_game_Source_vr_game_DeathMatchGameMode_h_13_INCLASS \
	private: \
	static void StaticRegisterNativesADeathMatchGameMode(); \
	friend VR_GAME_API class UClass* Z_Construct_UClass_ADeathMatchGameMode(); \
	public: \
	DECLARE_CLASS(ADeathMatchGameMode, AGameMode, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), 0, TEXT("/Script/vr_game"), NO_API) \
	DECLARE_SERIALIZER(ADeathMatchGameMode) \
	/** Indicates whether the class is compiled into the engine */ \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define vr_game_Source_vr_game_DeathMatchGameMode_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ADeathMatchGameMode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ADeathMatchGameMode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADeathMatchGameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADeathMatchGameMode); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADeathMatchGameMode(ADeathMatchGameMode&&); \
	NO_API ADeathMatchGameMode(const ADeathMatchGameMode&); \
public:


#define vr_game_Source_vr_game_DeathMatchGameMode_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ADeathMatchGameMode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADeathMatchGameMode(ADeathMatchGameMode&&); \
	NO_API ADeathMatchGameMode(const ADeathMatchGameMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADeathMatchGameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADeathMatchGameMode); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ADeathMatchGameMode)


#define vr_game_Source_vr_game_DeathMatchGameMode_h_13_PRIVATE_PROPERTY_OFFSET
#define vr_game_Source_vr_game_DeathMatchGameMode_h_10_PROLOG
#define vr_game_Source_vr_game_DeathMatchGameMode_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	vr_game_Source_vr_game_DeathMatchGameMode_h_13_PRIVATE_PROPERTY_OFFSET \
	vr_game_Source_vr_game_DeathMatchGameMode_h_13_RPC_WRAPPERS \
	vr_game_Source_vr_game_DeathMatchGameMode_h_13_INCLASS \
	vr_game_Source_vr_game_DeathMatchGameMode_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define vr_game_Source_vr_game_DeathMatchGameMode_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	vr_game_Source_vr_game_DeathMatchGameMode_h_13_PRIVATE_PROPERTY_OFFSET \
	vr_game_Source_vr_game_DeathMatchGameMode_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	vr_game_Source_vr_game_DeathMatchGameMode_h_13_INCLASS_NO_PURE_DECLS \
	vr_game_Source_vr_game_DeathMatchGameMode_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID vr_game_Source_vr_game_DeathMatchGameMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
