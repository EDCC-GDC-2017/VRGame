// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/Character.h"
#include "MainPlayer.generated.h"

UCLASS()
class VR_GAME_API AMainPlayer : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AMainPlayer();

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	// Called every frame
	virtual void Tick( float DeltaSeconds ) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* InputComponent) override;

	UPROPERTY(EditAnywhere, Category = GamePlay)
		UCameraComponent* FPSCamera;

	UFUNCTION()
		void MoveForward(float value);

	UFUNCTION()
		void MoveRight(float value);

	//UFUNCTION()
	//	void LookUp(float value);

	UFUNCTION()
		void StartJump();

	UFUNCTION()
		void EndJump();

	UPROPERTY(EditAnywhere,BlueprintReadWrite, Category = GamePlay)
		FVector cameraPosition;

	UFUNCTION(Server,Reliable,WithValidation)
		void Fire();
	
	UPROPERTY(Replicated,EditAnywhere,BlueprintReadWrite,Category = GamePlay)
		float health = 100;

	//UPROPERTY(BlueprintRead,Category = GamePlay)
	//FVector startPosition;

	//UFUNCTION()
	//	bool IsDead();

	//UFUNCTION()
	//	void respawn();
};

