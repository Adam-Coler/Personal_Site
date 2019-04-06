// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "Personal_SiteGameMode.h"
#include "Personal_SiteCharacter.h"

APersonal_SiteGameMode::APersonal_SiteGameMode()
{
	// Set default pawn class to our character
	DefaultPawnClass = APersonal_SiteCharacter::StaticClass();	
}
