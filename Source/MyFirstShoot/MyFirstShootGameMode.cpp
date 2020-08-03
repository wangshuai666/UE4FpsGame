// Copyright Epic Games, Inc. All Rights Reserved.

#include "MyFirstShootGameMode.h"
#include "MyFirstShootHUD.h"
#include "MyFirstShootCharacter.h"
#include "UObject/ConstructorHelpers.h"

AMyFirstShootGameMode::AMyFirstShootGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AMyFirstShootHUD::StaticClass();
}
