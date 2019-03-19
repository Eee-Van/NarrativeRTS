// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "TopDownImportGameMode.h"
#include "TopDownImportPlayerController.h"
#include "TopDownImportCharacter.h"
#include "UObject/ConstructorHelpers.h"

ATopDownImportGameMode::ATopDownImportGameMode()
{
	// use our custom PlayerController class
	PlayerControllerClass = ATopDownImportPlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/TopDownCPP/Blueprints/TopDownCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}