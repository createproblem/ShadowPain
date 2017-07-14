// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "BaseCharacter.generated.h"

UCLASS(Blueprintable)
class SHADOWPAIN_API ABaseCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Health property
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "BaseCharacter")
		float Health = 100;

	// IsDead property
	UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Category = "BaseCharacter")
		bool IsDead = false;

	// Claculate health by given damage delta
	UFUNCTION(BlueprintCallable, Category = "BaseCharacter")
		virtual void CalculateHealth(float delta);

	// Editor code to make updating values in the editor cleaner
#if WITH_EDITOR
	virtual void PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent)
		override;
#endif // WITH_EDITOR


public:
	// Sets default values for this character's properties
	ABaseCharacter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	// Calculates if the player is dead or not
	virtual void CalculateDead();

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	
	
};
