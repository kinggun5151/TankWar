// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "Tank_HT310.generated.h"

class AProjectile_HT310;

UCLASS()
class TANKWAR_API ATank_HT310 : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	ATank_HT310();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UPROPERTY(EditDefaultsOnly, Category = "Setup")
		TSubclassOf<AProjectile_HT310> ProjectileBlueprint;
	UPROPERTY(EditDefaultsOnly, Category = Firing)
		float LaunchSpeed = 4000.0f;

	UFUNCTION(BlueprintCallable, Category = "Fire")
		void Fire();

private:

	UPROPERTY(EditDefaultsOnly, Category = Firing)
		float ReloadTime = 3.0f;

	double LastTimeFire = 0;
};
