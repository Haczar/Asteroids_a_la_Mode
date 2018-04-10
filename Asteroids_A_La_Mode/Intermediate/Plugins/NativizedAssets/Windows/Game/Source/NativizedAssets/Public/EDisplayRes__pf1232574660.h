#pragma once
#include "EDisplayRes__pf1232574660.generated.h"
UENUM(BlueprintType, meta=(ReplaceConverted="/Game/UserInterface/MainScreen/EDisplayRes.EDisplayRes", OverrideNativeName="EDisplayRes", EnumDisplayNameFn="E__EDisplayRes__pf__GetUserFriendlyName") )
enum class E__EDisplayRes__pf  : uint8
{
	NewEnumerator0 = 0 UMETA(OverrideName = "EDisplayRes::NewEnumerator0"),
	NewEnumerator1 = 1 UMETA(OverrideName = "EDisplayRes::NewEnumerator1"),
	NewEnumerator2 = 2 UMETA(OverrideName = "EDisplayRes::NewEnumerator2"),
	NewEnumerator3 = 3 UMETA(OverrideName = "EDisplayRes::NewEnumerator3"),
	E__EDisplayRes__pf_MAX = 4 UMETA(OverrideName = "EDisplayRes::EDisplayRes_MAX"),
};
FText E__EDisplayRes__pf__GetUserFriendlyName(int32 InValue);
