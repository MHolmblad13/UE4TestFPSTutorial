// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "FPSTutorialProjectGameModeBase.generated.h"

/**
 * 
 */
UCLASS()
class FPSTUTORIALPROJECT_API AFPSTutorialProjectGameModeBase : public AGameModeBase
{
	GENERATED_BODY()

		virtual void StartPlay() override;
	
	
};
