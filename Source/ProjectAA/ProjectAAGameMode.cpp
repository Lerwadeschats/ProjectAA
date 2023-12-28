// Copyright Epic Games, Inc. All Rights Reserved.

#include "ProjectAAGameMode.h"
#include "ProjectAACharacter.h"
#include "UObject/ConstructorHelpers.h"

AProjectAAGameMode::AProjectAAGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
