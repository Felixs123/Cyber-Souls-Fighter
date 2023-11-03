// Copyright Epic Games, Inc. All Rights Reserved.

#include "CyberSoulsFighterGameMode.h"
#include "CyberSoulsFighterCharacter.h"
#include "UObject/ConstructorHelpers.h"

ACyberSoulsFighterGameMode::ACyberSoulsFighterGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
