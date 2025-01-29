// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SCharacter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ACTIONROGUELIKE_SCharacter_generated_h
#error "SCharacter.generated.h already included, missing '#pragma once' in SCharacter.h"
#endif
#define ACTIONROGUELIKE_SCharacter_generated_h

#define FID_Downloads_GitHub_ActionRogueLike_Source_ActionRogueLike_SCharacter_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASCharacter(); \
	friend struct Z_Construct_UClass_ASCharacter_Statics; \
public: \
	DECLARE_CLASS(ASCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ActionRogueLike"), NO_API) \
	DECLARE_SERIALIZER(ASCharacter)


#define FID_Downloads_GitHub_ActionRogueLike_Source_ActionRogueLike_SCharacter_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ASCharacter(ASCharacter&&); \
	ASCharacter(const ASCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASCharacter) \
	NO_API virtual ~ASCharacter();


#define FID_Downloads_GitHub_ActionRogueLike_Source_ActionRogueLike_SCharacter_h_12_PROLOG
#define FID_Downloads_GitHub_ActionRogueLike_Source_ActionRogueLike_SCharacter_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Downloads_GitHub_ActionRogueLike_Source_ActionRogueLike_SCharacter_h_15_INCLASS_NO_PURE_DECLS \
	FID_Downloads_GitHub_ActionRogueLike_Source_ActionRogueLike_SCharacter_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ACTIONROGUELIKE_API UClass* StaticClass<class ASCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Downloads_GitHub_ActionRogueLike_Source_ActionRogueLike_SCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
