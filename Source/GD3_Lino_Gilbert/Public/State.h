// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "State.generated.h"

/**
 * 
 */
UCLASS()
class GD3_LINO_GILBERT_API UState : public UObject
{
	GENERATED_BODY()
	
public:
	virtual void EntryState();
	virtual void UpdateState();
	virtual void ExitState();
};
