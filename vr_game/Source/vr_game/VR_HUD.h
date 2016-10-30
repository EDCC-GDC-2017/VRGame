// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/HUD.h"
#include "VR_HUD.generated.h"

/**
 * 
 */
UCLASS()
class VR_GAME_API AVR_HUD : public AHUD
{
	GENERATED_BODY()
		virtual void DrawHUD() override;

		AVR_HUD();
	
		
	
};
static float playerHealth;

namespace HUD_CONSTANTS
{
	const static float MAX_PLAYER_HP = 200;
	const static float HEALTH_BAR_WIDTH = 1000;
	const static float HEALTH_BAR_HEIGHT = 100;
}