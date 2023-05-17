// Copyright Epic Games, Inc. All Rights Reserved.

#include "StalkerGameMode.h"
#include "StalkerCharacter.h"
#include "UObject/ConstructorHelpers.h"

AStalkerGameMode::AStalkerGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
