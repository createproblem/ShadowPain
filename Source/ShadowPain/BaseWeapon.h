// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BaseWeapon.generated.h"

UCLASS(Blueprintable)
class SHADOWPAIN_API ABaseWeapon : public AActor
{
	GENERATED_BODY()

public:
	// Damage
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "BaseWeapon")
		float Damage = 25;

	// Range
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "BaseWeapon")
		float Range = 100;

	// Editor code to make updating values in the editor cleaner
#if WITH_EDITOR
	virtual void PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent)
		override;
#endif // WITH_EDITOR
	
public:	
	// Sets default values for this actor's properties
	ABaseWeapon();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	
	
};
