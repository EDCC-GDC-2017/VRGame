// Fill out your copyright notice in the Description page of Project Settings.

#include "vr_game.h"
#include "MyPlayerState.h"

void AMyPlayerState::CopyProperties(class APlayerState* playerState)
{
	Super::CopyProperties(playerState);

	if (playerState)
	{
		AMyPlayerState* myPlayerState = Cast<AMyPlayerState>(playerState);

		if (myPlayerState)
		{
			myPlayerState->m_kills = m_kills;
			myPlayerState->m_health = m_health;
		}
	}
}

void AMyPlayerState::OverrideWith(class APlayerState* playerState)
{
	Super::CopyProperties(playerState);

	if (playerState)
	{
		AMyPlayerState* myPlayerState = Cast<AMyPlayerState>(playerState);

		if (myPlayerState)
		{
			m_kills = myPlayerState->m_kills;
			m_health = myPlayerState->m_health;
		}
	}
}

void AMyPlayerState::SetKills(int kills)
{
	m_kills = kills;
}

void AMyPlayerState::SetHealth(int health)
{
	m_health = health;
}

int AMyPlayerState::GetKills()
{
	return m_kills;
}

float AMyPlayerState::GetHealth()
{
	return m_health;;
}



