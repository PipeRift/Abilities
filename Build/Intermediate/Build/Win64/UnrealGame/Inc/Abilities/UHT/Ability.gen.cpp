// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Ability.h"
#include "GameplayTagContainer.h"
#include "Misc/StructContainer.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeAbility() {}

// ********** Begin Cross Module References ********************************************************
ABILITIES_API UClass* Z_Construct_UClass_UAbility();
ABILITIES_API UClass* Z_Construct_UClass_UAbility_NoRegister();
ABILITIES_API UClass* Z_Construct_UClass_UAbilityBase();
ABILITIES_API UEnum* Z_Construct_UEnum_Abilities_EAbilityCooldownMode();
ABILITIES_API UEnum* Z_Construct_UEnum_Abilities_EAbilityInputProfile();
ABILITIES_API UEnum* Z_Construct_UEnum_Abilities_EAbilityTickMode();
ABILITIES_API UEnum* Z_Construct_UEnum_Abilities_ECooldownReadyReason();
ABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FStructContainer();
ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
UPackage* Z_Construct_UPackage__Script_Abilities();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EAbilityTickMode **********************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAbilityTickMode;
static UEnum* EAbilityTickMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EAbilityTickMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EAbilityTickMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Abilities_EAbilityTickMode, (UObject*)Z_Construct_UPackage__Script_Abilities(), TEXT("EAbilityTickMode"));
	}
	return Z_Registration_Info_UEnum_EAbilityTickMode.OuterSingleton;
}
template<> ABILITIES_NON_ATTRIBUTED_API UEnum* StaticEnum<EAbilityTickMode>()
{
	return EAbilityTickMode_StaticEnum();
}
struct Z_Construct_UEnum_Abilities_EAbilityTickMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Always.Comment", "// Tick on Cast & Activation state. Recommended option if ticking is needed\n" },
		{ "Always.Name", "EAbilityTickMode::Always" },
		{ "Always.ToolTip", "Tick on Cast & Activation state. Recommended option if ticking is needed" },
		{ "BlueprintType", "true" },
		{ "DuringActivationOnly.Comment", "// Tick only on Casting state\n" },
		{ "DuringActivationOnly.Name", "EAbilityTickMode::DuringActivationOnly" },
		{ "DuringActivationOnly.ToolTip", "Tick only on Casting state" },
		{ "DuringCastAndActivation.Comment", "// Tick only on Activation state\n" },
		{ "DuringCastAndActivation.Name", "EAbilityTickMode::DuringCastAndActivation" },
		{ "DuringCastAndActivation.ToolTip", "Tick only on Activation state" },
		{ "DuringCastOnly.Name", "EAbilityTickMode::DuringCastOnly" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Ability.h" },
		{ "Never.Name", "EAbilityTickMode::Never" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EAbilityTickMode::Never", (int64)EAbilityTickMode::Never },
		{ "EAbilityTickMode::DuringCastOnly", (int64)EAbilityTickMode::DuringCastOnly },
		{ "EAbilityTickMode::DuringActivationOnly", (int64)EAbilityTickMode::DuringActivationOnly },
		{ "EAbilityTickMode::DuringCastAndActivation", (int64)EAbilityTickMode::DuringCastAndActivation },
		{ "EAbilityTickMode::Always", (int64)EAbilityTickMode::Always },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_Abilities_EAbilityTickMode_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Abilities_EAbilityTickMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Abilities,
	nullptr,
	"EAbilityTickMode",
	"EAbilityTickMode",
	Z_Construct_UEnum_Abilities_EAbilityTickMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Abilities_EAbilityTickMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Abilities_EAbilityTickMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Abilities_EAbilityTickMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Abilities_EAbilityTickMode()
{
	if (!Z_Registration_Info_UEnum_EAbilityTickMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAbilityTickMode.InnerSingleton, Z_Construct_UEnum_Abilities_EAbilityTickMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EAbilityTickMode.InnerSingleton;
}
// ********** End Enum EAbilityTickMode ************************************************************

// ********** Begin Enum ECooldownReadyReason ******************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECooldownReadyReason;
static UEnum* ECooldownReadyReason_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ECooldownReadyReason.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ECooldownReadyReason.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Abilities_ECooldownReadyReason, (UObject*)Z_Construct_UPackage__Script_Abilities(), TEXT("ECooldownReadyReason"));
	}
	return Z_Registration_Info_UEnum_ECooldownReadyReason.OuterSingleton;
}
template<> ABILITIES_NON_ATTRIBUTED_API UEnum* StaticEnum<ECooldownReadyReason>()
{
	return ECooldownReadyReason_StaticEnum();
}
struct Z_Construct_UEnum_Abilities_ECooldownReadyReason_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Finished.Name", "ECooldownReadyReason::Finished" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Ability.h" },
		{ "Resseted.Name", "ECooldownReadyReason::Resseted" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ECooldownReadyReason::Finished", (int64)ECooldownReadyReason::Finished },
		{ "ECooldownReadyReason::Resseted", (int64)ECooldownReadyReason::Resseted },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_Abilities_ECooldownReadyReason_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Abilities_ECooldownReadyReason_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Abilities,
	nullptr,
	"ECooldownReadyReason",
	"ECooldownReadyReason",
	Z_Construct_UEnum_Abilities_ECooldownReadyReason_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Abilities_ECooldownReadyReason_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Abilities_ECooldownReadyReason_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Abilities_ECooldownReadyReason_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Abilities_ECooldownReadyReason()
{
	if (!Z_Registration_Info_UEnum_ECooldownReadyReason.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECooldownReadyReason.InnerSingleton, Z_Construct_UEnum_Abilities_ECooldownReadyReason_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ECooldownReadyReason.InnerSingleton;
}
// ********** End Enum ECooldownReadyReason ********************************************************

// ********** Begin Enum EAbilityCooldownMode ******************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAbilityCooldownMode;
static UEnum* EAbilityCooldownMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EAbilityCooldownMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EAbilityCooldownMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Abilities_EAbilityCooldownMode, (UObject*)Z_Construct_UPackage__Script_Abilities(), TEXT("EAbilityCooldownMode"));
	}
	return Z_Registration_Info_UEnum_EAbilityCooldownMode.OuterSingleton;
}
template<> ABILITIES_NON_ATTRIBUTED_API UEnum* StaticEnum<EAbilityCooldownMode>()
{
	return EAbilityCooldownMode_StaticEnum();
}
struct Z_Construct_UEnum_Abilities_EAbilityCooldownMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Manual.Comment", "// Starts cooldown just after deactivation\n" },
		{ "Manual.Name", "EAbilityCooldownMode::Manual" },
		{ "Manual.ToolTip", "Starts cooldown just after deactivation" },
		{ "ModuleRelativePath", "Public/Ability.h" },
		{ "OnActivation.Name", "EAbilityCooldownMode::OnActivation" },
		{ "OnDeactivation.Comment", "// Starts cooldown just after activation\n" },
		{ "OnDeactivation.Name", "EAbilityCooldownMode::OnDeactivation" },
		{ "OnDeactivation.ToolTip", "Starts cooldown just after activation" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EAbilityCooldownMode::OnActivation", (int64)EAbilityCooldownMode::OnActivation },
		{ "EAbilityCooldownMode::OnDeactivation", (int64)EAbilityCooldownMode::OnDeactivation },
		{ "EAbilityCooldownMode::Manual", (int64)EAbilityCooldownMode::Manual },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_Abilities_EAbilityCooldownMode_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Abilities_EAbilityCooldownMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Abilities,
	nullptr,
	"EAbilityCooldownMode",
	"EAbilityCooldownMode",
	Z_Construct_UEnum_Abilities_EAbilityCooldownMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Abilities_EAbilityCooldownMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Abilities_EAbilityCooldownMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Abilities_EAbilityCooldownMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Abilities_EAbilityCooldownMode()
{
	if (!Z_Registration_Info_UEnum_EAbilityCooldownMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAbilityCooldownMode.InnerSingleton, Z_Construct_UEnum_Abilities_EAbilityCooldownMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EAbilityCooldownMode.InnerSingleton;
}
// ********** End Enum EAbilityCooldownMode ********************************************************

// ********** Begin Enum EAbilityInputProfile ******************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAbilityInputProfile;
static UEnum* EAbilityInputProfile_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EAbilityInputProfile.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EAbilityInputProfile.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Abilities_EAbilityInputProfile, (UObject*)Z_Construct_UPackage__Script_Abilities(), TEXT("EAbilityInputProfile"));
	}
	return Z_Registration_Info_UEnum_EAbilityInputProfile.OuterSingleton;
}
template<> ABILITIES_NON_ATTRIBUTED_API UEnum* StaticEnum<EAbilityInputProfile>()
{
	return EAbilityInputProfile_StaticEnum();
}
struct Z_Construct_UEnum_Abilities_EAbilityInputProfile_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "ActivateOnPress.Comment", "// Will cast the ability when pressed, and activate it when released. If there's no cast, this be equal to \"ActivateOnPress\"\n" },
		{ "ActivateOnPress.Name", "EAbilityInputProfile::ActivateOnPress" },
		{ "ActivateOnPress.ToolTip", "Will cast the ability when pressed, and activate it when released. If there's no cast, this be equal to \"ActivateOnPress\"" },
		{ "ActivateWhileHolding.Comment", "// Will activate the ability when pressed\n" },
		{ "ActivateWhileHolding.Name", "EAbilityInputProfile::ActivateWhileHolding" },
		{ "ActivateWhileHolding.ToolTip", "Will activate the ability when pressed" },
		{ "CastWhileHolding.Name", "EAbilityInputProfile::CastWhileHolding" },
		{ "ModuleRelativePath", "Public/Ability.h" },
		{ "None.Comment", "// Activate when clicked, Deactivate when clicked again\n" },
		{ "None.Name", "EAbilityInputProfile::None" },
		{ "None.ToolTip", "Activate when clicked, Deactivate when clicked again" },
		{ "ToggleActivationOnPress.Comment", "// Will activate the ability when pressed, and deactivate it when released\n" },
		{ "ToggleActivationOnPress.Name", "EAbilityInputProfile::ToggleActivationOnPress" },
		{ "ToggleActivationOnPress.ToolTip", "Will activate the ability when pressed, and deactivate it when released" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EAbilityInputProfile::CastWhileHolding", (int64)EAbilityInputProfile::CastWhileHolding },
		{ "EAbilityInputProfile::ActivateOnPress", (int64)EAbilityInputProfile::ActivateOnPress },
		{ "EAbilityInputProfile::ActivateWhileHolding", (int64)EAbilityInputProfile::ActivateWhileHolding },
		{ "EAbilityInputProfile::ToggleActivationOnPress", (int64)EAbilityInputProfile::ToggleActivationOnPress },
		{ "EAbilityInputProfile::None", (int64)EAbilityInputProfile::None },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_Abilities_EAbilityInputProfile_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Abilities_EAbilityInputProfile_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Abilities,
	nullptr,
	"EAbilityInputProfile",
	"EAbilityInputProfile",
	Z_Construct_UEnum_Abilities_EAbilityInputProfile_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Abilities_EAbilityInputProfile_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Abilities_EAbilityInputProfile_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Abilities_EAbilityInputProfile_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Abilities_EAbilityInputProfile()
{
	if (!Z_Registration_Info_UEnum_EAbilityInputProfile.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAbilityInputProfile.InnerSingleton, Z_Construct_UEnum_Abilities_EAbilityInputProfile_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EAbilityInputProfile.InnerSingleton;
}
// ********** End Enum EAbilityInputProfile ********************************************************

// ********** Begin Class UAbility Function Activate ***********************************************
struct Z_Construct_UFunction_UAbility_Activate_Statics
{
	struct Ability_eventActivate_Parms
	{
		FStructContainer Container;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ability" },
		{ "ModuleRelativePath", "Public/Ability.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function Activate constinit property declarations ******************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Container;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function Activate constinit property declarations ********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function Activate Property Definitions *****************************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAbility_Activate_Statics::NewProp_Container = { "Container", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Ability_eventActivate_Parms, Container), Z_Construct_UScriptStruct_FStructContainer, METADATA_PARAMS(0, nullptr) }; // 2073357063
void Z_Construct_UFunction_UAbility_Activate_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((Ability_eventActivate_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAbility_Activate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Ability_eventActivate_Parms), &Z_Construct_UFunction_UAbility_Activate_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAbility_Activate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbility_Activate_Statics::NewProp_Container,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbility_Activate_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbility_Activate_Statics::PropPointers) < 2048);
// ********** End Function Activate Property Definitions *******************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbility_Activate_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAbility, nullptr, "Activate", 	Z_Construct_UFunction_UAbility_Activate_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UAbility_Activate_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UAbility_Activate_Statics::Ability_eventActivate_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbility_Activate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAbility_Activate_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAbility_Activate_Statics::Ability_eventActivate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAbility_Activate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAbility_Activate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAbility::execActivate)
{
	P_GET_STRUCT(FStructContainer,Z_Param_Container);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->Activate(Z_Param_Container);
	P_NATIVE_END;
}
// ********** End Class UAbility Function Activate *************************************************

// ********** Begin Class UAbility Function ActivateOrCancel ***************************************
struct Z_Construct_UFunction_UAbility_ActivateOrCancel_Statics
{
	struct Ability_eventActivateOrCancel_Parms
	{
		FStructContainer Container;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ability" },
		{ "Comment", "// Finishes cast and continues with activation ONLY if the ability was casting.\n" },
		{ "ModuleRelativePath", "Public/Ability.h" },
		{ "ToolTip", "Finishes cast and continues with activation ONLY if the ability was casting." },
	};
#endif // WITH_METADATA

// ********** Begin Function ActivateOrCancel constinit property declarations **********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Container;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ActivateOrCancel constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ActivateOrCancel Property Definitions *********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAbility_ActivateOrCancel_Statics::NewProp_Container = { "Container", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Ability_eventActivateOrCancel_Parms, Container), Z_Construct_UScriptStruct_FStructContainer, METADATA_PARAMS(0, nullptr) }; // 2073357063
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAbility_ActivateOrCancel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbility_ActivateOrCancel_Statics::NewProp_Container,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbility_ActivateOrCancel_Statics::PropPointers) < 2048);
// ********** End Function ActivateOrCancel Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbility_ActivateOrCancel_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAbility, nullptr, "ActivateOrCancel", 	Z_Construct_UFunction_UAbility_ActivateOrCancel_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UAbility_ActivateOrCancel_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UAbility_ActivateOrCancel_Statics::Ability_eventActivateOrCancel_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbility_ActivateOrCancel_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAbility_ActivateOrCancel_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAbility_ActivateOrCancel_Statics::Ability_eventActivateOrCancel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAbility_ActivateOrCancel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAbility_ActivateOrCancel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAbility::execActivateOrCancel)
{
	P_GET_STRUCT(FStructContainer,Z_Param_Container);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ActivateOrCancel(Z_Param_Container);
	P_NATIVE_END;
}
// ********** End Class UAbility Function ActivateOrCancel *****************************************

// ********** Begin Class UAbility Function Cancel *************************************************
struct Z_Construct_UFunction_UAbility_Cancel_Statics
{
	struct Ability_eventCancel_Parms
	{
		bool bApplyCooldown;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ability" },
		{ "Comment", "/** Cancels casting or activation\n\x09 * @param bApplyCooldown if false, will ignore cooldown activation\n\x09 */" },
		{ "CPP_Default_bApplyCooldown", "true" },
		{ "Keywords", "Deactivate Cast" },
		{ "ModuleRelativePath", "Public/Ability.h" },
		{ "ToolTip", "Cancels casting or activation\n@param bApplyCooldown if false, will ignore cooldown activation" },
	};
#endif // WITH_METADATA

// ********** Begin Function Cancel constinit property declarations ********************************
	static void NewProp_bApplyCooldown_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bApplyCooldown;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function Cancel constinit property declarations **********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function Cancel Property Definitions *******************************************
void Z_Construct_UFunction_UAbility_Cancel_Statics::NewProp_bApplyCooldown_SetBit(void* Obj)
{
	((Ability_eventCancel_Parms*)Obj)->bApplyCooldown = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAbility_Cancel_Statics::NewProp_bApplyCooldown = { "bApplyCooldown", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Ability_eventCancel_Parms), &Z_Construct_UFunction_UAbility_Cancel_Statics::NewProp_bApplyCooldown_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAbility_Cancel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbility_Cancel_Statics::NewProp_bApplyCooldown,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbility_Cancel_Statics::PropPointers) < 2048);
// ********** End Function Cancel Property Definitions *********************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbility_Cancel_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAbility, nullptr, "Cancel", 	Z_Construct_UFunction_UAbility_Cancel_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UAbility_Cancel_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UAbility_Cancel_Statics::Ability_eventCancel_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbility_Cancel_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAbility_Cancel_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAbility_Cancel_Statics::Ability_eventCancel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAbility_Cancel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAbility_Cancel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAbility::execCancel)
{
	P_GET_UBOOL(Z_Param_bApplyCooldown);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Cancel(Z_Param_bApplyCooldown);
	P_NATIVE_END;
}
// ********** End Class UAbility Function Cancel ***************************************************

// ********** Begin Class UAbility Function Deactivate *********************************************
struct Z_Construct_UFunction_UAbility_Deactivate_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ability" },
		{ "Comment", "// Finishes an activated ability. Doesn't affect casting in any way.\n// @network: Owning Client or Server\n" },
		{ "ModuleRelativePath", "Public/Ability.h" },
		{ "ToolTip", "Finishes an activated ability. Doesn't affect casting in any way.\n@network: Owning Client or Server" },
	};
#endif // WITH_METADATA

// ********** Begin Function Deactivate constinit property declarations ****************************
// ********** End Function Deactivate constinit property declarations ******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbility_Deactivate_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAbility, nullptr, "Deactivate", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbility_Deactivate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAbility_Deactivate_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UAbility_Deactivate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAbility_Deactivate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAbility::execDeactivate)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Deactivate();
	P_NATIVE_END;
}
// ********** End Class UAbility Function Deactivate ***********************************************

// ********** Begin Class UAbility Function EventActivate ******************************************
struct Ability_eventEventActivate_Parms
{
	FStructContainer Container;
};
static FName NAME_UAbility_EventActivate = FName(TEXT("EventActivate"));
void UAbility::EventActivate(FStructContainer const& Container)
{
	UFunction* Func = FindFunctionChecked(NAME_UAbility_EventActivate);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		Ability_eventEventActivate_Parms Parms;
		Parms.Container=Container;
	ProcessEvent(Func,&Parms);
	}
	else
	{
		EventActivate_Implementation(Container);
	}
}
struct Z_Construct_UFunction_UAbility_EventActivate_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ability" },
		{ "DisplayName", "Activate" },
		{ "ModuleRelativePath", "Public/Ability.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Container_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function EventActivate constinit property declarations *************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Container;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function EventActivate constinit property declarations ***************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function EventActivate Property Definitions ************************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAbility_EventActivate_Statics::NewProp_Container = { "Container", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Ability_eventEventActivate_Parms, Container), Z_Construct_UScriptStruct_FStructContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Container_MetaData), NewProp_Container_MetaData) }; // 2073357063
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAbility_EventActivate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbility_EventActivate_Statics::NewProp_Container,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbility_EventActivate_Statics::PropPointers) < 2048);
// ********** End Function EventActivate Property Definitions **************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbility_EventActivate_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAbility, nullptr, "EventActivate", 	Z_Construct_UFunction_UAbility_EventActivate_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UAbility_EventActivate_Statics::PropPointers), 
sizeof(Ability_eventEventActivate_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08480C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbility_EventActivate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAbility_EventActivate_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Ability_eventEventActivate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAbility_EventActivate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAbility_EventActivate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAbility::execEventActivate)
{
	P_GET_STRUCT_REF(FStructContainer,Z_Param_Out_Container);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EventActivate_Implementation(Z_Param_Out_Container);
	P_NATIVE_END;
}
// ********** End Class UAbility Function EventActivate ********************************************

// ********** Begin Class UAbility Function EventCanActivate ***************************************
struct Ability_eventEventCanActivate_Parms
{
	FStructContainer Container;
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	Ability_eventEventCanActivate_Parms()
		: ReturnValue(false)
	{
	}
};
static FName NAME_UAbility_EventCanActivate = FName(TEXT("EventCanActivate"));
bool UAbility::EventCanActivate(FStructContainer const& Container) const
{
	UFunction* Func = FindFunctionChecked(NAME_UAbility_EventCanActivate);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		Ability_eventEventCanActivate_Parms Parms;
		Parms.Container=Container;
		const_cast<UAbility*>(this)->ProcessEvent(Func,&Parms);
		return !!Parms.ReturnValue;
	}
	else
	{
		return const_cast<UAbility*>(this)->EventCanActivate_Implementation(Container);
	}
}
struct Z_Construct_UFunction_UAbility_EventCanActivate_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ability" },
		{ "DisplayName", "Can Activate" },
		{ "ModuleRelativePath", "Public/Ability.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Container_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function EventCanActivate constinit property declarations **********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Container;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function EventCanActivate constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function EventCanActivate Property Definitions *********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAbility_EventCanActivate_Statics::NewProp_Container = { "Container", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Ability_eventEventCanActivate_Parms, Container), Z_Construct_UScriptStruct_FStructContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Container_MetaData), NewProp_Container_MetaData) }; // 2073357063
void Z_Construct_UFunction_UAbility_EventCanActivate_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((Ability_eventEventCanActivate_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAbility_EventCanActivate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Ability_eventEventCanActivate_Parms), &Z_Construct_UFunction_UAbility_EventCanActivate_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAbility_EventCanActivate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbility_EventCanActivate_Statics::NewProp_Container,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbility_EventCanActivate_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbility_EventCanActivate_Statics::PropPointers) < 2048);
// ********** End Function EventCanActivate Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbility_EventCanActivate_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAbility, nullptr, "EventCanActivate", 	Z_Construct_UFunction_UAbility_EventCanActivate_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UAbility_EventCanActivate_Statics::PropPointers), 
sizeof(Ability_eventEventCanActivate_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48480C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbility_EventCanActivate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAbility_EventCanActivate_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Ability_eventEventCanActivate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAbility_EventCanActivate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAbility_EventCanActivate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAbility::execEventCanActivate)
{
	P_GET_STRUCT_REF(FStructContainer,Z_Param_Out_Container);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->EventCanActivate_Implementation(Z_Param_Out_Container);
	P_NATIVE_END;
}
// ********** End Class UAbility Function EventCanActivate *****************************************

// ********** Begin Class UAbility Function EventCanCast *******************************************
struct Ability_eventEventCanCast_Parms
{
	FStructContainer Container;
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	Ability_eventEventCanCast_Parms()
		: ReturnValue(false)
	{
	}
};
static FName NAME_UAbility_EventCanCast = FName(TEXT("EventCanCast"));
bool UAbility::EventCanCast(FStructContainer const& Container) const
{
	UFunction* Func = FindFunctionChecked(NAME_UAbility_EventCanCast);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		Ability_eventEventCanCast_Parms Parms;
		Parms.Container=Container;
		const_cast<UAbility*>(this)->ProcessEvent(Func,&Parms);
		return !!Parms.ReturnValue;
	}
	else
	{
		return const_cast<UAbility*>(this)->EventCanCast_Implementation(Container);
	}
}
struct Z_Construct_UFunction_UAbility_EventCanCast_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ability" },
		{ "DisplayName", "Can Cast" },
		{ "ModuleRelativePath", "Public/Ability.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Container_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function EventCanCast constinit property declarations **************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Container;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function EventCanCast constinit property declarations ****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function EventCanCast Property Definitions *************************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAbility_EventCanCast_Statics::NewProp_Container = { "Container", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Ability_eventEventCanCast_Parms, Container), Z_Construct_UScriptStruct_FStructContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Container_MetaData), NewProp_Container_MetaData) }; // 2073357063
void Z_Construct_UFunction_UAbility_EventCanCast_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((Ability_eventEventCanCast_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAbility_EventCanCast_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Ability_eventEventCanCast_Parms), &Z_Construct_UFunction_UAbility_EventCanCast_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAbility_EventCanCast_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbility_EventCanCast_Statics::NewProp_Container,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbility_EventCanCast_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbility_EventCanCast_Statics::PropPointers) < 2048);
// ********** End Function EventCanCast Property Definitions ***************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbility_EventCanCast_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAbility, nullptr, "EventCanCast", 	Z_Construct_UFunction_UAbility_EventCanCast_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UAbility_EventCanCast_Statics::PropPointers), 
sizeof(Ability_eventEventCanCast_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48480C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbility_EventCanCast_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAbility_EventCanCast_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Ability_eventEventCanCast_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAbility_EventCanCast()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAbility_EventCanCast_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAbility::execEventCanCast)
{
	P_GET_STRUCT_REF(FStructContainer,Z_Param_Out_Container);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->EventCanCast_Implementation(Z_Param_Out_Container);
	P_NATIVE_END;
}
// ********** End Class UAbility Function EventCanCast *********************************************

// ********** Begin Class UAbility Function EventCast **********************************************
struct Ability_eventEventCast_Parms
{
	FStructContainer Container;
};
static FName NAME_UAbility_EventCast = FName(TEXT("EventCast"));
void UAbility::EventCast(FStructContainer const& Container)
{
	UFunction* Func = FindFunctionChecked(NAME_UAbility_EventCast);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		Ability_eventEventCast_Parms Parms;
		Parms.Container=Container;
	ProcessEvent(Func,&Parms);
	}
	else
	{
		EventCast_Implementation(Container);
	}
}
struct Z_Construct_UFunction_UAbility_EventCast_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ability" },
		{ "DisplayName", "Cast" },
		{ "ModuleRelativePath", "Public/Ability.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Container_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function EventCast constinit property declarations *****************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Container;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function EventCast constinit property declarations *******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function EventCast Property Definitions ****************************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAbility_EventCast_Statics::NewProp_Container = { "Container", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Ability_eventEventCast_Parms, Container), Z_Construct_UScriptStruct_FStructContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Container_MetaData), NewProp_Container_MetaData) }; // 2073357063
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAbility_EventCast_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbility_EventCast_Statics::NewProp_Container,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbility_EventCast_Statics::PropPointers) < 2048);
// ********** End Function EventCast Property Definitions ******************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbility_EventCast_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAbility, nullptr, "EventCast", 	Z_Construct_UFunction_UAbility_EventCast_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UAbility_EventCast_Statics::PropPointers), 
sizeof(Ability_eventEventCast_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08480C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbility_EventCast_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAbility_EventCast_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Ability_eventEventCast_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAbility_EventCast()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAbility_EventCast_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAbility::execEventCast)
{
	P_GET_STRUCT_REF(FStructContainer,Z_Param_Out_Container);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EventCast_Implementation(Z_Param_Out_Container);
	P_NATIVE_END;
}
// ********** End Class UAbility Function EventCast ************************************************

// ********** Begin Class UAbility Function EventCastFinish ****************************************
static FName NAME_UAbility_EventCastFinish = FName(TEXT("EventCastFinish"));
void UAbility::EventCastFinish()
{
	UFunction* Func = FindFunctionChecked(NAME_UAbility_EventCastFinish);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
	ProcessEvent(Func,NULL);
	}
	else
	{
		EventCastFinish_Implementation();
	}
}
struct Z_Construct_UFunction_UAbility_EventCastFinish_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ability" },
		{ "DisplayName", "Cast Finish" },
		{ "ModuleRelativePath", "Public/Ability.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function EventCastFinish constinit property declarations ***********************
// ********** End Function EventCastFinish constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbility_EventCastFinish_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAbility, nullptr, "EventCastFinish", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbility_EventCastFinish_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAbility_EventCastFinish_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UAbility_EventCastFinish()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAbility_EventCastFinish_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAbility::execEventCastFinish)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EventCastFinish_Implementation();
	P_NATIVE_END;
}
// ********** End Class UAbility Function EventCastFinish ******************************************

// ********** Begin Class UAbility Function EventDeactivate ****************************************
static FName NAME_UAbility_EventDeactivate = FName(TEXT("EventDeactivate"));
void UAbility::EventDeactivate()
{
	UFunction* Func = FindFunctionChecked(NAME_UAbility_EventDeactivate);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
	ProcessEvent(Func,NULL);
	}
	else
	{
		EventDeactivate_Implementation();
	}
}
struct Z_Construct_UFunction_UAbility_EventDeactivate_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ability" },
		{ "DisplayName", "Deactivate" },
		{ "ModuleRelativePath", "Public/Ability.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function EventDeactivate constinit property declarations ***********************
// ********** End Function EventDeactivate constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbility_EventDeactivate_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAbility, nullptr, "EventDeactivate", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbility_EventDeactivate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAbility_EventDeactivate_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UAbility_EventDeactivate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAbility_EventDeactivate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAbility::execEventDeactivate)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EventDeactivate_Implementation();
	P_NATIVE_END;
}
// ********** End Class UAbility Function EventDeactivate ******************************************

// ********** Begin Class UAbility Function EventOnCancelInput *************************************
struct Ability_eventEventOnCancelInput_Parms
{
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	Ability_eventEventOnCancelInput_Parms()
		: ReturnValue(false)
	{
	}
};
static FName NAME_UAbility_EventOnCancelInput = FName(TEXT("EventOnCancelInput"));
bool UAbility::EventOnCancelInput()
{
	UFunction* Func = FindFunctionChecked(NAME_UAbility_EventOnCancelInput);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		Ability_eventEventOnCancelInput_Parms Parms;
	ProcessEvent(Func,&Parms);
		return !!Parms.ReturnValue;
	}
	else
	{
		return EventOnCancelInput_Implementation();
	}
}
struct Z_Construct_UFunction_UAbility_EventOnCancelInput_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ability" },
		{ "DisplayName", "On Cancel Input" },
		{ "ModuleRelativePath", "Public/Ability.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function EventOnCancelInput constinit property declarations ********************
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function EventOnCancelInput constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function EventOnCancelInput Property Definitions *******************************
void Z_Construct_UFunction_UAbility_EventOnCancelInput_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((Ability_eventEventOnCancelInput_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAbility_EventOnCancelInput_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Ability_eventEventOnCancelInput_Parms), &Z_Construct_UFunction_UAbility_EventOnCancelInput_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAbility_EventOnCancelInput_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbility_EventOnCancelInput_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbility_EventOnCancelInput_Statics::PropPointers) < 2048);
// ********** End Function EventOnCancelInput Property Definitions *********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbility_EventOnCancelInput_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAbility, nullptr, "EventOnCancelInput", 	Z_Construct_UFunction_UAbility_EventOnCancelInput_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UAbility_EventOnCancelInput_Statics::PropPointers), 
sizeof(Ability_eventEventOnCancelInput_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbility_EventOnCancelInput_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAbility_EventOnCancelInput_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Ability_eventEventOnCancelInput_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAbility_EventOnCancelInput()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAbility_EventOnCancelInput_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAbility::execEventOnCancelInput)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->EventOnCancelInput_Implementation();
	P_NATIVE_END;
}
// ********** End Class UAbility Function EventOnCancelInput ***************************************

// ********** Begin Class UAbility Function EventOnCooldownReady ***********************************
struct Ability_eventEventOnCooldownReady_Parms
{
	ECooldownReadyReason Reason;
};
static FName NAME_UAbility_EventOnCooldownReady = FName(TEXT("EventOnCooldownReady"));
void UAbility::EventOnCooldownReady(ECooldownReadyReason Reason)
{
	Ability_eventEventOnCooldownReady_Parms Parms;
	Parms.Reason=Reason;
	UFunction* Func = FindFunctionChecked(NAME_UAbility_EventOnCooldownReady);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_UAbility_EventOnCooldownReady_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ability" },
		{ "DisplayName", "On Cooldown Ready" },
		{ "ModuleRelativePath", "Public/Ability.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function EventOnCooldownReady constinit property declarations ******************
	static const UECodeGen_Private::FBytePropertyParams NewProp_Reason_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Reason;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function EventOnCooldownReady constinit property declarations ********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function EventOnCooldownReady Property Definitions *****************************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAbility_EventOnCooldownReady_Statics::NewProp_Reason_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAbility_EventOnCooldownReady_Statics::NewProp_Reason = { "Reason", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Ability_eventEventOnCooldownReady_Parms, Reason), Z_Construct_UEnum_Abilities_ECooldownReadyReason, METADATA_PARAMS(0, nullptr) }; // 4025591334
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAbility_EventOnCooldownReady_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbility_EventOnCooldownReady_Statics::NewProp_Reason_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbility_EventOnCooldownReady_Statics::NewProp_Reason,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbility_EventOnCooldownReady_Statics::PropPointers) < 2048);
// ********** End Function EventOnCooldownReady Property Definitions *******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbility_EventOnCooldownReady_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAbility, nullptr, "EventOnCooldownReady", 	Z_Construct_UFunction_UAbility_EventOnCooldownReady_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UAbility_EventOnCooldownReady_Statics::PropPointers), 
sizeof(Ability_eventEventOnCooldownReady_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbility_EventOnCooldownReady_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAbility_EventOnCooldownReady_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Ability_eventEventOnCooldownReady_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAbility_EventOnCooldownReady()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAbility_EventOnCooldownReady_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class UAbility Function EventOnCooldownReady *************************************

// ********** Begin Class UAbility Function EventOnCooldownStarted *********************************
static FName NAME_UAbility_EventOnCooldownStarted = FName(TEXT("EventOnCooldownStarted"));
void UAbility::EventOnCooldownStarted()
{
	UFunction* Func = FindFunctionChecked(NAME_UAbility_EventOnCooldownStarted);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_UAbility_EventOnCooldownStarted_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ability" },
		{ "DisplayName", "On Cooldown Started" },
		{ "ModuleRelativePath", "Public/Ability.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function EventOnCooldownStarted constinit property declarations ****************
// ********** End Function EventOnCooldownStarted constinit property declarations ******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbility_EventOnCooldownStarted_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAbility, nullptr, "EventOnCooldownStarted", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbility_EventOnCooldownStarted_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAbility_EventOnCooldownStarted_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UAbility_EventOnCooldownStarted()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAbility_EventOnCooldownStarted_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class UAbility Function EventOnCooldownStarted ***********************************

// ********** Begin Class UAbility Function EventOnInputPressed ************************************
static FName NAME_UAbility_EventOnInputPressed = FName(TEXT("EventOnInputPressed"));
void UAbility::EventOnInputPressed()
{
	UFunction* Func = FindFunctionChecked(NAME_UAbility_EventOnInputPressed);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_UAbility_EventOnInputPressed_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ability" },
		{ "DisplayName", "On Input Pressed" },
		{ "ModuleRelativePath", "Public/Ability.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function EventOnInputPressed constinit property declarations *******************
// ********** End Function EventOnInputPressed constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbility_EventOnInputPressed_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAbility, nullptr, "EventOnInputPressed", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbility_EventOnInputPressed_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAbility_EventOnInputPressed_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UAbility_EventOnInputPressed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAbility_EventOnInputPressed_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class UAbility Function EventOnInputPressed **************************************

// ********** Begin Class UAbility Function EventOnInputReleased ***********************************
static FName NAME_UAbility_EventOnInputReleased = FName(TEXT("EventOnInputReleased"));
void UAbility::EventOnInputReleased()
{
	UFunction* Func = FindFunctionChecked(NAME_UAbility_EventOnInputReleased);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_UAbility_EventOnInputReleased_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ability" },
		{ "DisplayName", "On Input Released" },
		{ "ModuleRelativePath", "Public/Ability.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function EventOnInputReleased constinit property declarations ******************
// ********** End Function EventOnInputReleased constinit property declarations ********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbility_EventOnInputReleased_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAbility, nullptr, "EventOnInputReleased", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbility_EventOnInputReleased_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAbility_EventOnInputReleased_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UAbility_EventOnInputReleased()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAbility_EventOnInputReleased_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class UAbility Function EventOnInputReleased *************************************

// ********** Begin Class UAbility Function EventOnTagsChanged *************************************
struct Ability_eventEventOnTagsChanged_Parms
{
	FGameplayTagContainer Tags;
};
static FName NAME_UAbility_EventOnTagsChanged = FName(TEXT("EventOnTagsChanged"));
void UAbility::EventOnTagsChanged(FGameplayTagContainer const& Tags)
{
	Ability_eventEventOnTagsChanged_Parms Parms;
	Parms.Tags=Tags;
	UFunction* Func = FindFunctionChecked(NAME_UAbility_EventOnTagsChanged);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_UAbility_EventOnTagsChanged_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "DisplayName", "On Tags Changed" },
		{ "ModuleRelativePath", "Public/Ability.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Tags_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function EventOnTagsChanged constinit property declarations ********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Tags;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function EventOnTagsChanged constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function EventOnTagsChanged Property Definitions *******************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAbility_EventOnTagsChanged_Statics::NewProp_Tags = { "Tags", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Ability_eventEventOnTagsChanged_Parms, Tags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Tags_MetaData), NewProp_Tags_MetaData) }; // 3438578166
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAbility_EventOnTagsChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbility_EventOnTagsChanged_Statics::NewProp_Tags,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbility_EventOnTagsChanged_Statics::PropPointers) < 2048);
// ********** End Function EventOnTagsChanged Property Definitions *********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbility_EventOnTagsChanged_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAbility, nullptr, "EventOnTagsChanged", 	Z_Construct_UFunction_UAbility_EventOnTagsChanged_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UAbility_EventOnTagsChanged_Statics::PropPointers), 
sizeof(Ability_eventEventOnTagsChanged_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbility_EventOnTagsChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAbility_EventOnTagsChanged_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Ability_eventEventOnTagsChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAbility_EventOnTagsChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAbility_EventOnTagsChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class UAbility Function EventOnTagsChanged ***************************************

// ********** Begin Class UAbility Function GetDisplayName *****************************************
struct Z_Construct_UFunction_UAbility_GetDisplayName_Statics
{
	struct Ability_eventGetDisplayName_Parms
	{
		FText ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ability|UI" },
		{ "ModuleRelativePath", "Public/Ability.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetDisplayName constinit property declarations ************************
	static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetDisplayName constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetDisplayName Property Definitions ***********************************
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UAbility_GetDisplayName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Ability_eventGetDisplayName_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAbility_GetDisplayName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbility_GetDisplayName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbility_GetDisplayName_Statics::PropPointers) < 2048);
// ********** End Function GetDisplayName Property Definitions *************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbility_GetDisplayName_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAbility, nullptr, "GetDisplayName", 	Z_Construct_UFunction_UAbility_GetDisplayName_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UAbility_GetDisplayName_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UAbility_GetDisplayName_Statics::Ability_eventGetDisplayName_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbility_GetDisplayName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAbility_GetDisplayName_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAbility_GetDisplayName_Statics::Ability_eventGetDisplayName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAbility_GetDisplayName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAbility_GetDisplayName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAbility::execGetDisplayName)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FText*)Z_Param__Result=P_THIS->GetDisplayName();
	P_NATIVE_END;
}
// ********** End Class UAbility Function GetDisplayName *******************************************

// ********** Begin Class UAbility Function GetInputProfile ****************************************
struct Z_Construct_UFunction_UAbility_GetInputProfile_Statics
{
	struct Ability_eventGetInputProfile_Parms
	{
		EAbilityInputProfile ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ability|Input" },
		{ "ModuleRelativePath", "Public/Ability.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetInputProfile constinit property declarations ***********************
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetInputProfile constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetInputProfile Property Definitions **********************************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAbility_GetInputProfile_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAbility_GetInputProfile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Ability_eventGetInputProfile_Parms, ReturnValue), Z_Construct_UEnum_Abilities_EAbilityInputProfile, METADATA_PARAMS(0, nullptr) }; // 997520594
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAbility_GetInputProfile_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbility_GetInputProfile_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbility_GetInputProfile_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbility_GetInputProfile_Statics::PropPointers) < 2048);
// ********** End Function GetInputProfile Property Definitions ************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbility_GetInputProfile_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAbility, nullptr, "GetInputProfile", 	Z_Construct_UFunction_UAbility_GetInputProfile_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UAbility_GetInputProfile_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UAbility_GetInputProfile_Statics::Ability_eventGetInputProfile_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbility_GetInputProfile_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAbility_GetInputProfile_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAbility_GetInputProfile_Statics::Ability_eventGetInputProfile_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAbility_GetInputProfile()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAbility_GetInputProfile_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAbility::execGetInputProfile)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(EAbilityInputProfile*)Z_Param__Result=P_THIS->GetInputProfile();
	P_NATIVE_END;
}
// ********** End Class UAbility Function GetInputProfile ******************************************

// ********** Begin Class UAbility Function GetRawName *********************************************
struct Z_Construct_UFunction_UAbility_GetRawName_Statics
{
	struct Ability_eventGetRawName_Parms
	{
		FName ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ability|UI" },
		{ "ModuleRelativePath", "Public/Ability.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetRawName constinit property declarations ****************************
	static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetRawName constinit property declarations ******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetRawName Property Definitions ***************************************
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAbility_GetRawName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Ability_eventGetRawName_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAbility_GetRawName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbility_GetRawName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbility_GetRawName_Statics::PropPointers) < 2048);
// ********** End Function GetRawName Property Definitions *****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbility_GetRawName_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAbility, nullptr, "GetRawName", 	Z_Construct_UFunction_UAbility_GetRawName_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UAbility_GetRawName_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UAbility_GetRawName_Statics::Ability_eventGetRawName_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbility_GetRawName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAbility_GetRawName_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAbility_GetRawName_Statics::Ability_eventGetRawName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAbility_GetRawName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAbility_GetRawName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAbility::execGetRawName)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FName*)Z_Param__Result=P_THIS->GetRawName();
	P_NATIVE_END;
}
// ********** End Class UAbility Function GetRawName ***********************************************

// ********** Begin Class UAbility Function HasCooldown ********************************************
struct Z_Construct_UFunction_UAbility_HasCooldown_Statics
{
	struct Ability_eventHasCooldown_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ability" },
		{ "ModuleRelativePath", "Public/Ability.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function HasCooldown constinit property declarations ***************************
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function HasCooldown constinit property declarations *****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function HasCooldown Property Definitions **************************************
void Z_Construct_UFunction_UAbility_HasCooldown_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((Ability_eventHasCooldown_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAbility_HasCooldown_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Ability_eventHasCooldown_Parms), &Z_Construct_UFunction_UAbility_HasCooldown_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAbility_HasCooldown_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbility_HasCooldown_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbility_HasCooldown_Statics::PropPointers) < 2048);
// ********** End Function HasCooldown Property Definitions ****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbility_HasCooldown_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAbility, nullptr, "HasCooldown", 	Z_Construct_UFunction_UAbility_HasCooldown_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UAbility_HasCooldown_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UAbility_HasCooldown_Statics::Ability_eventHasCooldown_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbility_HasCooldown_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAbility_HasCooldown_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAbility_HasCooldown_Statics::Ability_eventHasCooldown_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAbility_HasCooldown()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAbility_HasCooldown_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAbility::execHasCooldown)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->HasCooldown();
	P_NATIVE_END;
}
// ********** End Class UAbility Function HasCooldown **********************************************

// ********** Begin Class UAbility Function HasFinished ********************************************
struct Z_Construct_UFunction_UAbility_HasFinished_Statics
{
	struct Ability_eventHasFinished_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ability" },
		{ "Comment", "// True when casting and activation have finished\n" },
		{ "ModuleRelativePath", "Public/Ability.h" },
		{ "ToolTip", "True when casting and activation have finished" },
	};
#endif // WITH_METADATA

// ********** Begin Function HasFinished constinit property declarations ***************************
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function HasFinished constinit property declarations *****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function HasFinished Property Definitions **************************************
void Z_Construct_UFunction_UAbility_HasFinished_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((Ability_eventHasFinished_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAbility_HasFinished_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Ability_eventHasFinished_Parms), &Z_Construct_UFunction_UAbility_HasFinished_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAbility_HasFinished_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbility_HasFinished_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbility_HasFinished_Statics::PropPointers) < 2048);
// ********** End Function HasFinished Property Definitions ****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbility_HasFinished_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAbility, nullptr, "HasFinished", 	Z_Construct_UFunction_UAbility_HasFinished_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UAbility_HasFinished_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UAbility_HasFinished_Statics::Ability_eventHasFinished_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbility_HasFinished_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAbility_HasFinished_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAbility_HasFinished_Statics::Ability_eventHasFinished_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAbility_HasFinished()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAbility_HasFinished_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAbility::execHasFinished)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->HasFinished();
	P_NATIVE_END;
}
// ********** End Class UAbility Function HasFinished **********************************************

// ********** Begin Class UAbility Function HasSucceeded *******************************************
struct Z_Construct_UFunction_UAbility_HasSucceeded_Statics
{
	struct Ability_eventHasSucceeded_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ability" },
		{ "ModuleRelativePath", "Public/Ability.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function HasSucceeded constinit property declarations **************************
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function HasSucceeded constinit property declarations ****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function HasSucceeded Property Definitions *************************************
void Z_Construct_UFunction_UAbility_HasSucceeded_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((Ability_eventHasSucceeded_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAbility_HasSucceeded_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Ability_eventHasSucceeded_Parms), &Z_Construct_UFunction_UAbility_HasSucceeded_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAbility_HasSucceeded_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbility_HasSucceeded_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbility_HasSucceeded_Statics::PropPointers) < 2048);
// ********** End Function HasSucceeded Property Definitions ***************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbility_HasSucceeded_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAbility, nullptr, "HasSucceeded", 	Z_Construct_UFunction_UAbility_HasSucceeded_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UAbility_HasSucceeded_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UAbility_HasSucceeded_Statics::Ability_eventHasSucceeded_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbility_HasSucceeded_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAbility_HasSucceeded_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAbility_HasSucceeded_Statics::Ability_eventHasSucceeded_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAbility_HasSucceeded()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAbility_HasSucceeded_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAbility::execHasSucceeded)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->HasSucceeded();
	P_NATIVE_END;
}
// ********** End Class UAbility Function HasSucceeded *********************************************

// ********** Begin Class UAbility Function IsActivated ********************************************
struct Z_Construct_UFunction_UAbility_IsActivated_Statics
{
	struct Ability_eventIsActivated_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ability" },
		{ "ModuleRelativePath", "Public/Ability.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function IsActivated constinit property declarations ***************************
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function IsActivated constinit property declarations *****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function IsActivated Property Definitions **************************************
void Z_Construct_UFunction_UAbility_IsActivated_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((Ability_eventIsActivated_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAbility_IsActivated_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Ability_eventIsActivated_Parms), &Z_Construct_UFunction_UAbility_IsActivated_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAbility_IsActivated_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbility_IsActivated_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbility_IsActivated_Statics::PropPointers) < 2048);
// ********** End Function IsActivated Property Definitions ****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbility_IsActivated_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAbility, nullptr, "IsActivated", 	Z_Construct_UFunction_UAbility_IsActivated_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UAbility_IsActivated_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UAbility_IsActivated_Statics::Ability_eventIsActivated_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbility_IsActivated_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAbility_IsActivated_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAbility_IsActivated_Statics::Ability_eventIsActivated_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAbility_IsActivated()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAbility_IsActivated_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAbility::execIsActivated)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsActivated();
	P_NATIVE_END;
}
// ********** End Class UAbility Function IsActivated **********************************************

// ********** Begin Class UAbility Function IsCancelled ********************************************
struct Z_Construct_UFunction_UAbility_IsCancelled_Statics
{
	struct Ability_eventIsCancelled_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ability" },
		{ "ModuleRelativePath", "Public/Ability.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function IsCancelled constinit property declarations ***************************
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function IsCancelled constinit property declarations *****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function IsCancelled Property Definitions **************************************
void Z_Construct_UFunction_UAbility_IsCancelled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((Ability_eventIsCancelled_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAbility_IsCancelled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Ability_eventIsCancelled_Parms), &Z_Construct_UFunction_UAbility_IsCancelled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAbility_IsCancelled_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbility_IsCancelled_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbility_IsCancelled_Statics::PropPointers) < 2048);
// ********** End Function IsCancelled Property Definitions ****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbility_IsCancelled_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAbility, nullptr, "IsCancelled", 	Z_Construct_UFunction_UAbility_IsCancelled_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UAbility_IsCancelled_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UAbility_IsCancelled_Statics::Ability_eventIsCancelled_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbility_IsCancelled_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAbility_IsCancelled_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAbility_IsCancelled_Statics::Ability_eventIsCancelled_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAbility_IsCancelled()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAbility_IsCancelled_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAbility::execIsCancelled)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsCancelled();
	P_NATIVE_END;
}
// ********** End Class UAbility Function IsCancelled **********************************************

// ********** Begin Class UAbility Function IsCasting **********************************************
struct Z_Construct_UFunction_UAbility_IsCasting_Statics
{
	struct Ability_eventIsCasting_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ability" },
		{ "ModuleRelativePath", "Public/Ability.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function IsCasting constinit property declarations *****************************
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function IsCasting constinit property declarations *******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function IsCasting Property Definitions ****************************************
void Z_Construct_UFunction_UAbility_IsCasting_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((Ability_eventIsCasting_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAbility_IsCasting_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Ability_eventIsCasting_Parms), &Z_Construct_UFunction_UAbility_IsCasting_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAbility_IsCasting_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbility_IsCasting_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbility_IsCasting_Statics::PropPointers) < 2048);
// ********** End Function IsCasting Property Definitions ******************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbility_IsCasting_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAbility, nullptr, "IsCasting", 	Z_Construct_UFunction_UAbility_IsCasting_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UAbility_IsCasting_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UAbility_IsCasting_Statics::Ability_eventIsCasting_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbility_IsCasting_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAbility_IsCasting_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAbility_IsCasting_Statics::Ability_eventIsCasting_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAbility_IsCasting()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAbility_IsCasting_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAbility::execIsCasting)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsCasting();
	P_NATIVE_END;
}
// ********** End Class UAbility Function IsCasting ************************************************

// ********** Begin Class UAbility Function IsCoolingDown ******************************************
struct Z_Construct_UFunction_UAbility_IsCoolingDown_Statics
{
	struct Ability_eventIsCoolingDown_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ability" },
		{ "ModuleRelativePath", "Public/Ability.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function IsCoolingDown constinit property declarations *************************
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function IsCoolingDown constinit property declarations ***************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function IsCoolingDown Property Definitions ************************************
void Z_Construct_UFunction_UAbility_IsCoolingDown_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((Ability_eventIsCoolingDown_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAbility_IsCoolingDown_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Ability_eventIsCoolingDown_Parms), &Z_Construct_UFunction_UAbility_IsCoolingDown_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAbility_IsCoolingDown_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbility_IsCoolingDown_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbility_IsCoolingDown_Statics::PropPointers) < 2048);
// ********** End Function IsCoolingDown Property Definitions **************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbility_IsCoolingDown_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAbility, nullptr, "IsCoolingDown", 	Z_Construct_UFunction_UAbility_IsCoolingDown_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UAbility_IsCoolingDown_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UAbility_IsCoolingDown_Statics::Ability_eventIsCoolingDown_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbility_IsCoolingDown_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAbility_IsCoolingDown_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAbility_IsCoolingDown_Statics::Ability_eventIsCoolingDown_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAbility_IsCoolingDown()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAbility_IsCoolingDown_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAbility::execIsCoolingDown)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsCoolingDown();
	P_NATIVE_END;
}
// ********** End Class UAbility Function IsCoolingDown ********************************************

// ********** Begin Class UAbility Function IsPressed **********************************************
struct Z_Construct_UFunction_UAbility_IsPressed_Statics
{
	struct Ability_eventIsPressed_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ability|Input" },
		{ "ModuleRelativePath", "Public/Ability.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function IsPressed constinit property declarations *****************************
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function IsPressed constinit property declarations *******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function IsPressed Property Definitions ****************************************
void Z_Construct_UFunction_UAbility_IsPressed_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((Ability_eventIsPressed_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAbility_IsPressed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Ability_eventIsPressed_Parms), &Z_Construct_UFunction_UAbility_IsPressed_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAbility_IsPressed_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbility_IsPressed_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbility_IsPressed_Statics::PropPointers) < 2048);
// ********** End Function IsPressed Property Definitions ******************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbility_IsPressed_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAbility, nullptr, "IsPressed", 	Z_Construct_UFunction_UAbility_IsPressed_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UAbility_IsPressed_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UAbility_IsPressed_Statics::Ability_eventIsPressed_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbility_IsPressed_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAbility_IsPressed_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAbility_IsPressed_Statics::Ability_eventIsPressed_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAbility_IsPressed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAbility_IsPressed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAbility::execIsPressed)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsPressed();
	P_NATIVE_END;
}
// ********** End Class UAbility Function IsPressed ************************************************

// ********** Begin Class UAbility Function IsRunning **********************************************
struct Z_Construct_UFunction_UAbility_IsRunning_Statics
{
	struct Ability_eventIsRunning_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ability" },
		{ "ModuleRelativePath", "Public/Ability.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function IsRunning constinit property declarations *****************************
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function IsRunning constinit property declarations *******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function IsRunning Property Definitions ****************************************
void Z_Construct_UFunction_UAbility_IsRunning_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((Ability_eventIsRunning_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAbility_IsRunning_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Ability_eventIsRunning_Parms), &Z_Construct_UFunction_UAbility_IsRunning_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAbility_IsRunning_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbility_IsRunning_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbility_IsRunning_Statics::PropPointers) < 2048);
// ********** End Function IsRunning Property Definitions ******************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbility_IsRunning_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAbility, nullptr, "IsRunning", 	Z_Construct_UFunction_UAbility_IsRunning_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UAbility_IsRunning_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UAbility_IsRunning_Statics::Ability_eventIsRunning_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbility_IsRunning_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAbility_IsRunning_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAbility_IsRunning_Statics::Ability_eventIsRunning_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAbility_IsRunning()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAbility_IsRunning_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAbility::execIsRunning)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsRunning();
	P_NATIVE_END;
}
// ********** End Class UAbility Function IsRunning ************************************************

// ********** Begin Class UAbility Function MCResetCooldown ****************************************
static FName NAME_UAbility_MCResetCooldown = FName(TEXT("MCResetCooldown"));
void UAbility::MCResetCooldown()
{
	UFunction* Func = FindFunctionChecked(NAME_UAbility_MCResetCooldown);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_UAbility_MCResetCooldown_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "// Called from ResetCooldown after checks have been done\n" },
		{ "ModuleRelativePath", "Public/Ability.h" },
		{ "ToolTip", "Called from ResetCooldown after checks have been done" },
	};
#endif // WITH_METADATA

// ********** Begin Function MCResetCooldown constinit property declarations ***********************
// ********** End Function MCResetCooldown constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbility_MCResetCooldown_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAbility, nullptr, "MCResetCooldown", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00044CC1, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbility_MCResetCooldown_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAbility_MCResetCooldown_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UAbility_MCResetCooldown()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAbility_MCResetCooldown_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAbility::execMCResetCooldown)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->MCResetCooldown_Implementation();
	P_NATIVE_END;
}
// ********** End Class UAbility Function MCResetCooldown ******************************************

// ********** Begin Class UAbility Function MCStartCooldown ****************************************
static FName NAME_UAbility_MCStartCooldown = FName(TEXT("MCStartCooldown"));
void UAbility::MCStartCooldown()
{
	UFunction* Func = FindFunctionChecked(NAME_UAbility_MCStartCooldown);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_UAbility_MCStartCooldown_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "// Called from StartCooldown after checks have been done\n" },
		{ "ModuleRelativePath", "Public/Ability.h" },
		{ "ToolTip", "Called from StartCooldown after checks have been done" },
	};
#endif // WITH_METADATA

// ********** Begin Function MCStartCooldown constinit property declarations ***********************
// ********** End Function MCStartCooldown constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbility_MCStartCooldown_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAbility, nullptr, "MCStartCooldown", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00044CC1, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbility_MCStartCooldown_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAbility_MCStartCooldown_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UAbility_MCStartCooldown()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAbility_MCStartCooldown_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAbility::execMCStartCooldown)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->MCStartCooldown_Implementation();
	P_NATIVE_END;
}
// ********** End Class UAbility Function MCStartCooldown ******************************************

// ********** Begin Class UAbility Function ResetCooldown ******************************************
struct Z_Construct_UFunction_UAbility_ResetCooldown_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ability" },
		{ "Comment", "// Used to manually reset a cooldown from server\n" },
		{ "ModuleRelativePath", "Public/Ability.h" },
		{ "ToolTip", "Used to manually reset a cooldown from server" },
	};
#endif // WITH_METADATA

// ********** Begin Function ResetCooldown constinit property declarations *************************
// ********** End Function ResetCooldown constinit property declarations ***************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbility_ResetCooldown_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAbility, nullptr, "ResetCooldown", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbility_ResetCooldown_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAbility_ResetCooldown_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UAbility_ResetCooldown()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAbility_ResetCooldown_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAbility::execResetCooldown)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ResetCooldown();
	P_NATIVE_END;
}
// ********** End Class UAbility Function ResetCooldown ********************************************

// ********** Begin Class UAbility Function StartCast **********************************************
struct Z_Construct_UFunction_UAbility_StartCast_Statics
{
	struct Ability_eventStartCast_Parms
	{
		FStructContainer Container;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ability" },
		{ "Comment", "// Start casting. If no cast, it will activate\n// @network: Owning Client or Server\n" },
		{ "ModuleRelativePath", "Public/Ability.h" },
		{ "ToolTip", "Start casting. If no cast, it will activate\n@network: Owning Client or Server" },
	};
#endif // WITH_METADATA

// ********** Begin Function StartCast constinit property declarations *****************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Container;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function StartCast constinit property declarations *******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function StartCast Property Definitions ****************************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAbility_StartCast_Statics::NewProp_Container = { "Container", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Ability_eventStartCast_Parms, Container), Z_Construct_UScriptStruct_FStructContainer, METADATA_PARAMS(0, nullptr) }; // 2073357063
void Z_Construct_UFunction_UAbility_StartCast_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((Ability_eventStartCast_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAbility_StartCast_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Ability_eventStartCast_Parms), &Z_Construct_UFunction_UAbility_StartCast_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAbility_StartCast_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbility_StartCast_Statics::NewProp_Container,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbility_StartCast_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbility_StartCast_Statics::PropPointers) < 2048);
// ********** End Function StartCast Property Definitions ******************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbility_StartCast_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAbility, nullptr, "StartCast", 	Z_Construct_UFunction_UAbility_StartCast_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UAbility_StartCast_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UAbility_StartCast_Statics::Ability_eventStartCast_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbility_StartCast_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAbility_StartCast_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAbility_StartCast_Statics::Ability_eventStartCast_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAbility_StartCast()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAbility_StartCast_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAbility::execStartCast)
{
	P_GET_STRUCT(FStructContainer,Z_Param_Container);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->StartCast(Z_Param_Container);
	P_NATIVE_END;
}
// ********** End Class UAbility Function StartCast ************************************************

// ********** Begin Class UAbility Function StartCooldown ******************************************
struct Z_Construct_UFunction_UAbility_StartCooldown_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ability" },
		{ "Comment", "// Used to manually start a cooldown from server\n" },
		{ "ModuleRelativePath", "Public/Ability.h" },
		{ "ToolTip", "Used to manually start a cooldown from server" },
	};
#endif // WITH_METADATA

// ********** Begin Function StartCooldown constinit property declarations *************************
// ********** End Function StartCooldown constinit property declarations ***************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbility_StartCooldown_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAbility, nullptr, "StartCooldown", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbility_StartCooldown_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAbility_StartCooldown_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UAbility_StartCooldown()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAbility_StartCooldown_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAbility::execStartCooldown)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StartCooldown();
	P_NATIVE_END;
}
// ********** End Class UAbility Function StartCooldown ********************************************

// ********** Begin Class UAbility *****************************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UAbility;
UClass* UAbility::GetPrivateStaticClass()
{
	using TClass = UAbility;
	if (!Z_Registration_Info_UClass_UAbility.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("Ability"),
			Z_Registration_Info_UClass_UAbility.InnerSingleton,
			StaticRegisterNativesUAbility,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_UAbility.InnerSingleton;
}
UClass* Z_Construct_UClass_UAbility_NoRegister()
{
	return UAbility::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UAbility_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** An ability is an object that contains all logic for game abilities.\n *\n * There are two main execution steps on an ability's lifetime:\n * - Casting: An optional step representing casting time, loading or aiming\n * - Activation: The activation of the ability itself\n *\n * NOTE: Local functions are those that will execute on server and clients.\n * This is to simplify prediction code.\n */" },
		{ "IncludePath", "Ability.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Ability.h" },
		{ "ToolTip", "An ability is an object that contains all logic for game abilities.\n\nThere are two main execution steps on an ability's lifetime:\n- Casting: An optional step representing casting time, loading or aiming\n- Activation: The activation of the ability itself\n\nNOTE: Local functions are those that will execute on server and clients.\nThis is to simplify prediction code." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "Category", "Ability" },
		{ "ModuleRelativePath", "Public/Ability.h" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DesignerNotes_MetaData[] = {
		{ "Category", "Ability" },
		{ "Comment", "// Designer text for this ability that wont be packaged into the game\n" },
		{ "ModuleRelativePath", "Public/Ability.h" },
		{ "MultiLine", "TRUE" },
		{ "ToolTip", "Designer text for this ability that wont be packaged into the game" },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DisplayName_MetaData[] = {
		{ "Category", "Ability|UI" },
		{ "ModuleRelativePath", "Public/Ability.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[] = {
		{ "Category", "Ability|UI" },
		{ "ModuleRelativePath", "Public/Ability.h" },
		{ "MultiLine", "TRUE" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Icon_MetaData[] = {
		{ "Category", "Ability|UI" },
		{ "ModuleRelativePath", "Public/Ability.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHasCast_MetaData[] = {
		{ "Category", "Ability|Execution" },
		{ "Comment", "// If true, this ability will enter cast mode before it can be activated\n" },
		{ "ModuleRelativePath", "Public/Ability.h" },
		{ "ToolTip", "If true, this ability will enter cast mode before it can be activated" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TickMode_MetaData[] = {
		{ "Category", "Ability|Execution" },
		{ "ModuleRelativePath", "Public/Ability.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RequiredTags_MetaData[] = {
		{ "Category", "Ability|Execution" },
		{ "Comment", "// Tags that the system must have to able to execute the ability\n" },
		{ "ModuleRelativePath", "Public/Ability.h" },
		{ "ToolTip", "Tags that the system must have to able to execute the ability" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RequiredToNotHaveTags_MetaData[] = {
		{ "Category", "Ability|Execution" },
		{ "Comment", "// Tags that the system must not have to able to execute the ability\n" },
		{ "ModuleRelativePath", "Public/Ability.h" },
		{ "ToolTip", "Tags that the system must not have to able to execute the ability" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CastStartAddTags_MetaData[] = {
		{ "Category", "Ability|Execution|Cast" },
		{ "Comment", "// Tags added when the ability starts casting\n" },
		{ "ModuleRelativePath", "Public/Ability.h" },
		{ "ToolTip", "Tags added when the ability starts casting" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CastStartRemoveTags_MetaData[] = {
		{ "Category", "Ability|Execution|Cast" },
		{ "Comment", "// Tags removed when the ability starts casting\n" },
		{ "ModuleRelativePath", "Public/Ability.h" },
		{ "ToolTip", "Tags removed when the ability starts casting" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CastFinishAddTags_MetaData[] = {
		{ "Category", "Ability|Execution|Cast" },
		{ "Comment", "// Tags added when the ability finishes casting\n" },
		{ "ModuleRelativePath", "Public/Ability.h" },
		{ "ToolTip", "Tags added when the ability finishes casting" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CastFinishRemoveTags_MetaData[] = {
		{ "Category", "Ability|Execution|Cast" },
		{ "Comment", "// Tags removed when the ability finishes casting\n" },
		{ "ModuleRelativePath", "Public/Ability.h" },
		{ "ToolTip", "Tags removed when the ability finishes casting" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActivationAddTags_MetaData[] = {
		{ "Category", "Ability|Execution|Activation" },
		{ "Comment", "// Tags added when the ability activates\n" },
		{ "ModuleRelativePath", "Public/Ability.h" },
		{ "ToolTip", "Tags added when the ability activates" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActivationRemoveTags_MetaData[] = {
		{ "Category", "Ability|Execution|Activation" },
		{ "Comment", "// Tags removed when the ability activates\n" },
		{ "ModuleRelativePath", "Public/Ability.h" },
		{ "ToolTip", "Tags removed when the ability activates" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DeactivationAddTags_MetaData[] = {
		{ "Category", "Ability|Execution|Activation" },
		{ "Comment", "// Tags added when the ability deactivates\n" },
		{ "ModuleRelativePath", "Public/Ability.h" },
		{ "ToolTip", "Tags added when the ability deactivates" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DeactivationRemoveTags_MetaData[] = {
		{ "Category", "Ability|Execution|Activation" },
		{ "Comment", "// Tags removed when the ability deactivates\n" },
		{ "ModuleRelativePath", "Public/Ability.h" },
		{ "ToolTip", "Tags removed when the ability deactivates" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bInterruptionCancelsCasting_MetaData[] = {
		{ "Category", "Ability|Execution|Interrupt" },
		{ "Comment", "// If true, casting is cancelled when InterruptWithTags hits\n" },
		{ "ModuleRelativePath", "Public/Ability.h" },
		{ "ToolTip", "If true, casting is cancelled when InterruptWithTags hits" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bInterruptionCancelsActivation_MetaData[] = {
		{ "Category", "Ability|Execution|Interrupt" },
		{ "Comment", "// If true, activation is cancelled when InterruptWithTags hits\n" },
		{ "ModuleRelativePath", "Public/Ability.h" },
		{ "ToolTip", "If true, activation is cancelled when InterruptWithTags hits" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InterruptWithTags_MetaData[] = {
		{ "Category", "Ability|Execution|Interrupt" },
		{ "Comment", "// If any of this tags is received this ability will cancel activation\n" },
		{ "ModuleRelativePath", "Public/Ability.h" },
		{ "ToolTip", "If any of this tags is received this ability will cancel activation" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHasCooldown_MetaData[] = {
		{ "Category", "Ability|Execution" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Ability.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CooldownDuration_MetaData[] = {
		{ "Category", "Ability|Execution" },
		{ "ClampMin", "0" },
		{ "Comment", "// Cooldown duration in seconds. If 0 or less, there's no cooldown.\n" },
		{ "EditCondition", "bHasCooldown" },
		{ "ForceUnits", "s" },
		{ "ModuleRelativePath", "Public/Ability.h" },
		{ "ToolTip", "Cooldown duration in seconds. If 0 or less, there's no cooldown." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CooldownMode_MetaData[] = {
		{ "Category", "Ability|Execution" },
		{ "EditCondition", "bHasCooldown" },
		{ "ModuleRelativePath", "Public/Ability.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bBackToCastingIfPredictionFailed_MetaData[] = {
		{ "Category", "Ability|Network" },
		{ "Comment", "// If the ability has cast, when activation prediction fails, cast will be resumed\n" },
		{ "ModuleRelativePath", "Public/Ability.h" },
		{ "ToolTip", "If the ability has cast, when activation prediction fails, cast will be resumed" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputProfile_MetaData[] = {
		{ "Category", "Ability|Input" },
		{ "ModuleRelativePath", "Public/Ability.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bInputWaitForCooldown_MetaData[] = {
		{ "Category", "Ability|Input" },
		{ "Comment", "/** If true, activation or cast will start when cooldown finishes if input is pressed. */" },
		{ "ModuleRelativePath", "Public/Ability.h" },
		{ "ToolTip", "If true, activation or cast will start when cooldown finishes if input is pressed." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PressedEvent_MetaData[] = {
		{ "Comment", "/** Runtime Properties */" },
		{ "ModuleRelativePath", "Public/Ability.h" },
		{ "ToolTip", "Runtime Properties" },
	};
#endif // WITH_METADATA

// ********** Begin Class UAbility constinit property declarations *********************************
	static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_DesignerNotes;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_DisplayName;
	static const UECodeGen_Private::FTextPropertyParams NewProp_Description;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Icon;
	static void NewProp_bHasCast_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasCast;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TickMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_TickMode;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RequiredTags;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RequiredToNotHaveTags;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CastStartAddTags;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CastStartRemoveTags;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CastFinishAddTags;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CastFinishRemoveTags;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ActivationAddTags;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ActivationRemoveTags;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DeactivationAddTags;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DeactivationRemoveTags;
	static void NewProp_bInterruptionCancelsCasting_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInterruptionCancelsCasting;
	static void NewProp_bInterruptionCancelsActivation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInterruptionCancelsActivation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InterruptWithTags;
	static void NewProp_bHasCooldown_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasCooldown;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CooldownDuration;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CooldownMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CooldownMode;
	static void NewProp_bBackToCastingIfPredictionFailed_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bBackToCastingIfPredictionFailed;
	static const UECodeGen_Private::FBytePropertyParams NewProp_InputProfile_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_InputProfile;
	static void NewProp_bInputWaitForCooldown_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInputWaitForCooldown;
	static const UECodeGen_Private::FNamePropertyParams NewProp_PressedEvent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UAbility constinit property declarations ***********************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("Activate"), .Pointer = &UAbility::execActivate },
		{ .NameUTF8 = UTF8TEXT("ActivateOrCancel"), .Pointer = &UAbility::execActivateOrCancel },
		{ .NameUTF8 = UTF8TEXT("Cancel"), .Pointer = &UAbility::execCancel },
		{ .NameUTF8 = UTF8TEXT("Deactivate"), .Pointer = &UAbility::execDeactivate },
		{ .NameUTF8 = UTF8TEXT("EventActivate"), .Pointer = &UAbility::execEventActivate },
		{ .NameUTF8 = UTF8TEXT("EventCanActivate"), .Pointer = &UAbility::execEventCanActivate },
		{ .NameUTF8 = UTF8TEXT("EventCanCast"), .Pointer = &UAbility::execEventCanCast },
		{ .NameUTF8 = UTF8TEXT("EventCast"), .Pointer = &UAbility::execEventCast },
		{ .NameUTF8 = UTF8TEXT("EventCastFinish"), .Pointer = &UAbility::execEventCastFinish },
		{ .NameUTF8 = UTF8TEXT("EventDeactivate"), .Pointer = &UAbility::execEventDeactivate },
		{ .NameUTF8 = UTF8TEXT("EventOnCancelInput"), .Pointer = &UAbility::execEventOnCancelInput },
		{ .NameUTF8 = UTF8TEXT("GetDisplayName"), .Pointer = &UAbility::execGetDisplayName },
		{ .NameUTF8 = UTF8TEXT("GetInputProfile"), .Pointer = &UAbility::execGetInputProfile },
		{ .NameUTF8 = UTF8TEXT("GetRawName"), .Pointer = &UAbility::execGetRawName },
		{ .NameUTF8 = UTF8TEXT("HasCooldown"), .Pointer = &UAbility::execHasCooldown },
		{ .NameUTF8 = UTF8TEXT("HasFinished"), .Pointer = &UAbility::execHasFinished },
		{ .NameUTF8 = UTF8TEXT("HasSucceeded"), .Pointer = &UAbility::execHasSucceeded },
		{ .NameUTF8 = UTF8TEXT("IsActivated"), .Pointer = &UAbility::execIsActivated },
		{ .NameUTF8 = UTF8TEXT("IsCancelled"), .Pointer = &UAbility::execIsCancelled },
		{ .NameUTF8 = UTF8TEXT("IsCasting"), .Pointer = &UAbility::execIsCasting },
		{ .NameUTF8 = UTF8TEXT("IsCoolingDown"), .Pointer = &UAbility::execIsCoolingDown },
		{ .NameUTF8 = UTF8TEXT("IsPressed"), .Pointer = &UAbility::execIsPressed },
		{ .NameUTF8 = UTF8TEXT("IsRunning"), .Pointer = &UAbility::execIsRunning },
		{ .NameUTF8 = UTF8TEXT("MCResetCooldown"), .Pointer = &UAbility::execMCResetCooldown },
		{ .NameUTF8 = UTF8TEXT("MCStartCooldown"), .Pointer = &UAbility::execMCStartCooldown },
		{ .NameUTF8 = UTF8TEXT("ResetCooldown"), .Pointer = &UAbility::execResetCooldown },
		{ .NameUTF8 = UTF8TEXT("StartCast"), .Pointer = &UAbility::execStartCast },
		{ .NameUTF8 = UTF8TEXT("StartCooldown"), .Pointer = &UAbility::execStartCooldown },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAbility_Activate, "Activate" }, // 930975004
		{ &Z_Construct_UFunction_UAbility_ActivateOrCancel, "ActivateOrCancel" }, // 1857662937
		{ &Z_Construct_UFunction_UAbility_Cancel, "Cancel" }, // 4013054317
		{ &Z_Construct_UFunction_UAbility_Deactivate, "Deactivate" }, // 1165108073
		{ &Z_Construct_UFunction_UAbility_EventActivate, "EventActivate" }, // 3446850570
		{ &Z_Construct_UFunction_UAbility_EventCanActivate, "EventCanActivate" }, // 2499050891
		{ &Z_Construct_UFunction_UAbility_EventCanCast, "EventCanCast" }, // 100557827
		{ &Z_Construct_UFunction_UAbility_EventCast, "EventCast" }, // 2543565510
		{ &Z_Construct_UFunction_UAbility_EventCastFinish, "EventCastFinish" }, // 3225349628
		{ &Z_Construct_UFunction_UAbility_EventDeactivate, "EventDeactivate" }, // 2847423913
		{ &Z_Construct_UFunction_UAbility_EventOnCancelInput, "EventOnCancelInput" }, // 487650640
		{ &Z_Construct_UFunction_UAbility_EventOnCooldownReady, "EventOnCooldownReady" }, // 131408776
		{ &Z_Construct_UFunction_UAbility_EventOnCooldownStarted, "EventOnCooldownStarted" }, // 1902061465
		{ &Z_Construct_UFunction_UAbility_EventOnInputPressed, "EventOnInputPressed" }, // 474783315
		{ &Z_Construct_UFunction_UAbility_EventOnInputReleased, "EventOnInputReleased" }, // 3890753004
		{ &Z_Construct_UFunction_UAbility_EventOnTagsChanged, "EventOnTagsChanged" }, // 631283988
		{ &Z_Construct_UFunction_UAbility_GetDisplayName, "GetDisplayName" }, // 1052300016
		{ &Z_Construct_UFunction_UAbility_GetInputProfile, "GetInputProfile" }, // 2181568176
		{ &Z_Construct_UFunction_UAbility_GetRawName, "GetRawName" }, // 2488894368
		{ &Z_Construct_UFunction_UAbility_HasCooldown, "HasCooldown" }, // 1112709219
		{ &Z_Construct_UFunction_UAbility_HasFinished, "HasFinished" }, // 1851493396
		{ &Z_Construct_UFunction_UAbility_HasSucceeded, "HasSucceeded" }, // 2319886921
		{ &Z_Construct_UFunction_UAbility_IsActivated, "IsActivated" }, // 1530411179
		{ &Z_Construct_UFunction_UAbility_IsCancelled, "IsCancelled" }, // 2354593243
		{ &Z_Construct_UFunction_UAbility_IsCasting, "IsCasting" }, // 4260430894
		{ &Z_Construct_UFunction_UAbility_IsCoolingDown, "IsCoolingDown" }, // 2292486155
		{ &Z_Construct_UFunction_UAbility_IsPressed, "IsPressed" }, // 3525156991
		{ &Z_Construct_UFunction_UAbility_IsRunning, "IsRunning" }, // 3637746610
		{ &Z_Construct_UFunction_UAbility_MCResetCooldown, "MCResetCooldown" }, // 4082053808
		{ &Z_Construct_UFunction_UAbility_MCStartCooldown, "MCStartCooldown" }, // 1283374728
		{ &Z_Construct_UFunction_UAbility_ResetCooldown, "ResetCooldown" }, // 1399177258
		{ &Z_Construct_UFunction_UAbility_StartCast, "StartCast" }, // 59109960
		{ &Z_Construct_UFunction_UAbility_StartCooldown, "StartCooldown" }, // 896940640
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAbility>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UAbility_Statics

// ********** Begin Class UAbility Property Definitions ********************************************
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UAbility_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAbility, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UAbility_Statics::NewProp_DesignerNotes = { "DesignerNotes", nullptr, (EPropertyFlags)0x0020080800010001, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAbility, DesignerNotes), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DesignerNotes_MetaData), NewProp_DesignerNotes_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UAbility_Statics::NewProp_DisplayName = { "DisplayName", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAbility, DisplayName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DisplayName_MetaData), NewProp_DisplayName_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UAbility_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAbility, Description), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Description_MetaData), NewProp_Description_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAbility_Statics::NewProp_Icon = { "Icon", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAbility, Icon), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Icon_MetaData), NewProp_Icon_MetaData) };
void Z_Construct_UClass_UAbility_Statics::NewProp_bHasCast_SetBit(void* Obj)
{
	((UAbility*)Obj)->bHasCast = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAbility_Statics::NewProp_bHasCast = { "bHasCast", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAbility), &Z_Construct_UClass_UAbility_Statics::NewProp_bHasCast_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHasCast_MetaData), NewProp_bHasCast_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAbility_Statics::NewProp_TickMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UAbility_Statics::NewProp_TickMode = { "TickMode", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAbility, TickMode), Z_Construct_UEnum_Abilities_EAbilityTickMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TickMode_MetaData), NewProp_TickMode_MetaData) }; // 3223815748
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAbility_Statics::NewProp_RequiredTags = { "RequiredTags", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAbility, RequiredTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RequiredTags_MetaData), NewProp_RequiredTags_MetaData) }; // 3438578166
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAbility_Statics::NewProp_RequiredToNotHaveTags = { "RequiredToNotHaveTags", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAbility, RequiredToNotHaveTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RequiredToNotHaveTags_MetaData), NewProp_RequiredToNotHaveTags_MetaData) }; // 3438578166
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAbility_Statics::NewProp_CastStartAddTags = { "CastStartAddTags", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAbility, CastStartAddTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CastStartAddTags_MetaData), NewProp_CastStartAddTags_MetaData) }; // 3438578166
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAbility_Statics::NewProp_CastStartRemoveTags = { "CastStartRemoveTags", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAbility, CastStartRemoveTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CastStartRemoveTags_MetaData), NewProp_CastStartRemoveTags_MetaData) }; // 3438578166
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAbility_Statics::NewProp_CastFinishAddTags = { "CastFinishAddTags", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAbility, CastFinishAddTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CastFinishAddTags_MetaData), NewProp_CastFinishAddTags_MetaData) }; // 3438578166
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAbility_Statics::NewProp_CastFinishRemoveTags = { "CastFinishRemoveTags", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAbility, CastFinishRemoveTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CastFinishRemoveTags_MetaData), NewProp_CastFinishRemoveTags_MetaData) }; // 3438578166
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAbility_Statics::NewProp_ActivationAddTags = { "ActivationAddTags", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAbility, ActivationAddTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActivationAddTags_MetaData), NewProp_ActivationAddTags_MetaData) }; // 3438578166
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAbility_Statics::NewProp_ActivationRemoveTags = { "ActivationRemoveTags", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAbility, ActivationRemoveTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActivationRemoveTags_MetaData), NewProp_ActivationRemoveTags_MetaData) }; // 3438578166
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAbility_Statics::NewProp_DeactivationAddTags = { "DeactivationAddTags", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAbility, DeactivationAddTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeactivationAddTags_MetaData), NewProp_DeactivationAddTags_MetaData) }; // 3438578166
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAbility_Statics::NewProp_DeactivationRemoveTags = { "DeactivationRemoveTags", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAbility, DeactivationRemoveTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeactivationRemoveTags_MetaData), NewProp_DeactivationRemoveTags_MetaData) }; // 3438578166
void Z_Construct_UClass_UAbility_Statics::NewProp_bInterruptionCancelsCasting_SetBit(void* Obj)
{
	((UAbility*)Obj)->bInterruptionCancelsCasting = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAbility_Statics::NewProp_bInterruptionCancelsCasting = { "bInterruptionCancelsCasting", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAbility), &Z_Construct_UClass_UAbility_Statics::NewProp_bInterruptionCancelsCasting_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bInterruptionCancelsCasting_MetaData), NewProp_bInterruptionCancelsCasting_MetaData) };
void Z_Construct_UClass_UAbility_Statics::NewProp_bInterruptionCancelsActivation_SetBit(void* Obj)
{
	((UAbility*)Obj)->bInterruptionCancelsActivation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAbility_Statics::NewProp_bInterruptionCancelsActivation = { "bInterruptionCancelsActivation", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAbility), &Z_Construct_UClass_UAbility_Statics::NewProp_bInterruptionCancelsActivation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bInterruptionCancelsActivation_MetaData), NewProp_bInterruptionCancelsActivation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAbility_Statics::NewProp_InterruptWithTags = { "InterruptWithTags", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAbility, InterruptWithTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InterruptWithTags_MetaData), NewProp_InterruptWithTags_MetaData) }; // 3438578166
void Z_Construct_UClass_UAbility_Statics::NewProp_bHasCooldown_SetBit(void* Obj)
{
	((UAbility*)Obj)->bHasCooldown = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAbility_Statics::NewProp_bHasCooldown = { "bHasCooldown", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAbility), &Z_Construct_UClass_UAbility_Statics::NewProp_bHasCooldown_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHasCooldown_MetaData), NewProp_bHasCooldown_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAbility_Statics::NewProp_CooldownDuration = { "CooldownDuration", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAbility, CooldownDuration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CooldownDuration_MetaData), NewProp_CooldownDuration_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAbility_Statics::NewProp_CooldownMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UAbility_Statics::NewProp_CooldownMode = { "CooldownMode", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAbility, CooldownMode), Z_Construct_UEnum_Abilities_EAbilityCooldownMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CooldownMode_MetaData), NewProp_CooldownMode_MetaData) }; // 654942443
void Z_Construct_UClass_UAbility_Statics::NewProp_bBackToCastingIfPredictionFailed_SetBit(void* Obj)
{
	((UAbility*)Obj)->bBackToCastingIfPredictionFailed = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAbility_Statics::NewProp_bBackToCastingIfPredictionFailed = { "bBackToCastingIfPredictionFailed", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAbility), &Z_Construct_UClass_UAbility_Statics::NewProp_bBackToCastingIfPredictionFailed_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bBackToCastingIfPredictionFailed_MetaData), NewProp_bBackToCastingIfPredictionFailed_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAbility_Statics::NewProp_InputProfile_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UAbility_Statics::NewProp_InputProfile = { "InputProfile", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAbility, InputProfile), Z_Construct_UEnum_Abilities_EAbilityInputProfile, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputProfile_MetaData), NewProp_InputProfile_MetaData) }; // 997520594
void Z_Construct_UClass_UAbility_Statics::NewProp_bInputWaitForCooldown_SetBit(void* Obj)
{
	((UAbility*)Obj)->bInputWaitForCooldown = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAbility_Statics::NewProp_bInputWaitForCooldown = { "bInputWaitForCooldown", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAbility), &Z_Construct_UClass_UAbility_Statics::NewProp_bInputWaitForCooldown_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bInputWaitForCooldown_MetaData), NewProp_bInputWaitForCooldown_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UAbility_Statics::NewProp_PressedEvent = { "PressedEvent", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAbility, PressedEvent), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PressedEvent_MetaData), NewProp_PressedEvent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAbility_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbility_Statics::NewProp_Name,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbility_Statics::NewProp_DesignerNotes,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbility_Statics::NewProp_DisplayName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbility_Statics::NewProp_Description,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbility_Statics::NewProp_Icon,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbility_Statics::NewProp_bHasCast,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbility_Statics::NewProp_TickMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbility_Statics::NewProp_TickMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbility_Statics::NewProp_RequiredTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbility_Statics::NewProp_RequiredToNotHaveTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbility_Statics::NewProp_CastStartAddTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbility_Statics::NewProp_CastStartRemoveTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbility_Statics::NewProp_CastFinishAddTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbility_Statics::NewProp_CastFinishRemoveTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbility_Statics::NewProp_ActivationAddTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbility_Statics::NewProp_ActivationRemoveTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbility_Statics::NewProp_DeactivationAddTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbility_Statics::NewProp_DeactivationRemoveTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbility_Statics::NewProp_bInterruptionCancelsCasting,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbility_Statics::NewProp_bInterruptionCancelsActivation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbility_Statics::NewProp_InterruptWithTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbility_Statics::NewProp_bHasCooldown,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbility_Statics::NewProp_CooldownDuration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbility_Statics::NewProp_CooldownMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbility_Statics::NewProp_CooldownMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbility_Statics::NewProp_bBackToCastingIfPredictionFailed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbility_Statics::NewProp_InputProfile_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbility_Statics::NewProp_InputProfile,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbility_Statics::NewProp_bInputWaitForCooldown,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbility_Statics::NewProp_PressedEvent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAbility_Statics::PropPointers) < 2048);
// ********** End Class UAbility Property Definitions **********************************************
UObject* (*const Z_Construct_UClass_UAbility_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAbilityBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Abilities,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAbility_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAbility_Statics::ClassParams = {
	&UAbility::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UAbility_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UAbility_Statics::PropPointers),
	0,
	0x009000A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAbility_Statics::Class_MetaDataParams), Z_Construct_UClass_UAbility_Statics::Class_MetaDataParams)
};
void UAbility::StaticRegisterNativesUAbility()
{
	UClass* Class = UAbility::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_UAbility_Statics::Funcs));
}
UClass* Z_Construct_UClass_UAbility()
{
	if (!Z_Registration_Info_UClass_UAbility.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAbility.OuterSingleton, Z_Construct_UClass_UAbility_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAbility.OuterSingleton;
}
UAbility::UAbility() {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UAbility);
UAbility::~UAbility() {}
// ********** End Class UAbility *******************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Projects_Piperift_TestBench_Plugins_Abilities_Build_HostProject_Plugins_Abilities_Source_Abilities_Public_Ability_h__Script_Abilities_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EAbilityTickMode_StaticEnum, TEXT("EAbilityTickMode"), &Z_Registration_Info_UEnum_EAbilityTickMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3223815748U) },
		{ ECooldownReadyReason_StaticEnum, TEXT("ECooldownReadyReason"), &Z_Registration_Info_UEnum_ECooldownReadyReason, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4025591334U) },
		{ EAbilityCooldownMode_StaticEnum, TEXT("EAbilityCooldownMode"), &Z_Registration_Info_UEnum_EAbilityCooldownMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 654942443U) },
		{ EAbilityInputProfile_StaticEnum, TEXT("EAbilityInputProfile"), &Z_Registration_Info_UEnum_EAbilityInputProfile, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 997520594U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAbility, UAbility::StaticClass, TEXT("UAbility"), &Z_Registration_Info_UClass_UAbility, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAbility), 1627790613U) },
	};
}; // Z_CompiledInDeferFile_FID_Projects_Piperift_TestBench_Plugins_Abilities_Build_HostProject_Plugins_Abilities_Source_Abilities_Public_Ability_h__Script_Abilities_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_Piperift_TestBench_Plugins_Abilities_Build_HostProject_Plugins_Abilities_Source_Abilities_Public_Ability_h__Script_Abilities_2640212985{
	TEXT("/Script/Abilities"),
	Z_CompiledInDeferFile_FID_Projects_Piperift_TestBench_Plugins_Abilities_Build_HostProject_Plugins_Abilities_Source_Abilities_Public_Ability_h__Script_Abilities_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_Piperift_TestBench_Plugins_Abilities_Build_HostProject_Plugins_Abilities_Source_Abilities_Public_Ability_h__Script_Abilities_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Projects_Piperift_TestBench_Plugins_Abilities_Build_HostProject_Plugins_Abilities_Source_Abilities_Public_Ability_h__Script_Abilities_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_Piperift_TestBench_Plugins_Abilities_Build_HostProject_Plugins_Abilities_Source_Abilities_Public_Ability_h__Script_Abilities_Statics::EnumInfo),
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
