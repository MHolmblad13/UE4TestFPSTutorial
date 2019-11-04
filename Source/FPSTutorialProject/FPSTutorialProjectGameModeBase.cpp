// Fill out your copyright notice in the Description page of Project Settings.

#include "FPSTutorialProjectGameModeBase.h"
#include "FPSHUD.h"
#include "FPSTutorialProject.h"

void AFPSTutorialProjectGameModeBase::StartPlay()
{
	Super::StartPlay();

	if (GEngine)
	{
		// -1 means the message will need to be updated or refreshed
		// FColor is the color the message will be
		// 5.0f means 5 seconds in this function call
		GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Yellow, TEXT("Hello World, this is FPSGameMode!"));
		HUDClass = AFPSHUD::StaticClass();

	}
}



