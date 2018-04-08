#pragma once
#include "Display__pf179872773.generated.h"
UENUM(BlueprintType, meta=(ReplaceConverted="/Game/Modes/Options/Display.Display", OverrideNativeName="Display", EnumDisplayNameFn="E__Display__pf__GetUserFriendlyName") )
enum class E__Display__pf  : uint8
{
	NewEnumerator0 = 0 UMETA(OverrideName = "Display::NewEnumerator0"),
	NewEnumerator1 = 1 UMETA(OverrideName = "Display::NewEnumerator1"),
	NewEnumerator2 = 2 UMETA(OverrideName = "Display::NewEnumerator2"),
	E__Display__pf_MAX = 3 UMETA(OverrideName = "Display::Display_MAX"),
};
FText E__Display__pf__GetUserFriendlyName(int32 InValue);
