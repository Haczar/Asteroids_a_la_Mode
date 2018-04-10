#pragma once
#include "EMenSel__pf1232574660.generated.h"
UENUM(BlueprintType, meta=(ReplaceConverted="/Game/UserInterface/MainScreen/EMenSel.EMenSel", OverrideNativeName="EMenSel", EnumDisplayNameFn="E__EMenSel__pf__GetUserFriendlyName") )
enum class E__EMenSel__pf  : uint8
{
	NewEnumerator0 = 0 UMETA(OverrideName = "EMenSel::NewEnumerator0"),
	NewEnumerator1 = 1 UMETA(OverrideName = "EMenSel::NewEnumerator1"),
	NewEnumerator2 = 2 UMETA(OverrideName = "EMenSel::NewEnumerator2"),
	NewEnumerator3 = 3 UMETA(OverrideName = "EMenSel::NewEnumerator3"),
	E__EMenSel__pf_MAX = 4 UMETA(OverrideName = "EMenSel::EMenSel_MAX"),
};
FText E__EMenSel__pf__GetUserFriendlyName(int32 InValue);
