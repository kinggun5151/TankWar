// Fill out your copyright notice in the Description page of Project Settings.


#include "Tank_HT310.h"

// Sets default values
ATank_HT310::ATank_HT310()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ATank_HT310::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ATank_HT310::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ATank_HT310::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

