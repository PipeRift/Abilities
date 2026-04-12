// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Misc/StructContainerLibrary.h"
#include "Kismet/KismetSystemLibrary.h"
#include "Misc/StructContainer.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeStructContainerLibrary() {}

// ********** Begin Cross Module References ********************************************************
ABILITIES_API UClass* Z_Construct_UClass_UStructContainerLibrary();
ABILITIES_API UClass* Z_Construct_UClass_UStructContainerLibrary_NoRegister();
ABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FStructContainer();
COREUOBJECT_API UClass* Z_Construct_UClass_UScriptStruct_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FGenericStruct();
UPackage* Z_Construct_UPackage__Script_Abilities();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UStructContainerLibrary Function AddStruct *******************************
struct Z_Construct_UFunction_UStructContainerLibrary_AddStruct_Statics
{
	struct StructContainerLibrary_eventAddStruct_Parms
	{
		FStructContainer Container;
		FGenericStruct Struct;
		bool bReplace;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Abilities|Serialization" },
		{ "CPP_Default_bReplace", "true" },
		{ "CustomStructureParam", "Struct" },
		{ "CustomThunk", "true" },
		{ "ModuleRelativePath", "Public/Misc/StructContainerLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Struct_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function AddStruct constinit property declarations *****************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Container;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Struct;
	static void NewProp_bReplace_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bReplace;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function AddStruct constinit property declarations *******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function AddStruct Property Definitions ****************************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UStructContainerLibrary_AddStruct_Statics::NewProp_Container = { "Container", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StructContainerLibrary_eventAddStruct_Parms, Container), Z_Construct_UScriptStruct_FStructContainer, METADATA_PARAMS(0, nullptr) }; // 2073357063
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UStructContainerLibrary_AddStruct_Statics::NewProp_Struct = { "Struct", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StructContainerLibrary_eventAddStruct_Parms, Struct), Z_Construct_UScriptStruct_FGenericStruct, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Struct_MetaData), NewProp_Struct_MetaData) }; // 2927885635
void Z_Construct_UFunction_UStructContainerLibrary_AddStruct_Statics::NewProp_bReplace_SetBit(void* Obj)
{
	((StructContainerLibrary_eventAddStruct_Parms*)Obj)->bReplace = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UStructContainerLibrary_AddStruct_Statics::NewProp_bReplace = { "bReplace", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(StructContainerLibrary_eventAddStruct_Parms), &Z_Construct_UFunction_UStructContainerLibrary_AddStruct_Statics::NewProp_bReplace_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UStructContainerLibrary_AddStruct_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((StructContainerLibrary_eventAddStruct_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UStructContainerLibrary_AddStruct_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(StructContainerLibrary_eventAddStruct_Parms), &Z_Construct_UFunction_UStructContainerLibrary_AddStruct_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStructContainerLibrary_AddStruct_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStructContainerLibrary_AddStruct_Statics::NewProp_Container,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStructContainerLibrary_AddStruct_Statics::NewProp_Struct,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStructContainerLibrary_AddStruct_Statics::NewProp_bReplace,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStructContainerLibrary_AddStruct_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UStructContainerLibrary_AddStruct_Statics::PropPointers) < 2048);
// ********** End Function AddStruct Property Definitions ******************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStructContainerLibrary_AddStruct_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UStructContainerLibrary, nullptr, "AddStruct", 	Z_Construct_UFunction_UStructContainerLibrary_AddStruct_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UStructContainerLibrary_AddStruct_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UStructContainerLibrary_AddStruct_Statics::StructContainerLibrary_eventAddStruct_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04442401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStructContainerLibrary_AddStruct_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStructContainerLibrary_AddStruct_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UStructContainerLibrary_AddStruct_Statics::StructContainerLibrary_eventAddStruct_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UStructContainerLibrary_AddStruct()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStructContainerLibrary_AddStruct_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class UStructContainerLibrary Function AddStruct *********************************

// ********** Begin Class UStructContainerLibrary Function Empty ***********************************
struct Z_Construct_UFunction_UStructContainerLibrary_Empty_Statics
{
	struct StructContainerLibrary_eventEmpty_Parms
	{
		FStructContainer Container;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Abilities|Serialization" },
		{ "ModuleRelativePath", "Public/Misc/StructContainerLibrary.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function Empty constinit property declarations *********************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Container;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function Empty constinit property declarations ***********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function Empty Property Definitions ********************************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UStructContainerLibrary_Empty_Statics::NewProp_Container = { "Container", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StructContainerLibrary_eventEmpty_Parms, Container), Z_Construct_UScriptStruct_FStructContainer, METADATA_PARAMS(0, nullptr) }; // 2073357063
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStructContainerLibrary_Empty_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStructContainerLibrary_Empty_Statics::NewProp_Container,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UStructContainerLibrary_Empty_Statics::PropPointers) < 2048);
// ********** End Function Empty Property Definitions **********************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStructContainerLibrary_Empty_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UStructContainerLibrary, nullptr, "Empty", 	Z_Construct_UFunction_UStructContainerLibrary_Empty_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UStructContainerLibrary_Empty_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UStructContainerLibrary_Empty_Statics::StructContainerLibrary_eventEmpty_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04442401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStructContainerLibrary_Empty_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStructContainerLibrary_Empty_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UStructContainerLibrary_Empty_Statics::StructContainerLibrary_eventEmpty_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UStructContainerLibrary_Empty()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStructContainerLibrary_Empty_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UStructContainerLibrary::execEmpty)
{
	P_GET_STRUCT_REF(FStructContainer,Z_Param_Out_Container);
	P_FINISH;
	P_NATIVE_BEGIN;
	UStructContainerLibrary::Empty(Z_Param_Out_Container);
	P_NATIVE_END;
}
// ********** End Class UStructContainerLibrary Function Empty *************************************

// ********** Begin Class UStructContainerLibrary Function GetStruct *******************************
struct Z_Construct_UFunction_UStructContainerLibrary_GetStruct_Statics
{
	struct StructContainerLibrary_eventGetStruct_Parms
	{
		FStructContainer Container;
		FGenericStruct Struct;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "Struct" },
		{ "Category", "Abilities|Serialization" },
		{ "CustomStructureParam", "Struct" },
		{ "CustomThunk", "true" },
		{ "ModuleRelativePath", "Public/Misc/StructContainerLibrary.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetStruct constinit property declarations *****************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Container;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Struct;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetStruct constinit property declarations *******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetStruct Property Definitions ****************************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UStructContainerLibrary_GetStruct_Statics::NewProp_Container = { "Container", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StructContainerLibrary_eventGetStruct_Parms, Container), Z_Construct_UScriptStruct_FStructContainer, METADATA_PARAMS(0, nullptr) }; // 2073357063
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UStructContainerLibrary_GetStruct_Statics::NewProp_Struct = { "Struct", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StructContainerLibrary_eventGetStruct_Parms, Struct), Z_Construct_UScriptStruct_FGenericStruct, METADATA_PARAMS(0, nullptr) }; // 2927885635
void Z_Construct_UFunction_UStructContainerLibrary_GetStruct_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((StructContainerLibrary_eventGetStruct_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UStructContainerLibrary_GetStruct_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(StructContainerLibrary_eventGetStruct_Parms), &Z_Construct_UFunction_UStructContainerLibrary_GetStruct_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStructContainerLibrary_GetStruct_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStructContainerLibrary_GetStruct_Statics::NewProp_Container,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStructContainerLibrary_GetStruct_Statics::NewProp_Struct,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStructContainerLibrary_GetStruct_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UStructContainerLibrary_GetStruct_Statics::PropPointers) < 2048);
// ********** End Function GetStruct Property Definitions ******************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStructContainerLibrary_GetStruct_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UStructContainerLibrary, nullptr, "GetStruct", 	Z_Construct_UFunction_UStructContainerLibrary_GetStruct_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UStructContainerLibrary_GetStruct_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UStructContainerLibrary_GetStruct_Statics::StructContainerLibrary_eventGetStruct_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14442401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStructContainerLibrary_GetStruct_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStructContainerLibrary_GetStruct_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UStructContainerLibrary_GetStruct_Statics::StructContainerLibrary_eventGetStruct_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UStructContainerLibrary_GetStruct()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStructContainerLibrary_GetStruct_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class UStructContainerLibrary Function GetStruct *********************************

// ********** Begin Class UStructContainerLibrary Function HasStruct *******************************
struct Z_Construct_UFunction_UStructContainerLibrary_HasStruct_Statics
{
	struct StructContainerLibrary_eventHasStruct_Parms
	{
		FStructContainer Container;
		UScriptStruct* Struct;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Abilities|Serialization" },
		{ "ModuleRelativePath", "Public/Misc/StructContainerLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Container_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function HasStruct constinit property declarations *****************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Container;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Struct;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function HasStruct constinit property declarations *******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function HasStruct Property Definitions ****************************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UStructContainerLibrary_HasStruct_Statics::NewProp_Container = { "Container", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StructContainerLibrary_eventHasStruct_Parms, Container), Z_Construct_UScriptStruct_FStructContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Container_MetaData), NewProp_Container_MetaData) }; // 2073357063
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UStructContainerLibrary_HasStruct_Statics::NewProp_Struct = { "Struct", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StructContainerLibrary_eventHasStruct_Parms, Struct), Z_Construct_UClass_UScriptStruct_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UStructContainerLibrary_HasStruct_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((StructContainerLibrary_eventHasStruct_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UStructContainerLibrary_HasStruct_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(StructContainerLibrary_eventHasStruct_Parms), &Z_Construct_UFunction_UStructContainerLibrary_HasStruct_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStructContainerLibrary_HasStruct_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStructContainerLibrary_HasStruct_Statics::NewProp_Container,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStructContainerLibrary_HasStruct_Statics::NewProp_Struct,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStructContainerLibrary_HasStruct_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UStructContainerLibrary_HasStruct_Statics::PropPointers) < 2048);
// ********** End Function HasStruct Property Definitions ******************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStructContainerLibrary_HasStruct_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UStructContainerLibrary, nullptr, "HasStruct", 	Z_Construct_UFunction_UStructContainerLibrary_HasStruct_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UStructContainerLibrary_HasStruct_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UStructContainerLibrary_HasStruct_Statics::StructContainerLibrary_eventHasStruct_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14442401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStructContainerLibrary_HasStruct_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStructContainerLibrary_HasStruct_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UStructContainerLibrary_HasStruct_Statics::StructContainerLibrary_eventHasStruct_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UStructContainerLibrary_HasStruct()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStructContainerLibrary_HasStruct_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UStructContainerLibrary::execHasStruct)
{
	P_GET_STRUCT_REF(FStructContainer,Z_Param_Out_Container);
	P_GET_OBJECT(UScriptStruct,Z_Param_Struct);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UStructContainerLibrary::HasStruct(Z_Param_Out_Container,Z_Param_Struct);
	P_NATIVE_END;
}
// ********** End Class UStructContainerLibrary Function HasStruct *********************************

// ********** Begin Class UStructContainerLibrary **************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UStructContainerLibrary;
UClass* UStructContainerLibrary::GetPrivateStaticClass()
{
	using TClass = UStructContainerLibrary;
	if (!Z_Registration_Info_UClass_UStructContainerLibrary.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("StructContainerLibrary"),
			Z_Registration_Info_UClass_UStructContainerLibrary.InnerSingleton,
			StaticRegisterNativesUStructContainerLibrary,
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
	return Z_Registration_Info_UClass_UStructContainerLibrary.InnerSingleton;
}
UClass* Z_Construct_UClass_UStructContainerLibrary_NoRegister()
{
	return UStructContainerLibrary::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UStructContainerLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Misc/StructContainerLibrary.h" },
		{ "ModuleRelativePath", "Public/Misc/StructContainerLibrary.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UStructContainerLibrary constinit property declarations ******************
// ********** End Class UStructContainerLibrary constinit property declarations ********************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("AddStruct"), .Pointer = &UStructContainerLibrary::execAddStruct },
		{ .NameUTF8 = UTF8TEXT("Empty"), .Pointer = &UStructContainerLibrary::execEmpty },
		{ .NameUTF8 = UTF8TEXT("GetStruct"), .Pointer = &UStructContainerLibrary::execGetStruct },
		{ .NameUTF8 = UTF8TEXT("HasStruct"), .Pointer = &UStructContainerLibrary::execHasStruct },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UStructContainerLibrary_AddStruct, "AddStruct" }, // 3168512169
		{ &Z_Construct_UFunction_UStructContainerLibrary_Empty, "Empty" }, // 1310278627
		{ &Z_Construct_UFunction_UStructContainerLibrary_GetStruct, "GetStruct" }, // 3311769999
		{ &Z_Construct_UFunction_UStructContainerLibrary_HasStruct, "HasStruct" }, // 3180060819
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStructContainerLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UStructContainerLibrary_Statics
UObject* (*const Z_Construct_UClass_UStructContainerLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_Abilities,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UStructContainerLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UStructContainerLibrary_Statics::ClassParams = {
	&UStructContainerLibrary::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UStructContainerLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UStructContainerLibrary_Statics::Class_MetaDataParams)
};
void UStructContainerLibrary::StaticRegisterNativesUStructContainerLibrary()
{
	UClass* Class = UStructContainerLibrary::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_UStructContainerLibrary_Statics::Funcs));
}
UClass* Z_Construct_UClass_UStructContainerLibrary()
{
	if (!Z_Registration_Info_UClass_UStructContainerLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UStructContainerLibrary.OuterSingleton, Z_Construct_UClass_UStructContainerLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UStructContainerLibrary.OuterSingleton;
}
UStructContainerLibrary::UStructContainerLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UStructContainerLibrary);
UStructContainerLibrary::~UStructContainerLibrary() {}
// ********** End Class UStructContainerLibrary ****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Projects_Piperift_TestBench_Plugins_Abilities_Build_HostProject_Plugins_Abilities_Source_Abilities_Public_Misc_StructContainerLibrary_h__Script_Abilities_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UStructContainerLibrary, UStructContainerLibrary::StaticClass, TEXT("UStructContainerLibrary"), &Z_Registration_Info_UClass_UStructContainerLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UStructContainerLibrary), 1035842508U) },
	};
}; // Z_CompiledInDeferFile_FID_Projects_Piperift_TestBench_Plugins_Abilities_Build_HostProject_Plugins_Abilities_Source_Abilities_Public_Misc_StructContainerLibrary_h__Script_Abilities_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_Piperift_TestBench_Plugins_Abilities_Build_HostProject_Plugins_Abilities_Source_Abilities_Public_Misc_StructContainerLibrary_h__Script_Abilities_347025843{
	TEXT("/Script/Abilities"),
	Z_CompiledInDeferFile_FID_Projects_Piperift_TestBench_Plugins_Abilities_Build_HostProject_Plugins_Abilities_Source_Abilities_Public_Misc_StructContainerLibrary_h__Script_Abilities_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_Piperift_TestBench_Plugins_Abilities_Build_HostProject_Plugins_Abilities_Source_Abilities_Public_Misc_StructContainerLibrary_h__Script_Abilities_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
