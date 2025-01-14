// Copyright Epic Games, Inc. All Rights Reserved.


#include "KMIDS_UE5_V1_2025UI.h"

void UKMIDS_UE5_V1_2025UI::UpdateSpeed(float NewSpeed)
{
	// format the speed to KPH or MPH
	float FormattedSpeed = FMath::Abs(NewSpeed) * (bIsMPH ? 0.022f : 0.036f);

	// call the Blueprint handler
	OnSpeedUpdate(FormattedSpeed);
}

void UKMIDS_UE5_V1_2025UI::UpdateGear(int32 NewGear)
{
	// call the Blueprint handler
	OnGearUpdate(NewGear);
}