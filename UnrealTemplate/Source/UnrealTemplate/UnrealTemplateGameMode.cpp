// Copyright Epic Games, Inc. All Rights Reserved.

#include "UnrealTemplateGameMode.h"
#include "UnrealTemplateCharacter.h"
#include "UObject/ConstructorHelpers.h"

AUnrealTemplateGameMode::AUnrealTemplateGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
