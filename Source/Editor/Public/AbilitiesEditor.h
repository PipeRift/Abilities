// Copyright 2020 Splash Damage, Ltd. - All Rights Reserved.

#pragma once

#include <Modules/ModuleManager.h>
#include <PropertyEditorModule.h>
#include <EdGraphUtilities.h>
#include <AssetTypeCategories.h>


class FAbilitiesEditor : public IModuleInterface
{
public:

	EAssetTypeCategories::Type AssetCategory;

private:

	/** All created pin factories.  Cached here so that we can unregister them during shutdown. */
	TArray<TSharedPtr<FGraphPanelPinFactory>> CreatedPinFactories;


public:

	virtual void StartupModule() override;
	virtual void ShutdownModule() override;

private:

	void RegisterPropertyTypeCustomizations();

	/**
	* Registers a custom class
	*
	* @param ClassName				The class name to register for property customization
	* @param DetailLayoutDelegate	The delegate to call to get the custom detail layout instance
	*/
	void RegisterCustomClassLayout(FName ClassName, FOnGetDetailCustomizationInstance DetailLayoutDelegate);

	/**
	* Registers a custom struct
	*
	* @param StructName				The name of the struct to register for property customization
	* @param StructLayoutDelegate	The delegate to call to get the custom detail layout instance
	*/
	void RegisterCustomPropertyTypeLayout(FName PropertyTypeName, FOnGetPropertyTypeCustomizationInstance PropertyTypeLayoutDelegate);

	template<class T>
	void RegisterCustomPinFactory();

	//Simplify Registering generated default events
#define RegisterDefaultEventChecked(Class, FuncName) \
	(FKismetEditorUtilities::RegisterAutoGeneratedDefaultEvent(this, Class::StaticClass(), GET_FUNCTION_NAME_CHECKED(Class, FuncName)))

#define RegisterDefaultEvent(Class, FuncName) \
	(FKismetEditorUtilities::RegisterAutoGeneratedDefaultEvent(this, Class::StaticClass(), FName(TEXT(#FuncName))))

public:

	EAssetTypeCategories::Type GetAssetCategory() const { return AssetCategory; }

	static inline FAbilitiesEditor& Get() {
		return FModuleManager::LoadModuleChecked<FAbilitiesEditor>("AbilitiesEditor");
	}

	static inline bool IsAvailable() {
		return FModuleManager::Get().IsModuleLoaded("AbilitiesEditor");
	}
};
