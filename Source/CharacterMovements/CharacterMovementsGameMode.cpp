// Copyright Epic Games, Inc. All Rights Reserved.

#include "CharacterMovementsGameMode.h"
#include "CharacterMovementsCharacter.h"
#include "UObject/ConstructorHelpers.h"

ACharacterMovementsGameMode::ACharacterMovementsGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
