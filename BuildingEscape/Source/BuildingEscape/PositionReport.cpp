// Fill out your copyright notice in the Description page of Project Settings.

#include "PositionReport.h"
#include "GameFramework/Actor.h"

// Sets default values for this component's properties
UPositionReport::UPositionReport()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UPositionReport::BeginPlay()
{
	Super::BeginPlay();
	
	// Seems like everything returns an object
	FString name = GetOwner()->GetName();
		
	FVector ObjectPositionLoc = GetOwner()->GetActorLocation();
	FTransform ObjectPositionVect = GetOwner()->GetTransform(); // Returns Struct containing Actor Rotation, Translation and Scale

	FString ObjectPosition = ObjectPositionLoc.ToString();
	FString ObjectPosition1 = ObjectPositionVect.ToString();

	// UE_LOG is a macro
	UE_LOG(LogTemp, Warning, TEXT("%s is at %s also there's %s"), *name, *ObjectPosition, *ObjectPosition1);
}


// Called every frame
void UPositionReport::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	
}

