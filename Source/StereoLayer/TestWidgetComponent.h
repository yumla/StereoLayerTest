// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Runtime/UMG/Private/UMGPrivatePCH.h"
#include "Components/WidgetComponent.h"
//#include "SlateCore/Public/Layout/ArrangedWidget.h"
#include "TestWidgetComponent.generated.h"

/**
* Beware! This feature is experimental and may be substantially changed or removed in future releases.
* A 3D instance of a Widget Blueprint that can be interacted with in the world.
*/
UCLASS( ClassGroup = Experimental, hidecategories = ( Object, Activation, "Components|Activation", Sockets, Base, Lighting, LOD, Mesh ), editinlinenew, meta = ( BlueprintSpawnableComponent, DevelopmentStatus = Experimental ) )
class STEREOLAYER_API UTestWidgetComponent : public UWidgetComponent
{
	GENERATED_BODY()
public:
	/** @return The render target to which the user widget is rendered */
	UFUNCTION( BlueprintCallable, Category = UserInterface )
		UTextureRenderTarget2D * GetRenderTarget() const;
};
