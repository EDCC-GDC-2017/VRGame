// Fill out your copyright notice in the Description page of Project Settings.
#pragma once

#include "GameFramework/GameMode.h"
#include "DeathMatchGameMode.generated.h"

/**
 * 
 */
UCLASS()
class VR_GAME_API ADeathMatchGameMode : public AGameMode
{
	GENERATED_BODY()

	const int MINIMUM_NUMBER_OF_PLAYERS = 2;
	int m_numberOfKillsNeededToWin = 10;
	TArray<class APlayerController*> PlayerControllerList;

	virtual bool ReadyToStartMatch_Implementation() override;

	virtual void PostLogin(APlayerController* newPlayer) override;

	virtual void BeginPlay() override;

	
	
};
