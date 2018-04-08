#pragma once
#include "Controls__pf179872773.generated.h"
UENUM(BlueprintType, meta=(ReplaceConverted="/Game/Modes/Options/Controls.Controls", OverrideNativeName="Controls", EnumDisplayNameFn="E__Controls__pf__GetUserFriendlyName") )
enum class E__Controls__pf  : uint8
{
	NewEnumerator0 = 0 UMETA(OverrideName = "Controls::NewEnumerator0"),
	NewEnumerator1 = 1 UMETA(OverrideName = "Controls::NewEnumerator1"),
	E__Controls__pf_MAX = 2 UMETA(OverrideName = "Controls::Controls_MAX"),
};
FText E__Controls__pf__GetUserFriendlyName(int32 InValue);
