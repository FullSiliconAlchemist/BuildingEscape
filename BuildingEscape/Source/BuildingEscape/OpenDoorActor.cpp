// Charles Rabbat all rights reserved TM

#include "OpenDoorActor.h"
#include "GameFramework/Actor.h"

// Sets default values for this component's properties
UOpenDoorActor::UOpenDoorActor()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UOpenDoorActor::BeginPlay()
{
	Super::BeginPlay();

	// find the owning actor
	AActor *doorActor = GetOwner();

	FString doorRotation = doorActor->GetActorRotation().ToString();

	UE_LOG(LogTemp, Warning, TEXT("Door's rotation is currently: %s"), *doorRotation);

	FQuat *rotateVal = new FQuat (
		0.0,
		0.0,
		0.0,
		5.0
	);	
	
	FRotator *rotateVal1 = new FRotator(0.0, 45.0, 0.0);

/*	doorActor->SetActorRotation(*rotateVal);

	doorRotation = doorActor->GetActorRotation().ToString();

	UE_LOG(LogTemp, Warning, TEXT("Door's rotation is now: %s"), *doorRotation);*/	
	
	doorActor->SetActorRotation(*rotateVal1);

	doorRotation = doorActor->GetActorRotation().ToString();

	UE_LOG(LogTemp, Warning, TEXT("Door's rotation is now: %s"), *doorRotation);

	delete rotateVal;
}


// Called every frame
void UOpenDoorActor::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

