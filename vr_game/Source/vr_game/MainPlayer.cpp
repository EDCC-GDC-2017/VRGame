// Fill out your copyright notice in the Description page of Project Settings.

#include "vr_game.h"
#include "MainPlayer.h"


// Sets default values
AMainPlayer::AMainPlayer()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;



	//attach camera to the player
	FPSCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("FPS Camera"));

	FPSCamera->bUsePawnControlRotation = true;

	FPSCamera->AttachTo(GetCapsuleComponent());

	

}

// Called when the game starts or when spawned
void AMainPlayer::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMainPlayer::Tick( float DeltaTime )
{
	Super::Tick( DeltaTime );

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
	FCollisionQueryParams traceParams(FName("Plarformer trace"), true,this);
	traceParams.bReturnPhysicalMaterial = false;

	//do trace
	FVector start = GetActorLocation();

	FVector end = start + FVector(0, 0, -256);


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
}

