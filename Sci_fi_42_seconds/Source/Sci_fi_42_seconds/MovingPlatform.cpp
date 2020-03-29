// Fill out your copyright notice in the Description page of Project Settings.

#include "MovingPlatform.h"

// Sets default values
AMovingPlatform::AMovingPlatform()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMovingPlatform::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMovingPlatform::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	delay -= DeltaTime;
}

FVector AMovingPlatform::UpdatePosition(FVector Start, FVector End, FVector Current, float speed) 
{
	if (delay <= 0.0f) 
	{
		if (Current != End && IsMovingForwards)
		{
			//update towards end
			Temp = Current - End;

			if (Temp.X > 0) { NewPosition.X = Current.X - speed; }
			else if (Temp.X < 0) { NewPosition.X = Current.X + speed; }
			else { NewPosition.X = Current.X; }

			if (Temp.Y > 0) { NewPosition.Y = Current.Y - speed; }
			else if (Temp.Y < 0) { NewPosition.Y = Current.Y + speed; }
			else { NewPosition.Y = Current.Y; }

			if (Temp.Z > 0) { NewPosition.Z = Current.Z - speed; }
			else if (Temp.Z < 0) { NewPosition.Z = Current.Z + speed; }
			else { NewPosition.Z = Current.Z; }
			
		}
		else if (Current != Start && !IsMovingForwards)
		{
			//update towards start

			Temp = Current - Start;

			if (Temp.X > 0) { NewPosition.X = Current.X - speed; }
			else if (Temp.X < 0) { NewPosition.X = Current.X + speed; }
			else { NewPosition.X = Current.X; }

			if (Temp.Y > 0) { NewPosition.Y = Current.Y - speed; }
			else if (Temp.Y < 0) { NewPosition.Y = Current.Y + speed; }
			else { NewPosition.Y = Current.Y; }

			if (Temp.Z > 0) { NewPosition.Z = Current.Z - speed; }
			else if (Temp.Z < 0) { NewPosition.Z = Current.Z + speed; }
			else { NewPosition.Z = Current.Z; }
		}
		else if (Current == End && IsMovingForwards)
		{
			IsMovingForwards = false;
			delay = 0.5f; 
		}
		else if (Current == Start && !IsMovingForwards) 
		{
			IsMovingForwards = true;
			delay = 0.5f;
		}
	}
	else 
	{
		NewPosition = Current;
	}

	return NewPosition;
}
