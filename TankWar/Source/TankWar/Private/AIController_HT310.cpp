// Fill out your copyright notice in the Description page of Project Settings.


#include "AIController_HT310.h"
#include "Tank_HT310.h"

void AAIController_HT310::BeginPlay()
{
	Super::BeginPlay();

	PlayerTank = Cast<ATank_HT310>(GetWorld()->GetFirstPlayerController()->GetPawn());
	ControlledTank = Cast<ATank_HT310>(GetPawn());

}

void AAIController_HT310::Tick(float DeltaSeconds)
{
	ControlledTank->Fire();
	MoveToActor(PlayerTank, AcceptanceRadius);
}
