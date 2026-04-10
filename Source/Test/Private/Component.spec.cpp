// Copyright 2020 Splash Damage, Ltd. - All Rights Reserved.

#include "Automatron.h"
#include "Helpers/AbilityTestActor.h"
#include "Helpers/TestAbility.h"


/************************************************************************/
/* COMPONENT SPEC                                                       */
/************************************************************************/

class FAbilitySpec_Component : public Automatron::FTestSpec
{
	GENERATE_SPEC(FAbilitySpec_Component, "Abilities.Component",
		EAutomationTestFlags::ProductFilter | EAutomationTestFlags_ApplicationContextMask);

	TObjectPtr<UAbilitiesComponent> Component;
	TObjectPtr<UTestAbility> Ability;
};

void FAbilitySpec_Component::Define()
{
	It("Can be created", [this]() {
		auto* Actor = GetWorld()->SpawnActor<AAbilityTestActor>();

		TestNotNull(TEXT("Actor"), Actor);
		TestNotNull(TEXT("Abilities Component"), Actor->Abilities);

		Actor->Destroy();
	});

	Describe("Cooldowns", [this]() {
		BeforeEach([this]() {
			Component = GetWorld()->SpawnActor<AAbilityTestActor>()->Abilities;
			Ability = Component->EquipAbility<UTestAbility>();
		});

		It("Can start cooldown", [this]() {
			Ability->StartCooldown();
			TestTrue("Is cooling down", Ability->IsCoolingDown());
		});

		It("Can end cooldown", [this]() {
			TestNotImplemented();
		});

		It("Can add cooldown", [this]() {
			TestNotImplemented();
		});

		It("Can substract cooldown", [this]() {
			TestNotImplemented();
		});

		It("Will finish cooldown when subtract leaves it at 0 seconds", [this]() {
			TestNotImplemented();
		});

		It("Can't add cooldown if not cooling down", [this]() {
			TestNotImplemented();
		});

		AfterEach([this]() {
			Component->GetOwner()->Destroy();
		});
	});
}
