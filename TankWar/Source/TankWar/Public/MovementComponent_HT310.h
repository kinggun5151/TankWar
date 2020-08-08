// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/NavMovementComponent.h"
#include "MovementComponent_HT310.generated.h"


class UMotor_HT310;
/**
 * 
 */
UCLASS(meta = (BlueprintSpawnableComponent))
class TANKWAR_API UMovementComponent_HT310 : public UNavMovementComponent
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, Category = "Setup")
		void Initialise(UMotor_HT310* BL_ToSet, UMotor_HT310* BR_ToSet, UMotor_HT310* FL_ToSet, UMotor_HT310* FR_ToSet);

	UFUNCTION(BlueprintCallable, Category = "Movement")
		void MoveForward(float Throtel);
	UFUNCTION(BlueprintCallable, Category = "Movement")
		void MoveRight(float Throtel);

private:
	UMotor_HT310* BL = nullptr;
	UMotor_HT310* BR = nullptr;
	UMotor_HT310* FL = nullptr;
	UMotor_HT310* FR = nullptr;

};
