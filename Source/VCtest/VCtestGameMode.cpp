// Copyright Epic Games, Inc. All Rights Reserved.

#include "VCtestGameMode.h"
#include "VCtestCharacter.h"
#include "UObject/ConstructorHelpers.h"

AVCtestGameMode::AVCtestGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
