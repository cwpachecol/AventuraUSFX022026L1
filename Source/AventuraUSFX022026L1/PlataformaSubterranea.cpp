// Fill out your copyright notice in the Description page of Project Settings.


#include "PlataformaSubterranea.h"

APlataformaSubterranea::APlataformaSubterranea()
{
	PrimaryActorTick.bCanEverTick = true;

	static ConstructorHelpers::FObjectFinder<UStaticMesh> PlataformaMeshAsset(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_QuadPyramid.Shape_QuadPyramid'"));

	// Create mesh component for the projectile sphere
	mallaPlataforma->SetStaticMesh(PlataformaMeshAsset.Object);

	tipoPlataforma = ETipoPlataforma::PLATAFORMA_SUBTERRANEA;
}
