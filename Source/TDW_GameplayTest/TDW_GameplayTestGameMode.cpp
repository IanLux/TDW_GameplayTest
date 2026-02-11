// Copyright Epic Games, Inc. All Rights Reserved.

#include "TDW_GameplayTestGameMode.h"
#include "TDW_GameplayTestPlayerController.h"
#include "TDW_GameplayTestCharacter.h"
#include "UObject/ConstructorHelpers.h"

ATDW_GameplayTestGameMode::ATDW_GameplayTestGameMode()
{
	// use our custom PlayerController class
	PlayerControllerClass = ATDW_GameplayTestPlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/TopDown/Blueprints/BP_TopDownCharacter"));
	if (PlayerPawnBPClass.Class != nullptr)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}

	// set default controller to our Blueprinted controller
	static ConstructorHelpers::FClassFinder<APlayerController> PlayerControllerBPClass(TEXT("/Game/TopDown/Blueprints/BP_TopDownPlayerController"));
	if(PlayerControllerBPClass.Class != NULL)
	{
		PlayerControllerClass = PlayerControllerBPClass.Class;
	}
}