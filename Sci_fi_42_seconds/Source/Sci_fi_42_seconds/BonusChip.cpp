// Fill out your copyright notice in the Description page of Project Settings.

#include "BonusChip.h"

#include "ConstructorHelpers.h"
#include "Components/StaticMeshComponent.h"

// Sets default values
ABonusChip::ABonusChip()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void ABonusChip::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABonusChip::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
		
	NewRotation = FQuat(0, 0, 0.0174533, 1);

	AddActorLocalRotation(NewRotation);
}

void ABonusChip::OnCollect(APawn* player)
{
	


	Destroy();
}

