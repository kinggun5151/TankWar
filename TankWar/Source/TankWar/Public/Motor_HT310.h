// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/StaticMeshComponent.h"
#include "Motor_HT310.generated.h"

/**
 * 
 */
UCLASS(meta = (BlueprintSpawnableComponent))
class TANKWAR_API UMotor_HT310 : public UStaticMeshComponent
{
	GENERATED_BODY()

public:
    void SetMovement(float ForwrdMovement, float RightMovement);
    void StartFlying(float Throtel);

private:
    UPROPERTY(EditDefaultsOnly, Category = "Movement")
        float Speed = 60000000;
    UPROPERTY(EditDefaultsOnly, Category = "Movement")
        float FlyingSpeed = 150000000;
};
