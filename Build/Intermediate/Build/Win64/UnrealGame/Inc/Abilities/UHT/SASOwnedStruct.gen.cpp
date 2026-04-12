// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Misc/SASOwnedStruct.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeSASOwnedStruct() {}

// ********** Begin Cross Module References ********************************************************
ABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FSASOwnedStruct();
UPackage* Z_Construct_UPackage__Script_Abilities();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FSASOwnedStruct ***************************************************
struct Z_Construct_UScriptStruct_FSASOwnedStruct_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FSASOwnedStruct); }
	static inline consteval int16 GetStructAlignment() { return alignof(FSASOwnedStruct); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Misc/SASOwnedStruct.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FSASOwnedStruct constinit property declarations *******************
// ********** End ScriptStruct FSASOwnedStruct constinit property declarations *********************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSASOwnedStruct>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FSASOwnedStruct_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FSASOwnedStruct;
class UScriptStruct* FSASOwnedStruct::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FSASOwnedStruct.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FSASOwnedStruct.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSASOwnedStruct, (UObject*)Z_Construct_UPackage__Script_Abilities(), TEXT("SASOwnedStruct"));
	}
	return Z_Registration_Info_UScriptStruct_FSASOwnedStruct.OuterSingleton;
	}
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSASOwnedStruct_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Abilities,
	nullptr,
	&NewStructOps,
	"SASOwnedStruct",
	nullptr,
	0,
	sizeof(FSASOwnedStruct),
	alignof(FSASOwnedStruct),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSASOwnedStruct_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSASOwnedStruct_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSASOwnedStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FSASOwnedStruct.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FSASOwnedStruct.InnerSingleton, Z_Construct_UScriptStruct_FSASOwnedStruct_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FSASOwnedStruct.InnerSingleton);
}
// ********** End ScriptStruct FSASOwnedStruct *****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Projects_Piperift_TestBench_Plugins_Abilities_Build_HostProject_Plugins_Abilities_Source_Abilities_Public_Misc_SASOwnedStruct_h__Script_Abilities_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FSASOwnedStruct::StaticStruct, Z_Construct_UScriptStruct_FSASOwnedStruct_Statics::NewStructOps, TEXT("SASOwnedStruct"),&Z_Registration_Info_UScriptStruct_FSASOwnedStruct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSASOwnedStruct), 2032912393U) },
	};
}; // Z_CompiledInDeferFile_FID_Projects_Piperift_TestBench_Plugins_Abilities_Build_HostProject_Plugins_Abilities_Source_Abilities_Public_Misc_SASOwnedStruct_h__Script_Abilities_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_Piperift_TestBench_Plugins_Abilities_Build_HostProject_Plugins_Abilities_Source_Abilities_Public_Misc_SASOwnedStruct_h__Script_Abilities_3661300107{
	TEXT("/Script/Abilities"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Projects_Piperift_TestBench_Plugins_Abilities_Build_HostProject_Plugins_Abilities_Source_Abilities_Public_Misc_SASOwnedStruct_h__Script_Abilities_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_Piperift_TestBench_Plugins_Abilities_Build_HostProject_Plugins_Abilities_Source_Abilities_Public_Misc_SASOwnedStruct_h__Script_Abilities_Statics::ScriptStructInfo),
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
