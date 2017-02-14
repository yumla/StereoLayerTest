// Copyright 1998-2016 Epic Games, Inc. All Rights Reserved.

#include "StereoLayer.h"
#include "StereoLayerGameMode.h"
#include "StereoLayerHUD.h"
#include "StereoLayerCharacter.h"

AStereoLayerGameMode::AStereoLayerGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AStereoLayerHUD::StaticClass();
}
