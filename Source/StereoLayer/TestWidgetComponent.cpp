// Fill out your copyright notice in the Description page of Project Settings.

//#include "Runtime/UMG/Private/UMGPrivatePCH.h"

#include "StereoLayer.h"
#include "TestWidgetComponent.h"
//#include "HittestGrid.h"
//#if !UE_SERVER
//#include "ISlateRHIRendererModule.h"
//#include "ISlate3DRenderer.h"
//#endif // !UE_SERVER
//#include "DynamicMeshBuilder.h"
//#include "Scalability.h"
//#include "WidgetLayoutLibrary.h"
//#include "PhysicsEngine/BodySetup.h"
//#include "SGameLayerManager.h"
//#include "Slate/WidgetRenderer.h"
//#include "Slate/SWorldWidgetScreenLayer.h"
//#include "Widgets/LayerManager/STooltipPresenter.h"
//#include "Widgets/Layout/SPopup.h"



UTextureRenderTarget2D * UTestWidgetComponent::GetRenderTarget() const
{
	return RenderTarget;
}
