// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Math/Vector.h"
#include "MovingPlatform.generated.h"

UCLASS()
class SCI_FI_42_SECONDS_API AMovingPlatform : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMovingPlatform();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintCallable, Category = "Movement")
		FVector UpdatePosition(FVector Start, FVector End, FVector Current, float speed);

	bool IsMovingForwards = true;
	float delay = 0.5f; 
	FVector NewPosition;
	FVector Temp;
};
