// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "VehicleGame.h"
#include "Player/VehiclePlayerCameraManager.h"

AVehiclePlayerCameraManager::AVehiclePlayerCameraManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	bUseClientSideCameraUpdates = false;
	bAlwaysApplyModifiers = true;
}

