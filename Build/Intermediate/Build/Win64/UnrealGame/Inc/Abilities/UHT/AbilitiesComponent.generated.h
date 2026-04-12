// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AbilitiesComponent.h"

#ifdef ABILITIES_AbilitiesComponent_generated_h
#error "AbilitiesComponent.generated.h already included, missing '#pragma once' in AbilitiesComponent.h"
#endif
#define ABILITIES_AbilitiesComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAbility;
class UBuff;
class UClass;
class UObject;
enum class EAllAny : uint8;
enum class EBuffOperation : uint8;
struct FBuffCount;
struct FCancelInputReturn;
struct FGameplayTag;
struct FGameplayTagContainer;
struct FStructContainer;

// ********** Begin Delegate FOnBuffsAppliedDelegate ***********************************************
#define FID_Projects_Piperift_TestBench_Plugins_Abilities_Build_HostProject_Plugins_Abilities_Source_Abilities_Public_AbilitiesComponent_h_20_DELEGATE \
ABILITIES_API void FOnBuffsAppliedDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnBuffsAppliedDelegate, TSet<FBuffCount> const& Buffs);


// ********** End Delegate FOnBuffsAppliedDelegate *************************************************

// ********** Begin Delegate FOnBuffsRemovedDelegate ***********************************************
#define FID_Projects_Piperift_TestBench_Plugins_Abilities_Build_HostProject_Plugins_Abilities_Source_Abilities_Public_AbilitiesComponent_h_21_DELEGATE \
ABILITIES_API void FOnBuffsRemovedDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnBuffsRemovedDelegate, TSet<FBuffCount> const& Buffs);


// ********** End Delegate FOnBuffsRemovedDelegate *************************************************

// ********** Begin Delegate FOnTagsChangedDelegate ************************************************
#define FID_Projects_Piperift_TestBench_Plugins_Abilities_Build_HostProject_Plugins_Abilities_Source_Abilities_Public_AbilitiesComponent_h_22_DELEGATE \
ABILITIES_API void FOnTagsChangedDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnTagsChangedDelegate);


// ********** End Delegate FOnTagsChangedDelegate **************************************************

// ********** Begin ScriptStruct FCancelInputReturn ************************************************
struct Z_Construct_UScriptStruct_FCancelInputReturn_Statics;
#define FID_Projects_Piperift_TestBench_Plugins_Abilities_Build_HostProject_Plugins_Abilities_Source_Abilities_Public_AbilitiesComponent_h_48_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FCancelInputReturn_Statics; \
	ABILITIES_API static class UScriptStruct* StaticStruct();


struct FCancelInputReturn;
// ********** End ScriptStruct FCancelInputReturn **************************************************

// ********** Begin Class UAbilitiesComponent ******************************************************
#define FID_Projects_Piperift_TestBench_Plugins_Abilities_Build_HostProject_Plugins_Abilities_Source_Abilities_Public_AbilitiesComponent_h_62_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void MCOnBuffsChanged_Implementation(TArray<FBuffCount> const& ModifiedBuffs, EBuffOperation Change); \
	virtual void ClientOnBuffsChanged_Implementation(TArray<FBuffCount> const& ModifiedBuffs, EBuffOperation Change); \
	virtual void MCAddRemainingCooldowns_Implementation(TArray<UClass*> const& Classes, float Duration); \
	DECLARE_FUNCTION(execDebugPrint); \
	DECLARE_FUNCTION(execIsTearingDown); \
	DECLARE_FUNCTION(execGetEquippedAbilities); \
	DECLARE_FUNCTION(execGetEquippedAbilityByName); \
	DECLARE_FUNCTION(execGetEquippedAbility); \
	DECLARE_FUNCTION(execIsLocallyOwned); \
	DECLARE_FUNCTION(execHasAuthority); \
	DECLARE_FUNCTION(execMCOnBuffsChanged); \
	DECLARE_FUNCTION(execClientOnBuffsChanged); \
	DECLARE_FUNCTION(execGetNumBuffs); \
	DECLARE_FUNCTION(execGetAllBuffs); \
	DECLARE_FUNCTION(execGetBuffsOfClass); \
	DECLARE_FUNCTION(execHasBuffOfClass); \
	DECLARE_FUNCTION(execGetBuffCount); \
	DECLARE_FUNCTION(execHasBuffs); \
	DECLARE_FUNCTION(execHasBuff); \
	DECLARE_FUNCTION(execRemoveBuffsByTag); \
	DECLARE_FUNCTION(execRemoveAllBuffs); \
	DECLARE_FUNCTION(execRemoveBuffs); \
	DECLARE_FUNCTION(execResetBuffs); \
	DECLARE_FUNCTION(execRemoveBuff); \
	DECLARE_FUNCTION(execApplySingleBuffs); \
	DECLARE_FUNCTION(execApplyBuffs); \
	DECLARE_FUNCTION(execApplyBuff); \
	DECLARE_FUNCTION(execRemoveTags); \
	DECLARE_FUNCTION(execRemoveTag); \
	DECLARE_FUNCTION(execAddTags); \
	DECLARE_FUNCTION(execAddTag); \
	DECLARE_FUNCTION(execMCAddRemainingCooldowns); \
	DECLARE_FUNCTION(execOnRep_AllAbilities); \
	DECLARE_FUNCTION(execGetBuffRemainingLifetime); \
	DECLARE_FUNCTION(execGetCooldownDuration); \
	DECLARE_FUNCTION(execGetRemainingCooldown); \
	DECLARE_FUNCTION(execIsCoolingDown); \
	DECLARE_FUNCTION(execIsRunning); \
	DECLARE_FUNCTION(execAddRemainingCooldowns); \
	DECLARE_FUNCTION(execAddRemainingCooldown); \
	DECLARE_FUNCTION(execCanActivate); \
	DECLARE_FUNCTION(execCanCast); \
	DECLARE_FUNCTION(execCancelAll); \
	DECLARE_FUNCTION(execCancel); \
	DECLARE_FUNCTION(execGetPressedAbilityFromInput); \
	DECLARE_FUNCTION(execIsAnyInputPressed); \
	DECLARE_FUNCTION(execIsInputPressed); \
	DECLARE_FUNCTION(execCancelInput); \
	DECLARE_FUNCTION(execReleaseInputByClass); \
	DECLARE_FUNCTION(execReleaseInput); \
	DECLARE_FUNCTION(execPressInput); \
	DECLARE_FUNCTION(execCastAbility); \
	DECLARE_FUNCTION(execIsEquipped); \
	DECLARE_FUNCTION(execUnequipAbilities); \
	DECLARE_FUNCTION(execUnequipAbility); \
	DECLARE_FUNCTION(execEquipAbilities); \
	DECLARE_FUNCTION(execEquipAbility); \
	DECLARE_FUNCTION(execOnRep_Tags);


#define FID_Projects_Piperift_TestBench_Plugins_Abilities_Build_HostProject_Plugins_Abilities_Source_Abilities_Public_AbilitiesComponent_h_62_CALLBACK_WRAPPERS
struct Z_Construct_UClass_UAbilitiesComponent_Statics;
ABILITIES_API UClass* Z_Construct_UClass_UAbilitiesComponent_NoRegister();

#define FID_Projects_Piperift_TestBench_Plugins_Abilities_Build_HostProject_Plugins_Abilities_Source_Abilities_Public_AbilitiesComponent_h_62_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAbilitiesComponent(); \
	friend struct ::Z_Construct_UClass_UAbilitiesComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ABILITIES_API UClass* ::Z_Construct_UClass_UAbilitiesComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UAbilitiesComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Abilities"), Z_Construct_UClass_UAbilitiesComponent_NoRegister) \
	DECLARE_SERIALIZER(UAbilitiesComponent) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		Tags=NETFIELD_REP_START, \
		AllAbilities, \
		NETFIELD_REP_END=AllAbilities	}; \
	DECLARE_VALIDATE_GENERATED_REP_ENUMS(NO_API)


#define FID_Projects_Piperift_TestBench_Plugins_Abilities_Build_HostProject_Plugins_Abilities_Source_Abilities_Public_AbilitiesComponent_h_62_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAbilitiesComponent(UAbilitiesComponent&&) = delete; \
	UAbilitiesComponent(const UAbilitiesComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAbilitiesComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAbilitiesComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAbilitiesComponent) \
	NO_API virtual ~UAbilitiesComponent();


#define FID_Projects_Piperift_TestBench_Plugins_Abilities_Build_HostProject_Plugins_Abilities_Source_Abilities_Public_AbilitiesComponent_h_59_PROLOG
#define FID_Projects_Piperift_TestBench_Plugins_Abilities_Build_HostProject_Plugins_Abilities_Source_Abilities_Public_AbilitiesComponent_h_62_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Projects_Piperift_TestBench_Plugins_Abilities_Build_HostProject_Plugins_Abilities_Source_Abilities_Public_AbilitiesComponent_h_62_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Projects_Piperift_TestBench_Plugins_Abilities_Build_HostProject_Plugins_Abilities_Source_Abilities_Public_AbilitiesComponent_h_62_CALLBACK_WRAPPERS \
	FID_Projects_Piperift_TestBench_Plugins_Abilities_Build_HostProject_Plugins_Abilities_Source_Abilities_Public_AbilitiesComponent_h_62_INCLASS_NO_PURE_DECLS \
	FID_Projects_Piperift_TestBench_Plugins_Abilities_Build_HostProject_Plugins_Abilities_Source_Abilities_Public_AbilitiesComponent_h_62_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAbilitiesComponent;

// ********** End Class UAbilitiesComponent ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Projects_Piperift_TestBench_Plugins_Abilities_Build_HostProject_Plugins_Abilities_Source_Abilities_Public_AbilitiesComponent_h

// ********** Begin Enum EBuffOperation ************************************************************
#define FOREACH_ENUM_EBUFFOPERATION(op) \
	op(EBuffOperation::Added) \
	op(EBuffOperation::Removed) 

enum class EBuffOperation : uint8;
template<> struct TIsUEnumClass<EBuffOperation> { enum { Value = true }; };
template<> ABILITIES_NON_ATTRIBUTED_API UEnum* StaticEnum<EBuffOperation>();
// ********** End Enum EBuffOperation **************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
