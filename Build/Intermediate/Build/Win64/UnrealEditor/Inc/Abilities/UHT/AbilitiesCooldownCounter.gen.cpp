// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AbilitiesCooldownCounter.h"
#include "Engine/TimerHandle.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeAbilitiesCooldownCounter() {}

// ********** Begin Cross Module References ********************************************************
ABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FAbilitiesCooldownCounter();
ABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FSASOwnedStruct();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTimerHandle();
UPackage* Z_Construct_UPackage__Script_Abilities();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FAbilitiesCooldownCounter *****************************************
struct Z_Construct_UScriptStruct_FAbilitiesCooldownCounter_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FAbilitiesCooldownCounter); }
	static inline consteval int16 GetStructAlignment() { return alignof(FAbilitiesCooldownCounter); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AbilitiesCooldownCounter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Handles_MetaData[] = {
		{ "ModuleRelativePath", "Public/AbilitiesCooldownCounter.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FAbilitiesCooldownCounter constinit property declarations *********
	static const UECodeGen_Private::FStructPropertyParams NewProp_Handles_ValueProp;
	static const UECodeGen_Private::FClassPropertyParams NewProp_Handles_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_Handles;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FAbilitiesCooldownCounter constinit property declarations ***********
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAbilitiesCooldownCounter>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FAbilitiesCooldownCounter_Statics
static_assert(std::is_polymorphic<FAbilitiesCooldownCounter>() == std::is_polymorphic<FSASOwnedStruct>(), "USTRUCT FAbilitiesCooldownCounter cannot be polymorphic unless super FSASOwnedStruct is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FAbilitiesCooldownCounter;
class UScriptStruct* FAbilitiesCooldownCounter::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FAbilitiesCooldownCounter.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FAbilitiesCooldownCounter.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAbilitiesCooldownCounter, (UObject*)Z_Construct_UPackage__Script_Abilities(), TEXT("AbilitiesCooldownCounter"));
	}
	return Z_Registration_Info_UScriptStruct_FAbilitiesCooldownCounter.OuterSingleton;
	}

// ********** Begin ScriptStruct FAbilitiesCooldownCounter Property Definitions ********************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAbilitiesCooldownCounter_Statics::NewProp_Handles_ValueProp = { "Handles", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(0, nullptr) }; // 3998242883
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FAbilitiesCooldownCounter_Statics::NewProp_Handles_Key_KeyProp = { "Handles_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass_NoRegister, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FAbilitiesCooldownCounter_Statics::NewProp_Handles = { "Handles", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAbilitiesCooldownCounter, Handles), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Handles_MetaData), NewProp_Handles_MetaData) }; // 3998242883
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAbilitiesCooldownCounter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAbilitiesCooldownCounter_Statics::NewProp_Handles_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAbilitiesCooldownCounter_Statics::NewProp_Handles_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAbilitiesCooldownCounter_Statics::NewProp_Handles,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAbilitiesCooldownCounter_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FAbilitiesCooldownCounter Property Definitions **********************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAbilitiesCooldownCounter_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Abilities,
	Z_Construct_UScriptStruct_FSASOwnedStruct,
	&NewStructOps,
	"AbilitiesCooldownCounter",
	Z_Construct_UScriptStruct_FAbilitiesCooldownCounter_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAbilitiesCooldownCounter_Statics::PropPointers),
	sizeof(FAbilitiesCooldownCounter),
	alignof(FAbilitiesCooldownCounter),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAbilitiesCooldownCounter_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAbilitiesCooldownCounter_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAbilitiesCooldownCounter()
{
	if (!Z_Registration_Info_UScriptStruct_FAbilitiesCooldownCounter.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FAbilitiesCooldownCounter.InnerSingleton, Z_Construct_UScriptStruct_FAbilitiesCooldownCounter_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FAbilitiesCooldownCounter.InnerSingleton);
}
// ********** End ScriptStruct FAbilitiesCooldownCounter *******************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Projects_Piperift_TestBench_Plugins_Abilities_Build_HostProject_Plugins_Abilities_Source_Abilities_Public_AbilitiesCooldownCounter_h__Script_Abilities_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FAbilitiesCooldownCounter::StaticStruct, Z_Construct_UScriptStruct_FAbilitiesCooldownCounter_Statics::NewStructOps, TEXT("AbilitiesCooldownCounter"),&Z_Registration_Info_UScriptStruct_FAbilitiesCooldownCounter, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAbilitiesCooldownCounter), 618183346U) },
	};
}; // Z_CompiledInDeferFile_FID_Projects_Piperift_TestBench_Plugins_Abilities_Build_HostProject_Plugins_Abilities_Source_Abilities_Public_AbilitiesCooldownCounter_h__Script_Abilities_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_Piperift_TestBench_Plugins_Abilities_Build_HostProject_Plugins_Abilities_Source_Abilities_Public_AbilitiesCooldownCounter_h__Script_Abilities_2762723359{
	TEXT("/Script/Abilities"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Projects_Piperift_TestBench_Plugins_Abilities_Build_HostProject_Plugins_Abilities_Source_Abilities_Public_AbilitiesCooldownCounter_h__Script_Abilities_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_Piperift_TestBench_Plugins_Abilities_Build_HostProject_Plugins_Abilities_Source_Abilities_Public_AbilitiesCooldownCounter_h__Script_Abilities_Statics::ScriptStructInfo),
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
