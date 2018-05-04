// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "DroneGameGameMode.h"
#include "DroneGameCharacter.h"
#include "UObject/ConstructorHelpers.h"

ADroneGameGameMode::ADroneGameGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/DroneGame/DronePawn_BP"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
