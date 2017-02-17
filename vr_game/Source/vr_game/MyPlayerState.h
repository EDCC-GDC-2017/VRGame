// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/PlayerState.h"
#include "MyPlayerState.generated.h"

/**
 * 
 */
UCLASS()
class VR_GAME_API AMyPlayerState : public APlayerState
{
	GENERATED_BODY()
private:
	int m_kills;
	float m_health;

	

public:

	virtual void CopyProperties(class APlayerState* playerState) override;

	virtual void OverrideWith(class APlayerState* playerState) override;

	void SetKills(int kills);

	void SetHealth(int health);

	int GetKills();

	float GetHealth();
	
	
};
