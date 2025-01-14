// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "KMIDS_UE5_V1_2025PlayerController.generated.h"

class UInputMappingContext;
class AKMIDS_UE5_V1_2025Pawn;
class UKMIDS_UE5_V1_2025UI;

/**
 *  Vehicle Player Controller class
 *  Handles input mapping and user interface
 */
UCLASS(abstract)
class KMIDS_UE5_V1_2025_API AKMIDS_UE5_V1_2025PlayerController : public APlayerController
{
	GENERATED_BODY()

protected:

	/** Input Mapping Context to be used for player input */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input)
	UInputMappingContext* InputMappingContext;

	/** Pointer to the controlled vehicle pawn */
	TObjectPtr<AKMIDS_UE5_V1_2025Pawn> VehiclePawn;

	/** Type of the UI to spawn */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = UI)
	TSubclassOf<UKMIDS_UE5_V1_2025UI> VehicleUIClass;

	/** Pointer to the UI widget */
	TObjectPtr<UKMIDS_UE5_V1_2025UI> VehicleUI;

	// Begin Actor interface
protected:

	virtual void BeginPlay() override;
	virtual void SetupInputComponent() override;

public:

	virtual void Tick(float Delta) override;

	// End Actor interface

	// Begin PlayerController interface
protected:

	virtual void OnPossess(APawn* InPawn) override;

	// End PlayerController interface
};
