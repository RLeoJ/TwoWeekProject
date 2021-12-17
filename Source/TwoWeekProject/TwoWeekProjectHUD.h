// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once 

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "TwoWeekProjectHUD.generated.h"

UCLASS()
class ATwoWeekProjectHUD : public AHUD
{
	GENERATED_BODY()

public:
	ATwoWeekProjectHUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;

};

