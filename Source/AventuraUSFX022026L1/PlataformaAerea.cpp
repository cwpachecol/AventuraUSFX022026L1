// Fill out your copyright notice in the Description page of Project Settings.


#include "PlataformaAerea.h"
#include "UObject/ConstructorHelpers.h"
#include "Components/StaticMeshComponent.h"
#include "Engine/StaticMesh.h"

APlataformaAerea::APlataformaAerea()
{
	PrimaryActorTick.bCanEverTick = true;

	static ConstructorHelpers::FObjectFinder<UStaticMesh> PlataformaMeshAsset(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Torus.Shape_Torus'"));

	// Create mesh component for the projectile sphere
	mallaPlataforma->SetStaticMesh(PlataformaMeshAsset.Object);

	movimientoEjes = FVector(1.0f, 1.0f, 0.0f);
	movimientoLimitesMaximos = FVector(FMath::RandRange(200.0f, 200.0f), FMath::RandRange(200.0f, 800.0f), FMath::RandRange(200.0f, 800.0f));
	movimientoLimitesMinimos = FVector(FMath::RandRange(-200.0f, -200.0f), FMath::RandRange(-800.0f, -200.0f), FMath::RandRange(-800.0f, -200.0f));
	movimientoVelocidades = FVector(FMath::RandRange(50.0f, 50.0f), FMath::RandRange(50.0f, 200.0f), FMath::RandRange(50.0f, 200.0f));
	movimientoDireccion = FVector(1.0f, 1.0f, 0.0f);
	//movimientoDireccion = FVector(FMath::RandRange(-1.0f, 1.0f), FMath::RandRange(-1.0f, 1.0f), FMath::RandRange(-1.0f, 1.0f));
}

void APlataformaAerea::BeginPlay()
{
	Super::BeginPlay();
}

void APlataformaAerea::Tick(float DeltaTime)
{
	//Super::Tick(DeltaTime);

	posicionActual = GetActorLocation();

	if ((posicionActual.X >= movimientoLimitesMaximos.X) || (posicionActual.X <= movimientoLimitesMinimos.X))
	{
		movimientoDireccion.X = movimientoDireccion.X * -1;
	}

	if ((posicionActual.Y >= movimientoLimitesMaximos.Y) || (posicionActual.Y <= movimientoLimitesMinimos.Y))
	{
		movimientoDireccion.Y = movimientoDireccion.Y * -1;
	}

	//posicionActual = posicionActual + movimientoDireccion * movimientoVelocidades * DeltaTime;

	SetActorLocation(posicionActual);

}
