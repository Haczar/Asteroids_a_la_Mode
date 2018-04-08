#pragma once
#include "Difficulty__pf179872773.generated.h"
UENUM(BlueprintType, meta=(ReplaceConverted="/Game/Modes/Options/Difficulty.Difficulty", OverrideNativeName="Difficulty", EnumDisplayNameFn="E__Difficulty__pf__GetUserFriendlyName") )
enum class E__Difficulty__pf  : uint8
{
	E__Difficulty__pf_MAX = 0 UMETA(OverrideName = "Difficulty::Difficulty_MAX"),
};
FText E__Difficulty__pf__GetUserFriendlyName(int32 InValue);
