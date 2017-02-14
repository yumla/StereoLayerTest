// Copyright 1998-2016 Epic Games, Inc. All Rights Reserved.
#pragma once 
#include "GameFramework/HUD.h"
#include "StereoLayerHUD.generated.h"

UCLASS()
class AStereoLayerHUD : public AHUD
{
	GENERATED_BODY()

public:
	AStereoLayerHUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;

};

