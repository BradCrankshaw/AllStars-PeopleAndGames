// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "GamesForImpactGameMode.h"
#include "GamesForImpactPlayerController.h"
#include "GamesForImpactCharacter.h"
#include "UObject/ConstructorHelpers.h"

AGamesForImpactGameMode::AGamesForImpactGameMode()
{
	// use our custom PlayerController class
	PlayerControllerClass = AGamesForImpactPlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/TopDownCPP/Blueprints/TopDownCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}