// Fill out your copyright notice in the Description page of Project Settings.


#include "PlataformaAcuatica.h"

APlataformaAcuatica::APlataformaAcuatica()
{
	PrimaryActorTick.bCanEverTick = true;

	static ConstructorHelpers::FObjectFinder<UStaticMesh> PlataformaMeshAsset(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_NarrowCapsule.Shape_NarrowCapsule'"));

	// Create mesh component for the projectile sphere
	mallaPlataforma->SetStaticMesh(PlataformaMeshAsset.Object);

	tipoPlataforma = ETipoPlataforma::PLATAFORMA_ACUATICA;
}
