// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AbilitiesComponent.h"
#include "AbilitiesCooldownCounter.h"
#include "Buff.h"
#include "BuffsLifetimeCounter.h"
#include "BuffTypeContainer.h"
#include "GameplayTagContainer.h"
#include "Misc/StructContainer.h"
#include "UObject/Class.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeAbilitiesComponent() {}

// ********** Begin Cross Module References ********************************************************
ABILITIES_API UClass* Z_Construct_UClass_UAbilitiesComponent();
ABILITIES_API UClass* Z_Construct_UClass_UAbilitiesComponent_NoRegister();
ABILITIES_API UClass* Z_Construct_UClass_UAbility_NoRegister();
ABILITIES_API UClass* Z_Construct_UClass_UBuff_NoRegister();
ABILITIES_API UEnum* Z_Construct_UEnum_Abilities_EAllAny();
ABILITIES_API UEnum* Z_Construct_UEnum_Abilities_EBuffOperation();
ABILITIES_API UFunction* Z_Construct_UDelegateFunction_Abilities_OnBuffsAppliedDelegate__DelegateSignature();
ABILITIES_API UFunction* Z_Construct_UDelegateFunction_Abilities_OnBuffsRemovedDelegate__DelegateSignature();
ABILITIES_API UFunction* Z_Construct_UDelegateFunction_Abilities_OnTagsChangedDelegate__DelegateSignature();
ABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FAbilitiesCooldownCounter();
ABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FBuffCount();
ABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FBuffsLifetimeCounter();
ABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FBuffTypeContainer();
ABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FCancelInputReturn();
ABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FStructContainer();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
UPackage* Z_Construct_UPackage__Script_Abilities();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FOnBuffsAppliedDelegate ***********************************************
struct Z_Construct_UDelegateFunction_Abilities_OnBuffsAppliedDelegate__DelegateSignature_Statics
{
	struct _Script_Abilities_eventOnBuffsAppliedDelegate_Parms
	{
		TSet<FBuffCount> Buffs;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AbilitiesComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Buffs_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnBuffsAppliedDelegate constinit property declarations ***************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Buffs_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_Buffs;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FOnBuffsAppliedDelegate constinit property declarations *****************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FOnBuffsAppliedDelegate Property Definitions **************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_Abilities_OnBuffsAppliedDelegate__DelegateSignature_Statics::NewProp_Buffs_ElementProp = { "Buffs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FBuffCount, METADATA_PARAMS(0, nullptr) }; // 3926446658
static_assert(TModels_V<CGetTypeHashable, FBuffCount>, "The structure 'FBuffCount' is used in a TSet but does not have a GetValueTypeHash defined");
const UECodeGen_Private::FSetPropertyParams Z_Construct_UDelegateFunction_Abilities_OnBuffsAppliedDelegate__DelegateSignature_Statics::NewProp_Buffs = { "Buffs", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Abilities_eventOnBuffsAppliedDelegate_Parms, Buffs), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Buffs_MetaData), NewProp_Buffs_MetaData) }; // 3926446658
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Abilities_OnBuffsAppliedDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Abilities_OnBuffsAppliedDelegate__DelegateSignature_Statics::NewProp_Buffs_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Abilities_OnBuffsAppliedDelegate__DelegateSignature_Statics::NewProp_Buffs,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Abilities_OnBuffsAppliedDelegate__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FOnBuffsAppliedDelegate Property Definitions ****************************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_Abilities_OnBuffsAppliedDelegate__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_Abilities, nullptr, "OnBuffsAppliedDelegate__DelegateSignature", 	Z_Construct_UDelegateFunction_Abilities_OnBuffsAppliedDelegate__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Abilities_OnBuffsAppliedDelegate__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_Abilities_OnBuffsAppliedDelegate__DelegateSignature_Statics::_Script_Abilities_eventOnBuffsAppliedDelegate_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Abilities_OnBuffsAppliedDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Abilities_OnBuffsAppliedDelegate__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_Abilities_OnBuffsAppliedDelegate__DelegateSignature_Statics::_Script_Abilities_eventOnBuffsAppliedDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_Abilities_OnBuffsAppliedDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Abilities_OnBuffsAppliedDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnBuffsAppliedDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnBuffsAppliedDelegate, TSet<FBuffCount> const& Buffs)
{
	struct _Script_Abilities_eventOnBuffsAppliedDelegate_Parms
	{
		TSet<FBuffCount> Buffs;
	};
	_Script_Abilities_eventOnBuffsAppliedDelegate_Parms Parms;
	Parms.Buffs=Buffs;
	OnBuffsAppliedDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnBuffsAppliedDelegate *************************************************

// ********** Begin Delegate FOnBuffsRemovedDelegate ***********************************************
struct Z_Construct_UDelegateFunction_Abilities_OnBuffsRemovedDelegate__DelegateSignature_Statics
{
	struct _Script_Abilities_eventOnBuffsRemovedDelegate_Parms
	{
		TSet<FBuffCount> Buffs;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AbilitiesComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Buffs_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnBuffsRemovedDelegate constinit property declarations ***************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Buffs_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_Buffs;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FOnBuffsRemovedDelegate constinit property declarations *****************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FOnBuffsRemovedDelegate Property Definitions **************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_Abilities_OnBuffsRemovedDelegate__DelegateSignature_Statics::NewProp_Buffs_ElementProp = { "Buffs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FBuffCount, METADATA_PARAMS(0, nullptr) }; // 3926446658
static_assert(TModels_V<CGetTypeHashable, FBuffCount>, "The structure 'FBuffCount' is used in a TSet but does not have a GetValueTypeHash defined");
const UECodeGen_Private::FSetPropertyParams Z_Construct_UDelegateFunction_Abilities_OnBuffsRemovedDelegate__DelegateSignature_Statics::NewProp_Buffs = { "Buffs", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Abilities_eventOnBuffsRemovedDelegate_Parms, Buffs), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Buffs_MetaData), NewProp_Buffs_MetaData) }; // 3926446658
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Abilities_OnBuffsRemovedDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Abilities_OnBuffsRemovedDelegate__DelegateSignature_Statics::NewProp_Buffs_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Abilities_OnBuffsRemovedDelegate__DelegateSignature_Statics::NewProp_Buffs,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Abilities_OnBuffsRemovedDelegate__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FOnBuffsRemovedDelegate Property Definitions ****************************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_Abilities_OnBuffsRemovedDelegate__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_Abilities, nullptr, "OnBuffsRemovedDelegate__DelegateSignature", 	Z_Construct_UDelegateFunction_Abilities_OnBuffsRemovedDelegate__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Abilities_OnBuffsRemovedDelegate__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_Abilities_OnBuffsRemovedDelegate__DelegateSignature_Statics::_Script_Abilities_eventOnBuffsRemovedDelegate_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Abilities_OnBuffsRemovedDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Abilities_OnBuffsRemovedDelegate__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_Abilities_OnBuffsRemovedDelegate__DelegateSignature_Statics::_Script_Abilities_eventOnBuffsRemovedDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_Abilities_OnBuffsRemovedDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Abilities_OnBuffsRemovedDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnBuffsRemovedDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnBuffsRemovedDelegate, TSet<FBuffCount> const& Buffs)
{
	struct _Script_Abilities_eventOnBuffsRemovedDelegate_Parms
	{
		TSet<FBuffCount> Buffs;
	};
	_Script_Abilities_eventOnBuffsRemovedDelegate_Parms Parms;
	Parms.Buffs=Buffs;
	OnBuffsRemovedDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnBuffsRemovedDelegate *************************************************

// ********** Begin Delegate FOnTagsChangedDelegate ************************************************
struct Z_Construct_UDelegateFunction_Abilities_OnTagsChangedDelegate__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AbilitiesComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnTagsChangedDelegate constinit property declarations ****************
// ********** End Delegate FOnTagsChangedDelegate constinit property declarations ******************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_Abilities_OnTagsChangedDelegate__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_Abilities, nullptr, "OnTagsChangedDelegate__DelegateSignature", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Abilities_OnTagsChangedDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Abilities_OnTagsChangedDelegate__DelegateSignature_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UDelegateFunction_Abilities_OnTagsChangedDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Abilities_OnTagsChangedDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnTagsChangedDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnTagsChangedDelegate)
{
	OnTagsChangedDelegate.ProcessMulticastDelegate<UObject>(NULL);
}
// ********** End Delegate FOnTagsChangedDelegate **************************************************

// ********** Begin Enum EBuffOperation ************************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EBuffOperation;
static UEnum* EBuffOperation_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EBuffOperation.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EBuffOperation.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Abilities_EBuffOperation, (UObject*)Z_Construct_UPackage__Script_Abilities(), TEXT("EBuffOperation"));
	}
	return Z_Registration_Info_UEnum_EBuffOperation.OuterSingleton;
}
template<> ABILITIES_NON_ATTRIBUTED_API UEnum* StaticEnum<EBuffOperation>()
{
	return EBuffOperation_StaticEnum();
}
struct Z_Construct_UEnum_Abilities_EBuffOperation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Added.Name", "EBuffOperation::Added" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AbilitiesComponent.h" },
		{ "Removed.Name", "EBuffOperation::Removed" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EBuffOperation::Added", (int64)EBuffOperation::Added },
		{ "EBuffOperation::Removed", (int64)EBuffOperation::Removed },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_Abilities_EBuffOperation_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Abilities_EBuffOperation_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Abilities,
	nullptr,
	"EBuffOperation",
	"EBuffOperation",
	Z_Construct_UEnum_Abilities_EBuffOperation_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Abilities_EBuffOperation_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Abilities_EBuffOperation_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Abilities_EBuffOperation_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Abilities_EBuffOperation()
{
	if (!Z_Registration_Info_UEnum_EBuffOperation.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EBuffOperation.InnerSingleton, Z_Construct_UEnum_Abilities_EBuffOperation_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EBuffOperation.InnerSingleton;
}
// ********** End Enum EBuffOperation **************************************************************

// ********** Begin ScriptStruct FCancelInputReturn ************************************************
struct Z_Construct_UScriptStruct_FCancelInputReturn_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FCancelInputReturn); }
	static inline consteval int16 GetStructAlignment() { return alignof(FCancelInputReturn); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AbilitiesComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bInputCancelled_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/AbilitiesComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAbilityCancelled_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/AbilitiesComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FCancelInputReturn constinit property declarations ****************
	static void NewProp_bInputCancelled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInputCancelled;
	static void NewProp_bAbilityCancelled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAbilityCancelled;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FCancelInputReturn constinit property declarations ******************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCancelInputReturn>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FCancelInputReturn_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FCancelInputReturn;
class UScriptStruct* FCancelInputReturn::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FCancelInputReturn.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FCancelInputReturn.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCancelInputReturn, (UObject*)Z_Construct_UPackage__Script_Abilities(), TEXT("CancelInputReturn"));
	}
	return Z_Registration_Info_UScriptStruct_FCancelInputReturn.OuterSingleton;
	}

// ********** Begin ScriptStruct FCancelInputReturn Property Definitions ***************************
void Z_Construct_UScriptStruct_FCancelInputReturn_Statics::NewProp_bInputCancelled_SetBit(void* Obj)
{
	((FCancelInputReturn*)Obj)->bInputCancelled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCancelInputReturn_Statics::NewProp_bInputCancelled = { "bInputCancelled", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FCancelInputReturn), &Z_Construct_UScriptStruct_FCancelInputReturn_Statics::NewProp_bInputCancelled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bInputCancelled_MetaData), NewProp_bInputCancelled_MetaData) };
void Z_Construct_UScriptStruct_FCancelInputReturn_Statics::NewProp_bAbilityCancelled_SetBit(void* Obj)
{
	((FCancelInputReturn*)Obj)->bAbilityCancelled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCancelInputReturn_Statics::NewProp_bAbilityCancelled = { "bAbilityCancelled", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FCancelInputReturn), &Z_Construct_UScriptStruct_FCancelInputReturn_Statics::NewProp_bAbilityCancelled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAbilityCancelled_MetaData), NewProp_bAbilityCancelled_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCancelInputReturn_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCancelInputReturn_Statics::NewProp_bInputCancelled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCancelInputReturn_Statics::NewProp_bAbilityCancelled,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCancelInputReturn_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FCancelInputReturn Property Definitions *****************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCancelInputReturn_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Abilities,
	nullptr,
	&NewStructOps,
	"CancelInputReturn",
	Z_Construct_UScriptStruct_FCancelInputReturn_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCancelInputReturn_Statics::PropPointers),
	sizeof(FCancelInputReturn),
	alignof(FCancelInputReturn),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCancelInputReturn_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCancelInputReturn_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCancelInputReturn()
{
	if (!Z_Registration_Info_UScriptStruct_FCancelInputReturn.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FCancelInputReturn.InnerSingleton, Z_Construct_UScriptStruct_FCancelInputReturn_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FCancelInputReturn.InnerSingleton);
}
// ********** End ScriptStruct FCancelInputReturn **************************************************

// ********** Begin Class UAbilitiesComponent Function AddRemainingCooldown ************************
struct Z_Construct_UFunction_UAbilitiesComponent_AddRemainingCooldown_Statics
{
	struct AbilitiesComponent_eventAddRemainingCooldown_Parms
	{
		TSubclassOf<UAbility> Class;
		float Duration;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AbilityComponent|Abilities|Cooldowns" },
		{ "Comment", "// Adds (or substracts) time from an active cooldown\n// @param Class of the ability to apply the extra cooldown\n// @param Duration to add or remove from the cooldown\n// @return true if cooldown was modified\n" },
		{ "ModuleRelativePath", "Public/AbilitiesComponent.h" },
		{ "ToolTip", "Adds (or substracts) time from an active cooldown\n@param Class of the ability to apply the extra cooldown\n@param Duration to add or remove from the cooldown\n@return true if cooldown was modified" },
	};
#endif // WITH_METADATA

// ********** Begin Function AddRemainingCooldown constinit property declarations ******************
	static const UECodeGen_Private::FClassPropertyParams NewProp_Class;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Duration;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function AddRemainingCooldown constinit property declarations ********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function AddRemainingCooldown Property Definitions *****************************
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UAbilitiesComponent_AddRemainingCooldown_Statics::NewProp_Class = { "Class", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilitiesComponent_eventAddRemainingCooldown_Parms, Class), Z_Construct_UClass_UClass_NoRegister, Z_Construct_UClass_UAbility_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAbilitiesComponent_AddRemainingCooldown_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilitiesComponent_eventAddRemainingCooldown_Parms, Duration), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UAbilitiesComponent_AddRemainingCooldown_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AbilitiesComponent_eventAddRemainingCooldown_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAbilitiesComponent_AddRemainingCooldown_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AbilitiesComponent_eventAddRemainingCooldown_Parms), &Z_Construct_UFunction_UAbilitiesComponent_AddRemainingCooldown_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAbilitiesComponent_AddRemainingCooldown_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilitiesComponent_AddRemainingCooldown_Statics::NewProp_Class,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilitiesComponent_AddRemainingCooldown_Statics::NewProp_Duration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilitiesComponent_AddRemainingCooldown_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilitiesComponent_AddRemainingCooldown_Statics::PropPointers) < 2048);
// ********** End Function AddRemainingCooldown Property Definitions *******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilitiesComponent_AddRemainingCooldown_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAbilitiesComponent, nullptr, "AddRemainingCooldown", 	Z_Construct_UFunction_UAbilitiesComponent_AddRemainingCooldown_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilitiesComponent_AddRemainingCooldown_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UAbilitiesComponent_AddRemainingCooldown_Statics::AbilitiesComponent_eventAddRemainingCooldown_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilitiesComponent_AddRemainingCooldown_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAbilitiesComponent_AddRemainingCooldown_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAbilitiesComponent_AddRemainingCooldown_Statics::AbilitiesComponent_eventAddRemainingCooldown_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAbilitiesComponent_AddRemainingCooldown()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAbilitiesComponent_AddRemainingCooldown_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAbilitiesComponent::execAddRemainingCooldown)
{
	P_GET_OBJECT(UClass,Z_Param_Class);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Duration);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->AddRemainingCooldown(Z_Param_Class,Z_Param_Duration);
	P_NATIVE_END;
}
// ********** End Class UAbilitiesComponent Function AddRemainingCooldown **************************

// ********** Begin Class UAbilitiesComponent Function AddRemainingCooldowns ***********************
struct Z_Construct_UFunction_UAbilitiesComponent_AddRemainingCooldowns_Statics
{
	struct AbilitiesComponent_eventAddRemainingCooldowns_Parms
	{
		TArray<TSubclassOf<UAbility>> Classes;
		float Duration;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AbilityComponent|Abilities|Cooldowns" },
		{ "Comment", "// Adds (or substracts) time from multiple active cooldowns\n// @param Classes of the abilities to apply the extra cooldown\n// @param Duration to add or remove from the cooldown\n// @return true if cooldowns were modified\n" },
		{ "ModuleRelativePath", "Public/AbilitiesComponent.h" },
		{ "ToolTip", "Adds (or substracts) time from multiple active cooldowns\n@param Classes of the abilities to apply the extra cooldown\n@param Duration to add or remove from the cooldown\n@return true if cooldowns were modified" },
	};
#endif // WITH_METADATA

// ********** Begin Function AddRemainingCooldowns constinit property declarations *****************
	static const UECodeGen_Private::FClassPropertyParams NewProp_Classes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Classes;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Duration;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function AddRemainingCooldowns constinit property declarations *******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function AddRemainingCooldowns Property Definitions ****************************
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UAbilitiesComponent_AddRemainingCooldowns_Statics::NewProp_Classes_Inner = { "Classes", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass_NoRegister, Z_Construct_UClass_UAbility_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAbilitiesComponent_AddRemainingCooldowns_Statics::NewProp_Classes = { "Classes", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilitiesComponent_eventAddRemainingCooldowns_Parms, Classes), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAbilitiesComponent_AddRemainingCooldowns_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilitiesComponent_eventAddRemainingCooldowns_Parms, Duration), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UAbilitiesComponent_AddRemainingCooldowns_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AbilitiesComponent_eventAddRemainingCooldowns_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAbilitiesComponent_AddRemainingCooldowns_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AbilitiesComponent_eventAddRemainingCooldowns_Parms), &Z_Construct_UFunction_UAbilitiesComponent_AddRemainingCooldowns_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAbilitiesComponent_AddRemainingCooldowns_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilitiesComponent_AddRemainingCooldowns_Statics::NewProp_Classes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilitiesComponent_AddRemainingCooldowns_Statics::NewProp_Classes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilitiesComponent_AddRemainingCooldowns_Statics::NewProp_Duration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilitiesComponent_AddRemainingCooldowns_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilitiesComponent_AddRemainingCooldowns_Statics::PropPointers) < 2048);
// ********** End Function AddRemainingCooldowns Property Definitions ******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilitiesComponent_AddRemainingCooldowns_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAbilitiesComponent, nullptr, "AddRemainingCooldowns", 	Z_Construct_UFunction_UAbilitiesComponent_AddRemainingCooldowns_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilitiesComponent_AddRemainingCooldowns_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UAbilitiesComponent_AddRemainingCooldowns_Statics::AbilitiesComponent_eventAddRemainingCooldowns_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilitiesComponent_AddRemainingCooldowns_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAbilitiesComponent_AddRemainingCooldowns_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAbilitiesComponent_AddRemainingCooldowns_Statics::AbilitiesComponent_eventAddRemainingCooldowns_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAbilitiesComponent_AddRemainingCooldowns()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAbilitiesComponent_AddRemainingCooldowns_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAbilitiesComponent::execAddRemainingCooldowns)
{
	P_GET_TARRAY(TSubclassOf<UAbility>,Z_Param_Classes);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Duration);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->AddRemainingCooldowns(Z_Param_Classes,Z_Param_Duration);
	P_NATIVE_END;
}
// ********** End Class UAbilitiesComponent Function AddRemainingCooldowns *************************

// ********** Begin Class UAbilitiesComponent Function AddTag **************************************
struct Z_Construct_UFunction_UAbilitiesComponent_AddTag_Statics
{
	struct AbilitiesComponent_eventAddTag_Parms
	{
		FGameplayTag NewTag;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AbilityComponent|Tags" },
		{ "Comment", "/** Begin TAGS */" },
		{ "ModuleRelativePath", "Public/AbilitiesComponent.h" },
		{ "ToolTip", "Begin TAGS" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewTag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function AddTag constinit property declarations ********************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewTag;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function AddTag constinit property declarations **********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function AddTag Property Definitions *******************************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAbilitiesComponent_AddTag_Statics::NewProp_NewTag = { "NewTag", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilitiesComponent_eventAddTag_Parms, NewTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewTag_MetaData), NewProp_NewTag_MetaData) }; // 517357616
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAbilitiesComponent_AddTag_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilitiesComponent_AddTag_Statics::NewProp_NewTag,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilitiesComponent_AddTag_Statics::PropPointers) < 2048);
// ********** End Function AddTag Property Definitions *********************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilitiesComponent_AddTag_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAbilitiesComponent, nullptr, "AddTag", 	Z_Construct_UFunction_UAbilitiesComponent_AddTag_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilitiesComponent_AddTag_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UAbilitiesComponent_AddTag_Statics::AbilitiesComponent_eventAddTag_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilitiesComponent_AddTag_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAbilitiesComponent_AddTag_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAbilitiesComponent_AddTag_Statics::AbilitiesComponent_eventAddTag_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAbilitiesComponent_AddTag()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAbilitiesComponent_AddTag_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAbilitiesComponent::execAddTag)
{
	P_GET_STRUCT_REF(FGameplayTag,Z_Param_Out_NewTag);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddTag(Z_Param_Out_NewTag);
	P_NATIVE_END;
}
// ********** End Class UAbilitiesComponent Function AddTag ****************************************

// ********** Begin Class UAbilitiesComponent Function AddTags *************************************
struct Z_Construct_UFunction_UAbilitiesComponent_AddTags_Statics
{
	struct AbilitiesComponent_eventAddTags_Parms
	{
		FGameplayTagContainer NewTags;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AbilityComponent|Tags" },
		{ "ModuleRelativePath", "Public/AbilitiesComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewTags_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function AddTags constinit property declarations *******************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewTags;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function AddTags constinit property declarations *********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function AddTags Property Definitions ******************************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAbilitiesComponent_AddTags_Statics::NewProp_NewTags = { "NewTags", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilitiesComponent_eventAddTags_Parms, NewTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewTags_MetaData), NewProp_NewTags_MetaData) }; // 3438578166
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAbilitiesComponent_AddTags_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilitiesComponent_AddTags_Statics::NewProp_NewTags,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilitiesComponent_AddTags_Statics::PropPointers) < 2048);
// ********** End Function AddTags Property Definitions ********************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilitiesComponent_AddTags_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAbilitiesComponent, nullptr, "AddTags", 	Z_Construct_UFunction_UAbilitiesComponent_AddTags_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilitiesComponent_AddTags_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UAbilitiesComponent_AddTags_Statics::AbilitiesComponent_eventAddTags_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilitiesComponent_AddTags_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAbilitiesComponent_AddTags_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAbilitiesComponent_AddTags_Statics::AbilitiesComponent_eventAddTags_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAbilitiesComponent_AddTags()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAbilitiesComponent_AddTags_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAbilitiesComponent::execAddTags)
{
	P_GET_STRUCT_REF(FGameplayTagContainer,Z_Param_Out_NewTags);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddTags(Z_Param_Out_NewTags);
	P_NATIVE_END;
}
// ********** End Class UAbilitiesComponent Function AddTags ***************************************

// ********** Begin Class UAbilitiesComponent Function ApplyBuff ***********************************
struct Z_Construct_UFunction_UAbilitiesComponent_ApplyBuff_Statics
{
	struct AbilitiesComponent_eventApplyBuff_Parms
	{
		FBuffCount Buff;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AbilityComponent|Buffs" },
		{ "ModuleRelativePath", "Public/AbilitiesComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function ApplyBuff constinit property declarations *****************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Buff;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ApplyBuff constinit property declarations *******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ApplyBuff Property Definitions ****************************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAbilitiesComponent_ApplyBuff_Statics::NewProp_Buff = { "Buff", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilitiesComponent_eventApplyBuff_Parms, Buff), Z_Construct_UScriptStruct_FBuffCount, METADATA_PARAMS(0, nullptr) }; // 3926446658
void Z_Construct_UFunction_UAbilitiesComponent_ApplyBuff_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AbilitiesComponent_eventApplyBuff_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAbilitiesComponent_ApplyBuff_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AbilitiesComponent_eventApplyBuff_Parms), &Z_Construct_UFunction_UAbilitiesComponent_ApplyBuff_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAbilitiesComponent_ApplyBuff_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilitiesComponent_ApplyBuff_Statics::NewProp_Buff,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilitiesComponent_ApplyBuff_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilitiesComponent_ApplyBuff_Statics::PropPointers) < 2048);
// ********** End Function ApplyBuff Property Definitions ******************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilitiesComponent_ApplyBuff_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAbilitiesComponent, nullptr, "ApplyBuff", 	Z_Construct_UFunction_UAbilitiesComponent_ApplyBuff_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilitiesComponent_ApplyBuff_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UAbilitiesComponent_ApplyBuff_Statics::AbilitiesComponent_eventApplyBuff_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilitiesComponent_ApplyBuff_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAbilitiesComponent_ApplyBuff_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAbilitiesComponent_ApplyBuff_Statics::AbilitiesComponent_eventApplyBuff_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAbilitiesComponent_ApplyBuff()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAbilitiesComponent_ApplyBuff_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAbilitiesComponent::execApplyBuff)
{
	P_GET_STRUCT(FBuffCount,Z_Param_Buff);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->ApplyBuff(Z_Param_Buff);
	P_NATIVE_END;
}
// ********** End Class UAbilitiesComponent Function ApplyBuff *************************************

// ********** Begin Class UAbilitiesComponent Function ApplyBuffs **********************************
struct Z_Construct_UFunction_UAbilitiesComponent_ApplyBuffs_Statics
{
	struct AbilitiesComponent_eventApplyBuffs_Parms
	{
		TSet<FBuffCount> InBuffs;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AbilityComponent|Buffs" },
		{ "ModuleRelativePath", "Public/AbilitiesComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InBuffs_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function ApplyBuffs constinit property declarations ****************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_InBuffs_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_InBuffs;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ApplyBuffs constinit property declarations ******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ApplyBuffs Property Definitions ***************************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAbilitiesComponent_ApplyBuffs_Statics::NewProp_InBuffs_ElementProp = { "InBuffs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FBuffCount, METADATA_PARAMS(0, nullptr) }; // 3926446658
static_assert(TModels_V<CGetTypeHashable, FBuffCount>, "The structure 'FBuffCount' is used in a TSet but does not have a GetValueTypeHash defined");
const UECodeGen_Private::FSetPropertyParams Z_Construct_UFunction_UAbilitiesComponent_ApplyBuffs_Statics::NewProp_InBuffs = { "InBuffs", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilitiesComponent_eventApplyBuffs_Parms, InBuffs), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InBuffs_MetaData), NewProp_InBuffs_MetaData) }; // 3926446658
void Z_Construct_UFunction_UAbilitiesComponent_ApplyBuffs_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AbilitiesComponent_eventApplyBuffs_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAbilitiesComponent_ApplyBuffs_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AbilitiesComponent_eventApplyBuffs_Parms), &Z_Construct_UFunction_UAbilitiesComponent_ApplyBuffs_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAbilitiesComponent_ApplyBuffs_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilitiesComponent_ApplyBuffs_Statics::NewProp_InBuffs_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilitiesComponent_ApplyBuffs_Statics::NewProp_InBuffs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilitiesComponent_ApplyBuffs_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilitiesComponent_ApplyBuffs_Statics::PropPointers) < 2048);
// ********** End Function ApplyBuffs Property Definitions *****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilitiesComponent_ApplyBuffs_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAbilitiesComponent, nullptr, "ApplyBuffs", 	Z_Construct_UFunction_UAbilitiesComponent_ApplyBuffs_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilitiesComponent_ApplyBuffs_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UAbilitiesComponent_ApplyBuffs_Statics::AbilitiesComponent_eventApplyBuffs_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420405, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilitiesComponent_ApplyBuffs_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAbilitiesComponent_ApplyBuffs_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAbilitiesComponent_ApplyBuffs_Statics::AbilitiesComponent_eventApplyBuffs_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAbilitiesComponent_ApplyBuffs()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAbilitiesComponent_ApplyBuffs_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAbilitiesComponent::execApplyBuffs)
{
	P_GET_TSET_REF(FBuffCount,Z_Param_Out_InBuffs);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->ApplyBuffs(Z_Param_Out_InBuffs);
	P_NATIVE_END;
}
// ********** End Class UAbilitiesComponent Function ApplyBuffs ************************************

// ********** Begin Class UAbilitiesComponent Function ApplySingleBuffs ****************************
struct Z_Construct_UFunction_UAbilitiesComponent_ApplySingleBuffs_Statics
{
	struct AbilitiesComponent_eventApplySingleBuffs_Parms
	{
		TSet<UBuff*> InBuffs;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AbilityComponent|Buffs" },
		{ "ModuleRelativePath", "Public/AbilitiesComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InBuffs_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function ApplySingleBuffs constinit property declarations **********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InBuffs_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_InBuffs;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ApplySingleBuffs constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ApplySingleBuffs Property Definitions *********************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbilitiesComponent_ApplySingleBuffs_Statics::NewProp_InBuffs_ElementProp = { "InBuffs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UBuff_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FSetPropertyParams Z_Construct_UFunction_UAbilitiesComponent_ApplySingleBuffs_Statics::NewProp_InBuffs = { "InBuffs", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilitiesComponent_eventApplySingleBuffs_Parms, InBuffs), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InBuffs_MetaData), NewProp_InBuffs_MetaData) };
void Z_Construct_UFunction_UAbilitiesComponent_ApplySingleBuffs_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AbilitiesComponent_eventApplySingleBuffs_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAbilitiesComponent_ApplySingleBuffs_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AbilitiesComponent_eventApplySingleBuffs_Parms), &Z_Construct_UFunction_UAbilitiesComponent_ApplySingleBuffs_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAbilitiesComponent_ApplySingleBuffs_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilitiesComponent_ApplySingleBuffs_Statics::NewProp_InBuffs_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilitiesComponent_ApplySingleBuffs_Statics::NewProp_InBuffs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilitiesComponent_ApplySingleBuffs_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilitiesComponent_ApplySingleBuffs_Statics::PropPointers) < 2048);
// ********** End Function ApplySingleBuffs Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilitiesComponent_ApplySingleBuffs_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAbilitiesComponent, nullptr, "ApplySingleBuffs", 	Z_Construct_UFunction_UAbilitiesComponent_ApplySingleBuffs_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilitiesComponent_ApplySingleBuffs_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UAbilitiesComponent_ApplySingleBuffs_Statics::AbilitiesComponent_eventApplySingleBuffs_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420405, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilitiesComponent_ApplySingleBuffs_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAbilitiesComponent_ApplySingleBuffs_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAbilitiesComponent_ApplySingleBuffs_Statics::AbilitiesComponent_eventApplySingleBuffs_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAbilitiesComponent_ApplySingleBuffs()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAbilitiesComponent_ApplySingleBuffs_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAbilitiesComponent::execApplySingleBuffs)
{
	P_GET_TSET_REF(UBuff*,Z_Param_Out_InBuffs);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->ApplySingleBuffs(Z_Param_Out_InBuffs);
	P_NATIVE_END;
}
// ********** End Class UAbilitiesComponent Function ApplySingleBuffs ******************************

// ********** Begin Class UAbilitiesComponent Function CanActivate *********************************
struct Z_Construct_UFunction_UAbilitiesComponent_CanActivate_Statics
{
	struct AbilitiesComponent_eventCanActivate_Parms
	{
		TSubclassOf<UAbility> Class;
		FStructContainer Container;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AbilityComponent|Abilities" },
		{ "Comment", "/** Checks if an ability can activate without trying to do it. */" },
		{ "ModuleRelativePath", "Public/AbilitiesComponent.h" },
		{ "ToolTip", "Checks if an ability can activate without trying to do it." },
	};
#endif // WITH_METADATA

// ********** Begin Function CanActivate constinit property declarations ***************************
	static const UECodeGen_Private::FClassPropertyParams NewProp_Class;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Container;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function CanActivate constinit property declarations *****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function CanActivate Property Definitions **************************************
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UAbilitiesComponent_CanActivate_Statics::NewProp_Class = { "Class", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilitiesComponent_eventCanActivate_Parms, Class), Z_Construct_UClass_UClass_NoRegister, Z_Construct_UClass_UAbility_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAbilitiesComponent_CanActivate_Statics::NewProp_Container = { "Container", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilitiesComponent_eventCanActivate_Parms, Container), Z_Construct_UScriptStruct_FStructContainer, METADATA_PARAMS(0, nullptr) }; // 2073357063
void Z_Construct_UFunction_UAbilitiesComponent_CanActivate_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AbilitiesComponent_eventCanActivate_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAbilitiesComponent_CanActivate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AbilitiesComponent_eventCanActivate_Parms), &Z_Construct_UFunction_UAbilitiesComponent_CanActivate_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAbilitiesComponent_CanActivate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilitiesComponent_CanActivate_Statics::NewProp_Class,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilitiesComponent_CanActivate_Statics::NewProp_Container,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilitiesComponent_CanActivate_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilitiesComponent_CanActivate_Statics::PropPointers) < 2048);
// ********** End Function CanActivate Property Definitions ****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilitiesComponent_CanActivate_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAbilitiesComponent, nullptr, "CanActivate", 	Z_Construct_UFunction_UAbilitiesComponent_CanActivate_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilitiesComponent_CanActivate_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UAbilitiesComponent_CanActivate_Statics::AbilitiesComponent_eventCanActivate_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilitiesComponent_CanActivate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAbilitiesComponent_CanActivate_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAbilitiesComponent_CanActivate_Statics::AbilitiesComponent_eventCanActivate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAbilitiesComponent_CanActivate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAbilitiesComponent_CanActivate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAbilitiesComponent::execCanActivate)
{
	P_GET_OBJECT(UClass,Z_Param_Class);
	P_GET_STRUCT(FStructContainer,Z_Param_Container);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->CanActivate(Z_Param_Class,Z_Param_Container);
	P_NATIVE_END;
}
// ********** End Class UAbilitiesComponent Function CanActivate ***********************************

// ********** Begin Class UAbilitiesComponent Function CanCast *************************************
struct Z_Construct_UFunction_UAbilitiesComponent_CanCast_Statics
{
	struct AbilitiesComponent_eventCanCast_Parms
	{
		TSubclassOf<UAbility> Class;
		FStructContainer Container;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AbilityComponent|Abilities" },
		{ "Comment", "/** Checks if an ability can activate without trying to do it. */" },
		{ "ModuleRelativePath", "Public/AbilitiesComponent.h" },
		{ "ToolTip", "Checks if an ability can activate without trying to do it." },
	};
#endif // WITH_METADATA

// ********** Begin Function CanCast constinit property declarations *******************************
	static const UECodeGen_Private::FClassPropertyParams NewProp_Class;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Container;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function CanCast constinit property declarations *********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function CanCast Property Definitions ******************************************
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UAbilitiesComponent_CanCast_Statics::NewProp_Class = { "Class", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilitiesComponent_eventCanCast_Parms, Class), Z_Construct_UClass_UClass_NoRegister, Z_Construct_UClass_UAbility_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAbilitiesComponent_CanCast_Statics::NewProp_Container = { "Container", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilitiesComponent_eventCanCast_Parms, Container), Z_Construct_UScriptStruct_FStructContainer, METADATA_PARAMS(0, nullptr) }; // 2073357063
void Z_Construct_UFunction_UAbilitiesComponent_CanCast_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AbilitiesComponent_eventCanCast_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAbilitiesComponent_CanCast_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AbilitiesComponent_eventCanCast_Parms), &Z_Construct_UFunction_UAbilitiesComponent_CanCast_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAbilitiesComponent_CanCast_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilitiesComponent_CanCast_Statics::NewProp_Class,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilitiesComponent_CanCast_Statics::NewProp_Container,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilitiesComponent_CanCast_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilitiesComponent_CanCast_Statics::PropPointers) < 2048);
// ********** End Function CanCast Property Definitions ********************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilitiesComponent_CanCast_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAbilitiesComponent, nullptr, "CanCast", 	Z_Construct_UFunction_UAbilitiesComponent_CanCast_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilitiesComponent_CanCast_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UAbilitiesComponent_CanCast_Statics::AbilitiesComponent_eventCanCast_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilitiesComponent_CanCast_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAbilitiesComponent_CanCast_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAbilitiesComponent_CanCast_Statics::AbilitiesComponent_eventCanCast_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAbilitiesComponent_CanCast()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAbilitiesComponent_CanCast_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAbilitiesComponent::execCanCast)
{
	P_GET_OBJECT(UClass,Z_Param_Class);
	P_GET_STRUCT(FStructContainer,Z_Param_Container);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->CanCast(Z_Param_Class,Z_Param_Container);
	P_NATIVE_END;
}
// ********** End Class UAbilitiesComponent Function CanCast ***************************************

// ********** Begin Class UAbilitiesComponent Function Cancel **************************************
struct Z_Construct_UFunction_UAbilitiesComponent_Cancel_Statics
{
	struct AbilitiesComponent_eventCancel_Parms
	{
		TSubclassOf<UAbility> Class;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AbilityComponent|Abilities" },
		{ "ModuleRelativePath", "Public/AbilitiesComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function Cancel constinit property declarations ********************************
	static const UECodeGen_Private::FClassPropertyParams NewProp_Class;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function Cancel constinit property declarations **********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function Cancel Property Definitions *******************************************
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UAbilitiesComponent_Cancel_Statics::NewProp_Class = { "Class", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilitiesComponent_eventCancel_Parms, Class), Z_Construct_UClass_UClass_NoRegister, Z_Construct_UClass_UAbility_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UAbilitiesComponent_Cancel_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AbilitiesComponent_eventCancel_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAbilitiesComponent_Cancel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AbilitiesComponent_eventCancel_Parms), &Z_Construct_UFunction_UAbilitiesComponent_Cancel_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAbilitiesComponent_Cancel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilitiesComponent_Cancel_Statics::NewProp_Class,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilitiesComponent_Cancel_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilitiesComponent_Cancel_Statics::PropPointers) < 2048);
// ********** End Function Cancel Property Definitions *********************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilitiesComponent_Cancel_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAbilitiesComponent, nullptr, "Cancel", 	Z_Construct_UFunction_UAbilitiesComponent_Cancel_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilitiesComponent_Cancel_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UAbilitiesComponent_Cancel_Statics::AbilitiesComponent_eventCancel_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilitiesComponent_Cancel_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAbilitiesComponent_Cancel_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAbilitiesComponent_Cancel_Statics::AbilitiesComponent_eventCancel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAbilitiesComponent_Cancel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAbilitiesComponent_Cancel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAbilitiesComponent::execCancel)
{
	P_GET_OBJECT(UClass,Z_Param_Class);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->Cancel(Z_Param_Class);
	P_NATIVE_END;
}
// ********** End Class UAbilitiesComponent Function Cancel ****************************************

// ********** Begin Class UAbilitiesComponent Function CancelAll ***********************************
struct Z_Construct_UFunction_UAbilitiesComponent_CancelAll_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AbilityComponent|Abilities" },
		{ "ModuleRelativePath", "Public/AbilitiesComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function CancelAll constinit property declarations *****************************
// ********** End Function CancelAll constinit property declarations *******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilitiesComponent_CancelAll_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAbilitiesComponent, nullptr, "CancelAll", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilitiesComponent_CancelAll_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAbilitiesComponent_CancelAll_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UAbilitiesComponent_CancelAll()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAbilitiesComponent_CancelAll_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAbilitiesComponent::execCancelAll)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CancelAll();
	P_NATIVE_END;
}
// ********** End Class UAbilitiesComponent Function CancelAll *************************************

// ********** Begin Class UAbilitiesComponent Function CancelInput *********************************
struct Z_Construct_UFunction_UAbilitiesComponent_CancelInput_Statics
{
	struct AbilitiesComponent_eventCancelInput_Parms
	{
		FName InputEvent;
		FCancelInputReturn ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AbilityComponent|Abilities" },
		{ "Comment", "// Removes an input event and its ability is cancelled if running\n" },
		{ "CPP_Default_InputEvent", "Default" },
		{ "ModuleRelativePath", "Public/AbilitiesComponent.h" },
		{ "ToolTip", "Removes an input event and its ability is cancelled if running" },
	};
#endif // WITH_METADATA

// ********** Begin Function CancelInput constinit property declarations ***************************
	static const UECodeGen_Private::FNamePropertyParams NewProp_InputEvent;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function CancelInput constinit property declarations *****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function CancelInput Property Definitions **************************************
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAbilitiesComponent_CancelInput_Statics::NewProp_InputEvent = { "InputEvent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilitiesComponent_eventCancelInput_Parms, InputEvent), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAbilitiesComponent_CancelInput_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilitiesComponent_eventCancelInput_Parms, ReturnValue), Z_Construct_UScriptStruct_FCancelInputReturn, METADATA_PARAMS(0, nullptr) }; // 1611480531
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAbilitiesComponent_CancelInput_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilitiesComponent_CancelInput_Statics::NewProp_InputEvent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilitiesComponent_CancelInput_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilitiesComponent_CancelInput_Statics::PropPointers) < 2048);
// ********** End Function CancelInput Property Definitions ****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilitiesComponent_CancelInput_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAbilitiesComponent, nullptr, "CancelInput", 	Z_Construct_UFunction_UAbilitiesComponent_CancelInput_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilitiesComponent_CancelInput_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UAbilitiesComponent_CancelInput_Statics::AbilitiesComponent_eventCancelInput_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilitiesComponent_CancelInput_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAbilitiesComponent_CancelInput_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAbilitiesComponent_CancelInput_Statics::AbilitiesComponent_eventCancelInput_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAbilitiesComponent_CancelInput()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAbilitiesComponent_CancelInput_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAbilitiesComponent::execCancelInput)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_InputEvent);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FCancelInputReturn*)Z_Param__Result=P_THIS->CancelInput(Z_Param_InputEvent);
	P_NATIVE_END;
}
// ********** End Class UAbilitiesComponent Function CancelInput ***********************************

// ********** Begin Class UAbilitiesComponent Function CastAbility *********************************
struct Z_Construct_UFunction_UAbilitiesComponent_CastAbility_Statics
{
	struct AbilitiesComponent_eventCastAbility_Parms
	{
		TSubclassOf<UAbility> Class;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AbilityComponent|Abilities" },
		{ "ModuleRelativePath", "Public/AbilitiesComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function CastAbility constinit property declarations ***************************
	static const UECodeGen_Private::FClassPropertyParams NewProp_Class;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function CastAbility constinit property declarations *****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function CastAbility Property Definitions **************************************
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UAbilitiesComponent_CastAbility_Statics::NewProp_Class = { "Class", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilitiesComponent_eventCastAbility_Parms, Class), Z_Construct_UClass_UClass_NoRegister, Z_Construct_UClass_UAbility_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UAbilitiesComponent_CastAbility_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AbilitiesComponent_eventCastAbility_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAbilitiesComponent_CastAbility_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AbilitiesComponent_eventCastAbility_Parms), &Z_Construct_UFunction_UAbilitiesComponent_CastAbility_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAbilitiesComponent_CastAbility_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilitiesComponent_CastAbility_Statics::NewProp_Class,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilitiesComponent_CastAbility_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilitiesComponent_CastAbility_Statics::PropPointers) < 2048);
// ********** End Function CastAbility Property Definitions ****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilitiesComponent_CastAbility_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAbilitiesComponent, nullptr, "CastAbility", 	Z_Construct_UFunction_UAbilitiesComponent_CastAbility_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilitiesComponent_CastAbility_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UAbilitiesComponent_CastAbility_Statics::AbilitiesComponent_eventCastAbility_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilitiesComponent_CastAbility_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAbilitiesComponent_CastAbility_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAbilitiesComponent_CastAbility_Statics::AbilitiesComponent_eventCastAbility_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAbilitiesComponent_CastAbility()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAbilitiesComponent_CastAbility_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAbilitiesComponent::execCastAbility)
{
	P_GET_OBJECT(UClass,Z_Param_Class);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->CastAbility(Z_Param_Class);
	P_NATIVE_END;
}
// ********** End Class UAbilitiesComponent Function CastAbility ***********************************

// ********** Begin Class UAbilitiesComponent Function ClientOnBuffsChanged ************************
struct AbilitiesComponent_eventClientOnBuffsChanged_Parms
{
	TArray<FBuffCount> ModifiedBuffs;
	EBuffOperation Change;
};
static FName NAME_UAbilitiesComponent_ClientOnBuffsChanged = FName(TEXT("ClientOnBuffsChanged"));
void UAbilitiesComponent::ClientOnBuffsChanged(TArray<FBuffCount> const& ModifiedBuffs, EBuffOperation Change)
{
	AbilitiesComponent_eventClientOnBuffsChanged_Parms Parms;
	Parms.ModifiedBuffs=ModifiedBuffs;
	Parms.Change=Change;
	UFunction* Func = FindFunctionChecked(NAME_UAbilitiesComponent_ClientOnBuffsChanged);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_UAbilitiesComponent_ClientOnBuffsChanged_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AbilitiesComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ModifiedBuffs_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function ClientOnBuffsChanged constinit property declarations ******************
	static const UECodeGen_Private::FStructPropertyParams NewProp_ModifiedBuffs_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ModifiedBuffs;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Change_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Change;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ClientOnBuffsChanged constinit property declarations ********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ClientOnBuffsChanged Property Definitions *****************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAbilitiesComponent_ClientOnBuffsChanged_Statics::NewProp_ModifiedBuffs_Inner = { "ModifiedBuffs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FBuffCount, METADATA_PARAMS(0, nullptr) }; // 3926446658
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAbilitiesComponent_ClientOnBuffsChanged_Statics::NewProp_ModifiedBuffs = { "ModifiedBuffs", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilitiesComponent_eventClientOnBuffsChanged_Parms, ModifiedBuffs), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ModifiedBuffs_MetaData), NewProp_ModifiedBuffs_MetaData) }; // 3926446658
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAbilitiesComponent_ClientOnBuffsChanged_Statics::NewProp_Change_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAbilitiesComponent_ClientOnBuffsChanged_Statics::NewProp_Change = { "Change", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilitiesComponent_eventClientOnBuffsChanged_Parms, Change), Z_Construct_UEnum_Abilities_EBuffOperation, METADATA_PARAMS(0, nullptr) }; // 859437010
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAbilitiesComponent_ClientOnBuffsChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilitiesComponent_ClientOnBuffsChanged_Statics::NewProp_ModifiedBuffs_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilitiesComponent_ClientOnBuffsChanged_Statics::NewProp_ModifiedBuffs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilitiesComponent_ClientOnBuffsChanged_Statics::NewProp_Change_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilitiesComponent_ClientOnBuffsChanged_Statics::NewProp_Change,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilitiesComponent_ClientOnBuffsChanged_Statics::PropPointers) < 2048);
// ********** End Function ClientOnBuffsChanged Property Definitions *******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilitiesComponent_ClientOnBuffsChanged_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAbilitiesComponent, nullptr, "ClientOnBuffsChanged", 	Z_Construct_UFunction_UAbilitiesComponent_ClientOnBuffsChanged_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilitiesComponent_ClientOnBuffsChanged_Statics::PropPointers), 
sizeof(AbilitiesComponent_eventClientOnBuffsChanged_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01040CC1, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilitiesComponent_ClientOnBuffsChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAbilitiesComponent_ClientOnBuffsChanged_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(AbilitiesComponent_eventClientOnBuffsChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAbilitiesComponent_ClientOnBuffsChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAbilitiesComponent_ClientOnBuffsChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAbilitiesComponent::execClientOnBuffsChanged)
{
	P_GET_TARRAY(FBuffCount,Z_Param_ModifiedBuffs);
	P_GET_ENUM(EBuffOperation,Z_Param_Change);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ClientOnBuffsChanged_Implementation(Z_Param_ModifiedBuffs,EBuffOperation(Z_Param_Change));
	P_NATIVE_END;
}
// ********** End Class UAbilitiesComponent Function ClientOnBuffsChanged **************************

// ********** Begin Class UAbilitiesComponent Function DebugPrint **********************************
struct Z_Construct_UFunction_UAbilitiesComponent_DebugPrint_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "AbilityComponent" },
		{ "ModuleRelativePath", "Public/AbilitiesComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function DebugPrint constinit property declarations ****************************
// ********** End Function DebugPrint constinit property declarations ******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilitiesComponent_DebugPrint_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAbilitiesComponent, nullptr, "DebugPrint", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilitiesComponent_DebugPrint_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAbilitiesComponent_DebugPrint_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UAbilitiesComponent_DebugPrint()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAbilitiesComponent_DebugPrint_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAbilitiesComponent::execDebugPrint)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DebugPrint();
	P_NATIVE_END;
}
// ********** End Class UAbilitiesComponent Function DebugPrint ************************************

// ********** Begin Class UAbilitiesComponent Function EquipAbilities ******************************
struct Z_Construct_UFunction_UAbilitiesComponent_EquipAbilities_Statics
{
	struct AbilitiesComponent_eventEquipAbilities_Parms
	{
		TSet<TSubclassOf<UAbility>> Classes;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AbilityComponent|Abilities" },
		{ "ModuleRelativePath", "Public/AbilitiesComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function EquipAbilities constinit property declarations ************************
	static const UECodeGen_Private::FClassPropertyParams NewProp_Classes_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_Classes;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function EquipAbilities constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function EquipAbilities Property Definitions ***********************************
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UAbilitiesComponent_EquipAbilities_Statics::NewProp_Classes_ElementProp = { "Classes", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass_NoRegister, Z_Construct_UClass_UAbility_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FSetPropertyParams Z_Construct_UFunction_UAbilitiesComponent_EquipAbilities_Statics::NewProp_Classes = { "Classes", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilitiesComponent_eventEquipAbilities_Parms, Classes), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAbilitiesComponent_EquipAbilities_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilitiesComponent_EquipAbilities_Statics::NewProp_Classes_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilitiesComponent_EquipAbilities_Statics::NewProp_Classes,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilitiesComponent_EquipAbilities_Statics::PropPointers) < 2048);
// ********** End Function EquipAbilities Property Definitions *************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilitiesComponent_EquipAbilities_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAbilitiesComponent, nullptr, "EquipAbilities", 	Z_Construct_UFunction_UAbilitiesComponent_EquipAbilities_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilitiesComponent_EquipAbilities_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UAbilitiesComponent_EquipAbilities_Statics::AbilitiesComponent_eventEquipAbilities_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilitiesComponent_EquipAbilities_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAbilitiesComponent_EquipAbilities_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAbilitiesComponent_EquipAbilities_Statics::AbilitiesComponent_eventEquipAbilities_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAbilitiesComponent_EquipAbilities()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAbilitiesComponent_EquipAbilities_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAbilitiesComponent::execEquipAbilities)
{
	P_GET_TSET(TSubclassOf<UAbility>,Z_Param_Classes);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EquipAbilities(Z_Param_Classes);
	P_NATIVE_END;
}
// ********** End Class UAbilitiesComponent Function EquipAbilities ********************************

// ********** Begin Class UAbilitiesComponent Function EquipAbility ********************************
struct Z_Construct_UFunction_UAbilitiesComponent_EquipAbility_Statics
{
	struct AbilitiesComponent_eventEquipAbility_Parms
	{
		TSubclassOf<UAbility> Class;
		UAbility* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AbilityComponent|Abilities" },
		{ "ModuleRelativePath", "Public/AbilitiesComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function EquipAbility constinit property declarations **************************
	static const UECodeGen_Private::FClassPropertyParams NewProp_Class;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function EquipAbility constinit property declarations ****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function EquipAbility Property Definitions *************************************
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UAbilitiesComponent_EquipAbility_Statics::NewProp_Class = { "Class", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilitiesComponent_eventEquipAbility_Parms, Class), Z_Construct_UClass_UClass_NoRegister, Z_Construct_UClass_UAbility_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbilitiesComponent_EquipAbility_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilitiesComponent_eventEquipAbility_Parms, ReturnValue), Z_Construct_UClass_UAbility_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAbilitiesComponent_EquipAbility_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilitiesComponent_EquipAbility_Statics::NewProp_Class,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilitiesComponent_EquipAbility_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilitiesComponent_EquipAbility_Statics::PropPointers) < 2048);
// ********** End Function EquipAbility Property Definitions ***************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilitiesComponent_EquipAbility_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAbilitiesComponent, nullptr, "EquipAbility", 	Z_Construct_UFunction_UAbilitiesComponent_EquipAbility_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilitiesComponent_EquipAbility_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UAbilitiesComponent_EquipAbility_Statics::AbilitiesComponent_eventEquipAbility_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilitiesComponent_EquipAbility_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAbilitiesComponent_EquipAbility_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAbilitiesComponent_EquipAbility_Statics::AbilitiesComponent_eventEquipAbility_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAbilitiesComponent_EquipAbility()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAbilitiesComponent_EquipAbility_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAbilitiesComponent::execEquipAbility)
{
	P_GET_OBJECT(UClass,Z_Param_Class);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UAbility**)Z_Param__Result=P_THIS->EquipAbility(Z_Param_Class);
	P_NATIVE_END;
}
// ********** End Class UAbilitiesComponent Function EquipAbility **********************************

// ********** Begin Class UAbilitiesComponent Function GetAllBuffs *********************************
struct Z_Construct_UFunction_UAbilitiesComponent_GetAllBuffs_Statics
{
	struct AbilitiesComponent_eventGetAllBuffs_Parms
	{
		TSet<FBuffCount> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AbilityComponent|Buffs" },
		{ "ModuleRelativePath", "Public/AbilitiesComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetAllBuffs constinit property declarations ***************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetAllBuffs constinit property declarations *****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetAllBuffs Property Definitions **************************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAbilitiesComponent_GetAllBuffs_Statics::NewProp_ReturnValue_ElementProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FBuffCount, METADATA_PARAMS(0, nullptr) }; // 3926446658
static_assert(TModels_V<CGetTypeHashable, FBuffCount>, "The structure 'FBuffCount' is used in a TSet but does not have a GetValueTypeHash defined");
const UECodeGen_Private::FSetPropertyParams Z_Construct_UFunction_UAbilitiesComponent_GetAllBuffs_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilitiesComponent_eventGetAllBuffs_Parms, ReturnValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) }; // 3926446658
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAbilitiesComponent_GetAllBuffs_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilitiesComponent_GetAllBuffs_Statics::NewProp_ReturnValue_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilitiesComponent_GetAllBuffs_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilitiesComponent_GetAllBuffs_Statics::PropPointers) < 2048);
// ********** End Function GetAllBuffs Property Definitions ****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilitiesComponent_GetAllBuffs_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAbilitiesComponent, nullptr, "GetAllBuffs", 	Z_Construct_UFunction_UAbilitiesComponent_GetAllBuffs_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilitiesComponent_GetAllBuffs_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UAbilitiesComponent_GetAllBuffs_Statics::AbilitiesComponent_eventGetAllBuffs_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilitiesComponent_GetAllBuffs_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAbilitiesComponent_GetAllBuffs_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAbilitiesComponent_GetAllBuffs_Statics::AbilitiesComponent_eventGetAllBuffs_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAbilitiesComponent_GetAllBuffs()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAbilitiesComponent_GetAllBuffs_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAbilitiesComponent::execGetAllBuffs)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TSet<FBuffCount>*)Z_Param__Result=P_THIS->GetAllBuffs();
	P_NATIVE_END;
}
// ********** End Class UAbilitiesComponent Function GetAllBuffs ***********************************

// ********** Begin Class UAbilitiesComponent Function GetBuffCount ********************************
struct Z_Construct_UFunction_UAbilitiesComponent_GetBuffCount_Statics
{
	struct AbilitiesComponent_eventGetBuffCount_Parms
	{
		const UBuff* Buff;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AbilityComponent|Buffs" },
		{ "ModuleRelativePath", "Public/AbilitiesComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Buff_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetBuffCount constinit property declarations **************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Buff;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetBuffCount constinit property declarations ****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetBuffCount Property Definitions *************************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbilitiesComponent_GetBuffCount_Statics::NewProp_Buff = { "Buff", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilitiesComponent_eventGetBuffCount_Parms, Buff), Z_Construct_UClass_UBuff_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Buff_MetaData), NewProp_Buff_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAbilitiesComponent_GetBuffCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilitiesComponent_eventGetBuffCount_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAbilitiesComponent_GetBuffCount_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilitiesComponent_GetBuffCount_Statics::NewProp_Buff,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilitiesComponent_GetBuffCount_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilitiesComponent_GetBuffCount_Statics::PropPointers) < 2048);
// ********** End Function GetBuffCount Property Definitions ***************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilitiesComponent_GetBuffCount_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAbilitiesComponent, nullptr, "GetBuffCount", 	Z_Construct_UFunction_UAbilitiesComponent_GetBuffCount_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilitiesComponent_GetBuffCount_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UAbilitiesComponent_GetBuffCount_Statics::AbilitiesComponent_eventGetBuffCount_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilitiesComponent_GetBuffCount_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAbilitiesComponent_GetBuffCount_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAbilitiesComponent_GetBuffCount_Statics::AbilitiesComponent_eventGetBuffCount_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAbilitiesComponent_GetBuffCount()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAbilitiesComponent_GetBuffCount_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAbilitiesComponent::execGetBuffCount)
{
	P_GET_OBJECT(UBuff,Z_Param_Buff);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetBuffCount(Z_Param_Buff);
	P_NATIVE_END;
}
// ********** End Class UAbilitiesComponent Function GetBuffCount **********************************

// ********** Begin Class UAbilitiesComponent Function GetBuffRemainingLifetime ********************
struct Z_Construct_UFunction_UAbilitiesComponent_GetBuffRemainingLifetime_Statics
{
	struct AbilitiesComponent_eventGetBuffRemainingLifetime_Parms
	{
		UBuff* Buff;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AbilityComponent|Abilities" },
		{ "ModuleRelativePath", "Public/AbilitiesComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetBuffRemainingLifetime constinit property declarations **************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Buff;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetBuffRemainingLifetime constinit property declarations ****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetBuffRemainingLifetime Property Definitions *************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbilitiesComponent_GetBuffRemainingLifetime_Statics::NewProp_Buff = { "Buff", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilitiesComponent_eventGetBuffRemainingLifetime_Parms, Buff), Z_Construct_UClass_UBuff_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAbilitiesComponent_GetBuffRemainingLifetime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilitiesComponent_eventGetBuffRemainingLifetime_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAbilitiesComponent_GetBuffRemainingLifetime_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilitiesComponent_GetBuffRemainingLifetime_Statics::NewProp_Buff,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilitiesComponent_GetBuffRemainingLifetime_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilitiesComponent_GetBuffRemainingLifetime_Statics::PropPointers) < 2048);
// ********** End Function GetBuffRemainingLifetime Property Definitions ***************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilitiesComponent_GetBuffRemainingLifetime_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAbilitiesComponent, nullptr, "GetBuffRemainingLifetime", 	Z_Construct_UFunction_UAbilitiesComponent_GetBuffRemainingLifetime_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilitiesComponent_GetBuffRemainingLifetime_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UAbilitiesComponent_GetBuffRemainingLifetime_Statics::AbilitiesComponent_eventGetBuffRemainingLifetime_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilitiesComponent_GetBuffRemainingLifetime_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAbilitiesComponent_GetBuffRemainingLifetime_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAbilitiesComponent_GetBuffRemainingLifetime_Statics::AbilitiesComponent_eventGetBuffRemainingLifetime_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAbilitiesComponent_GetBuffRemainingLifetime()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAbilitiesComponent_GetBuffRemainingLifetime_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAbilitiesComponent::execGetBuffRemainingLifetime)
{
	P_GET_OBJECT(UBuff,Z_Param_Buff);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetBuffRemainingLifetime(Z_Param_Buff);
	P_NATIVE_END;
}
// ********** End Class UAbilitiesComponent Function GetBuffRemainingLifetime **********************

// ********** Begin Class UAbilitiesComponent Function GetBuffsOfClass *****************************
struct Z_Construct_UFunction_UAbilitiesComponent_GetBuffsOfClass_Statics
{
	struct AbilitiesComponent_eventGetBuffsOfClass_Parms
	{
		TSubclassOf<UBuff> Class;
		TSet<FBuffCount> OutBuffs;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AbilityComponent|Buffs" },
		{ "ModuleRelativePath", "Public/AbilitiesComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetBuffsOfClass constinit property declarations ***********************
	static const UECodeGen_Private::FClassPropertyParams NewProp_Class;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutBuffs_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_OutBuffs;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetBuffsOfClass constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetBuffsOfClass Property Definitions **********************************
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UAbilitiesComponent_GetBuffsOfClass_Statics::NewProp_Class = { "Class", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilitiesComponent_eventGetBuffsOfClass_Parms, Class), Z_Construct_UClass_UClass_NoRegister, Z_Construct_UClass_UBuff_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAbilitiesComponent_GetBuffsOfClass_Statics::NewProp_OutBuffs_ElementProp = { "OutBuffs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FBuffCount, METADATA_PARAMS(0, nullptr) }; // 3926446658
static_assert(TModels_V<CGetTypeHashable, FBuffCount>, "The structure 'FBuffCount' is used in a TSet but does not have a GetValueTypeHash defined");
const UECodeGen_Private::FSetPropertyParams Z_Construct_UFunction_UAbilitiesComponent_GetBuffsOfClass_Statics::NewProp_OutBuffs = { "OutBuffs", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilitiesComponent_eventGetBuffsOfClass_Parms, OutBuffs), METADATA_PARAMS(0, nullptr) }; // 3926446658
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAbilitiesComponent_GetBuffsOfClass_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilitiesComponent_GetBuffsOfClass_Statics::NewProp_Class,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilitiesComponent_GetBuffsOfClass_Statics::NewProp_OutBuffs_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilitiesComponent_GetBuffsOfClass_Statics::NewProp_OutBuffs,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilitiesComponent_GetBuffsOfClass_Statics::PropPointers) < 2048);
// ********** End Function GetBuffsOfClass Property Definitions ************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilitiesComponent_GetBuffsOfClass_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAbilitiesComponent, nullptr, "GetBuffsOfClass", 	Z_Construct_UFunction_UAbilitiesComponent_GetBuffsOfClass_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilitiesComponent_GetBuffsOfClass_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UAbilitiesComponent_GetBuffsOfClass_Statics::AbilitiesComponent_eventGetBuffsOfClass_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilitiesComponent_GetBuffsOfClass_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAbilitiesComponent_GetBuffsOfClass_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAbilitiesComponent_GetBuffsOfClass_Statics::AbilitiesComponent_eventGetBuffsOfClass_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAbilitiesComponent_GetBuffsOfClass()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAbilitiesComponent_GetBuffsOfClass_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAbilitiesComponent::execGetBuffsOfClass)
{
	P_GET_OBJECT(UClass,Z_Param_Class);
	P_GET_TSET_REF(FBuffCount,Z_Param_Out_OutBuffs);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetBuffsOfClass(Z_Param_Class,Z_Param_Out_OutBuffs);
	P_NATIVE_END;
}
// ********** End Class UAbilitiesComponent Function GetBuffsOfClass *******************************

// ********** Begin Class UAbilitiesComponent Function GetCooldownDuration *************************
struct Z_Construct_UFunction_UAbilitiesComponent_GetCooldownDuration_Statics
{
	struct AbilitiesComponent_eventGetCooldownDuration_Parms
	{
		TSubclassOf<UAbility> Class;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AbilityComponent|Abilities" },
		{ "ModuleRelativePath", "Public/AbilitiesComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetCooldownDuration constinit property declarations *******************
	static const UECodeGen_Private::FClassPropertyParams NewProp_Class;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetCooldownDuration constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetCooldownDuration Property Definitions ******************************
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UAbilitiesComponent_GetCooldownDuration_Statics::NewProp_Class = { "Class", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilitiesComponent_eventGetCooldownDuration_Parms, Class), Z_Construct_UClass_UClass_NoRegister, Z_Construct_UClass_UAbility_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAbilitiesComponent_GetCooldownDuration_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilitiesComponent_eventGetCooldownDuration_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAbilitiesComponent_GetCooldownDuration_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilitiesComponent_GetCooldownDuration_Statics::NewProp_Class,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilitiesComponent_GetCooldownDuration_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilitiesComponent_GetCooldownDuration_Statics::PropPointers) < 2048);
// ********** End Function GetCooldownDuration Property Definitions ********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilitiesComponent_GetCooldownDuration_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAbilitiesComponent, nullptr, "GetCooldownDuration", 	Z_Construct_UFunction_UAbilitiesComponent_GetCooldownDuration_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilitiesComponent_GetCooldownDuration_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UAbilitiesComponent_GetCooldownDuration_Statics::AbilitiesComponent_eventGetCooldownDuration_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilitiesComponent_GetCooldownDuration_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAbilitiesComponent_GetCooldownDuration_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAbilitiesComponent_GetCooldownDuration_Statics::AbilitiesComponent_eventGetCooldownDuration_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAbilitiesComponent_GetCooldownDuration()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAbilitiesComponent_GetCooldownDuration_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAbilitiesComponent::execGetCooldownDuration)
{
	P_GET_OBJECT(UClass,Z_Param_Class);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetCooldownDuration(Z_Param_Class);
	P_NATIVE_END;
}
// ********** End Class UAbilitiesComponent Function GetCooldownDuration ***************************

// ********** Begin Class UAbilitiesComponent Function GetEquippedAbilities ************************
struct Z_Construct_UFunction_UAbilitiesComponent_GetEquippedAbilities_Statics
{
	struct AbilitiesComponent_eventGetEquippedAbilities_Parms
	{
		TArray<TSubclassOf<UAbility>> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AbilityComponent" },
		{ "ModuleRelativePath", "Public/AbilitiesComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetEquippedAbilities constinit property declarations ******************
	static const UECodeGen_Private::FClassPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetEquippedAbilities constinit property declarations ********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetEquippedAbilities Property Definitions *****************************
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UAbilitiesComponent_GetEquippedAbilities_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass_NoRegister, Z_Construct_UClass_UAbility_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAbilitiesComponent_GetEquippedAbilities_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilitiesComponent_eventGetEquippedAbilities_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAbilitiesComponent_GetEquippedAbilities_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilitiesComponent_GetEquippedAbilities_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilitiesComponent_GetEquippedAbilities_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilitiesComponent_GetEquippedAbilities_Statics::PropPointers) < 2048);
// ********** End Function GetEquippedAbilities Property Definitions *******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilitiesComponent_GetEquippedAbilities_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAbilitiesComponent, nullptr, "GetEquippedAbilities", 	Z_Construct_UFunction_UAbilitiesComponent_GetEquippedAbilities_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilitiesComponent_GetEquippedAbilities_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UAbilitiesComponent_GetEquippedAbilities_Statics::AbilitiesComponent_eventGetEquippedAbilities_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilitiesComponent_GetEquippedAbilities_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAbilitiesComponent_GetEquippedAbilities_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAbilitiesComponent_GetEquippedAbilities_Statics::AbilitiesComponent_eventGetEquippedAbilities_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAbilitiesComponent_GetEquippedAbilities()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAbilitiesComponent_GetEquippedAbilities_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAbilitiesComponent::execGetEquippedAbilities)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<TSubclassOf<UAbility>>*)Z_Param__Result=P_THIS->GetEquippedAbilities();
	P_NATIVE_END;
}
// ********** End Class UAbilitiesComponent Function GetEquippedAbilities **************************

// ********** Begin Class UAbilitiesComponent Function GetEquippedAbility **************************
struct Z_Construct_UFunction_UAbilitiesComponent_GetEquippedAbility_Statics
{
	struct AbilitiesComponent_eventGetEquippedAbility_Parms
	{
		TSubclassOf<UAbility> Class;
		UAbility* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AbilityComponent" },
		{ "ModuleRelativePath", "Public/AbilitiesComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetEquippedAbility constinit property declarations ********************
	static const UECodeGen_Private::FClassPropertyParams NewProp_Class;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetEquippedAbility constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetEquippedAbility Property Definitions *******************************
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UAbilitiesComponent_GetEquippedAbility_Statics::NewProp_Class = { "Class", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilitiesComponent_eventGetEquippedAbility_Parms, Class), Z_Construct_UClass_UClass_NoRegister, Z_Construct_UClass_UAbility_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbilitiesComponent_GetEquippedAbility_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilitiesComponent_eventGetEquippedAbility_Parms, ReturnValue), Z_Construct_UClass_UAbility_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAbilitiesComponent_GetEquippedAbility_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilitiesComponent_GetEquippedAbility_Statics::NewProp_Class,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilitiesComponent_GetEquippedAbility_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilitiesComponent_GetEquippedAbility_Statics::PropPointers) < 2048);
// ********** End Function GetEquippedAbility Property Definitions *********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilitiesComponent_GetEquippedAbility_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAbilitiesComponent, nullptr, "GetEquippedAbility", 	Z_Construct_UFunction_UAbilitiesComponent_GetEquippedAbility_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilitiesComponent_GetEquippedAbility_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UAbilitiesComponent_GetEquippedAbility_Statics::AbilitiesComponent_eventGetEquippedAbility_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilitiesComponent_GetEquippedAbility_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAbilitiesComponent_GetEquippedAbility_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAbilitiesComponent_GetEquippedAbility_Statics::AbilitiesComponent_eventGetEquippedAbility_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAbilitiesComponent_GetEquippedAbility()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAbilitiesComponent_GetEquippedAbility_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAbilitiesComponent::execGetEquippedAbility)
{
	P_GET_OBJECT(UClass,Z_Param_Class);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UAbility**)Z_Param__Result=P_THIS->GetEquippedAbility(Z_Param_Class);
	P_NATIVE_END;
}
// ********** End Class UAbilitiesComponent Function GetEquippedAbility ****************************

// ********** Begin Class UAbilitiesComponent Function GetEquippedAbilityByName ********************
struct Z_Construct_UFunction_UAbilitiesComponent_GetEquippedAbilityByName_Statics
{
	struct AbilitiesComponent_eventGetEquippedAbilityByName_Parms
	{
		FName AbilityName;
		UAbility* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AbilityComponent" },
		{ "ModuleRelativePath", "Public/AbilitiesComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetEquippedAbilityByName constinit property declarations **************
	static const UECodeGen_Private::FNamePropertyParams NewProp_AbilityName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetEquippedAbilityByName constinit property declarations ****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetEquippedAbilityByName Property Definitions *************************
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAbilitiesComponent_GetEquippedAbilityByName_Statics::NewProp_AbilityName = { "AbilityName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilitiesComponent_eventGetEquippedAbilityByName_Parms, AbilityName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbilitiesComponent_GetEquippedAbilityByName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilitiesComponent_eventGetEquippedAbilityByName_Parms, ReturnValue), Z_Construct_UClass_UAbility_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAbilitiesComponent_GetEquippedAbilityByName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilitiesComponent_GetEquippedAbilityByName_Statics::NewProp_AbilityName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilitiesComponent_GetEquippedAbilityByName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilitiesComponent_GetEquippedAbilityByName_Statics::PropPointers) < 2048);
// ********** End Function GetEquippedAbilityByName Property Definitions ***************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilitiesComponent_GetEquippedAbilityByName_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAbilitiesComponent, nullptr, "GetEquippedAbilityByName", 	Z_Construct_UFunction_UAbilitiesComponent_GetEquippedAbilityByName_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilitiesComponent_GetEquippedAbilityByName_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UAbilitiesComponent_GetEquippedAbilityByName_Statics::AbilitiesComponent_eventGetEquippedAbilityByName_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilitiesComponent_GetEquippedAbilityByName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAbilitiesComponent_GetEquippedAbilityByName_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAbilitiesComponent_GetEquippedAbilityByName_Statics::AbilitiesComponent_eventGetEquippedAbilityByName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAbilitiesComponent_GetEquippedAbilityByName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAbilitiesComponent_GetEquippedAbilityByName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAbilitiesComponent::execGetEquippedAbilityByName)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_AbilityName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UAbility**)Z_Param__Result=P_THIS->GetEquippedAbilityByName(Z_Param_AbilityName);
	P_NATIVE_END;
}
// ********** End Class UAbilitiesComponent Function GetEquippedAbilityByName **********************

// ********** Begin Class UAbilitiesComponent Function GetNumBuffs *********************************
struct Z_Construct_UFunction_UAbilitiesComponent_GetNumBuffs_Statics
{
	struct AbilitiesComponent_eventGetNumBuffs_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AbilityComponent|Buffs" },
		{ "ModuleRelativePath", "Public/AbilitiesComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetNumBuffs constinit property declarations ***************************
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetNumBuffs constinit property declarations *****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetNumBuffs Property Definitions **************************************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAbilitiesComponent_GetNumBuffs_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilitiesComponent_eventGetNumBuffs_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAbilitiesComponent_GetNumBuffs_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilitiesComponent_GetNumBuffs_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilitiesComponent_GetNumBuffs_Statics::PropPointers) < 2048);
// ********** End Function GetNumBuffs Property Definitions ****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilitiesComponent_GetNumBuffs_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAbilitiesComponent, nullptr, "GetNumBuffs", 	Z_Construct_UFunction_UAbilitiesComponent_GetNumBuffs_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilitiesComponent_GetNumBuffs_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UAbilitiesComponent_GetNumBuffs_Statics::AbilitiesComponent_eventGetNumBuffs_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilitiesComponent_GetNumBuffs_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAbilitiesComponent_GetNumBuffs_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAbilitiesComponent_GetNumBuffs_Statics::AbilitiesComponent_eventGetNumBuffs_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAbilitiesComponent_GetNumBuffs()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAbilitiesComponent_GetNumBuffs_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAbilitiesComponent::execGetNumBuffs)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetNumBuffs();
	P_NATIVE_END;
}
// ********** End Class UAbilitiesComponent Function GetNumBuffs ***********************************

// ********** Begin Class UAbilitiesComponent Function GetPressedAbilityFromInput ******************
struct Z_Construct_UFunction_UAbilitiesComponent_GetPressedAbilityFromInput_Statics
{
	struct AbilitiesComponent_eventGetPressedAbilityFromInput_Parms
	{
		FName InputEvent;
		TSubclassOf<UAbility> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AbilityComponent|Abilities" },
		{ "CPP_Default_InputEvent", "Default" },
		{ "ModuleRelativePath", "Public/AbilitiesComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetPressedAbilityFromInput constinit property declarations ************
	static const UECodeGen_Private::FNamePropertyParams NewProp_InputEvent;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetPressedAbilityFromInput constinit property declarations **************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetPressedAbilityFromInput Property Definitions ***********************
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAbilitiesComponent_GetPressedAbilityFromInput_Statics::NewProp_InputEvent = { "InputEvent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilitiesComponent_eventGetPressedAbilityFromInput_Parms, InputEvent), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UAbilitiesComponent_GetPressedAbilityFromInput_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilitiesComponent_eventGetPressedAbilityFromInput_Parms, ReturnValue), Z_Construct_UClass_UClass_NoRegister, Z_Construct_UClass_UAbility_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAbilitiesComponent_GetPressedAbilityFromInput_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilitiesComponent_GetPressedAbilityFromInput_Statics::NewProp_InputEvent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilitiesComponent_GetPressedAbilityFromInput_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilitiesComponent_GetPressedAbilityFromInput_Statics::PropPointers) < 2048);
// ********** End Function GetPressedAbilityFromInput Property Definitions *************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilitiesComponent_GetPressedAbilityFromInput_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAbilitiesComponent, nullptr, "GetPressedAbilityFromInput", 	Z_Construct_UFunction_UAbilitiesComponent_GetPressedAbilityFromInput_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilitiesComponent_GetPressedAbilityFromInput_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UAbilitiesComponent_GetPressedAbilityFromInput_Statics::AbilitiesComponent_eventGetPressedAbilityFromInput_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilitiesComponent_GetPressedAbilityFromInput_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAbilitiesComponent_GetPressedAbilityFromInput_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAbilitiesComponent_GetPressedAbilityFromInput_Statics::AbilitiesComponent_eventGetPressedAbilityFromInput_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAbilitiesComponent_GetPressedAbilityFromInput()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAbilitiesComponent_GetPressedAbilityFromInput_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAbilitiesComponent::execGetPressedAbilityFromInput)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_InputEvent);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TSubclassOf<UAbility>*)Z_Param__Result=P_THIS->GetPressedAbilityFromInput(Z_Param_InputEvent);
	P_NATIVE_END;
}
// ********** End Class UAbilitiesComponent Function GetPressedAbilityFromInput ********************

// ********** Begin Class UAbilitiesComponent Function GetRemainingCooldown ************************
struct Z_Construct_UFunction_UAbilitiesComponent_GetRemainingCooldown_Statics
{
	struct AbilitiesComponent_eventGetRemainingCooldown_Parms
	{
		TSubclassOf<UAbility> Class;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AbilityComponent|Abilities" },
		{ "ModuleRelativePath", "Public/AbilitiesComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetRemainingCooldown constinit property declarations ******************
	static const UECodeGen_Private::FClassPropertyParams NewProp_Class;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetRemainingCooldown constinit property declarations ********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetRemainingCooldown Property Definitions *****************************
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UAbilitiesComponent_GetRemainingCooldown_Statics::NewProp_Class = { "Class", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilitiesComponent_eventGetRemainingCooldown_Parms, Class), Z_Construct_UClass_UClass_NoRegister, Z_Construct_UClass_UAbility_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAbilitiesComponent_GetRemainingCooldown_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilitiesComponent_eventGetRemainingCooldown_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAbilitiesComponent_GetRemainingCooldown_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilitiesComponent_GetRemainingCooldown_Statics::NewProp_Class,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilitiesComponent_GetRemainingCooldown_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilitiesComponent_GetRemainingCooldown_Statics::PropPointers) < 2048);
// ********** End Function GetRemainingCooldown Property Definitions *******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilitiesComponent_GetRemainingCooldown_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAbilitiesComponent, nullptr, "GetRemainingCooldown", 	Z_Construct_UFunction_UAbilitiesComponent_GetRemainingCooldown_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilitiesComponent_GetRemainingCooldown_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UAbilitiesComponent_GetRemainingCooldown_Statics::AbilitiesComponent_eventGetRemainingCooldown_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilitiesComponent_GetRemainingCooldown_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAbilitiesComponent_GetRemainingCooldown_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAbilitiesComponent_GetRemainingCooldown_Statics::AbilitiesComponent_eventGetRemainingCooldown_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAbilitiesComponent_GetRemainingCooldown()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAbilitiesComponent_GetRemainingCooldown_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAbilitiesComponent::execGetRemainingCooldown)
{
	P_GET_OBJECT(UClass,Z_Param_Class);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetRemainingCooldown(Z_Param_Class);
	P_NATIVE_END;
}
// ********** End Class UAbilitiesComponent Function GetRemainingCooldown **************************

// ********** Begin Class UAbilitiesComponent Function HasAuthority ********************************
struct Z_Construct_UFunction_UAbilitiesComponent_HasAuthority_Statics
{
	struct AbilitiesComponent_eventHasAuthority_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AbilityComponent" },
		{ "ModuleRelativePath", "Public/AbilitiesComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function HasAuthority constinit property declarations **************************
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function HasAuthority constinit property declarations ****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function HasAuthority Property Definitions *************************************
void Z_Construct_UFunction_UAbilitiesComponent_HasAuthority_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AbilitiesComponent_eventHasAuthority_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAbilitiesComponent_HasAuthority_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AbilitiesComponent_eventHasAuthority_Parms), &Z_Construct_UFunction_UAbilitiesComponent_HasAuthority_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAbilitiesComponent_HasAuthority_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilitiesComponent_HasAuthority_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilitiesComponent_HasAuthority_Statics::PropPointers) < 2048);
// ********** End Function HasAuthority Property Definitions ***************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilitiesComponent_HasAuthority_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAbilitiesComponent, nullptr, "HasAuthority", 	Z_Construct_UFunction_UAbilitiesComponent_HasAuthority_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilitiesComponent_HasAuthority_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UAbilitiesComponent_HasAuthority_Statics::AbilitiesComponent_eventHasAuthority_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilitiesComponent_HasAuthority_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAbilitiesComponent_HasAuthority_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAbilitiesComponent_HasAuthority_Statics::AbilitiesComponent_eventHasAuthority_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAbilitiesComponent_HasAuthority()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAbilitiesComponent_HasAuthority_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAbilitiesComponent::execHasAuthority)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->HasAuthority();
	P_NATIVE_END;
}
// ********** End Class UAbilitiesComponent Function HasAuthority **********************************

// ********** Begin Class UAbilitiesComponent Function HasBuff *************************************
struct Z_Construct_UFunction_UAbilitiesComponent_HasBuff_Statics
{
	struct AbilitiesComponent_eventHasBuff_Parms
	{
		UBuff* Buff;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AbilityComponent|Buffs" },
		{ "Comment", "// Checks if the component currently has an specific buff\n" },
		{ "ModuleRelativePath", "Public/AbilitiesComponent.h" },
		{ "ToolTip", "Checks if the component currently has an specific buff" },
	};
#endif // WITH_METADATA

// ********** Begin Function HasBuff constinit property declarations *******************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Buff;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function HasBuff constinit property declarations *********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function HasBuff Property Definitions ******************************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbilitiesComponent_HasBuff_Statics::NewProp_Buff = { "Buff", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilitiesComponent_eventHasBuff_Parms, Buff), Z_Construct_UClass_UBuff_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UAbilitiesComponent_HasBuff_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AbilitiesComponent_eventHasBuff_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAbilitiesComponent_HasBuff_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AbilitiesComponent_eventHasBuff_Parms), &Z_Construct_UFunction_UAbilitiesComponent_HasBuff_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAbilitiesComponent_HasBuff_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilitiesComponent_HasBuff_Statics::NewProp_Buff,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilitiesComponent_HasBuff_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilitiesComponent_HasBuff_Statics::PropPointers) < 2048);
// ********** End Function HasBuff Property Definitions ********************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilitiesComponent_HasBuff_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAbilitiesComponent, nullptr, "HasBuff", 	Z_Construct_UFunction_UAbilitiesComponent_HasBuff_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilitiesComponent_HasBuff_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UAbilitiesComponent_HasBuff_Statics::AbilitiesComponent_eventHasBuff_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilitiesComponent_HasBuff_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAbilitiesComponent_HasBuff_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAbilitiesComponent_HasBuff_Statics::AbilitiesComponent_eventHasBuff_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAbilitiesComponent_HasBuff()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAbilitiesComponent_HasBuff_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAbilitiesComponent::execHasBuff)
{
	P_GET_OBJECT(UBuff,Z_Param_Buff);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->HasBuff(Z_Param_Buff);
	P_NATIVE_END;
}
// ********** End Class UAbilitiesComponent Function HasBuff ***************************************

// ********** Begin Class UAbilitiesComponent Function HasBuffOfClass ******************************
struct Z_Construct_UFunction_UAbilitiesComponent_HasBuffOfClass_Statics
{
	struct AbilitiesComponent_eventHasBuffOfClass_Parms
	{
		TSubclassOf<UBuff> Class;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AbilityComponent|Buffs" },
		{ "ModuleRelativePath", "Public/AbilitiesComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function HasBuffOfClass constinit property declarations ************************
	static const UECodeGen_Private::FClassPropertyParams NewProp_Class;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function HasBuffOfClass constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function HasBuffOfClass Property Definitions ***********************************
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UAbilitiesComponent_HasBuffOfClass_Statics::NewProp_Class = { "Class", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilitiesComponent_eventHasBuffOfClass_Parms, Class), Z_Construct_UClass_UClass_NoRegister, Z_Construct_UClass_UBuff_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UAbilitiesComponent_HasBuffOfClass_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AbilitiesComponent_eventHasBuffOfClass_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAbilitiesComponent_HasBuffOfClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AbilitiesComponent_eventHasBuffOfClass_Parms), &Z_Construct_UFunction_UAbilitiesComponent_HasBuffOfClass_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAbilitiesComponent_HasBuffOfClass_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilitiesComponent_HasBuffOfClass_Statics::NewProp_Class,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilitiesComponent_HasBuffOfClass_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilitiesComponent_HasBuffOfClass_Statics::PropPointers) < 2048);
// ********** End Function HasBuffOfClass Property Definitions *************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilitiesComponent_HasBuffOfClass_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAbilitiesComponent, nullptr, "HasBuffOfClass", 	Z_Construct_UFunction_UAbilitiesComponent_HasBuffOfClass_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilitiesComponent_HasBuffOfClass_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UAbilitiesComponent_HasBuffOfClass_Statics::AbilitiesComponent_eventHasBuffOfClass_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilitiesComponent_HasBuffOfClass_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAbilitiesComponent_HasBuffOfClass_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAbilitiesComponent_HasBuffOfClass_Statics::AbilitiesComponent_eventHasBuffOfClass_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAbilitiesComponent_HasBuffOfClass()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAbilitiesComponent_HasBuffOfClass_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAbilitiesComponent::execHasBuffOfClass)
{
	P_GET_OBJECT(UClass,Z_Param_Class);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->HasBuffOfClass(Z_Param_Class);
	P_NATIVE_END;
}
// ********** End Class UAbilitiesComponent Function HasBuffOfClass ********************************

// ********** Begin Class UAbilitiesComponent Function HasBuffs ************************************
struct Z_Construct_UFunction_UAbilitiesComponent_HasBuffs_Statics
{
	struct AbilitiesComponent_eventHasBuffs_Parms
	{
		TSet<UBuff*> InBuffs;
		EAllAny Mode;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AbilityComponent|Buffs" },
		{ "Comment", "// Checks if the component currently has a list of buffs\n// @return true if one or all buffs are contained\n" },
		{ "CPP_Default_Mode", "Any" },
		{ "ModuleRelativePath", "Public/AbilitiesComponent.h" },
		{ "ToolTip", "Checks if the component currently has a list of buffs\n@return true if one or all buffs are contained" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InBuffs_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function HasBuffs constinit property declarations ******************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InBuffs_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_InBuffs;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Mode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Mode;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function HasBuffs constinit property declarations ********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function HasBuffs Property Definitions *****************************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbilitiesComponent_HasBuffs_Statics::NewProp_InBuffs_ElementProp = { "InBuffs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UBuff_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FSetPropertyParams Z_Construct_UFunction_UAbilitiesComponent_HasBuffs_Statics::NewProp_InBuffs = { "InBuffs", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilitiesComponent_eventHasBuffs_Parms, InBuffs), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InBuffs_MetaData), NewProp_InBuffs_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAbilitiesComponent_HasBuffs_Statics::NewProp_Mode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAbilitiesComponent_HasBuffs_Statics::NewProp_Mode = { "Mode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilitiesComponent_eventHasBuffs_Parms, Mode), Z_Construct_UEnum_Abilities_EAllAny, METADATA_PARAMS(0, nullptr) }; // 679592783
void Z_Construct_UFunction_UAbilitiesComponent_HasBuffs_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AbilitiesComponent_eventHasBuffs_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAbilitiesComponent_HasBuffs_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AbilitiesComponent_eventHasBuffs_Parms), &Z_Construct_UFunction_UAbilitiesComponent_HasBuffs_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAbilitiesComponent_HasBuffs_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilitiesComponent_HasBuffs_Statics::NewProp_InBuffs_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilitiesComponent_HasBuffs_Statics::NewProp_InBuffs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilitiesComponent_HasBuffs_Statics::NewProp_Mode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilitiesComponent_HasBuffs_Statics::NewProp_Mode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilitiesComponent_HasBuffs_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilitiesComponent_HasBuffs_Statics::PropPointers) < 2048);
// ********** End Function HasBuffs Property Definitions *******************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilitiesComponent_HasBuffs_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAbilitiesComponent, nullptr, "HasBuffs", 	Z_Construct_UFunction_UAbilitiesComponent_HasBuffs_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilitiesComponent_HasBuffs_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UAbilitiesComponent_HasBuffs_Statics::AbilitiesComponent_eventHasBuffs_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilitiesComponent_HasBuffs_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAbilitiesComponent_HasBuffs_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAbilitiesComponent_HasBuffs_Statics::AbilitiesComponent_eventHasBuffs_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAbilitiesComponent_HasBuffs()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAbilitiesComponent_HasBuffs_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAbilitiesComponent::execHasBuffs)
{
	P_GET_TSET_REF(UBuff*,Z_Param_Out_InBuffs);
	P_GET_ENUM(EAllAny,Z_Param_Mode);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->HasBuffs(Z_Param_Out_InBuffs,EAllAny(Z_Param_Mode));
	P_NATIVE_END;
}
// ********** End Class UAbilitiesComponent Function HasBuffs **************************************

// ********** Begin Class UAbilitiesComponent Function IsAnyInputPressed ***************************
struct Z_Construct_UFunction_UAbilitiesComponent_IsAnyInputPressed_Statics
{
	struct AbilitiesComponent_eventIsAnyInputPressed_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AbilityComponent|Abilities" },
		{ "ModuleRelativePath", "Public/AbilitiesComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function IsAnyInputPressed constinit property declarations *********************
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function IsAnyInputPressed constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function IsAnyInputPressed Property Definitions ********************************
void Z_Construct_UFunction_UAbilitiesComponent_IsAnyInputPressed_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AbilitiesComponent_eventIsAnyInputPressed_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAbilitiesComponent_IsAnyInputPressed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AbilitiesComponent_eventIsAnyInputPressed_Parms), &Z_Construct_UFunction_UAbilitiesComponent_IsAnyInputPressed_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAbilitiesComponent_IsAnyInputPressed_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilitiesComponent_IsAnyInputPressed_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilitiesComponent_IsAnyInputPressed_Statics::PropPointers) < 2048);
// ********** End Function IsAnyInputPressed Property Definitions **********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilitiesComponent_IsAnyInputPressed_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAbilitiesComponent, nullptr, "IsAnyInputPressed", 	Z_Construct_UFunction_UAbilitiesComponent_IsAnyInputPressed_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilitiesComponent_IsAnyInputPressed_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UAbilitiesComponent_IsAnyInputPressed_Statics::AbilitiesComponent_eventIsAnyInputPressed_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilitiesComponent_IsAnyInputPressed_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAbilitiesComponent_IsAnyInputPressed_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAbilitiesComponent_IsAnyInputPressed_Statics::AbilitiesComponent_eventIsAnyInputPressed_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAbilitiesComponent_IsAnyInputPressed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAbilitiesComponent_IsAnyInputPressed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAbilitiesComponent::execIsAnyInputPressed)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsAnyInputPressed();
	P_NATIVE_END;
}
// ********** End Class UAbilitiesComponent Function IsAnyInputPressed *****************************

// ********** Begin Class UAbilitiesComponent Function IsCoolingDown *******************************
struct Z_Construct_UFunction_UAbilitiesComponent_IsCoolingDown_Statics
{
	struct AbilitiesComponent_eventIsCoolingDown_Parms
	{
		TSubclassOf<UAbility> Class;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AbilityComponent|Abilities" },
		{ "ModuleRelativePath", "Public/AbilitiesComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function IsCoolingDown constinit property declarations *************************
	static const UECodeGen_Private::FClassPropertyParams NewProp_Class;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function IsCoolingDown constinit property declarations ***************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function IsCoolingDown Property Definitions ************************************
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UAbilitiesComponent_IsCoolingDown_Statics::NewProp_Class = { "Class", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilitiesComponent_eventIsCoolingDown_Parms, Class), Z_Construct_UClass_UClass_NoRegister, Z_Construct_UClass_UAbility_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UAbilitiesComponent_IsCoolingDown_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AbilitiesComponent_eventIsCoolingDown_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAbilitiesComponent_IsCoolingDown_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AbilitiesComponent_eventIsCoolingDown_Parms), &Z_Construct_UFunction_UAbilitiesComponent_IsCoolingDown_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAbilitiesComponent_IsCoolingDown_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilitiesComponent_IsCoolingDown_Statics::NewProp_Class,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilitiesComponent_IsCoolingDown_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilitiesComponent_IsCoolingDown_Statics::PropPointers) < 2048);
// ********** End Function IsCoolingDown Property Definitions **************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilitiesComponent_IsCoolingDown_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAbilitiesComponent, nullptr, "IsCoolingDown", 	Z_Construct_UFunction_UAbilitiesComponent_IsCoolingDown_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilitiesComponent_IsCoolingDown_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UAbilitiesComponent_IsCoolingDown_Statics::AbilitiesComponent_eventIsCoolingDown_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilitiesComponent_IsCoolingDown_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAbilitiesComponent_IsCoolingDown_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAbilitiesComponent_IsCoolingDown_Statics::AbilitiesComponent_eventIsCoolingDown_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAbilitiesComponent_IsCoolingDown()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAbilitiesComponent_IsCoolingDown_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAbilitiesComponent::execIsCoolingDown)
{
	P_GET_OBJECT(UClass,Z_Param_Class);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsCoolingDown(Z_Param_Class);
	P_NATIVE_END;
}
// ********** End Class UAbilitiesComponent Function IsCoolingDown *********************************

// ********** Begin Class UAbilitiesComponent Function IsEquipped **********************************
struct Z_Construct_UFunction_UAbilitiesComponent_IsEquipped_Statics
{
	struct AbilitiesComponent_eventIsEquipped_Parms
	{
		TSubclassOf<UAbility> AbilityClass;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AbilityComponent|Abilities" },
		{ "ModuleRelativePath", "Public/AbilitiesComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function IsEquipped constinit property declarations ****************************
	static const UECodeGen_Private::FClassPropertyParams NewProp_AbilityClass;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function IsEquipped constinit property declarations ******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function IsEquipped Property Definitions ***************************************
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UAbilitiesComponent_IsEquipped_Statics::NewProp_AbilityClass = { "AbilityClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilitiesComponent_eventIsEquipped_Parms, AbilityClass), Z_Construct_UClass_UClass_NoRegister, Z_Construct_UClass_UAbility_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UAbilitiesComponent_IsEquipped_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AbilitiesComponent_eventIsEquipped_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAbilitiesComponent_IsEquipped_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AbilitiesComponent_eventIsEquipped_Parms), &Z_Construct_UFunction_UAbilitiesComponent_IsEquipped_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAbilitiesComponent_IsEquipped_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilitiesComponent_IsEquipped_Statics::NewProp_AbilityClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilitiesComponent_IsEquipped_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilitiesComponent_IsEquipped_Statics::PropPointers) < 2048);
// ********** End Function IsEquipped Property Definitions *****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilitiesComponent_IsEquipped_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAbilitiesComponent, nullptr, "IsEquipped", 	Z_Construct_UFunction_UAbilitiesComponent_IsEquipped_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilitiesComponent_IsEquipped_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UAbilitiesComponent_IsEquipped_Statics::AbilitiesComponent_eventIsEquipped_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilitiesComponent_IsEquipped_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAbilitiesComponent_IsEquipped_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAbilitiesComponent_IsEquipped_Statics::AbilitiesComponent_eventIsEquipped_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAbilitiesComponent_IsEquipped()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAbilitiesComponent_IsEquipped_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAbilitiesComponent::execIsEquipped)
{
	P_GET_OBJECT(UClass,Z_Param_AbilityClass);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsEquipped(Z_Param_AbilityClass);
	P_NATIVE_END;
}
// ********** End Class UAbilitiesComponent Function IsEquipped ************************************

// ********** Begin Class UAbilitiesComponent Function IsInputPressed ******************************
struct Z_Construct_UFunction_UAbilitiesComponent_IsInputPressed_Statics
{
	struct AbilitiesComponent_eventIsInputPressed_Parms
	{
		FName InputEvent;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AbilityComponent|Abilities" },
		{ "CPP_Default_InputEvent", "Default" },
		{ "ModuleRelativePath", "Public/AbilitiesComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function IsInputPressed constinit property declarations ************************
	static const UECodeGen_Private::FNamePropertyParams NewProp_InputEvent;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function IsInputPressed constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function IsInputPressed Property Definitions ***********************************
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAbilitiesComponent_IsInputPressed_Statics::NewProp_InputEvent = { "InputEvent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilitiesComponent_eventIsInputPressed_Parms, InputEvent), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UAbilitiesComponent_IsInputPressed_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AbilitiesComponent_eventIsInputPressed_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAbilitiesComponent_IsInputPressed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AbilitiesComponent_eventIsInputPressed_Parms), &Z_Construct_UFunction_UAbilitiesComponent_IsInputPressed_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAbilitiesComponent_IsInputPressed_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilitiesComponent_IsInputPressed_Statics::NewProp_InputEvent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilitiesComponent_IsInputPressed_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilitiesComponent_IsInputPressed_Statics::PropPointers) < 2048);
// ********** End Function IsInputPressed Property Definitions *************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilitiesComponent_IsInputPressed_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAbilitiesComponent, nullptr, "IsInputPressed", 	Z_Construct_UFunction_UAbilitiesComponent_IsInputPressed_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilitiesComponent_IsInputPressed_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UAbilitiesComponent_IsInputPressed_Statics::AbilitiesComponent_eventIsInputPressed_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilitiesComponent_IsInputPressed_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAbilitiesComponent_IsInputPressed_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAbilitiesComponent_IsInputPressed_Statics::AbilitiesComponent_eventIsInputPressed_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAbilitiesComponent_IsInputPressed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAbilitiesComponent_IsInputPressed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAbilitiesComponent::execIsInputPressed)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_InputEvent);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsInputPressed(Z_Param_InputEvent);
	P_NATIVE_END;
}
// ********** End Class UAbilitiesComponent Function IsInputPressed ********************************

// ********** Begin Class UAbilitiesComponent Function IsLocallyOwned ******************************
struct Z_Construct_UFunction_UAbilitiesComponent_IsLocallyOwned_Statics
{
	struct AbilitiesComponent_eventIsLocallyOwned_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AbilityComponent" },
		{ "ModuleRelativePath", "Public/AbilitiesComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function IsLocallyOwned constinit property declarations ************************
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function IsLocallyOwned constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function IsLocallyOwned Property Definitions ***********************************
void Z_Construct_UFunction_UAbilitiesComponent_IsLocallyOwned_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AbilitiesComponent_eventIsLocallyOwned_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAbilitiesComponent_IsLocallyOwned_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AbilitiesComponent_eventIsLocallyOwned_Parms), &Z_Construct_UFunction_UAbilitiesComponent_IsLocallyOwned_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAbilitiesComponent_IsLocallyOwned_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilitiesComponent_IsLocallyOwned_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilitiesComponent_IsLocallyOwned_Statics::PropPointers) < 2048);
// ********** End Function IsLocallyOwned Property Definitions *************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilitiesComponent_IsLocallyOwned_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAbilitiesComponent, nullptr, "IsLocallyOwned", 	Z_Construct_UFunction_UAbilitiesComponent_IsLocallyOwned_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilitiesComponent_IsLocallyOwned_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UAbilitiesComponent_IsLocallyOwned_Statics::AbilitiesComponent_eventIsLocallyOwned_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilitiesComponent_IsLocallyOwned_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAbilitiesComponent_IsLocallyOwned_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAbilitiesComponent_IsLocallyOwned_Statics::AbilitiesComponent_eventIsLocallyOwned_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAbilitiesComponent_IsLocallyOwned()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAbilitiesComponent_IsLocallyOwned_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAbilitiesComponent::execIsLocallyOwned)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsLocallyOwned();
	P_NATIVE_END;
}
// ********** End Class UAbilitiesComponent Function IsLocallyOwned ********************************

// ********** Begin Class UAbilitiesComponent Function IsRunning ***********************************
struct Z_Construct_UFunction_UAbilitiesComponent_IsRunning_Statics
{
	struct AbilitiesComponent_eventIsRunning_Parms
	{
		TSubclassOf<UAbility> Class;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AbilityComponent|Abilities" },
		{ "Comment", "// @return true if any ability of a class is executing\n" },
		{ "ModuleRelativePath", "Public/AbilitiesComponent.h" },
		{ "ToolTip", "@return true if any ability of a class is executing" },
	};
#endif // WITH_METADATA

// ********** Begin Function IsRunning constinit property declarations *****************************
	static const UECodeGen_Private::FClassPropertyParams NewProp_Class;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function IsRunning constinit property declarations *******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function IsRunning Property Definitions ****************************************
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UAbilitiesComponent_IsRunning_Statics::NewProp_Class = { "Class", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilitiesComponent_eventIsRunning_Parms, Class), Z_Construct_UClass_UClass_NoRegister, Z_Construct_UClass_UAbility_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UAbilitiesComponent_IsRunning_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AbilitiesComponent_eventIsRunning_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAbilitiesComponent_IsRunning_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AbilitiesComponent_eventIsRunning_Parms), &Z_Construct_UFunction_UAbilitiesComponent_IsRunning_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAbilitiesComponent_IsRunning_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilitiesComponent_IsRunning_Statics::NewProp_Class,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilitiesComponent_IsRunning_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilitiesComponent_IsRunning_Statics::PropPointers) < 2048);
// ********** End Function IsRunning Property Definitions ******************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilitiesComponent_IsRunning_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAbilitiesComponent, nullptr, "IsRunning", 	Z_Construct_UFunction_UAbilitiesComponent_IsRunning_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilitiesComponent_IsRunning_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UAbilitiesComponent_IsRunning_Statics::AbilitiesComponent_eventIsRunning_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilitiesComponent_IsRunning_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAbilitiesComponent_IsRunning_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAbilitiesComponent_IsRunning_Statics::AbilitiesComponent_eventIsRunning_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAbilitiesComponent_IsRunning()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAbilitiesComponent_IsRunning_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAbilitiesComponent::execIsRunning)
{
	P_GET_OBJECT(UClass,Z_Param_Class);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsRunning(Z_Param_Class);
	P_NATIVE_END;
}
// ********** End Class UAbilitiesComponent Function IsRunning *************************************

// ********** Begin Class UAbilitiesComponent Function IsTearingDown *******************************
struct Z_Construct_UFunction_UAbilitiesComponent_IsTearingDown_Statics
{
	struct AbilitiesComponent_eventIsTearingDown_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AbilityComponent" },
		{ "ModuleRelativePath", "Public/AbilitiesComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function IsTearingDown constinit property declarations *************************
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function IsTearingDown constinit property declarations ***************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function IsTearingDown Property Definitions ************************************
void Z_Construct_UFunction_UAbilitiesComponent_IsTearingDown_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AbilitiesComponent_eventIsTearingDown_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAbilitiesComponent_IsTearingDown_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AbilitiesComponent_eventIsTearingDown_Parms), &Z_Construct_UFunction_UAbilitiesComponent_IsTearingDown_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAbilitiesComponent_IsTearingDown_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilitiesComponent_IsTearingDown_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilitiesComponent_IsTearingDown_Statics::PropPointers) < 2048);
// ********** End Function IsTearingDown Property Definitions **************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilitiesComponent_IsTearingDown_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAbilitiesComponent, nullptr, "IsTearingDown", 	Z_Construct_UFunction_UAbilitiesComponent_IsTearingDown_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilitiesComponent_IsTearingDown_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UAbilitiesComponent_IsTearingDown_Statics::AbilitiesComponent_eventIsTearingDown_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilitiesComponent_IsTearingDown_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAbilitiesComponent_IsTearingDown_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAbilitiesComponent_IsTearingDown_Statics::AbilitiesComponent_eventIsTearingDown_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAbilitiesComponent_IsTearingDown()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAbilitiesComponent_IsTearingDown_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAbilitiesComponent::execIsTearingDown)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsTearingDown();
	P_NATIVE_END;
}
// ********** End Class UAbilitiesComponent Function IsTearingDown *********************************

// ********** Begin Class UAbilitiesComponent Function MCAddRemainingCooldowns *********************
struct AbilitiesComponent_eventMCAddRemainingCooldowns_Parms
{
	TArray<UClass*> Classes;
	float Duration;
};
static FName NAME_UAbilitiesComponent_MCAddRemainingCooldowns = FName(TEXT("MCAddRemainingCooldowns"));
void UAbilitiesComponent::MCAddRemainingCooldowns(TArray<UClass*> const& Classes, float Duration)
{
	AbilitiesComponent_eventMCAddRemainingCooldowns_Parms Parms;
	Parms.Classes=Classes;
	Parms.Duration=Duration;
	UFunction* Func = FindFunctionChecked(NAME_UAbilitiesComponent_MCAddRemainingCooldowns);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_UAbilitiesComponent_MCAddRemainingCooldowns_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AbilitiesComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Classes_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function MCAddRemainingCooldowns constinit property declarations ***************
	static const UECodeGen_Private::FClassPropertyParams NewProp_Classes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Classes;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Duration;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function MCAddRemainingCooldowns constinit property declarations *****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function MCAddRemainingCooldowns Property Definitions **************************
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UAbilitiesComponent_MCAddRemainingCooldowns_Statics::NewProp_Classes_Inner = { "Classes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass_NoRegister, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAbilitiesComponent_MCAddRemainingCooldowns_Statics::NewProp_Classes = { "Classes", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilitiesComponent_eventMCAddRemainingCooldowns_Parms, Classes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Classes_MetaData), NewProp_Classes_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAbilitiesComponent_MCAddRemainingCooldowns_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilitiesComponent_eventMCAddRemainingCooldowns_Parms, Duration), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAbilitiesComponent_MCAddRemainingCooldowns_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilitiesComponent_MCAddRemainingCooldowns_Statics::NewProp_Classes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilitiesComponent_MCAddRemainingCooldowns_Statics::NewProp_Classes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilitiesComponent_MCAddRemainingCooldowns_Statics::NewProp_Duration,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilitiesComponent_MCAddRemainingCooldowns_Statics::PropPointers) < 2048);
// ********** End Function MCAddRemainingCooldowns Property Definitions ****************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilitiesComponent_MCAddRemainingCooldowns_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAbilitiesComponent, nullptr, "MCAddRemainingCooldowns", 	Z_Construct_UFunction_UAbilitiesComponent_MCAddRemainingCooldowns_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilitiesComponent_MCAddRemainingCooldowns_Statics::PropPointers), 
sizeof(AbilitiesComponent_eventMCAddRemainingCooldowns_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00084C40, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilitiesComponent_MCAddRemainingCooldowns_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAbilitiesComponent_MCAddRemainingCooldowns_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(AbilitiesComponent_eventMCAddRemainingCooldowns_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAbilitiesComponent_MCAddRemainingCooldowns()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAbilitiesComponent_MCAddRemainingCooldowns_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAbilitiesComponent::execMCAddRemainingCooldowns)
{
	P_GET_TARRAY(UClass*,Z_Param_Classes);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Duration);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->MCAddRemainingCooldowns_Implementation(Z_Param_Classes,Z_Param_Duration);
	P_NATIVE_END;
}
// ********** End Class UAbilitiesComponent Function MCAddRemainingCooldowns ***********************

// ********** Begin Class UAbilitiesComponent Function MCOnBuffsChanged ****************************
struct AbilitiesComponent_eventMCOnBuffsChanged_Parms
{
	TArray<FBuffCount> ModifiedBuffs;
	EBuffOperation Change;
};
static FName NAME_UAbilitiesComponent_MCOnBuffsChanged = FName(TEXT("MCOnBuffsChanged"));
void UAbilitiesComponent::MCOnBuffsChanged(TArray<FBuffCount> const& ModifiedBuffs, EBuffOperation Change)
{
	AbilitiesComponent_eventMCOnBuffsChanged_Parms Parms;
	Parms.ModifiedBuffs=ModifiedBuffs;
	Parms.Change=Change;
	UFunction* Func = FindFunctionChecked(NAME_UAbilitiesComponent_MCOnBuffsChanged);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_UAbilitiesComponent_MCOnBuffsChanged_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AbilitiesComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ModifiedBuffs_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function MCOnBuffsChanged constinit property declarations **********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_ModifiedBuffs_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ModifiedBuffs;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Change_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Change;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function MCOnBuffsChanged constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function MCOnBuffsChanged Property Definitions *********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAbilitiesComponent_MCOnBuffsChanged_Statics::NewProp_ModifiedBuffs_Inner = { "ModifiedBuffs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FBuffCount, METADATA_PARAMS(0, nullptr) }; // 3926446658
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAbilitiesComponent_MCOnBuffsChanged_Statics::NewProp_ModifiedBuffs = { "ModifiedBuffs", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilitiesComponent_eventMCOnBuffsChanged_Parms, ModifiedBuffs), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ModifiedBuffs_MetaData), NewProp_ModifiedBuffs_MetaData) }; // 3926446658
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAbilitiesComponent_MCOnBuffsChanged_Statics::NewProp_Change_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAbilitiesComponent_MCOnBuffsChanged_Statics::NewProp_Change = { "Change", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilitiesComponent_eventMCOnBuffsChanged_Parms, Change), Z_Construct_UEnum_Abilities_EBuffOperation, METADATA_PARAMS(0, nullptr) }; // 859437010
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAbilitiesComponent_MCOnBuffsChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilitiesComponent_MCOnBuffsChanged_Statics::NewProp_ModifiedBuffs_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilitiesComponent_MCOnBuffsChanged_Statics::NewProp_ModifiedBuffs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilitiesComponent_MCOnBuffsChanged_Statics::NewProp_Change_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilitiesComponent_MCOnBuffsChanged_Statics::NewProp_Change,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilitiesComponent_MCOnBuffsChanged_Statics::PropPointers) < 2048);
// ********** End Function MCOnBuffsChanged Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilitiesComponent_MCOnBuffsChanged_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAbilitiesComponent, nullptr, "MCOnBuffsChanged", 	Z_Construct_UFunction_UAbilitiesComponent_MCOnBuffsChanged_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilitiesComponent_MCOnBuffsChanged_Statics::PropPointers), 
sizeof(AbilitiesComponent_eventMCOnBuffsChanged_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00044CC1, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilitiesComponent_MCOnBuffsChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAbilitiesComponent_MCOnBuffsChanged_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(AbilitiesComponent_eventMCOnBuffsChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAbilitiesComponent_MCOnBuffsChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAbilitiesComponent_MCOnBuffsChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAbilitiesComponent::execMCOnBuffsChanged)
{
	P_GET_TARRAY(FBuffCount,Z_Param_ModifiedBuffs);
	P_GET_ENUM(EBuffOperation,Z_Param_Change);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->MCOnBuffsChanged_Implementation(Z_Param_ModifiedBuffs,EBuffOperation(Z_Param_Change));
	P_NATIVE_END;
}
// ********** End Class UAbilitiesComponent Function MCOnBuffsChanged ******************************

// ********** Begin Class UAbilitiesComponent Function OnRep_AllAbilities **************************
struct Z_Construct_UFunction_UAbilitiesComponent_OnRep_AllAbilities_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AbilitiesComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function OnRep_AllAbilities constinit property declarations ********************
// ********** End Function OnRep_AllAbilities constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilitiesComponent_OnRep_AllAbilities_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAbilitiesComponent, nullptr, "OnRep_AllAbilities", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilitiesComponent_OnRep_AllAbilities_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAbilitiesComponent_OnRep_AllAbilities_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UAbilitiesComponent_OnRep_AllAbilities()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAbilitiesComponent_OnRep_AllAbilities_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAbilitiesComponent::execOnRep_AllAbilities)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_AllAbilities();
	P_NATIVE_END;
}
// ********** End Class UAbilitiesComponent Function OnRep_AllAbilities ****************************

// ********** Begin Class UAbilitiesComponent Function OnRep_Tags **********************************
struct Z_Construct_UFunction_UAbilitiesComponent_OnRep_Tags_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AbilitiesComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function OnRep_Tags constinit property declarations ****************************
// ********** End Function OnRep_Tags constinit property declarations ******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilitiesComponent_OnRep_Tags_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAbilitiesComponent, nullptr, "OnRep_Tags", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilitiesComponent_OnRep_Tags_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAbilitiesComponent_OnRep_Tags_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UAbilitiesComponent_OnRep_Tags()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAbilitiesComponent_OnRep_Tags_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAbilitiesComponent::execOnRep_Tags)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_Tags();
	P_NATIVE_END;
}
// ********** End Class UAbilitiesComponent Function OnRep_Tags ************************************

// ********** Begin Class UAbilitiesComponent Function PressInput **********************************
struct Z_Construct_UFunction_UAbilitiesComponent_PressInput_Statics
{
	struct AbilitiesComponent_eventPressInput_Parms
	{
		TSubclassOf<UAbility> Class;
		FName InputEvent;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AbilityComponent|Abilities" },
		{ "Comment", "/**\n\x09 * Called when an input has been pressed and an ability must react to it.\n\x09 * @param Class of the ability to affect\n\x09 * @param InputEvent is the name of the input used. The ability will only\n\x09 * accept release from this event and will release if another ability is pressed using it.\n\x09 */" },
		{ "CPP_Default_InputEvent", "Default" },
		{ "ModuleRelativePath", "Public/AbilitiesComponent.h" },
		{ "ToolTip", "Called when an input has been pressed and an ability must react to it.\n@param Class of the ability to affect\n@param InputEvent is the name of the input used. The ability will only\naccept release from this event and will release if another ability is pressed using it." },
	};
#endif // WITH_METADATA

// ********** Begin Function PressInput constinit property declarations ****************************
	static const UECodeGen_Private::FClassPropertyParams NewProp_Class;
	static const UECodeGen_Private::FNamePropertyParams NewProp_InputEvent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function PressInput constinit property declarations ******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function PressInput Property Definitions ***************************************
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UAbilitiesComponent_PressInput_Statics::NewProp_Class = { "Class", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilitiesComponent_eventPressInput_Parms, Class), Z_Construct_UClass_UClass_NoRegister, Z_Construct_UClass_UAbility_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAbilitiesComponent_PressInput_Statics::NewProp_InputEvent = { "InputEvent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilitiesComponent_eventPressInput_Parms, InputEvent), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAbilitiesComponent_PressInput_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilitiesComponent_PressInput_Statics::NewProp_Class,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilitiesComponent_PressInput_Statics::NewProp_InputEvent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilitiesComponent_PressInput_Statics::PropPointers) < 2048);
// ********** End Function PressInput Property Definitions *****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilitiesComponent_PressInput_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAbilitiesComponent, nullptr, "PressInput", 	Z_Construct_UFunction_UAbilitiesComponent_PressInput_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilitiesComponent_PressInput_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UAbilitiesComponent_PressInput_Statics::AbilitiesComponent_eventPressInput_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilitiesComponent_PressInput_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAbilitiesComponent_PressInput_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAbilitiesComponent_PressInput_Statics::AbilitiesComponent_eventPressInput_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAbilitiesComponent_PressInput()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAbilitiesComponent_PressInput_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAbilitiesComponent::execPressInput)
{
	P_GET_OBJECT(UClass,Z_Param_Class);
	P_GET_PROPERTY(FNameProperty,Z_Param_InputEvent);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PressInput(Z_Param_Class,Z_Param_InputEvent);
	P_NATIVE_END;
}
// ********** End Class UAbilitiesComponent Function PressInput ************************************

// ********** Begin Class UAbilitiesComponent Function ReleaseInput ********************************
struct Z_Construct_UFunction_UAbilitiesComponent_ReleaseInput_Statics
{
	struct AbilitiesComponent_eventReleaseInput_Parms
	{
		FName InputEvent;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AbilityComponent|Abilities" },
		{ "Comment", "// Release any ability using this input event\n" },
		{ "CPP_Default_InputEvent", "Default" },
		{ "ModuleRelativePath", "Public/AbilitiesComponent.h" },
		{ "ToolTip", "Release any ability using this input event" },
	};
#endif // WITH_METADATA

// ********** Begin Function ReleaseInput constinit property declarations **************************
	static const UECodeGen_Private::FNamePropertyParams NewProp_InputEvent;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ReleaseInput constinit property declarations ****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ReleaseInput Property Definitions *************************************
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAbilitiesComponent_ReleaseInput_Statics::NewProp_InputEvent = { "InputEvent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilitiesComponent_eventReleaseInput_Parms, InputEvent), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UAbilitiesComponent_ReleaseInput_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AbilitiesComponent_eventReleaseInput_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAbilitiesComponent_ReleaseInput_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AbilitiesComponent_eventReleaseInput_Parms), &Z_Construct_UFunction_UAbilitiesComponent_ReleaseInput_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAbilitiesComponent_ReleaseInput_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilitiesComponent_ReleaseInput_Statics::NewProp_InputEvent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilitiesComponent_ReleaseInput_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilitiesComponent_ReleaseInput_Statics::PropPointers) < 2048);
// ********** End Function ReleaseInput Property Definitions ***************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilitiesComponent_ReleaseInput_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAbilitiesComponent, nullptr, "ReleaseInput", 	Z_Construct_UFunction_UAbilitiesComponent_ReleaseInput_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilitiesComponent_ReleaseInput_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UAbilitiesComponent_ReleaseInput_Statics::AbilitiesComponent_eventReleaseInput_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilitiesComponent_ReleaseInput_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAbilitiesComponent_ReleaseInput_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAbilitiesComponent_ReleaseInput_Statics::AbilitiesComponent_eventReleaseInput_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAbilitiesComponent_ReleaseInput()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAbilitiesComponent_ReleaseInput_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAbilitiesComponent::execReleaseInput)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_InputEvent);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->ReleaseInput(Z_Param_InputEvent);
	P_NATIVE_END;
}
// ********** End Class UAbilitiesComponent Function ReleaseInput **********************************

// ********** Begin Class UAbilitiesComponent Function ReleaseInputByClass *************************
struct Z_Construct_UFunction_UAbilitiesComponent_ReleaseInputByClass_Statics
{
	struct AbilitiesComponent_eventReleaseInputByClass_Parms
	{
		TSubclassOf<UAbility> Class;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AbilityComponent|Abilities" },
		{ "Comment", "// Release the ability with type Class\n" },
		{ "ModuleRelativePath", "Public/AbilitiesComponent.h" },
		{ "ToolTip", "Release the ability with type Class" },
	};
#endif // WITH_METADATA

// ********** Begin Function ReleaseInputByClass constinit property declarations *******************
	static const UECodeGen_Private::FClassPropertyParams NewProp_Class;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ReleaseInputByClass constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ReleaseInputByClass Property Definitions ******************************
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UAbilitiesComponent_ReleaseInputByClass_Statics::NewProp_Class = { "Class", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilitiesComponent_eventReleaseInputByClass_Parms, Class), Z_Construct_UClass_UClass_NoRegister, Z_Construct_UClass_UAbility_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UAbilitiesComponent_ReleaseInputByClass_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AbilitiesComponent_eventReleaseInputByClass_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAbilitiesComponent_ReleaseInputByClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AbilitiesComponent_eventReleaseInputByClass_Parms), &Z_Construct_UFunction_UAbilitiesComponent_ReleaseInputByClass_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAbilitiesComponent_ReleaseInputByClass_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilitiesComponent_ReleaseInputByClass_Statics::NewProp_Class,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilitiesComponent_ReleaseInputByClass_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilitiesComponent_ReleaseInputByClass_Statics::PropPointers) < 2048);
// ********** End Function ReleaseInputByClass Property Definitions ********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilitiesComponent_ReleaseInputByClass_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAbilitiesComponent, nullptr, "ReleaseInputByClass", 	Z_Construct_UFunction_UAbilitiesComponent_ReleaseInputByClass_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilitiesComponent_ReleaseInputByClass_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UAbilitiesComponent_ReleaseInputByClass_Statics::AbilitiesComponent_eventReleaseInputByClass_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilitiesComponent_ReleaseInputByClass_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAbilitiesComponent_ReleaseInputByClass_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAbilitiesComponent_ReleaseInputByClass_Statics::AbilitiesComponent_eventReleaseInputByClass_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAbilitiesComponent_ReleaseInputByClass()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAbilitiesComponent_ReleaseInputByClass_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAbilitiesComponent::execReleaseInputByClass)
{
	P_GET_OBJECT(UClass,Z_Param_Class);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->ReleaseInputByClass(Z_Param_Class);
	P_NATIVE_END;
}
// ********** End Class UAbilitiesComponent Function ReleaseInputByClass ***************************

// ********** Begin Class UAbilitiesComponent Function RemoveAllBuffs ******************************
struct Z_Construct_UFunction_UAbilitiesComponent_RemoveAllBuffs_Statics
{
	struct AbilitiesComponent_eventRemoveAllBuffs_Parms
	{
		TSet<UBuff*> InBuffs;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AbilityComponent|Buffs" },
		{ "Comment", "// Removes a list of buffs, no matter their count\n" },
		{ "ModuleRelativePath", "Public/AbilitiesComponent.h" },
		{ "ToolTip", "Removes a list of buffs, no matter their count" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InBuffs_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function RemoveAllBuffs constinit property declarations ************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InBuffs_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_InBuffs;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function RemoveAllBuffs constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function RemoveAllBuffs Property Definitions ***********************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbilitiesComponent_RemoveAllBuffs_Statics::NewProp_InBuffs_ElementProp = { "InBuffs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UBuff_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FSetPropertyParams Z_Construct_UFunction_UAbilitiesComponent_RemoveAllBuffs_Statics::NewProp_InBuffs = { "InBuffs", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilitiesComponent_eventRemoveAllBuffs_Parms, InBuffs), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InBuffs_MetaData), NewProp_InBuffs_MetaData) };
void Z_Construct_UFunction_UAbilitiesComponent_RemoveAllBuffs_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AbilitiesComponent_eventRemoveAllBuffs_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAbilitiesComponent_RemoveAllBuffs_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AbilitiesComponent_eventRemoveAllBuffs_Parms), &Z_Construct_UFunction_UAbilitiesComponent_RemoveAllBuffs_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAbilitiesComponent_RemoveAllBuffs_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilitiesComponent_RemoveAllBuffs_Statics::NewProp_InBuffs_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilitiesComponent_RemoveAllBuffs_Statics::NewProp_InBuffs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilitiesComponent_RemoveAllBuffs_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilitiesComponent_RemoveAllBuffs_Statics::PropPointers) < 2048);
// ********** End Function RemoveAllBuffs Property Definitions *************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilitiesComponent_RemoveAllBuffs_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAbilitiesComponent, nullptr, "RemoveAllBuffs", 	Z_Construct_UFunction_UAbilitiesComponent_RemoveAllBuffs_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilitiesComponent_RemoveAllBuffs_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UAbilitiesComponent_RemoveAllBuffs_Statics::AbilitiesComponent_eventRemoveAllBuffs_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420405, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilitiesComponent_RemoveAllBuffs_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAbilitiesComponent_RemoveAllBuffs_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAbilitiesComponent_RemoveAllBuffs_Statics::AbilitiesComponent_eventRemoveAllBuffs_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAbilitiesComponent_RemoveAllBuffs()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAbilitiesComponent_RemoveAllBuffs_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAbilitiesComponent::execRemoveAllBuffs)
{
	P_GET_TSET_REF(UBuff*,Z_Param_Out_InBuffs);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->RemoveAllBuffs(Z_Param_Out_InBuffs);
	P_NATIVE_END;
}
// ********** End Class UAbilitiesComponent Function RemoveAllBuffs ********************************

// ********** Begin Class UAbilitiesComponent Function RemoveBuff **********************************
struct Z_Construct_UFunction_UAbilitiesComponent_RemoveBuff_Statics
{
	struct AbilitiesComponent_eventRemoveBuff_Parms
	{
		FBuffCount Buff;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AbilityComponent|Buffs" },
		{ "ModuleRelativePath", "Public/AbilitiesComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function RemoveBuff constinit property declarations ****************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Buff;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function RemoveBuff constinit property declarations ******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function RemoveBuff Property Definitions ***************************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAbilitiesComponent_RemoveBuff_Statics::NewProp_Buff = { "Buff", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilitiesComponent_eventRemoveBuff_Parms, Buff), Z_Construct_UScriptStruct_FBuffCount, METADATA_PARAMS(0, nullptr) }; // 3926446658
void Z_Construct_UFunction_UAbilitiesComponent_RemoveBuff_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AbilitiesComponent_eventRemoveBuff_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAbilitiesComponent_RemoveBuff_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AbilitiesComponent_eventRemoveBuff_Parms), &Z_Construct_UFunction_UAbilitiesComponent_RemoveBuff_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAbilitiesComponent_RemoveBuff_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilitiesComponent_RemoveBuff_Statics::NewProp_Buff,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilitiesComponent_RemoveBuff_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilitiesComponent_RemoveBuff_Statics::PropPointers) < 2048);
// ********** End Function RemoveBuff Property Definitions *****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilitiesComponent_RemoveBuff_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAbilitiesComponent, nullptr, "RemoveBuff", 	Z_Construct_UFunction_UAbilitiesComponent_RemoveBuff_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilitiesComponent_RemoveBuff_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UAbilitiesComponent_RemoveBuff_Statics::AbilitiesComponent_eventRemoveBuff_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilitiesComponent_RemoveBuff_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAbilitiesComponent_RemoveBuff_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAbilitiesComponent_RemoveBuff_Statics::AbilitiesComponent_eventRemoveBuff_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAbilitiesComponent_RemoveBuff()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAbilitiesComponent_RemoveBuff_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAbilitiesComponent::execRemoveBuff)
{
	P_GET_STRUCT(FBuffCount,Z_Param_Buff);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->RemoveBuff(Z_Param_Buff);
	P_NATIVE_END;
}
// ********** End Class UAbilitiesComponent Function RemoveBuff ************************************

// ********** Begin Class UAbilitiesComponent Function RemoveBuffs *********************************
struct Z_Construct_UFunction_UAbilitiesComponent_RemoveBuffs_Statics
{
	struct AbilitiesComponent_eventRemoveBuffs_Parms
	{
		TSet<FBuffCount> InBuffs;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AbilityComponent|Buffs" },
		{ "ModuleRelativePath", "Public/AbilitiesComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InBuffs_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function RemoveBuffs constinit property declarations ***************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_InBuffs_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_InBuffs;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function RemoveBuffs constinit property declarations *****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function RemoveBuffs Property Definitions **************************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAbilitiesComponent_RemoveBuffs_Statics::NewProp_InBuffs_ElementProp = { "InBuffs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FBuffCount, METADATA_PARAMS(0, nullptr) }; // 3926446658
static_assert(TModels_V<CGetTypeHashable, FBuffCount>, "The structure 'FBuffCount' is used in a TSet but does not have a GetValueTypeHash defined");
const UECodeGen_Private::FSetPropertyParams Z_Construct_UFunction_UAbilitiesComponent_RemoveBuffs_Statics::NewProp_InBuffs = { "InBuffs", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilitiesComponent_eventRemoveBuffs_Parms, InBuffs), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InBuffs_MetaData), NewProp_InBuffs_MetaData) }; // 3926446658
void Z_Construct_UFunction_UAbilitiesComponent_RemoveBuffs_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AbilitiesComponent_eventRemoveBuffs_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAbilitiesComponent_RemoveBuffs_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AbilitiesComponent_eventRemoveBuffs_Parms), &Z_Construct_UFunction_UAbilitiesComponent_RemoveBuffs_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAbilitiesComponent_RemoveBuffs_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilitiesComponent_RemoveBuffs_Statics::NewProp_InBuffs_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilitiesComponent_RemoveBuffs_Statics::NewProp_InBuffs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilitiesComponent_RemoveBuffs_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilitiesComponent_RemoveBuffs_Statics::PropPointers) < 2048);
// ********** End Function RemoveBuffs Property Definitions ****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilitiesComponent_RemoveBuffs_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAbilitiesComponent, nullptr, "RemoveBuffs", 	Z_Construct_UFunction_UAbilitiesComponent_RemoveBuffs_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilitiesComponent_RemoveBuffs_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UAbilitiesComponent_RemoveBuffs_Statics::AbilitiesComponent_eventRemoveBuffs_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420405, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilitiesComponent_RemoveBuffs_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAbilitiesComponent_RemoveBuffs_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAbilitiesComponent_RemoveBuffs_Statics::AbilitiesComponent_eventRemoveBuffs_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAbilitiesComponent_RemoveBuffs()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAbilitiesComponent_RemoveBuffs_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAbilitiesComponent::execRemoveBuffs)
{
	P_GET_TSET_REF(FBuffCount,Z_Param_Out_InBuffs);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->RemoveBuffs(Z_Param_Out_InBuffs);
	P_NATIVE_END;
}
// ********** End Class UAbilitiesComponent Function RemoveBuffs ***********************************

// ********** Begin Class UAbilitiesComponent Function RemoveBuffsByTag ****************************
struct Z_Construct_UFunction_UAbilitiesComponent_RemoveBuffsByTag_Statics
{
	struct AbilitiesComponent_eventRemoveBuffsByTag_Parms
	{
		FGameplayTag Tag;
		bool bExact;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AbilityComponent|Buffs" },
		{ "Comment", "// Remove all buffs with \"Tag\" inside Identifying tags\n" },
		{ "CPP_Default_bExact", "false" },
		{ "ModuleRelativePath", "Public/AbilitiesComponent.h" },
		{ "ToolTip", "Remove all buffs with \"Tag\" inside Identifying tags" },
	};
#endif // WITH_METADATA

// ********** Begin Function RemoveBuffsByTag constinit property declarations **********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Tag;
	static void NewProp_bExact_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bExact;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function RemoveBuffsByTag constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function RemoveBuffsByTag Property Definitions *********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAbilitiesComponent_RemoveBuffsByTag_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilitiesComponent_eventRemoveBuffsByTag_Parms, Tag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 517357616
void Z_Construct_UFunction_UAbilitiesComponent_RemoveBuffsByTag_Statics::NewProp_bExact_SetBit(void* Obj)
{
	((AbilitiesComponent_eventRemoveBuffsByTag_Parms*)Obj)->bExact = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAbilitiesComponent_RemoveBuffsByTag_Statics::NewProp_bExact = { "bExact", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AbilitiesComponent_eventRemoveBuffsByTag_Parms), &Z_Construct_UFunction_UAbilitiesComponent_RemoveBuffsByTag_Statics::NewProp_bExact_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UAbilitiesComponent_RemoveBuffsByTag_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AbilitiesComponent_eventRemoveBuffsByTag_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAbilitiesComponent_RemoveBuffsByTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AbilitiesComponent_eventRemoveBuffsByTag_Parms), &Z_Construct_UFunction_UAbilitiesComponent_RemoveBuffsByTag_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAbilitiesComponent_RemoveBuffsByTag_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilitiesComponent_RemoveBuffsByTag_Statics::NewProp_Tag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilitiesComponent_RemoveBuffsByTag_Statics::NewProp_bExact,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilitiesComponent_RemoveBuffsByTag_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilitiesComponent_RemoveBuffsByTag_Statics::PropPointers) < 2048);
// ********** End Function RemoveBuffsByTag Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilitiesComponent_RemoveBuffsByTag_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAbilitiesComponent, nullptr, "RemoveBuffsByTag", 	Z_Construct_UFunction_UAbilitiesComponent_RemoveBuffsByTag_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilitiesComponent_RemoveBuffsByTag_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UAbilitiesComponent_RemoveBuffsByTag_Statics::AbilitiesComponent_eventRemoveBuffsByTag_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilitiesComponent_RemoveBuffsByTag_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAbilitiesComponent_RemoveBuffsByTag_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAbilitiesComponent_RemoveBuffsByTag_Statics::AbilitiesComponent_eventRemoveBuffsByTag_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAbilitiesComponent_RemoveBuffsByTag()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAbilitiesComponent_RemoveBuffsByTag_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAbilitiesComponent::execRemoveBuffsByTag)
{
	P_GET_STRUCT(FGameplayTag,Z_Param_Tag);
	P_GET_UBOOL(Z_Param_bExact);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->RemoveBuffsByTag(Z_Param_Tag,Z_Param_bExact);
	P_NATIVE_END;
}
// ********** End Class UAbilitiesComponent Function RemoveBuffsByTag ******************************

// ********** Begin Class UAbilitiesComponent Function RemoveTag ***********************************
struct Z_Construct_UFunction_UAbilitiesComponent_RemoveTag_Statics
{
	struct AbilitiesComponent_eventRemoveTag_Parms
	{
		FGameplayTag NewTag;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AbilityComponent|Tags" },
		{ "ModuleRelativePath", "Public/AbilitiesComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewTag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function RemoveTag constinit property declarations *****************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewTag;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function RemoveTag constinit property declarations *******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function RemoveTag Property Definitions ****************************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAbilitiesComponent_RemoveTag_Statics::NewProp_NewTag = { "NewTag", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilitiesComponent_eventRemoveTag_Parms, NewTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewTag_MetaData), NewProp_NewTag_MetaData) }; // 517357616
void Z_Construct_UFunction_UAbilitiesComponent_RemoveTag_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AbilitiesComponent_eventRemoveTag_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAbilitiesComponent_RemoveTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AbilitiesComponent_eventRemoveTag_Parms), &Z_Construct_UFunction_UAbilitiesComponent_RemoveTag_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAbilitiesComponent_RemoveTag_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilitiesComponent_RemoveTag_Statics::NewProp_NewTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilitiesComponent_RemoveTag_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilitiesComponent_RemoveTag_Statics::PropPointers) < 2048);
// ********** End Function RemoveTag Property Definitions ******************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilitiesComponent_RemoveTag_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAbilitiesComponent, nullptr, "RemoveTag", 	Z_Construct_UFunction_UAbilitiesComponent_RemoveTag_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilitiesComponent_RemoveTag_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UAbilitiesComponent_RemoveTag_Statics::AbilitiesComponent_eventRemoveTag_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilitiesComponent_RemoveTag_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAbilitiesComponent_RemoveTag_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAbilitiesComponent_RemoveTag_Statics::AbilitiesComponent_eventRemoveTag_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAbilitiesComponent_RemoveTag()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAbilitiesComponent_RemoveTag_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAbilitiesComponent::execRemoveTag)
{
	P_GET_STRUCT_REF(FGameplayTag,Z_Param_Out_NewTag);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->RemoveTag(Z_Param_Out_NewTag);
	P_NATIVE_END;
}
// ********** End Class UAbilitiesComponent Function RemoveTag *************************************

// ********** Begin Class UAbilitiesComponent Function RemoveTags **********************************
struct Z_Construct_UFunction_UAbilitiesComponent_RemoveTags_Statics
{
	struct AbilitiesComponent_eventRemoveTags_Parms
	{
		FGameplayTagContainer NewTags;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AbilityComponent|Tags" },
		{ "ModuleRelativePath", "Public/AbilitiesComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewTags_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function RemoveTags constinit property declarations ****************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewTags;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function RemoveTags constinit property declarations ******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function RemoveTags Property Definitions ***************************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAbilitiesComponent_RemoveTags_Statics::NewProp_NewTags = { "NewTags", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilitiesComponent_eventRemoveTags_Parms, NewTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewTags_MetaData), NewProp_NewTags_MetaData) }; // 3438578166
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAbilitiesComponent_RemoveTags_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilitiesComponent_RemoveTags_Statics::NewProp_NewTags,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilitiesComponent_RemoveTags_Statics::PropPointers) < 2048);
// ********** End Function RemoveTags Property Definitions *****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilitiesComponent_RemoveTags_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAbilitiesComponent, nullptr, "RemoveTags", 	Z_Construct_UFunction_UAbilitiesComponent_RemoveTags_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilitiesComponent_RemoveTags_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UAbilitiesComponent_RemoveTags_Statics::AbilitiesComponent_eventRemoveTags_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilitiesComponent_RemoveTags_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAbilitiesComponent_RemoveTags_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAbilitiesComponent_RemoveTags_Statics::AbilitiesComponent_eventRemoveTags_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAbilitiesComponent_RemoveTags()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAbilitiesComponent_RemoveTags_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAbilitiesComponent::execRemoveTags)
{
	P_GET_STRUCT_REF(FGameplayTagContainer,Z_Param_Out_NewTags);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RemoveTags(Z_Param_Out_NewTags);
	P_NATIVE_END;
}
// ********** End Class UAbilitiesComponent Function RemoveTags ************************************

// ********** Begin Class UAbilitiesComponent Function ResetBuffs **********************************
struct Z_Construct_UFunction_UAbilitiesComponent_ResetBuffs_Statics
{
	struct AbilitiesComponent_eventResetBuffs_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AbilityComponent|Buffs" },
		{ "ModuleRelativePath", "Public/AbilitiesComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function ResetBuffs constinit property declarations ****************************
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ResetBuffs constinit property declarations ******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ResetBuffs Property Definitions ***************************************
void Z_Construct_UFunction_UAbilitiesComponent_ResetBuffs_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AbilitiesComponent_eventResetBuffs_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAbilitiesComponent_ResetBuffs_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AbilitiesComponent_eventResetBuffs_Parms), &Z_Construct_UFunction_UAbilitiesComponent_ResetBuffs_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAbilitiesComponent_ResetBuffs_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilitiesComponent_ResetBuffs_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilitiesComponent_ResetBuffs_Statics::PropPointers) < 2048);
// ********** End Function ResetBuffs Property Definitions *****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilitiesComponent_ResetBuffs_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAbilitiesComponent, nullptr, "ResetBuffs", 	Z_Construct_UFunction_UAbilitiesComponent_ResetBuffs_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilitiesComponent_ResetBuffs_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UAbilitiesComponent_ResetBuffs_Statics::AbilitiesComponent_eventResetBuffs_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilitiesComponent_ResetBuffs_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAbilitiesComponent_ResetBuffs_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAbilitiesComponent_ResetBuffs_Statics::AbilitiesComponent_eventResetBuffs_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAbilitiesComponent_ResetBuffs()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAbilitiesComponent_ResetBuffs_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAbilitiesComponent::execResetBuffs)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->ResetBuffs();
	P_NATIVE_END;
}
// ********** End Class UAbilitiesComponent Function ResetBuffs ************************************

// ********** Begin Class UAbilitiesComponent Function UnequipAbilities ****************************
struct Z_Construct_UFunction_UAbilitiesComponent_UnequipAbilities_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AbilityComponent|Abilities" },
		{ "ModuleRelativePath", "Public/AbilitiesComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function UnequipAbilities constinit property declarations **********************
// ********** End Function UnequipAbilities constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilitiesComponent_UnequipAbilities_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAbilitiesComponent, nullptr, "UnequipAbilities", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilitiesComponent_UnequipAbilities_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAbilitiesComponent_UnequipAbilities_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UAbilitiesComponent_UnequipAbilities()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAbilitiesComponent_UnequipAbilities_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAbilitiesComponent::execUnequipAbilities)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UnequipAbilities();
	P_NATIVE_END;
}
// ********** End Class UAbilitiesComponent Function UnequipAbilities ******************************

// ********** Begin Class UAbilitiesComponent Function UnequipAbility ******************************
struct Z_Construct_UFunction_UAbilitiesComponent_UnequipAbility_Statics
{
	struct AbilitiesComponent_eventUnequipAbility_Parms
	{
		TSubclassOf<UAbility> Class;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AbilityComponent|Abilities" },
		{ "ModuleRelativePath", "Public/AbilitiesComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function UnequipAbility constinit property declarations ************************
	static const UECodeGen_Private::FClassPropertyParams NewProp_Class;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function UnequipAbility constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function UnequipAbility Property Definitions ***********************************
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UAbilitiesComponent_UnequipAbility_Statics::NewProp_Class = { "Class", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilitiesComponent_eventUnequipAbility_Parms, Class), Z_Construct_UClass_UClass_NoRegister, Z_Construct_UClass_UAbility_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAbilitiesComponent_UnequipAbility_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilitiesComponent_UnequipAbility_Statics::NewProp_Class,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilitiesComponent_UnequipAbility_Statics::PropPointers) < 2048);
// ********** End Function UnequipAbility Property Definitions *************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilitiesComponent_UnequipAbility_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAbilitiesComponent, nullptr, "UnequipAbility", 	Z_Construct_UFunction_UAbilitiesComponent_UnequipAbility_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilitiesComponent_UnequipAbility_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UAbilitiesComponent_UnequipAbility_Statics::AbilitiesComponent_eventUnequipAbility_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilitiesComponent_UnequipAbility_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAbilitiesComponent_UnequipAbility_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAbilitiesComponent_UnequipAbility_Statics::AbilitiesComponent_eventUnequipAbility_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAbilitiesComponent_UnequipAbility()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAbilitiesComponent_UnequipAbility_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAbilitiesComponent::execUnequipAbility)
{
	P_GET_OBJECT(UClass,Z_Param_Class);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UnequipAbility(Z_Param_Class);
	P_NATIVE_END;
}
// ********** End Class UAbilitiesComponent Function UnequipAbility ********************************

// ********** Begin Class UAbilitiesComponent ******************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UAbilitiesComponent;
UClass* UAbilitiesComponent::GetPrivateStaticClass()
{
	using TClass = UAbilitiesComponent;
	if (!Z_Registration_Info_UClass_UAbilitiesComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("AbilitiesComponent"),
			Z_Registration_Info_UClass_UAbilitiesComponent.InnerSingleton,
			StaticRegisterNativesUAbilitiesComponent,
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
	return Z_Registration_Info_UClass_UAbilitiesComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_UAbilitiesComponent_NoRegister()
{
	return UAbilitiesComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UAbilitiesComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Gameplay" },
		{ "Comment", "/** Component that owns abilities and ability effects */" },
		{ "IncludePath", "AbilitiesComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/AbilitiesComponent.h" },
		{ "ToolTip", "Component that owns abilities and ability effects" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Tags_MetaData[] = {
		{ "Category", "Abilities" },
		{ "Comment", "/** Tags that the system must have to able to execute an ability. Can only be edited from server. */" },
		{ "ModuleRelativePath", "Public/AbilitiesComponent.h" },
		{ "ToolTip", "Tags that the system must have to able to execute an ability. Can only be edited from server." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InitialAbilities_MetaData[] = {
		{ "Category", "Abilities" },
		{ "Comment", "/** The abilities that the character will have at first activate */" },
		{ "DisplayName", "Abilities" },
		{ "ModuleRelativePath", "Public/AbilitiesComponent.h" },
		{ "ToolTip", "The abilities that the character will have at first activate" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EquippedAbilities_MetaData[] = {
		{ "Comment", "/** List of abilities that can be used by the player. This list can change in runtime. */" },
		{ "ModuleRelativePath", "Public/AbilitiesComponent.h" },
		{ "ToolTip", "List of abilities that can be used by the player. This list can change in runtime." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AllAbilities_MetaData[] = {
		{ "ModuleRelativePath", "Public/AbilitiesComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilityToInstance_MetaData[] = {
		{ "ModuleRelativePath", "Public/AbilitiesComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TickingAbilities_MetaData[] = {
		{ "Comment", "/** Cached list of abilities that will tick */" },
		{ "ModuleRelativePath", "Public/AbilitiesComponent.h" },
		{ "ToolTip", "Cached list of abilities that will tick" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Cooldowns_MetaData[] = {
		{ "ModuleRelativePath", "Public/AbilitiesComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Buffs_MetaData[] = {
		{ "Comment", "/** Begin BUFFS */// Map containing all buffs and their amounts (if stackable)\n" },
		{ "ModuleRelativePath", "Public/AbilitiesComponent.h" },
		{ "ToolTip", "Begin BUFFS // Map containing all buffs and their amounts (if stackable)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BuffsByClass_MetaData[] = {
		{ "ModuleRelativePath", "Public/AbilitiesComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InitialBuffs_MetaData[] = {
		{ "Category", "Buffs" },
		{ "Comment", "// Buffs applied at initialize for the first time\n" },
		{ "DisplayName", "Buffs" },
		{ "ModuleRelativePath", "Public/AbilitiesComponent.h" },
		{ "ToolTip", "Buffs applied at initialize for the first time" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BuffLifetimes_MetaData[] = {
		{ "ModuleRelativePath", "Public/AbilitiesComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PressedInputs_MetaData[] = {
		{ "Comment", "/** End BUFFS */" },
		{ "ModuleRelativePath", "Public/AbilitiesComponent.h" },
		{ "ToolTip", "End BUFFS" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsTearingDown_MetaData[] = {
		{ "ModuleRelativePath", "Public/AbilitiesComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnBuffsApplied_MetaData[] = {
		{ "Category", "Buffs" },
		{ "Comment", "/** Begin EVENTS */" },
		{ "ModuleRelativePath", "Public/AbilitiesComponent.h" },
		{ "ToolTip", "Begin EVENTS" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnBuffsRemoved_MetaData[] = {
		{ "Category", "Buffs" },
		{ "ModuleRelativePath", "Public/AbilitiesComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnTagsChanged_MetaData[] = {
		{ "Category", "Buffs" },
		{ "ModuleRelativePath", "Public/AbilitiesComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UAbilitiesComponent constinit property declarations **********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Tags;
	static const UECodeGen_Private::FClassPropertyParams NewProp_InitialAbilities_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_InitialAbilities;
	static const UECodeGen_Private::FClassPropertyParams NewProp_EquippedAbilities_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_EquippedAbilities;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AllAbilities_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AllAbilities;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AbilityToInstance_ValueProp;
	static const UECodeGen_Private::FClassPropertyParams NewProp_AbilityToInstance_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_AbilityToInstance;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TickingAbilities_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_TickingAbilities;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Cooldowns;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Buffs_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_Buffs;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BuffsByClass_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_BuffsByClass;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InitialBuffs_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_InitialBuffs;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BuffLifetimes;
	static const UECodeGen_Private::FClassPropertyParams NewProp_PressedInputs_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_PressedInputs_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_PressedInputs;
	static void NewProp_bIsTearingDown_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsTearingDown;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnBuffsApplied;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnBuffsRemoved;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnTagsChanged;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UAbilitiesComponent constinit property declarations ************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("AddRemainingCooldown"), .Pointer = &UAbilitiesComponent::execAddRemainingCooldown },
		{ .NameUTF8 = UTF8TEXT("AddRemainingCooldowns"), .Pointer = &UAbilitiesComponent::execAddRemainingCooldowns },
		{ .NameUTF8 = UTF8TEXT("AddTag"), .Pointer = &UAbilitiesComponent::execAddTag },
		{ .NameUTF8 = UTF8TEXT("AddTags"), .Pointer = &UAbilitiesComponent::execAddTags },
		{ .NameUTF8 = UTF8TEXT("ApplyBuff"), .Pointer = &UAbilitiesComponent::execApplyBuff },
		{ .NameUTF8 = UTF8TEXT("ApplyBuffs"), .Pointer = &UAbilitiesComponent::execApplyBuffs },
		{ .NameUTF8 = UTF8TEXT("ApplySingleBuffs"), .Pointer = &UAbilitiesComponent::execApplySingleBuffs },
		{ .NameUTF8 = UTF8TEXT("CanActivate"), .Pointer = &UAbilitiesComponent::execCanActivate },
		{ .NameUTF8 = UTF8TEXT("CanCast"), .Pointer = &UAbilitiesComponent::execCanCast },
		{ .NameUTF8 = UTF8TEXT("Cancel"), .Pointer = &UAbilitiesComponent::execCancel },
		{ .NameUTF8 = UTF8TEXT("CancelAll"), .Pointer = &UAbilitiesComponent::execCancelAll },
		{ .NameUTF8 = UTF8TEXT("CancelInput"), .Pointer = &UAbilitiesComponent::execCancelInput },
		{ .NameUTF8 = UTF8TEXT("CastAbility"), .Pointer = &UAbilitiesComponent::execCastAbility },
		{ .NameUTF8 = UTF8TEXT("ClientOnBuffsChanged"), .Pointer = &UAbilitiesComponent::execClientOnBuffsChanged },
		{ .NameUTF8 = UTF8TEXT("DebugPrint"), .Pointer = &UAbilitiesComponent::execDebugPrint },
		{ .NameUTF8 = UTF8TEXT("EquipAbilities"), .Pointer = &UAbilitiesComponent::execEquipAbilities },
		{ .NameUTF8 = UTF8TEXT("EquipAbility"), .Pointer = &UAbilitiesComponent::execEquipAbility },
		{ .NameUTF8 = UTF8TEXT("GetAllBuffs"), .Pointer = &UAbilitiesComponent::execGetAllBuffs },
		{ .NameUTF8 = UTF8TEXT("GetBuffCount"), .Pointer = &UAbilitiesComponent::execGetBuffCount },
		{ .NameUTF8 = UTF8TEXT("GetBuffRemainingLifetime"), .Pointer = &UAbilitiesComponent::execGetBuffRemainingLifetime },
		{ .NameUTF8 = UTF8TEXT("GetBuffsOfClass"), .Pointer = &UAbilitiesComponent::execGetBuffsOfClass },
		{ .NameUTF8 = UTF8TEXT("GetCooldownDuration"), .Pointer = &UAbilitiesComponent::execGetCooldownDuration },
		{ .NameUTF8 = UTF8TEXT("GetEquippedAbilities"), .Pointer = &UAbilitiesComponent::execGetEquippedAbilities },
		{ .NameUTF8 = UTF8TEXT("GetEquippedAbility"), .Pointer = &UAbilitiesComponent::execGetEquippedAbility },
		{ .NameUTF8 = UTF8TEXT("GetEquippedAbilityByName"), .Pointer = &UAbilitiesComponent::execGetEquippedAbilityByName },
		{ .NameUTF8 = UTF8TEXT("GetNumBuffs"), .Pointer = &UAbilitiesComponent::execGetNumBuffs },
		{ .NameUTF8 = UTF8TEXT("GetPressedAbilityFromInput"), .Pointer = &UAbilitiesComponent::execGetPressedAbilityFromInput },
		{ .NameUTF8 = UTF8TEXT("GetRemainingCooldown"), .Pointer = &UAbilitiesComponent::execGetRemainingCooldown },
		{ .NameUTF8 = UTF8TEXT("HasAuthority"), .Pointer = &UAbilitiesComponent::execHasAuthority },
		{ .NameUTF8 = UTF8TEXT("HasBuff"), .Pointer = &UAbilitiesComponent::execHasBuff },
		{ .NameUTF8 = UTF8TEXT("HasBuffOfClass"), .Pointer = &UAbilitiesComponent::execHasBuffOfClass },
		{ .NameUTF8 = UTF8TEXT("HasBuffs"), .Pointer = &UAbilitiesComponent::execHasBuffs },
		{ .NameUTF8 = UTF8TEXT("IsAnyInputPressed"), .Pointer = &UAbilitiesComponent::execIsAnyInputPressed },
		{ .NameUTF8 = UTF8TEXT("IsCoolingDown"), .Pointer = &UAbilitiesComponent::execIsCoolingDown },
		{ .NameUTF8 = UTF8TEXT("IsEquipped"), .Pointer = &UAbilitiesComponent::execIsEquipped },
		{ .NameUTF8 = UTF8TEXT("IsInputPressed"), .Pointer = &UAbilitiesComponent::execIsInputPressed },
		{ .NameUTF8 = UTF8TEXT("IsLocallyOwned"), .Pointer = &UAbilitiesComponent::execIsLocallyOwned },
		{ .NameUTF8 = UTF8TEXT("IsRunning"), .Pointer = &UAbilitiesComponent::execIsRunning },
		{ .NameUTF8 = UTF8TEXT("IsTearingDown"), .Pointer = &UAbilitiesComponent::execIsTearingDown },
		{ .NameUTF8 = UTF8TEXT("MCAddRemainingCooldowns"), .Pointer = &UAbilitiesComponent::execMCAddRemainingCooldowns },
		{ .NameUTF8 = UTF8TEXT("MCOnBuffsChanged"), .Pointer = &UAbilitiesComponent::execMCOnBuffsChanged },
		{ .NameUTF8 = UTF8TEXT("OnRep_AllAbilities"), .Pointer = &UAbilitiesComponent::execOnRep_AllAbilities },
		{ .NameUTF8 = UTF8TEXT("OnRep_Tags"), .Pointer = &UAbilitiesComponent::execOnRep_Tags },
		{ .NameUTF8 = UTF8TEXT("PressInput"), .Pointer = &UAbilitiesComponent::execPressInput },
		{ .NameUTF8 = UTF8TEXT("ReleaseInput"), .Pointer = &UAbilitiesComponent::execReleaseInput },
		{ .NameUTF8 = UTF8TEXT("ReleaseInputByClass"), .Pointer = &UAbilitiesComponent::execReleaseInputByClass },
		{ .NameUTF8 = UTF8TEXT("RemoveAllBuffs"), .Pointer = &UAbilitiesComponent::execRemoveAllBuffs },
		{ .NameUTF8 = UTF8TEXT("RemoveBuff"), .Pointer = &UAbilitiesComponent::execRemoveBuff },
		{ .NameUTF8 = UTF8TEXT("RemoveBuffs"), .Pointer = &UAbilitiesComponent::execRemoveBuffs },
		{ .NameUTF8 = UTF8TEXT("RemoveBuffsByTag"), .Pointer = &UAbilitiesComponent::execRemoveBuffsByTag },
		{ .NameUTF8 = UTF8TEXT("RemoveTag"), .Pointer = &UAbilitiesComponent::execRemoveTag },
		{ .NameUTF8 = UTF8TEXT("RemoveTags"), .Pointer = &UAbilitiesComponent::execRemoveTags },
		{ .NameUTF8 = UTF8TEXT("ResetBuffs"), .Pointer = &UAbilitiesComponent::execResetBuffs },
		{ .NameUTF8 = UTF8TEXT("UnequipAbilities"), .Pointer = &UAbilitiesComponent::execUnequipAbilities },
		{ .NameUTF8 = UTF8TEXT("UnequipAbility"), .Pointer = &UAbilitiesComponent::execUnequipAbility },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAbilitiesComponent_AddRemainingCooldown, "AddRemainingCooldown" }, // 1313244463
		{ &Z_Construct_UFunction_UAbilitiesComponent_AddRemainingCooldowns, "AddRemainingCooldowns" }, // 2421058006
		{ &Z_Construct_UFunction_UAbilitiesComponent_AddTag, "AddTag" }, // 2428409197
		{ &Z_Construct_UFunction_UAbilitiesComponent_AddTags, "AddTags" }, // 2375907284
		{ &Z_Construct_UFunction_UAbilitiesComponent_ApplyBuff, "ApplyBuff" }, // 1657837687
		{ &Z_Construct_UFunction_UAbilitiesComponent_ApplyBuffs, "ApplyBuffs" }, // 3351152831
		{ &Z_Construct_UFunction_UAbilitiesComponent_ApplySingleBuffs, "ApplySingleBuffs" }, // 2256698586
		{ &Z_Construct_UFunction_UAbilitiesComponent_CanActivate, "CanActivate" }, // 3222511780
		{ &Z_Construct_UFunction_UAbilitiesComponent_CanCast, "CanCast" }, // 1802257432
		{ &Z_Construct_UFunction_UAbilitiesComponent_Cancel, "Cancel" }, // 2556464175
		{ &Z_Construct_UFunction_UAbilitiesComponent_CancelAll, "CancelAll" }, // 1628396619
		{ &Z_Construct_UFunction_UAbilitiesComponent_CancelInput, "CancelInput" }, // 365899534
		{ &Z_Construct_UFunction_UAbilitiesComponent_CastAbility, "CastAbility" }, // 734089342
		{ &Z_Construct_UFunction_UAbilitiesComponent_ClientOnBuffsChanged, "ClientOnBuffsChanged" }, // 3988913124
		{ &Z_Construct_UFunction_UAbilitiesComponent_DebugPrint, "DebugPrint" }, // 2004494491
		{ &Z_Construct_UFunction_UAbilitiesComponent_EquipAbilities, "EquipAbilities" }, // 638360250
		{ &Z_Construct_UFunction_UAbilitiesComponent_EquipAbility, "EquipAbility" }, // 596747500
		{ &Z_Construct_UFunction_UAbilitiesComponent_GetAllBuffs, "GetAllBuffs" }, // 4051427122
		{ &Z_Construct_UFunction_UAbilitiesComponent_GetBuffCount, "GetBuffCount" }, // 2514256634
		{ &Z_Construct_UFunction_UAbilitiesComponent_GetBuffRemainingLifetime, "GetBuffRemainingLifetime" }, // 3875499148
		{ &Z_Construct_UFunction_UAbilitiesComponent_GetBuffsOfClass, "GetBuffsOfClass" }, // 4289471970
		{ &Z_Construct_UFunction_UAbilitiesComponent_GetCooldownDuration, "GetCooldownDuration" }, // 3170108708
		{ &Z_Construct_UFunction_UAbilitiesComponent_GetEquippedAbilities, "GetEquippedAbilities" }, // 236295380
		{ &Z_Construct_UFunction_UAbilitiesComponent_GetEquippedAbility, "GetEquippedAbility" }, // 1200013658
		{ &Z_Construct_UFunction_UAbilitiesComponent_GetEquippedAbilityByName, "GetEquippedAbilityByName" }, // 4174341302
		{ &Z_Construct_UFunction_UAbilitiesComponent_GetNumBuffs, "GetNumBuffs" }, // 1851317458
		{ &Z_Construct_UFunction_UAbilitiesComponent_GetPressedAbilityFromInput, "GetPressedAbilityFromInput" }, // 3694956468
		{ &Z_Construct_UFunction_UAbilitiesComponent_GetRemainingCooldown, "GetRemainingCooldown" }, // 3058120849
		{ &Z_Construct_UFunction_UAbilitiesComponent_HasAuthority, "HasAuthority" }, // 3847811245
		{ &Z_Construct_UFunction_UAbilitiesComponent_HasBuff, "HasBuff" }, // 2404777375
		{ &Z_Construct_UFunction_UAbilitiesComponent_HasBuffOfClass, "HasBuffOfClass" }, // 2330097115
		{ &Z_Construct_UFunction_UAbilitiesComponent_HasBuffs, "HasBuffs" }, // 3714008538
		{ &Z_Construct_UFunction_UAbilitiesComponent_IsAnyInputPressed, "IsAnyInputPressed" }, // 3308106365
		{ &Z_Construct_UFunction_UAbilitiesComponent_IsCoolingDown, "IsCoolingDown" }, // 385921593
		{ &Z_Construct_UFunction_UAbilitiesComponent_IsEquipped, "IsEquipped" }, // 2334620125
		{ &Z_Construct_UFunction_UAbilitiesComponent_IsInputPressed, "IsInputPressed" }, // 244586945
		{ &Z_Construct_UFunction_UAbilitiesComponent_IsLocallyOwned, "IsLocallyOwned" }, // 2114702428
		{ &Z_Construct_UFunction_UAbilitiesComponent_IsRunning, "IsRunning" }, // 3686250513
		{ &Z_Construct_UFunction_UAbilitiesComponent_IsTearingDown, "IsTearingDown" }, // 282311997
		{ &Z_Construct_UFunction_UAbilitiesComponent_MCAddRemainingCooldowns, "MCAddRemainingCooldowns" }, // 3821921643
		{ &Z_Construct_UFunction_UAbilitiesComponent_MCOnBuffsChanged, "MCOnBuffsChanged" }, // 1389348008
		{ &Z_Construct_UFunction_UAbilitiesComponent_OnRep_AllAbilities, "OnRep_AllAbilities" }, // 562317220
		{ &Z_Construct_UFunction_UAbilitiesComponent_OnRep_Tags, "OnRep_Tags" }, // 3158481076
		{ &Z_Construct_UFunction_UAbilitiesComponent_PressInput, "PressInput" }, // 1213946744
		{ &Z_Construct_UFunction_UAbilitiesComponent_ReleaseInput, "ReleaseInput" }, // 2550682317
		{ &Z_Construct_UFunction_UAbilitiesComponent_ReleaseInputByClass, "ReleaseInputByClass" }, // 1293579997
		{ &Z_Construct_UFunction_UAbilitiesComponent_RemoveAllBuffs, "RemoveAllBuffs" }, // 222261860
		{ &Z_Construct_UFunction_UAbilitiesComponent_RemoveBuff, "RemoveBuff" }, // 3415900990
		{ &Z_Construct_UFunction_UAbilitiesComponent_RemoveBuffs, "RemoveBuffs" }, // 3206633203
		{ &Z_Construct_UFunction_UAbilitiesComponent_RemoveBuffsByTag, "RemoveBuffsByTag" }, // 2837056216
		{ &Z_Construct_UFunction_UAbilitiesComponent_RemoveTag, "RemoveTag" }, // 3990116904
		{ &Z_Construct_UFunction_UAbilitiesComponent_RemoveTags, "RemoveTags" }, // 1714685999
		{ &Z_Construct_UFunction_UAbilitiesComponent_ResetBuffs, "ResetBuffs" }, // 3656717432
		{ &Z_Construct_UFunction_UAbilitiesComponent_UnequipAbilities, "UnequipAbilities" }, // 1450553249
		{ &Z_Construct_UFunction_UAbilitiesComponent_UnequipAbility, "UnequipAbility" }, // 997829199
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAbilitiesComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UAbilitiesComponent_Statics

// ********** Begin Class UAbilitiesComponent Property Definitions *********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAbilitiesComponent_Statics::NewProp_Tags = { "Tags", "OnRep_Tags", (EPropertyFlags)0x0020080100010035, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAbilitiesComponent, Tags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Tags_MetaData), NewProp_Tags_MetaData) }; // 3438578166
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UAbilitiesComponent_Statics::NewProp_InitialAbilities_ElementProp = { "InitialAbilities", nullptr, (EPropertyFlags)0x0004000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass_NoRegister, Z_Construct_UClass_UAbility_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_UAbilitiesComponent_Statics::NewProp_InitialAbilities = { "InitialAbilities", nullptr, (EPropertyFlags)0x0024080000010001, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAbilitiesComponent, InitialAbilities), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InitialAbilities_MetaData), NewProp_InitialAbilities_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UAbilitiesComponent_Statics::NewProp_EquippedAbilities_ElementProp = { "EquippedAbilities", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass_NoRegister, Z_Construct_UClass_UAbility_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_UAbilitiesComponent_Statics::NewProp_EquippedAbilities = { "EquippedAbilities", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAbilitiesComponent, EquippedAbilities), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EquippedAbilities_MetaData), NewProp_EquippedAbilities_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAbilitiesComponent_Statics::NewProp_AllAbilities_Inner = { "AllAbilities", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UAbility_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAbilitiesComponent_Statics::NewProp_AllAbilities = { "AllAbilities", "OnRep_AllAbilities", (EPropertyFlags)0x0020080100000020, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAbilitiesComponent, AllAbilities), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AllAbilities_MetaData), NewProp_AllAbilities_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAbilitiesComponent_Statics::NewProp_AbilityToInstance_ValueProp = { "AbilityToInstance", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UAbility_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UAbilitiesComponent_Statics::NewProp_AbilityToInstance_Key_KeyProp = { "AbilityToInstance_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass_NoRegister, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UAbilitiesComponent_Statics::NewProp_AbilityToInstance = { "AbilityToInstance", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAbilitiesComponent, AbilityToInstance), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilityToInstance_MetaData), NewProp_AbilityToInstance_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAbilitiesComponent_Statics::NewProp_TickingAbilities_ElementProp = { "TickingAbilities", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UAbility_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_UAbilitiesComponent_Statics::NewProp_TickingAbilities = { "TickingAbilities", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAbilitiesComponent, TickingAbilities), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TickingAbilities_MetaData), NewProp_TickingAbilities_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAbilitiesComponent_Statics::NewProp_Cooldowns = { "Cooldowns", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAbilitiesComponent, Cooldowns), Z_Construct_UScriptStruct_FAbilitiesCooldownCounter, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Cooldowns_MetaData), NewProp_Cooldowns_MetaData) }; // 618183346
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAbilitiesComponent_Statics::NewProp_Buffs_ElementProp = { "Buffs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FBuffCount, METADATA_PARAMS(0, nullptr) }; // 3926446658
static_assert(TModels_V<CGetTypeHashable, FBuffCount>, "The structure 'FBuffCount' is used in a TSet but does not have a GetValueTypeHash defined");
const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_UAbilitiesComponent_Statics::NewProp_Buffs = { "Buffs", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAbilitiesComponent, Buffs), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Buffs_MetaData), NewProp_Buffs_MetaData) }; // 3926446658
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAbilitiesComponent_Statics::NewProp_BuffsByClass_ElementProp = { "BuffsByClass", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FBuffTypeContainer, METADATA_PARAMS(0, nullptr) }; // 1686094618
static_assert(TModels_V<CGetTypeHashable, FBuffTypeContainer>, "The structure 'FBuffTypeContainer' is used in a TSet but does not have a GetValueTypeHash defined");
const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_UAbilitiesComponent_Statics::NewProp_BuffsByClass = { "BuffsByClass", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAbilitiesComponent, BuffsByClass), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BuffsByClass_MetaData), NewProp_BuffsByClass_MetaData) }; // 1686094618
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAbilitiesComponent_Statics::NewProp_InitialBuffs_ElementProp = { "InitialBuffs", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FBuffCount, METADATA_PARAMS(0, nullptr) }; // 3926446658
static_assert(TModels_V<CGetTypeHashable, FBuffCount>, "The structure 'FBuffCount' is used in a TSet but does not have a GetValueTypeHash defined");
const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_UAbilitiesComponent_Statics::NewProp_InitialBuffs = { "InitialBuffs", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAbilitiesComponent, InitialBuffs), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InitialBuffs_MetaData), NewProp_InitialBuffs_MetaData) }; // 3926446658
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAbilitiesComponent_Statics::NewProp_BuffLifetimes = { "BuffLifetimes", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAbilitiesComponent, BuffLifetimes), Z_Construct_UScriptStruct_FBuffsLifetimeCounter, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BuffLifetimes_MetaData), NewProp_BuffLifetimes_MetaData) }; // 2522989921
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UAbilitiesComponent_Statics::NewProp_PressedInputs_ValueProp = { "PressedInputs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UClass_NoRegister, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UAbilitiesComponent_Statics::NewProp_PressedInputs_Key_KeyProp = { "PressedInputs_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UAbilitiesComponent_Statics::NewProp_PressedInputs = { "PressedInputs", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAbilitiesComponent, PressedInputs), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PressedInputs_MetaData), NewProp_PressedInputs_MetaData) };
void Z_Construct_UClass_UAbilitiesComponent_Statics::NewProp_bIsTearingDown_SetBit(void* Obj)
{
	((UAbilitiesComponent*)Obj)->bIsTearingDown = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAbilitiesComponent_Statics::NewProp_bIsTearingDown = { "bIsTearingDown", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAbilitiesComponent), &Z_Construct_UClass_UAbilitiesComponent_Statics::NewProp_bIsTearingDown_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsTearingDown_MetaData), NewProp_bIsTearingDown_MetaData) };
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAbilitiesComponent_Statics::NewProp_OnBuffsApplied = { "OnBuffsApplied", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAbilitiesComponent, OnBuffsApplied), Z_Construct_UDelegateFunction_Abilities_OnBuffsAppliedDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnBuffsApplied_MetaData), NewProp_OnBuffsApplied_MetaData) }; // 1610635864
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAbilitiesComponent_Statics::NewProp_OnBuffsRemoved = { "OnBuffsRemoved", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAbilitiesComponent, OnBuffsRemoved), Z_Construct_UDelegateFunction_Abilities_OnBuffsRemovedDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnBuffsRemoved_MetaData), NewProp_OnBuffsRemoved_MetaData) }; // 3307522281
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAbilitiesComponent_Statics::NewProp_OnTagsChanged = { "OnTagsChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAbilitiesComponent, OnTagsChanged), Z_Construct_UDelegateFunction_Abilities_OnTagsChangedDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnTagsChanged_MetaData), NewProp_OnTagsChanged_MetaData) }; // 3668476816
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAbilitiesComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilitiesComponent_Statics::NewProp_Tags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilitiesComponent_Statics::NewProp_InitialAbilities_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilitiesComponent_Statics::NewProp_InitialAbilities,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilitiesComponent_Statics::NewProp_EquippedAbilities_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilitiesComponent_Statics::NewProp_EquippedAbilities,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilitiesComponent_Statics::NewProp_AllAbilities_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilitiesComponent_Statics::NewProp_AllAbilities,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilitiesComponent_Statics::NewProp_AbilityToInstance_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilitiesComponent_Statics::NewProp_AbilityToInstance_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilitiesComponent_Statics::NewProp_AbilityToInstance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilitiesComponent_Statics::NewProp_TickingAbilities_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilitiesComponent_Statics::NewProp_TickingAbilities,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilitiesComponent_Statics::NewProp_Cooldowns,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilitiesComponent_Statics::NewProp_Buffs_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilitiesComponent_Statics::NewProp_Buffs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilitiesComponent_Statics::NewProp_BuffsByClass_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilitiesComponent_Statics::NewProp_BuffsByClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilitiesComponent_Statics::NewProp_InitialBuffs_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilitiesComponent_Statics::NewProp_InitialBuffs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilitiesComponent_Statics::NewProp_BuffLifetimes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilitiesComponent_Statics::NewProp_PressedInputs_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilitiesComponent_Statics::NewProp_PressedInputs_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilitiesComponent_Statics::NewProp_PressedInputs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilitiesComponent_Statics::NewProp_bIsTearingDown,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilitiesComponent_Statics::NewProp_OnBuffsApplied,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilitiesComponent_Statics::NewProp_OnBuffsRemoved,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilitiesComponent_Statics::NewProp_OnTagsChanged,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAbilitiesComponent_Statics::PropPointers) < 2048);
// ********** End Class UAbilitiesComponent Property Definitions ***********************************
UObject* (*const Z_Construct_UClass_UAbilitiesComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_Abilities,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAbilitiesComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAbilitiesComponent_Statics::ClassParams = {
	&UAbilitiesComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UAbilitiesComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UAbilitiesComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAbilitiesComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UAbilitiesComponent_Statics::Class_MetaDataParams)
};
void UAbilitiesComponent::StaticRegisterNativesUAbilitiesComponent()
{
	UClass* Class = UAbilitiesComponent::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_UAbilitiesComponent_Statics::Funcs));
}
UClass* Z_Construct_UClass_UAbilitiesComponent()
{
	if (!Z_Registration_Info_UClass_UAbilitiesComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAbilitiesComponent.OuterSingleton, Z_Construct_UClass_UAbilitiesComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAbilitiesComponent.OuterSingleton;
}
#if VALIDATE_CLASS_REPS
void UAbilitiesComponent::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static FName Name_Tags(TEXT("Tags"));
	static FName Name_AllAbilities(TEXT("AllAbilities"));
	const bool bIsValid = true
		&& Name_Tags == ClassReps[(int32)ENetFields_Private::Tags].Property->GetFName()
		&& Name_AllAbilities == ClassReps[(int32)ENetFields_Private::AllAbilities].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UAbilitiesComponent"));
}
#endif
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UAbilitiesComponent);
UAbilitiesComponent::~UAbilitiesComponent() {}
// ********** End Class UAbilitiesComponent ********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Projects_Piperift_TestBench_Plugins_Abilities_Build_HostProject_Plugins_Abilities_Source_Abilities_Public_AbilitiesComponent_h__Script_Abilities_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EBuffOperation_StaticEnum, TEXT("EBuffOperation"), &Z_Registration_Info_UEnum_EBuffOperation, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 859437010U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FCancelInputReturn::StaticStruct, Z_Construct_UScriptStruct_FCancelInputReturn_Statics::NewStructOps, TEXT("CancelInputReturn"),&Z_Registration_Info_UScriptStruct_FCancelInputReturn, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCancelInputReturn), 1611480531U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAbilitiesComponent, UAbilitiesComponent::StaticClass, TEXT("UAbilitiesComponent"), &Z_Registration_Info_UClass_UAbilitiesComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAbilitiesComponent), 1183954032U) },
	};
}; // Z_CompiledInDeferFile_FID_Projects_Piperift_TestBench_Plugins_Abilities_Build_HostProject_Plugins_Abilities_Source_Abilities_Public_AbilitiesComponent_h__Script_Abilities_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_Piperift_TestBench_Plugins_Abilities_Build_HostProject_Plugins_Abilities_Source_Abilities_Public_AbilitiesComponent_h__Script_Abilities_750643979{
	TEXT("/Script/Abilities"),
	Z_CompiledInDeferFile_FID_Projects_Piperift_TestBench_Plugins_Abilities_Build_HostProject_Plugins_Abilities_Source_Abilities_Public_AbilitiesComponent_h__Script_Abilities_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_Piperift_TestBench_Plugins_Abilities_Build_HostProject_Plugins_Abilities_Source_Abilities_Public_AbilitiesComponent_h__Script_Abilities_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Projects_Piperift_TestBench_Plugins_Abilities_Build_HostProject_Plugins_Abilities_Source_Abilities_Public_AbilitiesComponent_h__Script_Abilities_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_Piperift_TestBench_Plugins_Abilities_Build_HostProject_Plugins_Abilities_Source_Abilities_Public_AbilitiesComponent_h__Script_Abilities_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Projects_Piperift_TestBench_Plugins_Abilities_Build_HostProject_Plugins_Abilities_Source_Abilities_Public_AbilitiesComponent_h__Script_Abilities_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_Piperift_TestBench_Plugins_Abilities_Build_HostProject_Plugins_Abilities_Source_Abilities_Public_AbilitiesComponent_h__Script_Abilities_Statics::EnumInfo),
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
