#pragma once
#include "PState__pf4061722237.generated.h"
UENUM(BlueprintType, meta=(ReplaceConverted="/Game/Player/PState.PState", OverrideNativeName="PState", EnumDisplayNameFn="E__PState__pf__GetUserFriendlyName") )
enum class E__PState__pf  : uint8
{
	NewEnumerator0 = 0 UMETA(OverrideName = "PState::NewEnumerator0"),
	NewEnumerator1 = 1 UMETA(OverrideName = "PState::NewEnumerator1"),
	NewEnumerator2 = 2 UMETA(OverrideName = "PState::NewEnumerator2"),
	NewEnumerator3 = 3 UMETA(OverrideName = "PState::NewEnumerator3"),
	E__PState__pf_MAX = 4 UMETA(OverrideName = "PState::PState_MAX"),
};
FText E__PState__pf__GetUserFriendlyName(int32 InValue);
