// Fill out your copyright notice in the Description page of Project Settings.

using UnrealBuildTool;
using System.Collections.Generic;

public class Sci_fi_42_secondsEditorTarget : TargetRules
{
	public Sci_fi_42_secondsEditorTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Editor;

		ExtraModuleNames.AddRange( new string[] { "Sci_fi_42_seconds" } );
	}
}
