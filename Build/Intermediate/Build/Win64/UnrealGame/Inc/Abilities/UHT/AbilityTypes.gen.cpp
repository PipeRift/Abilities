// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AbilityTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeAbilityTypes() {}

// ********** Begin Cross Module References ********************************************************
ABILITIES_API UEnum* Z_Construct_UEnum_Abilities_EAbilityState();
ABILITIES_API UEnum* Z_Construct_UEnum_Abilities_EAbilityTransitionFlag();
ABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FAbilityStateTransition();
UPackage* Z_Construct_UPackage__Script_Abilities();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EAbilityState *************************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAbilityState;
static UEnum* EAbilityState_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EAbilityState.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EAbilityState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Abilities_EAbilityState, (UObject*)Z_Construct_UPackage__Script_Abilities(), TEXT("EAbilityState"));
	}
	return Z_Registration_Info_UEnum_EAbilityState.OuterSingleton;
}
template<> ABILITIES_NON_ATTRIBUTED_API UEnum* StaticEnum<EAbilityState>()
{
	return EAbilityState_StaticEnum();
}
struct Z_Construct_UEnum_Abilities_EAbilityState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Activation.Comment", "// State in which the player will drag a curve or wait for some time\n" },
		{ "Activation.Name", "EAbilityState::Activation" },
		{ "Activation.ToolTip", "State in which the player will drag a curve or wait for some time" },
		{ "AfterEndPlay.Hidden", "" },
		{ "AfterEndPlay.Name", "EAbilityState::AfterEndPlay" },
		{ "BeforeBeginPlay.Hidden", "" },
		{ "BeforeBeginPlay.Name", "EAbilityState::BeforeBeginPlay" },
		{ "BlueprintType", "true" },
		{ "Cancelled.Comment", "// After begin play the ability will be \"JustEquipped\"\n" },
		{ "Cancelled.Name", "EAbilityState::Cancelled" },
		{ "Cancelled.ToolTip", "After begin play the ability will be \"JustEquipped\"" },
		{ "Cast.Comment", "// If the ability finished successfully last time it executed\n" },
		{ "Cast.Name", "EAbilityState::Cast" },
		{ "Cast.ToolTip", "If the ability finished successfully last time it executed" },
		{ "IsBlueprintBase", "true" },
		{ "JustEquipped.Name", "EAbilityState::JustEquipped" },
		{ "ModuleRelativePath", "Public/AbilityTypes.h" },
		{ "None.Hidden", "" },
		{ "None.Name", "EAbilityState::None" },
		{ "Succeeded.Comment", "// If the ability canceled last time it executed\n" },
		{ "Succeeded.Name", "EAbilityState::Succeeded" },
		{ "Succeeded.ToolTip", "If the ability canceled last time it executed" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EAbilityState::None", (int64)EAbilityState::None },
		{ "EAbilityState::BeforeBeginPlay", (int64)EAbilityState::BeforeBeginPlay },
		{ "EAbilityState::JustEquipped", (int64)EAbilityState::JustEquipped },
		{ "EAbilityState::Cancelled", (int64)EAbilityState::Cancelled },
		{ "EAbilityState::Succeeded", (int64)EAbilityState::Succeeded },
		{ "EAbilityState::Cast", (int64)EAbilityState::Cast },
		{ "EAbilityState::Activation", (int64)EAbilityState::Activation },
		{ "EAbilityState::AfterEndPlay", (int64)EAbilityState::AfterEndPlay },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_Abilities_EAbilityState_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Abilities_EAbilityState_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Abilities,
	nullptr,
	"EAbilityState",
	"EAbilityState",
	Z_Construct_UEnum_Abilities_EAbilityState_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Abilities_EAbilityState_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Abilities_EAbilityState_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Abilities_EAbilityState_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Abilities_EAbilityState()
{
	if (!Z_Registration_Info_UEnum_EAbilityState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAbilityState.InnerSingleton, Z_Construct_UEnum_Abilities_EAbilityState_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EAbilityState.InnerSingleton;
}
// ********** End Enum EAbilityState ***************************************************************

// ********** Begin Enum EAbilityTransitionFlag ****************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAbilityTransitionFlag;
static UEnum* EAbilityTransitionFlag_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EAbilityTransitionFlag.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EAbilityTransitionFlag.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Abilities_EAbilityTransitionFlag, (UObject*)Z_Construct_UPackage__Script_Abilities(), TEXT("EAbilityTransitionFlag"));
	}
	return Z_Registration_Info_UEnum_EAbilityTransitionFlag.OuterSingleton;
}
template<> ABILITIES_NON_ATTRIBUTED_API UEnum* StaticEnum<EAbilityTransitionFlag>()
{
	return EAbilityTransitionFlag_StaticEnum();
}
struct Z_Construct_UEnum_Abilities_EAbilityTransitionFlag_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BitFlags", "" },
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/AbilityTypes.h" },
		{ "None.Name", "EAbilityTransitionFlag::None" },
		{ "PredictionFailed.Hidden", "" },
		{ "PredictionFailed.Name", "EAbilityTransitionFlag::PredictionFailed" },
		{ "StartCooldown.Name", "EAbilityTransitionFlag::StartCooldown" },
		{ "UseEnumValuesAsMaskValuesInEditor", "true" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EAbilityTransitionFlag::None", (int64)EAbilityTransitionFlag::None },
		{ "EAbilityTransitionFlag::StartCooldown", (int64)EAbilityTransitionFlag::StartCooldown },
		{ "EAbilityTransitionFlag::PredictionFailed", (int64)EAbilityTransitionFlag::PredictionFailed },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_Abilities_EAbilityTransitionFlag_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Abilities_EAbilityTransitionFlag_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Abilities,
	nullptr,
	"EAbilityTransitionFlag",
	"EAbilityTransitionFlag",
	Z_Construct_UEnum_Abilities_EAbilityTransitionFlag_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Abilities_EAbilityTransitionFlag_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Abilities_EAbilityTransitionFlag_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Abilities_EAbilityTransitionFlag_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Abilities_EAbilityTransitionFlag()
{
	if (!Z_Registration_Info_UEnum_EAbilityTransitionFlag.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAbilityTransitionFlag.InnerSingleton, Z_Construct_UEnum_Abilities_EAbilityTransitionFlag_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EAbilityTransitionFlag.InnerSingleton;
}
// ********** End Enum EAbilityTransitionFlag ******************************************************

// ********** Begin ScriptStruct FAbilityStateTransition *******************************************
struct Z_Construct_UScriptStruct_FAbilityStateTransition_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FAbilityStateTransition); }
	static inline consteval int16 GetStructAlignment() { return alignof(FAbilityStateTransition); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AbilityTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Origin_MetaData[] = {
		{ "Category", "Transition" },
		{ "ModuleRelativePath", "Public/AbilityTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Destination_MetaData[] = {
		{ "Category", "Transition" },
		{ "ModuleRelativePath", "Public/AbilityTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Flags_MetaData[] = {
		{ "Bitmask", "" },
		{ "BitmaskEnum", "/Script/Abilities.EAbilityTransitionFlag" },
		{ "Category", "Transition" },
		{ "ModuleRelativePath", "Public/AbilityTypes.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FAbilityStateTransition constinit property declarations ***********
	static const UECodeGen_Private::FBytePropertyParams NewProp_Origin_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Origin;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Destination_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Destination;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Flags_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Flags;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FAbilityStateTransition constinit property declarations *************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAbilityStateTransition>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FAbilityStateTransition_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FAbilityStateTransition;
class UScriptStruct* FAbilityStateTransition::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FAbilityStateTransition.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FAbilityStateTransition.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAbilityStateTransition, (UObject*)Z_Construct_UPackage__Script_Abilities(), TEXT("AbilityStateTransition"));
	}
	return Z_Registration_Info_UScriptStruct_FAbilityStateTransition.OuterSingleton;
	}

// ********** Begin ScriptStruct FAbilityStateTransition Property Definitions **********************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAbilityStateTransition_Statics::NewProp_Origin_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAbilityStateTransition_Statics::NewProp_Origin = { "Origin", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAbilityStateTransition, Origin), Z_Construct_UEnum_Abilities_EAbilityState, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Origin_MetaData), NewProp_Origin_MetaData) }; // 4185111732
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAbilityStateTransition_Statics::NewProp_Destination_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAbilityStateTransition_Statics::NewProp_Destination = { "Destination", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAbilityStateTransition, Destination), Z_Construct_UEnum_Abilities_EAbilityState, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Destination_MetaData), NewProp_Destination_MetaData) }; // 4185111732
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAbilityStateTransition_Statics::NewProp_Flags_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAbilityStateTransition_Statics::NewProp_Flags = { "Flags", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAbilityStateTransition, Flags), Z_Construct_UEnum_Abilities_EAbilityTransitionFlag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Flags_MetaData), NewProp_Flags_MetaData) }; // 4116226907
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAbilityStateTransition_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAbilityStateTransition_Statics::NewProp_Origin_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAbilityStateTransition_Statics::NewProp_Origin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAbilityStateTransition_Statics::NewProp_Destination_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAbilityStateTransition_Statics::NewProp_Destination,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAbilityStateTransition_Statics::NewProp_Flags_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAbilityStateTransition_Statics::NewProp_Flags,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAbilityStateTransition_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FAbilityStateTransition Property Definitions ************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAbilityStateTransition_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Abilities,
	nullptr,
	&NewStructOps,
	"AbilityStateTransition",
	Z_Construct_UScriptStruct_FAbilityStateTransition_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAbilityStateTransition_Statics::PropPointers),
	sizeof(FAbilityStateTransition),
	alignof(FAbilityStateTransition),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAbilityStateTransition_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAbilityStateTransition_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAbilityStateTransition()
{
	if (!Z_Registration_Info_UScriptStruct_FAbilityStateTransition.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FAbilityStateTransition.InnerSingleton, Z_Construct_UScriptStruct_FAbilityStateTransition_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FAbilityStateTransition.InnerSingleton);
}
// ********** End ScriptStruct FAbilityStateTransition *********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Projects_Piperift_TestBench_Plugins_Abilities_Build_HostProject_Plugins_Abilities_Source_Abilities_Public_AbilityTypes_h__Script_Abilities_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EAbilityState_StaticEnum, TEXT("EAbilityState"), &Z_Registration_Info_UEnum_EAbilityState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4185111732U) },
		{ EAbilityTransitionFlag_StaticEnum, TEXT("EAbilityTransitionFlag"), &Z_Registration_Info_UEnum_EAbilityTransitionFlag, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4116226907U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FAbilityStateTransition::StaticStruct, Z_Construct_UScriptStruct_FAbilityStateTransition_Statics::NewStructOps, TEXT("AbilityStateTransition"),&Z_Registration_Info_UScriptStruct_FAbilityStateTransition, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAbilityStateTransition), 2353912302U) },
	};
}; // Z_CompiledInDeferFile_FID_Projects_Piperift_TestBench_Plugins_Abilities_Build_HostProject_Plugins_Abilities_Source_Abilities_Public_AbilityTypes_h__Script_Abilities_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_Piperift_TestBench_Plugins_Abilities_Build_HostProject_Plugins_Abilities_Source_Abilities_Public_AbilityTypes_h__Script_Abilities_1646958763{
	TEXT("/Script/Abilities"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Projects_Piperift_TestBench_Plugins_Abilities_Build_HostProject_Plugins_Abilities_Source_Abilities_Public_AbilityTypes_h__Script_Abilities_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_Piperift_TestBench_Plugins_Abilities_Build_HostProject_Plugins_Abilities_Source_Abilities_Public_AbilityTypes_h__Script_Abilities_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Projects_Piperift_TestBench_Plugins_Abilities_Build_HostProject_Plugins_Abilities_Source_Abilities_Public_AbilityTypes_h__Script_Abilities_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_Piperift_TestBench_Plugins_Abilities_Build_HostProject_Plugins_Abilities_Source_Abilities_Public_AbilityTypes_h__Script_Abilities_Statics::EnumInfo),
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
