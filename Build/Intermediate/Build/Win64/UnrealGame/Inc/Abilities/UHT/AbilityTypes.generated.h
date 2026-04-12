// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AbilityTypes.h"

#ifdef ABILITIES_AbilityTypes_generated_h
#error "AbilityTypes.generated.h already included, missing '#pragma once' in AbilityTypes.h"
#endif
#define ABILITIES_AbilityTypes_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FAbilityStateTransition *******************************************
struct Z_Construct_UScriptStruct_FAbilityStateTransition_Statics;
#define FID_Projects_Piperift_TestBench_Plugins_Abilities_Build_HostProject_Plugins_Abilities_Source_Abilities_Public_AbilityTypes_h_35_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FAbilityStateTransition_Statics; \
	ABILITIES_API static class UScriptStruct* StaticStruct();


struct FAbilityStateTransition;
// ********** End ScriptStruct FAbilityStateTransition *********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Projects_Piperift_TestBench_Plugins_Abilities_Build_HostProject_Plugins_Abilities_Source_Abilities_Public_AbilityTypes_h

// ********** Begin Enum EAbilityState *************************************************************
#define FOREACH_ENUM_EABILITYSTATE(op) \
	op(EAbilityState::None) \
	op(EAbilityState::BeforeBeginPlay) \
	op(EAbilityState::JustEquipped) \
	op(EAbilityState::Cancelled) \
	op(EAbilityState::Succeeded) \
	op(EAbilityState::Cast) \
	op(EAbilityState::Activation) \
	op(EAbilityState::AfterEndPlay) 

enum class EAbilityState : uint8;
template<> struct TIsUEnumClass<EAbilityState> { enum { Value = true }; };
template<> ABILITIES_NON_ATTRIBUTED_API UEnum* StaticEnum<EAbilityState>();
// ********** End Enum EAbilityState ***************************************************************

// ********** Begin Enum EAbilityTransitionFlag ****************************************************
#define FOREACH_ENUM_EABILITYTRANSITIONFLAG(op) \
	op(EAbilityTransitionFlag::None) \
	op(EAbilityTransitionFlag::StartCooldown) \
	op(EAbilityTransitionFlag::PredictionFailed) 

enum class EAbilityTransitionFlag : uint8;
template<> struct TIsUEnumClass<EAbilityTransitionFlag> { enum { Value = true }; };
template<> ABILITIES_NON_ATTRIBUTED_API UEnum* StaticEnum<EAbilityTransitionFlag>();
// ********** End Enum EAbilityTransitionFlag ******************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
