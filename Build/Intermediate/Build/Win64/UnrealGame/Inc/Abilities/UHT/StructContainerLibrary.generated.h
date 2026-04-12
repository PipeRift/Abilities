// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Misc/StructContainerLibrary.h"

#ifdef ABILITIES_StructContainerLibrary_generated_h
#error "StructContainerLibrary.generated.h already included, missing '#pragma once' in StructContainerLibrary.h"
#endif
#define ABILITIES_StructContainerLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UScriptStruct;
struct FGenericStruct;
struct FStructContainer;

// ********** Begin Class UStructContainerLibrary **************************************************
#define FID_Projects_Piperift_TestBench_Plugins_Abilities_Build_HostProject_Plugins_Abilities_Source_Abilities_Public_Misc_StructContainerLibrary_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execHasStruct); \
	DECLARE_FUNCTION(execEmpty);


struct Z_Construct_UClass_UStructContainerLibrary_Statics;
	struct Z_Construct_UFunction_UStructContainerLibrary_AddStruct_Statics; \
	struct Z_Construct_UFunction_UStructContainerLibrary_GetStruct_Statics; \
ABILITIES_API UClass* Z_Construct_UClass_UStructContainerLibrary_NoRegister();

#define FID_Projects_Piperift_TestBench_Plugins_Abilities_Build_HostProject_Plugins_Abilities_Source_Abilities_Public_Misc_StructContainerLibrary_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUStructContainerLibrary(); \
	friend struct ::Z_Construct_UClass_UStructContainerLibrary_Statics; \
	friend struct ::Z_Construct_UFunction_UStructContainerLibrary_AddStruct_Statics; \
	friend struct ::Z_Construct_UFunction_UStructContainerLibrary_GetStruct_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ABILITIES_API UClass* ::Z_Construct_UClass_UStructContainerLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(UStructContainerLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Abilities"), Z_Construct_UClass_UStructContainerLibrary_NoRegister) \
	DECLARE_SERIALIZER(UStructContainerLibrary)


#define FID_Projects_Piperift_TestBench_Plugins_Abilities_Build_HostProject_Plugins_Abilities_Source_Abilities_Public_Misc_StructContainerLibrary_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UStructContainerLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UStructContainerLibrary(UStructContainerLibrary&&) = delete; \
	UStructContainerLibrary(const UStructContainerLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UStructContainerLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStructContainerLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UStructContainerLibrary) \
	NO_API virtual ~UStructContainerLibrary();


#define FID_Projects_Piperift_TestBench_Plugins_Abilities_Build_HostProject_Plugins_Abilities_Source_Abilities_Public_Misc_StructContainerLibrary_h_10_PROLOG
#define FID_Projects_Piperift_TestBench_Plugins_Abilities_Build_HostProject_Plugins_Abilities_Source_Abilities_Public_Misc_StructContainerLibrary_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Projects_Piperift_TestBench_Plugins_Abilities_Build_HostProject_Plugins_Abilities_Source_Abilities_Public_Misc_StructContainerLibrary_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Projects_Piperift_TestBench_Plugins_Abilities_Build_HostProject_Plugins_Abilities_Source_Abilities_Public_Misc_StructContainerLibrary_h_13_INCLASS_NO_PURE_DECLS \
	FID_Projects_Piperift_TestBench_Plugins_Abilities_Build_HostProject_Plugins_Abilities_Source_Abilities_Public_Misc_StructContainerLibrary_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UStructContainerLibrary;

// ********** End Class UStructContainerLibrary ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Projects_Piperift_TestBench_Plugins_Abilities_Build_HostProject_Plugins_Abilities_Source_Abilities_Public_Misc_StructContainerLibrary_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
