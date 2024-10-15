// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "State.h"
#include "WaitingState.generated.h"

/**
 * 
 */
UCLASS()
class GD3_LINO_GILBERT_API UWaitingState : public UState
{
	GENERATED_BODY()
	
public:
	virtual void EntryState()override;
	virtual void UpdateState()override;
	virtual void ExitState()override;
};
