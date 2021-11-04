// Copyright Epic Games, Inc. All Rights Reserved.

#include "homework3GameMode.h"
#include "homework3HUD.h"
#include "homework3Character.h"
#include "UObject/ConstructorHelpers.h"

Ahomework3GameMode::Ahomework3GameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = Ahomework3HUD::StaticClass();
}
