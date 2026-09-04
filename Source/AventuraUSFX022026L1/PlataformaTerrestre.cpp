// Fill out your copyright notice in the Description page of Project Settings.


#include "PlataformaTerrestre.h"

APlataformaTerrestre::APlataformaTerrestre()
{
	PrimaryActorTick.bCanEverTick = true;

	static ConstructorHelpers::FObjectFinder<UStaticMesh> PlataformaMeshAsset(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Cylinder.Shape_Cylinder'"));

	// Create mesh component for the projectile sphere
	mallaPlataforma->SetStaticMesh(PlataformaMeshAsset.Object);

	tipoPlataforma = ETipoPlataforma::PLATAFORMA_TERRESTRE;
}
