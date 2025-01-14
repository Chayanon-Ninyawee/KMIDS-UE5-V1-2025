// Copyright Epic Games, Inc. All Rights Reserved.

#include "KMIDS_UE5_V1_2025WheelFront.h"
#include "UObject/ConstructorHelpers.h"

UKMIDS_UE5_V1_2025WheelFront::UKMIDS_UE5_V1_2025WheelFront()
{
	AxleType = EAxleType::Front;
	bAffectedBySteering = true;
	MaxSteerAngle = 40.f;
}