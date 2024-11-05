// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "MemoryPC.generated.h"

/**
 * 
 */
UCLASS()
class GD3_LINO_GILBERT_API AMemoryPC : public APlayerController
{
	GENERATED_BODY()

protected:
	virtual void BeginPlay() override;
};
