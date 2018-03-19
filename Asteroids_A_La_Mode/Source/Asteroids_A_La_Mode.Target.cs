// Fill out your copyright notice in the Description page of Project Settings.

using UnrealBuildTool;
using System.Collections.Generic;

public class Asteroids_A_La_ModeTarget : TargetRules
{
	public Asteroids_A_La_ModeTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;

		ExtraModuleNames.AddRange( new string[] { "Asteroids_A_La_Mode" } );
	}
}
