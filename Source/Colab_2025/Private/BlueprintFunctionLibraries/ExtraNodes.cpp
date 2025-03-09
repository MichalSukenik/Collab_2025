// Fill out your copyright notice in the Description page of Project Settings.


#include "Colab_2025/Public/BlueprintFunctionLibraries/ExtraNodes.h"

float UExtraNodes::GetDistanceTo(const AActor* OtherActor, USceneComponent* ActorComponent,
	USceneComponent* OtherComponent)
{
	AActor* Actor = Cast<AActor>(this);
	if((Actor == nullptr && ActorComponent == nullptr)
		||(OtherActor == nullptr && OtherComponent == nullptr))
		{return 0;}

	FVector LocA = ActorComponent != nullptr ? Actor->GetActorLocation():ActorComponent->GetComponentLocation();
	FVector LocB = OtherComponent != nullptr ? OtherActor->GetActorLocation():OtherComponent->GetComponentLocation();

	return OtherActor ? (LocA - LocB).Size() : 0.f;
}
