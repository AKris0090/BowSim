// Copyright Epic Games, Inc. All Rights Reserved.

#include "BowSimGameMode.h"
#include "BowSimHUD.h"
#include "BowSimCharacter.h"
#include "UObject/ConstructorHelpers.h"

ABowSimGameMode::ABowSimGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Project/Character/BP_FPSCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = ABowSimHUD::StaticClass();
}
