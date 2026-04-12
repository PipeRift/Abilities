// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BuffsLifetimeCounter.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeBuffsLifetimeCounter() {}

// ********** Begin Cross Module References ********************************************************
ABILITIES_API UClass* Z_Construct_UClass_UBuff_NoRegister();
ABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FBuffsLifetimeCounter();
ABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FSASOwnedStruct();
UPackage* Z_Construct_UPackage__Script_Abilities();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FBuffsLifetimeCounter *********************************************
struct Z_Construct_UScriptStruct_FBuffsLifetimeCounter_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FBuffsLifetimeCounter); }
	static inline consteval int16 GetStructAlignment() { return alignof(FBuffsLifetimeCounter); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BuffsLifetimeCounter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LifetimePerBuff_MetaData[] = {
		{ "Comment", "// Stores the GameTime at which each buff will finish its effect\n" },
		{ "ModuleRelativePath", "Public/BuffsLifetimeCounter.h" },
		{ "ToolTip", "Stores the GameTime at which each buff will finish its effect" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FBuffsLifetimeCounter constinit property declarations *************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LifetimePerBuff_ValueProp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LifetimePerBuff_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_LifetimePerBuff;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FBuffsLifetimeCounter constinit property declarations ***************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBuffsLifetimeCounter>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FBuffsLifetimeCounter_Statics
static_assert(std::is_polymorphic<FBuffsLifetimeCounter>() == std::is_polymorphic<FSASOwnedStruct>(), "USTRUCT FBuffsLifetimeCounter cannot be polymorphic unless super FSASOwnedStruct is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FBuffsLifetimeCounter;
class UScriptStruct* FBuffsLifetimeCounter::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FBuffsLifetimeCounter.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FBuffsLifetimeCounter.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBuffsLifetimeCounter, (UObject*)Z_Construct_UPackage__Script_Abilities(), TEXT("BuffsLifetimeCounter"));
	}
	return Z_Registration_Info_UScriptStruct_FBuffsLifetimeCounter.OuterSingleton;
	}

// ********** Begin ScriptStruct FBuffsLifetimeCounter Property Definitions ************************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBuffsLifetimeCounter_Statics::NewProp_LifetimePerBuff_ValueProp = { "LifetimePerBuff", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FBuffsLifetimeCounter_Statics::NewProp_LifetimePerBuff_Key_KeyProp = { "LifetimePerBuff_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UBuff_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FBuffsLifetimeCounter_Statics::NewProp_LifetimePerBuff = { "LifetimePerBuff", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBuffsLifetimeCounter, LifetimePerBuff), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LifetimePerBuff_MetaData), NewProp_LifetimePerBuff_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBuffsLifetimeCounter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBuffsLifetimeCounter_Statics::NewProp_LifetimePerBuff_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBuffsLifetimeCounter_Statics::NewProp_LifetimePerBuff_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBuffsLifetimeCounter_Statics::NewProp_LifetimePerBuff,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBuffsLifetimeCounter_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FBuffsLifetimeCounter Property Definitions **************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBuffsLifetimeCounter_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Abilities,
	Z_Construct_UScriptStruct_FSASOwnedStruct,
	&NewStructOps,
	"BuffsLifetimeCounter",
	Z_Construct_UScriptStruct_FBuffsLifetimeCounter_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBuffsLifetimeCounter_Statics::PropPointers),
	sizeof(FBuffsLifetimeCounter),
	alignof(FBuffsLifetimeCounter),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBuffsLifetimeCounter_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FBuffsLifetimeCounter_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FBuffsLifetimeCounter()
{
	if (!Z_Registration_Info_UScriptStruct_FBuffsLifetimeCounter.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FBuffsLifetimeCounter.InnerSingleton, Z_Construct_UScriptStruct_FBuffsLifetimeCounter_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FBuffsLifetimeCounter.InnerSingleton);
}
// ********** End ScriptStruct FBuffsLifetimeCounter ***********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Projects_Piperift_TestBench_Plugins_Abilities_Build_HostProject_Plugins_Abilities_Source_Abilities_Public_BuffsLifetimeCounter_h__Script_Abilities_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FBuffsLifetimeCounter::StaticStruct, Z_Construct_UScriptStruct_FBuffsLifetimeCounter_Statics::NewStructOps, TEXT("BuffsLifetimeCounter"),&Z_Registration_Info_UScriptStruct_FBuffsLifetimeCounter, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBuffsLifetimeCounter), 2522989921U) },
	};
}; // Z_CompiledInDeferFile_FID_Projects_Piperift_TestBench_Plugins_Abilities_Build_HostProject_Plugins_Abilities_Source_Abilities_Public_BuffsLifetimeCounter_h__Script_Abilities_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_Piperift_TestBench_Plugins_Abilities_Build_HostProject_Plugins_Abilities_Source_Abilities_Public_BuffsLifetimeCounter_h__Script_Abilities_1693462523{
	TEXT("/Script/Abilities"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Projects_Piperift_TestBench_Plugins_Abilities_Build_HostProject_Plugins_Abilities_Source_Abilities_Public_BuffsLifetimeCounter_h__Script_Abilities_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_Piperift_TestBench_Plugins_Abilities_Build_HostProject_Plugins_Abilities_Source_Abilities_Public_BuffsLifetimeCounter_h__Script_Abilities_Statics::ScriptStructInfo),
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
