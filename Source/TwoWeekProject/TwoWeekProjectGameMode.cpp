// Copyright Epic Games, Inc. All Rights Reserved.

#include "TwoWeekProjectGameMode.h"
#include "TwoWeekProjectHUD.h"
#include "TwoWeekProjectCharacter.h"
#include "UObject/ConstructorHelpers.h"

ATwoWeekProjectGameMode::ATwoWeekProjectGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = ATwoWeekProjectHUD::StaticClass();
}
