// Copyright Epic Games, Inc. All Rights Reserved.


#include "KMIDS_UE5_V1_2025OffroadWheelRear.h"

UKMIDS_UE5_V1_2025OffroadWheelRear::UKMIDS_UE5_V1_2025OffroadWheelRear()
{
	WheelRadius = 50.f;
	CorneringStiffness = 750.0f;
	FrictionForceMultiplier = 4.0f;
	
	SuspensionMaxRaise = 20.0f;
	SuspensionMaxDrop = 20.0f;
	WheelLoadRatio = 1.0f;
	SpringRate = 100.0f;
	SpringPreload = 100.0f;
	SweepShape = ESweepShape::Shapecast;

	MaxBrakeTorque = 3000.0f;
	MaxHandBrakeTorque = 6000.0f;
}