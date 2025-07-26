// Copyright (c) 2025 William Melton (Melting Point Productions). All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "SandboxPlayerController.generated.h"

class UInputMappingContext;

/**
 * PlayerController class that manages input mappings
 */
UCLASS()
class UE5_SANDBOX_API ASandboxPlayerController : public APlayerController
{
	GENERATED_BODY()

protected:

	// Input Mapping Context
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="Input", meta = (AllowPrivateAccess = "true"))
	TArray<UInputMappingContext*> DefaultMappingContexts;

	virtual void SetupInputComponent() override;

	
};
