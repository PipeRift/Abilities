// Copyright 2020 Splash Damage, Ltd. - All Rights Reserved.

#include <CoreMinimal.h>

#include "Helpers/TestHelpers.h"
#include "Helpers/TestAbility.h"


#if WITH_DEV_AUTOMATION_TESTS

/************************************************************************/
/* COMPONENT SPEC                                                       */
/************************************************************************/

class FAbilityTestSpec_Component : public FAbilityTestSpec
{
	GENERATE_SPEC(FAbilityTestSpec_Component, "Abilities.Component",
		EAutomationTestFlags::ProductFilter |
		EAutomationTestFlags::EditorContext |
		EAutomationTestFlags::ServerContext
	);

	UAbilitiesComponent* Component = nullptr;
	UTestAbility* Ability = nullptr;
};

void FAbilityTestSpec_Component::Define()
{
	It("Can be created", [this]()
	{
		AAbilityTestActor* TestActor = AddTestActor();

		TestNotNull(TEXT("Abilities Component"), TestActor->Abilities);

		TestActor->Destroy();
	});

	Describe("Cooldowns", [this]()
	{
		BeforeEach([this]()
		{
			Component = AddTestComponent();
			Ability = Component->EquipAbility<UTestAbility>();
		});

		It("Can start cooldown", [this]()
		{
			Ability->StartCooldown();
			TestTrue("Is cooling down", Ability->IsCoolingDown());
		});

		It("Can end cooldown", [this]()
		{
			TestNotImplemented();
		});

		It("Can add cooldown", [this]()
		{
			TestNotImplemented();
		});

		It("Can substract cooldown", [this]()
		{
			TestNotImplemented();
		});

		It("Will finish cooldown when subtract leaves it at 0 seconds", [this]()
		{
			TestNotImplemented();
		});

		It("Can't add cooldown if not cooling down", [this]()
		{
			TestNotImplemented();
		});
	});
}

#endif //WITH_DEV_AUTOMATION_TESTS
