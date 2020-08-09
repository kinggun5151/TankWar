// Fill out your copyright notice in the Description page of Project Settings.


#include "Motor_HT310.h"


void UMotor_HT310::SetMovement(float ForwrdMovement, float RightMovement)
{
	auto RightForceAplied = GetRightVector() * RightMovement * Speed;
	auto ForwardForceAplied = GetForwardVector() * ForwrdMovement * Speed;
	auto ForceLocation = GetComponentLocation();
	auto TankRoot = Cast<UPrimitiveComponent>(GetOwner()->GetRootComponent());
	
	TankRoot->AddForceAtLocation(RightForceAplied, ForceLocation);
	TankRoot->AddForceAtLocation(ForwardForceAplied, ForceLocation);
	
	//UE_LOG(LogTemp, Warning, TEXT(" %s FM %f RM %f"), *GetName(), ForwrdMovement, RightMovement);

}

