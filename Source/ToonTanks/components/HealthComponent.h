// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "HealthComponent.generated.h"

class AMyGameModeBase;
UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class TOONTANKS_API UHealthComponent : public UActorComponent
{
	GENERATED_BODY()

private:

	UPROPERTY(EditAnywhere)
	float DefaultHealth = 100.f;
	float Health = 0.f;

	AMyGameModeBase* GameModeRef;
public:	
	// Sets default values for this component's properties
	UHealthComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	
	UFUNCTION()
	void TakeDamage(AActor* DamagedActor,float Damage,const UDamageType* DamageType,AController* InstigatedBy,AActor* DamagedCauser);

		
};
