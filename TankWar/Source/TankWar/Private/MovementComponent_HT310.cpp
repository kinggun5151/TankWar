// Fill out your copyright notice in the Description page of Project Settings.


#include "MovementComponent_HT310.h"
#include "Motor_HT310.h"

void UMovementComponent_HT310::Initialise(UMotor_HT310* BL_ToSet, UMotor_HT310* BR_ToSet, UMotor_HT310* FL_ToSet, UMotor_HT310* FR_ToSet)
{
	BL = BL_ToSet;
	BR = BR_ToSet;
	FL = FL_ToSet;
	FR = FR_ToSet;
}

void UMovementComponent_HT310::MoveForward(float Throtel)
{
	BL->SetMovement(Throtel, 0);
	BR->SetMovement(Throtel, 0);
	FL->SetMovement(Throtel, 0);
	FR->SetMovement(Throtel, 0);
}

void UMovementComponent_HT310::MoveRight(float Throtel)
{
	BL->SetMovement(0, -Throtel);
	BR->SetMovement(0, -Throtel);
	FL->SetMovement(0, -Throtel);
	FR->SetMovement(0, -Throtel);
}

void UMovementComponent_HT310::Rotate(float Throtel)
{
	auto TankRoot = Cast<UPrimitiveComponent>(GetOwner()->GetRootComponent());
	TankRoot->AddLocalRotation(FRotator(0, Throtel, 0));
	
}

void UMovementComponent_HT310::RequestDirectMove(const FVector& MoveVelocity, bool bForceMaxSpeed)
{
	auto TankForward = GetOwner()->GetActorRightVector().GetSafeNormal();
	auto AIForwardIntetion = MoveVelocity.GetSafeNormal();

	auto ThrowForward = FVector::DotProduct(TankForward, AIForwardIntetion);
	MoveForward(ThrowForward);

	auto ThrowRight = FVector::CrossProduct(TankForward, AIForwardIntetion).Z;
	Rotate(ThrowRight);
	
}

