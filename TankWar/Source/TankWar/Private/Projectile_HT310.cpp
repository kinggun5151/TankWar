// Fill out your copyright notice in the Description page of Project Settings.


#include "Projectile_HT310.h"
#include "GameFramework/ProjectileMovementComponent.h"

// Sets default values
AProjectile_HT310::AProjectile_HT310()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	ProjectileMovement = CreateDefaultSubobject<UProjectileMovementComponent>(FName("Projectile Movement"));
	ProjectileMovement->bAutoActivate = false;
}

// Called when the game starts or when spawned
void AProjectile_HT310::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AProjectile_HT310::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void  AProjectile_HT310::LaunchProjectile(float Speed)
{
	ProjectileMovement->SetVelocityInLocalSpace(FVector::ForwardVector * Speed);
	ProjectileMovement->Activate();
}