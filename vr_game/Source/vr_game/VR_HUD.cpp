// Fill out your copyright notice in the Description page of Project Settings.

#include "vr_game.h"
#include "VR_HUD.h"


AVR_HUD::AVR_HUD()
{
	//do nothing since there is nothing to init yet

}

void AVR_HUD::DrawHUD()
{
	FVector2D healthBarDimensions(HUD_CONSTANTS::HEALTH_BAR_WIDTH* (playerHealth/HUD_CONSTANTS::MAX_PLAYER_HP),HUD_CONSTANTS::HEALTH_BAR_HEIGHT);
	FVector2D healthBarPosition(0, 0);
	FCanvasTileItem healthBar(healthBarPosition, healthBarDimensions, FLinearColor::Red);

	Canvas->DrawItem(healthBar);

}
