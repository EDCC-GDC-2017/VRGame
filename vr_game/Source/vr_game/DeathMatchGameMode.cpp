// Fill out your copyright notice in the Description page of Project Settings.

#include "vr_game.h"
#include "DeathMatchGameMode.h"


bool ADeathMatchGameMode::ReadyToStartMatch_Implementation()
{
	Super::ReadyToStartMatch();

	return NumPlayers > MINIMUM_NUMBER_OF_PLAYERS-1;
}

void ADeathMatchGameMode::PostLogin(APlayerController* newPlayer)
{
	Super::PostLogin(newPlayer);

	//add the new player to the list of players
	PlayerControllerList.Add(newPlayer);
}

void ADeathMatchGameMode::BeginPlay()
{
	Super::BeginPlay();
}

