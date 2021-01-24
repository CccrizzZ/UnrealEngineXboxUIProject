// Copyright Epic Games, Inc. All Rights Reserved.

#include "Project_Liu_BeiningGameMode.h"
#include "Project_Liu_BeiningCharacter.h"
#include "UObject/ConstructorHelpers.h"

AProject_Liu_BeiningGameMode::AProject_Liu_BeiningGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
