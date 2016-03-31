// Fill out your copyright notice in the Description page of Project Settings.

#include "Shotgun_Prototype.h"
#include "WeaponItemBase.h"


AWeaponItemBase::AWeaponItemBase()
{
    PrimaryActorTick.bCanEverTick = true;
}

void AWeaponItemBase::BeginPlay() {
    Super::BeginPlay();
}

void AWeaponItemBase::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
    
    this->Fire();
    //this->Fire_Implementation();
    //UE_LOG(LogTemp, Error, TEXT("yo fire c++"));

}

/*
void AWeaponItemBase::Reload() {

}
*/

void AWeaponItemBase::Reload_Implementation() {

}

/*
void AWeaponItemBase::Fire() {

}
*/

void AWeaponItemBase::Fire_Implementation() {
    UE_LOG(LogTemp, Error, TEXT("yo fire c++"));
}