// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Ability.h"

#ifdef ABILITIES_Ability_generated_h
#error "Ability.generated.h already included, missing '#pragma once' in Ability.h"
#endif
#define ABILITIES_Ability_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EAbilityInputProfile : uint8;
enum class ECooldownReadyReason : uint8;
struct FGameplayTagContainer;
struct FStructContainer;

// ********** Begin Class UAbility *****************************************************************
#define FID_Projects_Piperift_TestBench_Plugins_Abilities_Build_HostProject_Plugins_Abilities_Source_Abilities_Public_Ability_h_72_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool EventOnCancelInput_Implementation(); \
	virtual void MCResetCooldown_Implementation(); \
	virtual void MCStartCooldown_Implementation(); \
	virtual void EventDeactivate_Implementation(); \
	virtual void EventActivate_Implementation(FStructContainer const& Container); \
	virtual bool EventCanActivate_Implementation(FStructContainer const& Container) const; \
	virtual void EventCastFinish_Implementation(); \
	virtual void EventCast_Implementation(FStructContainer const& Container); \
	virtual bool EventCanCast_Implementation(FStructContainer const& Container) const; \
	DECLARE_FUNCTION(execIsPressed); \
	DECLARE_FUNCTION(execGetInputProfile); \
	DECLARE_FUNCTION(execEventOnCancelInput); \
	DECLARE_FUNCTION(execHasFinished); \
	DECLARE_FUNCTION(execIsCoolingDown); \
	DECLARE_FUNCTION(execHasCooldown); \
	DECLARE_FUNCTION(execHasSucceeded); \
	DECLARE_FUNCTION(execIsCancelled); \
	DECLARE_FUNCTION(execIsActivated); \
	DECLARE_FUNCTION(execIsCasting); \
	DECLARE_FUNCTION(execIsRunning); \
	DECLARE_FUNCTION(execGetDisplayName); \
	DECLARE_FUNCTION(execGetRawName); \
	DECLARE_FUNCTION(execCancel); \
	DECLARE_FUNCTION(execMCResetCooldown); \
	DECLARE_FUNCTION(execMCStartCooldown); \
	DECLARE_FUNCTION(execResetCooldown); \
	DECLARE_FUNCTION(execStartCooldown); \
	DECLARE_FUNCTION(execEventDeactivate); \
	DECLARE_FUNCTION(execEventActivate); \
	DECLARE_FUNCTION(execEventCanActivate); \
	DECLARE_FUNCTION(execDeactivate); \
	DECLARE_FUNCTION(execActivate); \
	DECLARE_FUNCTION(execEventCastFinish); \
	DECLARE_FUNCTION(execEventCast); \
	DECLARE_FUNCTION(execEventCanCast); \
	DECLARE_FUNCTION(execActivateOrCancel); \
	DECLARE_FUNCTION(execStartCast);


#define FID_Projects_Piperift_TestBench_Plugins_Abilities_Build_HostProject_Plugins_Abilities_Source_Abilities_Public_Ability_h_72_CALLBACK_WRAPPERS
struct Z_Construct_UClass_UAbility_Statics;
ABILITIES_API UClass* Z_Construct_UClass_UAbility_NoRegister();

#define FID_Projects_Piperift_TestBench_Plugins_Abilities_Build_HostProject_Plugins_Abilities_Source_Abilities_Public_Ability_h_72_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAbility(); \
	friend struct ::Z_Construct_UClass_UAbility_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ABILITIES_API UClass* ::Z_Construct_UClass_UAbility_NoRegister(); \
public: \
	DECLARE_CLASS2(UAbility, UAbilityBase, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Abilities"), Z_Construct_UClass_UAbility_NoRegister) \
	DECLARE_SERIALIZER(UAbility)


#define FID_Projects_Piperift_TestBench_Plugins_Abilities_Build_HostProject_Plugins_Abilities_Source_Abilities_Public_Ability_h_72_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAbility(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAbility(UAbility&&) = delete; \
	UAbility(const UAbility&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAbility); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAbility); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UAbility) \
	NO_API virtual ~UAbility();


#define FID_Projects_Piperift_TestBench_Plugins_Abilities_Build_HostProject_Plugins_Abilities_Source_Abilities_Public_Ability_h_69_PROLOG
#define FID_Projects_Piperift_TestBench_Plugins_Abilities_Build_HostProject_Plugins_Abilities_Source_Abilities_Public_Ability_h_72_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Projects_Piperift_TestBench_Plugins_Abilities_Build_HostProject_Plugins_Abilities_Source_Abilities_Public_Ability_h_72_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Projects_Piperift_TestBench_Plugins_Abilities_Build_HostProject_Plugins_Abilities_Source_Abilities_Public_Ability_h_72_CALLBACK_WRAPPERS \
	FID_Projects_Piperift_TestBench_Plugins_Abilities_Build_HostProject_Plugins_Abilities_Source_Abilities_Public_Ability_h_72_INCLASS_NO_PURE_DECLS \
	FID_Projects_Piperift_TestBench_Plugins_Abilities_Build_HostProject_Plugins_Abilities_Source_Abilities_Public_Ability_h_72_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAbility;

// ********** End Class UAbility *******************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Projects_Piperift_TestBench_Plugins_Abilities_Build_HostProject_Plugins_Abilities_Source_Abilities_Public_Ability_h

// ********** Begin Enum EAbilityTickMode **********************************************************
#define FOREACH_ENUM_EABILITYTICKMODE(op) \
	op(EAbilityTickMode::Never) \
	op(EAbilityTickMode::DuringCastOnly) \
	op(EAbilityTickMode::DuringActivationOnly) \
	op(EAbilityTickMode::DuringCastAndActivation) \
	op(EAbilityTickMode::Always) 

enum class EAbilityTickMode : uint8;
template<> struct TIsUEnumClass<EAbilityTickMode> { enum { Value = true }; };
template<> ABILITIES_NON_ATTRIBUTED_API UEnum* StaticEnum<EAbilityTickMode>();
// ********** End Enum EAbilityTickMode ************************************************************

// ********** Begin Enum ECooldownReadyReason ******************************************************
#define FOREACH_ENUM_ECOOLDOWNREADYREASON(op) \
	op(ECooldownReadyReason::Finished) \
	op(ECooldownReadyReason::Resseted) 

enum class ECooldownReadyReason : uint8;
template<> struct TIsUEnumClass<ECooldownReadyReason> { enum { Value = true }; };
template<> ABILITIES_NON_ATTRIBUTED_API UEnum* StaticEnum<ECooldownReadyReason>();
// ********** End Enum ECooldownReadyReason ********************************************************

// ********** Begin Enum EAbilityCooldownMode ******************************************************
#define FOREACH_ENUM_EABILITYCOOLDOWNMODE(op) \
	op(EAbilityCooldownMode::OnActivation) \
	op(EAbilityCooldownMode::OnDeactivation) \
	op(EAbilityCooldownMode::Manual) 

enum class EAbilityCooldownMode : uint8;
template<> struct TIsUEnumClass<EAbilityCooldownMode> { enum { Value = true }; };
template<> ABILITIES_NON_ATTRIBUTED_API UEnum* StaticEnum<EAbilityCooldownMode>();
// ********** End Enum EAbilityCooldownMode ********************************************************

// ********** Begin Enum EAbilityInputProfile ******************************************************
#define FOREACH_ENUM_EABILITYINPUTPROFILE(op) \
	op(EAbilityInputProfile::CastWhileHolding) \
	op(EAbilityInputProfile::ActivateOnPress) \
	op(EAbilityInputProfile::ActivateWhileHolding) \
	op(EAbilityInputProfile::ToggleActivationOnPress) \
	op(EAbilityInputProfile::None) 

enum class EAbilityInputProfile : uint8;
template<> struct TIsUEnumClass<EAbilityInputProfile> { enum { Value = true }; };
template<> ABILITIES_NON_ATTRIBUTED_API UEnum* StaticEnum<EAbilityInputProfile>();
// ********** End Enum EAbilityInputProfile ********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
