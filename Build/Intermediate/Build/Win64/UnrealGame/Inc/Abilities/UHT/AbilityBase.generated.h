// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AbilityBase.h"

#ifdef ABILITIES_AbilityBase_generated_h
#error "AbilityBase.generated.h already included, missing '#pragma once' in AbilityBase.h"
#endif
#define ABILITIES_AbilityBase_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"
#include "Net/Core/PushModel/PushModelMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UAbilitiesComponent;
enum class EAbilityState : uint8;
enum class EAbilityTransitionFlag : uint8;
struct FAbilityStateTransition;
struct FStructContainer;

// ********** Begin Class UAbilityBase *************************************************************
#define FID_Projects_Piperift_TestBench_Plugins_Abilities_Build_HostProject_Plugins_Abilities_Source_Abilities_Public_AbilityBase_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void MCSetState_Implementation(FAbilityStateTransition Transition, FStructContainer const& Container, uint32 ServerStateId); \
	virtual void ClientRejectState_Implementation(FAbilityStateTransition Transition, uint32 RequestedStateId); \
	virtual bool ServerSetState_Validate(FAbilityStateTransition , FStructContainer const& , uint32 ); \
	virtual void ServerSetState_Implementation(FAbilityStateTransition Transition, FStructContainer const& Container, uint32 RequestedStateId); \
	virtual void EventEndPlay_Implementation(); \
	virtual void EventBeginPlay_Implementation(); \
	DECLARE_FUNCTION(execIsLocallyOwned); \
	DECLARE_FUNCTION(execHasAuthority); \
	DECLARE_FUNCTION(execHasBegunPlay); \
	DECLARE_FUNCTION(execGetOwner); \
	DECLARE_FUNCTION(execGetAbilitiesComponent); \
	DECLARE_FUNCTION(execGetState); \
	DECLARE_FUNCTION(execMCSetState); \
	DECLARE_FUNCTION(execClientRejectState); \
	DECLARE_FUNCTION(execServerSetState); \
	DECLARE_FUNCTION(execSetState); \
	DECLARE_FUNCTION(execEventEndPlay); \
	DECLARE_FUNCTION(execEventBeginPlay); \
	DECLARE_FUNCTION(execOnRep_Owner);


#define FID_Projects_Piperift_TestBench_Plugins_Abilities_Build_HostProject_Plugins_Abilities_Source_Abilities_Public_AbilityBase_h_24_CALLBACK_WRAPPERS
struct Z_Construct_UClass_UAbilityBase_Statics;
ABILITIES_API UClass* Z_Construct_UClass_UAbilityBase_NoRegister();

#define FID_Projects_Piperift_TestBench_Plugins_Abilities_Build_HostProject_Plugins_Abilities_Source_Abilities_Public_AbilityBase_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAbilityBase(); \
	friend struct ::Z_Construct_UClass_UAbilityBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ABILITIES_API UClass* ::Z_Construct_UClass_UAbilityBase_NoRegister(); \
public: \
	DECLARE_CLASS2(UAbilityBase, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Abilities"), Z_Construct_UClass_UAbilityBase_NoRegister) \
	DECLARE_SERIALIZER(UAbilityBase) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		Owner=NETFIELD_REP_START, \
		NETFIELD_REP_END=Owner	}; \
	DECLARE_VALIDATE_GENERATED_REP_ENUMS(NO_API) \
private: \
	REPLICATED_BASE_CLASS(UAbilityBase) \
public:


#define FID_Projects_Piperift_TestBench_Plugins_Abilities_Build_HostProject_Plugins_Abilities_Source_Abilities_Public_AbilityBase_h_24_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAbilityBase(UAbilityBase&&) = delete; \
	UAbilityBase(const UAbilityBase&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAbilityBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAbilityBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAbilityBase) \
	NO_API virtual ~UAbilityBase();


#define FID_Projects_Piperift_TestBench_Plugins_Abilities_Build_HostProject_Plugins_Abilities_Source_Abilities_Public_AbilityBase_h_21_PROLOG
#define FID_Projects_Piperift_TestBench_Plugins_Abilities_Build_HostProject_Plugins_Abilities_Source_Abilities_Public_AbilityBase_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Projects_Piperift_TestBench_Plugins_Abilities_Build_HostProject_Plugins_Abilities_Source_Abilities_Public_AbilityBase_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Projects_Piperift_TestBench_Plugins_Abilities_Build_HostProject_Plugins_Abilities_Source_Abilities_Public_AbilityBase_h_24_CALLBACK_WRAPPERS \
	FID_Projects_Piperift_TestBench_Plugins_Abilities_Build_HostProject_Plugins_Abilities_Source_Abilities_Public_AbilityBase_h_24_INCLASS_NO_PURE_DECLS \
	FID_Projects_Piperift_TestBench_Plugins_Abilities_Build_HostProject_Plugins_Abilities_Source_Abilities_Public_AbilityBase_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAbilityBase;

// ********** End Class UAbilityBase ***************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Projects_Piperift_TestBench_Plugins_Abilities_Build_HostProject_Plugins_Abilities_Source_Abilities_Public_AbilityBase_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
