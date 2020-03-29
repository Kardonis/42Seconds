// Fill out your copyright notice in the Description page of Project Settings.

using UnrealBuildTool;
using System.Collections.Generic;

public class Sci_fi_42_secondsTarget : TargetRules
{
	public Sci_fi_42_secondsTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;

		ExtraModuleNames.AddRange( new string[] { "Sci_fi_42_seconds" } );
	}
}
