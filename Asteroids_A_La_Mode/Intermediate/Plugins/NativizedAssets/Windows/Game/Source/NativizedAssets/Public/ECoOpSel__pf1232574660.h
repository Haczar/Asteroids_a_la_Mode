#pragma once
#include "ECoOpSel__pf1232574660.generated.h"
UENUM(BlueprintType, meta=(ReplaceConverted="/Game/UserInterface/MainScreen/ECoOpSel.ECoOpSel", OverrideNativeName="ECoOpSel", EnumDisplayNameFn="E__ECoOpSel__pf__GetUserFriendlyName") )
enum class E__ECoOpSel__pf  : uint8
{
	NewEnumerator0 = 0 UMETA(OverrideName = "ECoOpSel::NewEnumerator0"),
	NewEnumerator1 = 1 UMETA(OverrideName = "ECoOpSel::NewEnumerator1"),
	NewEnumerator2 = 2 UMETA(OverrideName = "ECoOpSel::NewEnumerator2"),
	E__ECoOpSel__pf_MAX = 3 UMETA(OverrideName = "ECoOpSel::ECoOpSel_MAX"),
};
FText E__ECoOpSel__pf__GetUserFriendlyName(int32 InValue);
