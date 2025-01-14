// Copyright Epic Games, Inc. All Rights Reserved.

#include "KMIDS_UE5_V1_2025WheelRear.h"
#include "UObject/ConstructorHelpers.h"

UKMIDS_UE5_V1_2025WheelRear::UKMIDS_UE5_V1_2025WheelRear()
{
	AxleType = EAxleType::Rear;
	bAffectedByHandbrake = true;
	bAffectedByEngine = true;
}