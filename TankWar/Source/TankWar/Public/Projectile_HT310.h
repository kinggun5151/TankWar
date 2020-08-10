// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Projectile_HT310.generated.h"

class UProjectileMovementComponent;

UCLASS()
class TANKWAR_API AProjectile_HT310 : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AProjectile_HT310();
	void LaunchProjectile(float Speed);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

private:
	UProjectileMovementComponent* ProjectileMovement = nullptr;

};
