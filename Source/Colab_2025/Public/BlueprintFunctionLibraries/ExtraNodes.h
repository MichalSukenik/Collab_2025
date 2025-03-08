// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ExtraNodes.generated.h"

/**
 * 
 */
UCLASS()
class COLAB_2025_API UExtraNodes : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:

	/*Get the Location from the Actor Component to another Actor*/
	UFUNCTION(BlueprintPure,BlueprintCallable,Category="Extra Nodes")
	float GetDistanceTo(const USceneComponent* ActorA_Component, const AActor* OtherActor = nullptr, const USceneComponent* ActorB_Component);
};
