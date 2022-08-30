// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once 

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "BowSimHUD.generated.h"

UCLASS()
class ABowSimHUD : public AHUD
{
	GENERATED_BODY()

public:
	ABowSimHUD();

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;

//	void DrawHUD();

	void DrawHUD();

};

