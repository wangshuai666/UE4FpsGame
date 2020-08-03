// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once 

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "MyFirstShootHUD.generated.h"

UCLASS()
class AMyFirstShootHUD : public AHUD
{
	GENERATED_BODY()

public:
	AMyFirstShootHUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;

};

