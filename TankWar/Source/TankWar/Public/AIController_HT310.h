// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "AIController_HT310.generated.h"


class ATank_HT310;
/**
 * 
 */
UCLASS()
class TANKWAR_API AAIController_HT310 : public AAIController
{
	GENERATED_BODY()
private:
    void BeginPlay() override;
    void Tick(float DeltaSeconds) override;

    ATank_HT310* ControlledTank;
    ATank_HT310* PlayerTank;


    float AcceptanceRadius = 300;

};
