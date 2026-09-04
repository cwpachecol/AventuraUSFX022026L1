// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "AventuraUSFX022026L1GameMode.generated.h"

class APlataforma;

UCLASS(MinimalAPI)
class AAventuraUSFX022026L1GameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	AAventuraUSFX022026L1GameMode();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	
	TArray<APlataforma*> aPlataformas;
	
	FTimerHandle TimerEliminarPlataforma;

	void EliminarPlataforma();

	int tipoPlataformaActual;
};



