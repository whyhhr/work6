// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once 

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "homework3HUD.generated.h"

UCLASS()
class Ahomework3HUD : public AHUD
{
	GENERATED_BODY()

public:
	Ahomework3HUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;

};

