// Fill out your copyright notice in the Description page of Project Settings.

#include "vr_game.h"
#include "MainPlayer.h"
#include "UnrealNetwork.h"
#include "VR_HUD.h"
// Sets default values
AMainPlayer::AMainPlayer()
{
	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;



	//attach camera to the player
	FPSCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("FPS Camera"));

	FPSCamera->bUsePawnControlRotation = true;

	FPSCamera->AttachTo(GetCapsuleComponent());

	//initalize the camera position
	cameraPosition = FVector(0, 0, 0);

	//save start position
	//startPosition = GetActorLocation();
}

// Called when the game starts or when spawned
void AMainPlayer::BeginPlay()
{
	Super::BeginPlay();

	//set the cameras relative position
}

// Called every frame
void AMainPlayer::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	//set the camera position

	//check to make sure the player has not fallen off the map
	if (GetActorLocation().Z < -250)
		respawn();
}

// Called to bind functionality to input
void AMainPlayer::SetupPlayerInputComponent(class UInputComponent* InputComponent)
{
	Super::SetupPlayerInputComponent(InputComponent);

	//bind rotation for the fps camera
	InputComponent->BindAxis("Turn", this, &AMainPlayer::AddControllerYawInput);
	InputComponent->BindAxis("LookUpT", this, &AMainPlayer::AddControllerPitchInput);

	//bind the player inputs
	InputComponent->BindAxis("MoveForward", this, &AMainPlayer::MoveForward);
	//bind right movement
	InputComponent->BindAxis("MoveRight", this, &AMainPlayer::MoveRight);

	//bind the jumping inputs
	InputComponent->BindAction("Jump", IE_Pressed, this, &AMainPlayer::StartJump);
	InputComponent->BindAction("Jump", IE_Released, this, &AMainPlayer::EndJump);

	//bind fire action
	InputComponent->BindAction("Fire", IE_Pressed, this, &AMainPlayer::Fire);
}

void AMainPlayer::MoveForward(float value)
{
	//get forward direction
	FVector direction = FRotationMatrix(Controller->GetControlRotation()).GetScaledAxis(EAxis::X);
	//Add the input movement to make the character move forward
	AddMovementInput(direction, value);
}


void AMainPlayer::MoveRight(float value)
{
	//get right direction
	FVector direction = FRotationMatrix(Controller->GetControlRotation()).GetScaledAxis(EAxis::Y);
	//add movement input along the x axis
	AddMovementInput(direction, value);
}

void AMainPlayer::StartJump()
{

	//do a ray trace to see if we can jump(prevents jumping off of nothing
	FCollisionQueryParams traceParams(FName("Platformer trace"), true, this);
	traceParams.bReturnPhysicalMaterial = false;

	//do trace
	FVector start = GetActorLocation();

	FVector end = start + FVector(0, 0, -100);


	//init hit result
	FHitResult hit(ForceInit);

	//get trace start


	//make the player jump
	bPressedJump = GetWorld()->LineTraceSingleByChannel(hit, start, end, ECC_Pawn, traceParams);
}

void AMainPlayer::EndJump()
{
	//make the player stop jumping
	bPressedJump = false;
	playerHealth = health;
}


void AMainPlayer::Fire_Implementation()
{
	GEngine->AddOnScreenDebugMessage(1, 2, FColor::Red, TEXT("Fire was clicked"));
	//fire a ray to hit targets
	FCollisionQueryParams traceParams(FName("shoot trace"), true, this);
	traceParams.bReturnPhysicalMaterial = false;

	FVector cameraLocation;
	FRotator cameraRotation;
	GetActorEyesViewPoint(cameraLocation, cameraRotation);
	//ignore static mesh actor
	traceParams.AddIgnoredActor(this);
	//GetWorld()->GetLevel()->Actors[0]->Name

	FVector start;
	FVector end;
	start = cameraLocation;
	end = start + cameraRotation.Vector() * 1000;


	FHitResult hit(ForceInit);

	//if anything was hit then destroy it
	GetWorld()->LineTraceSingleByChannel(hit, start, end, ECC_GameTraceChannel1, traceParams);
	if (hit.GetActor())
	{
		//destroy actor
		if (!(hit.GetActor()->IsA(AMainPlayer::StaticClass())))
		{
			GEngine->AddOnScreenDebugMessage(3, 2, FColor::Red, FString("Object was destroyed ( " + hit.GetActor()->GetName() + " )"));
			hit.GetActor()->Destroy();
		}
		else
		{
			//GEngine->AddOnScreenDebugMessage(2, 2, FColor::Red, TEXT("Player Was clicked on"));
			//change hit players health
			AMainPlayer* player = Cast<AMainPlayer>(hit.GetActor());

			//lower players health by five
			player->health -= 5;

			//if the player is dead
			if (player->IsDead())
			{

				//get this players game state 
				//reset the players health
				player->health = 100;

				//respawn the player
				player->respawn();

			}

		}
	}
}

bool AMainPlayer::Fire_Validate()
{
	return true;
}

void AMainPlayer::GetLifetimeReplicatedProps(TArray< FLifetimeProperty > & OutLifetimeProps) const
{
	DOREPLIFETIME(AMainPlayer, health);

	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
}

bool AMainPlayer::IsDead()
{
	return (health < 1);
}


void AMainPlayer::respawn()
{
	SetActorLocation(startPosition);
}



