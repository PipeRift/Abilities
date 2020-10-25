
// Copyright 2020 Splash Damage, Ltd. - All Rights Reserved.

#include "AbilitiesCooldownCounter.h"

#include <Engine/World.h>
#include <TimerManager.h>

#include "Ability.h"
#include "AbilitiesComponent.h"


void FAbilitiesCooldownCounter::Start(UClass* Ability, float Duration)
{
	if(!ensureMsgf(Duration >= 0.f, TEXT("Duration must be 0 seconds or more. 0s is one frame.")))
	{
		return;
	}

	FTimerHandle& Handle = Handles.FindOrAdd(Ability);
	GetTimerManager()->SetTimer(Handle, [this, Ability]()
	{
		OnReady(Ability);
	}, Duration, false);
}

bool FAbilitiesCooldownCounter::Reset(UClass* Ability)
{
	FTimerHandle Handle;
	if (Handles.RemoveAndCopyValue(Ability, Handle))
	{
		GetTimerManager()->ClearTimer(Handle);
		return true;
	}
	return false;
}

void FAbilitiesCooldownCounter::ResetAll()
{
	FTimerManager* TimerManager = GetTimerManager();
	for (TPair<UClass*, FTimerHandle>& HandleItem : Handles)
	{
		TimerManager->ClearTimer(HandleItem.Value);
	}
	Handles.Empty();
}

float FAbilitiesCooldownCounter::GetRemaining(UClass* Ability) const
{
	if (const FTimerHandle* Handle = Handles.Find(Ability))
	{
		FTimerManager* Manager = GetTimerManager();
		return Manager->GetTimerRemaining(*Handle);
	}
	return 0.f;
}

bool FAbilitiesCooldownCounter::TrySetRemaining(UClass* Ability, float Duration)
{
	FTimerHandle* Handle = Handles.Find(Ability);
	if (!Handle)
	{
		return false;
	}

	if(Duration <= 0.f)
	{
		GetTimerManager()->ClearTimer(*Handle);
		OnReady(Ability);
		return true;
	}

	GetTimerManager()->SetTimer(*Handle, [this, Ability]()
	{
		OnReady(Ability);
	}, Duration, false);
	return true;
}

FTimerManager* FAbilitiesCooldownCounter::GetTimerManager() const
{
	if (auto* World = GetWorld())
	{
		return &World->GetTimerManager();
	}
	return nullptr;
}

void FAbilitiesCooldownCounter::OnReady(UClass* Ability)
{
	Handles.Remove(Ability);

	if (auto* Comp = GetOwner<UAbilitiesComponent>())
	{
		// If the ability is equipped, notify it
		if (UAbility* Instance = Comp->GetEquippedAbility(Ability))
		{
			Instance->NotifyCooldownReady(ECooldownReadyReason::Finished);
		}
	}
}
