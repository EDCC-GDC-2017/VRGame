// Fill out your copyright notice in the Description page of Project Settings.

#include "vr_game.h"
#include "VRGameMode.h"

void AVRGameMode::BeginPlay()
{
	//create the second player
	Super::BeginPlay();

	//UGameplayStatics::CreatePlayer(this, -1, true);
}

