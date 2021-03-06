// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef VR_GAME_VR_HUD_generated_h
#error "VR_HUD.generated.h already included, missing '#pragma once' in VR_HUD.h"
#endif
#define VR_GAME_VR_HUD_generated_h

#define vr_game_Source_vr_game_VR_HUD_h_14_RPC_WRAPPERS
#define vr_game_Source_vr_game_VR_HUD_h_14_RPC_WRAPPERS_NO_PURE_DECLS
#define vr_game_Source_vr_game_VR_HUD_h_14_INCLASS_NO_PURE_DECLS \
	private: \
	static void StaticRegisterNativesAVR_HUD(); \
	friend VR_GAME_API class UClass* Z_Construct_UClass_AVR_HUD(); \
	public: \
	DECLARE_CLASS(AVR_HUD, AHUD, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), 0, TEXT("/Script/vr_game"), NO_API) \
	DECLARE_SERIALIZER(AVR_HUD) \
	/** Indicates whether the class is compiled into the engine */ \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define vr_game_Source_vr_game_VR_HUD_h_14_INCLASS \
	private: \
	static void StaticRegisterNativesAVR_HUD(); \
	friend VR_GAME_API class UClass* Z_Construct_UClass_AVR_HUD(); \
	public: \
	DECLARE_CLASS(AVR_HUD, AHUD, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), 0, TEXT("/Script/vr_game"), NO_API) \
	DECLARE_SERIALIZER(AVR_HUD) \
	/** Indicates whether the class is compiled into the engine */ \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define vr_game_Source_vr_game_VR_HUD_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AVR_HUD(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AVR_HUD) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AVR_HUD); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AVR_HUD); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AVR_HUD(AVR_HUD&&); \
	NO_API AVR_HUD(const AVR_HUD&); \
public:


#define vr_game_Source_vr_game_VR_HUD_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AVR_HUD(AVR_HUD&&); \
	NO_API AVR_HUD(const AVR_HUD&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AVR_HUD); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AVR_HUD); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AVR_HUD)


#define vr_game_Source_vr_game_VR_HUD_h_14_PRIVATE_PROPERTY_OFFSET
#define vr_game_Source_vr_game_VR_HUD_h_11_PROLOG
#define vr_game_Source_vr_game_VR_HUD_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	vr_game_Source_vr_game_VR_HUD_h_14_PRIVATE_PROPERTY_OFFSET \
	vr_game_Source_vr_game_VR_HUD_h_14_RPC_WRAPPERS \
	vr_game_Source_vr_game_VR_HUD_h_14_INCLASS \
	vr_game_Source_vr_game_VR_HUD_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define vr_game_Source_vr_game_VR_HUD_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	vr_game_Source_vr_game_VR_HUD_h_14_PRIVATE_PROPERTY_OFFSET \
	vr_game_Source_vr_game_VR_HUD_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	vr_game_Source_vr_game_VR_HUD_h_14_INCLASS_NO_PURE_DECLS \
	vr_game_Source_vr_game_VR_HUD_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID vr_game_Source_vr_game_VR_HUD_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
