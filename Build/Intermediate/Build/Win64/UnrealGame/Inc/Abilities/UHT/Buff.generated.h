// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Buff.h"

#ifdef ABILITIES_Buff_generated_h
#error "Buff.generated.h already included, missing '#pragma once' in Buff.h"
#endif
#define ABILITIES_Buff_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAbilitiesComponent;

// ********** Begin ScriptStruct FBuffCount ********************************************************
struct Z_Construct_UScriptStruct_FBuffCount_Statics;
#define FID_Projects_Piperift_TestBench_Plugins_Abilities_Build_HostProject_Plugins_Abilities_Source_Abilities_Public_Buff_h_20_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FBuffCount_Statics; \
	ABILITIES_API static class UScriptStruct* StaticStruct();


struct FBuffCount;
// ********** End ScriptStruct FBuffCount **********************************************************

// ********** Begin Class UBuff ********************************************************************
#define FID_Projects_Piperift_TestBench_Plugins_Abilities_Build_HostProject_Plugins_Abilities_Source_Abilities_Public_Buff_h_46_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void EventRevertEffects_Implementation(UAbilitiesComponent* Component, int32 Count) const; \
	virtual void EventApplyEffects_Implementation(UAbilitiesComponent* Component, int32 Count) const; \
	DECLARE_FUNCTION(execGetLifetimeDuration); \
	DECLARE_FUNCTION(execGetDisplayName); \
	DECLARE_FUNCTION(execEventRevertEffects); \
	DECLARE_FUNCTION(execEventApplyEffects);


#define FID_Projects_Piperift_TestBench_Plugins_Abilities_Build_HostProject_Plugins_Abilities_Source_Abilities_Public_Buff_h_46_CALLBACK_WRAPPERS
struct Z_Construct_UClass_UBuff_Statics;
ABILITIES_API UClass* Z_Construct_UClass_UBuff_NoRegister();

#define FID_Projects_Piperift_TestBench_Plugins_Abilities_Build_HostProject_Plugins_Abilities_Source_Abilities_Public_Buff_h_46_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBuff(); \
	friend struct ::Z_Construct_UClass_UBuff_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ABILITIES_API UClass* ::Z_Construct_UClass_UBuff_NoRegister(); \
public: \
	DECLARE_CLASS2(UBuff, UDataAsset, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Abilities"), Z_Construct_UClass_UBuff_NoRegister) \
	DECLARE_SERIALIZER(UBuff)


#define FID_Projects_Piperift_TestBench_Plugins_Abilities_Build_HostProject_Plugins_Abilities_Source_Abilities_Public_Buff_h_46_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBuff(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UBuff(UBuff&&) = delete; \
	UBuff(const UBuff&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBuff); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBuff); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBuff) \
	NO_API virtual ~UBuff();


#define FID_Projects_Piperift_TestBench_Plugins_Abilities_Build_HostProject_Plugins_Abilities_Source_Abilities_Public_Buff_h_43_PROLOG
#define FID_Projects_Piperift_TestBench_Plugins_Abilities_Build_HostProject_Plugins_Abilities_Source_Abilities_Public_Buff_h_46_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Projects_Piperift_TestBench_Plugins_Abilities_Build_HostProject_Plugins_Abilities_Source_Abilities_Public_Buff_h_46_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Projects_Piperift_TestBench_Plugins_Abilities_Build_HostProject_Plugins_Abilities_Source_Abilities_Public_Buff_h_46_CALLBACK_WRAPPERS \
	FID_Projects_Piperift_TestBench_Plugins_Abilities_Build_HostProject_Plugins_Abilities_Source_Abilities_Public_Buff_h_46_INCLASS_NO_PURE_DECLS \
	FID_Projects_Piperift_TestBench_Plugins_Abilities_Build_HostProject_Plugins_Abilities_Source_Abilities_Public_Buff_h_46_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UBuff;

// ********** End Class UBuff **********************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Projects_Piperift_TestBench_Plugins_Abilities_Build_HostProject_Plugins_Abilities_Source_Abilities_Public_Buff_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
