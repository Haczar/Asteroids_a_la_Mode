#include "NativizedAssets.h"
#include "SRotate__pf668171628.h"
FText E__SRotate__pf__GetUserFriendlyName(int32 InValue)
{
	FText Text;
	const auto EnumValue = static_cast<E__SRotate__pf>(InValue);
	switch(EnumValue)
	{
		case E__SRotate__pf::NewEnumerator0: FTextStringHelper::ReadFromString(TEXT("NSLOCTEXT(\"[BFD831044611D7CB65673FA10FB6D0C2]\", \"352DA91049EF2B2E7FF0FE96EA9B9F27\", \"RotateRight\")"), Text); break;
		case E__SRotate__pf::NewEnumerator1: FTextStringHelper::ReadFromString(TEXT("NSLOCTEXT(\"[BFD831044611D7CB65673FA10FB6D0C2]\", \"6A0012EF49BE0922401BC79B5FB9B7FA\", \"RotateLeft\")"), Text); break;
		case E__SRotate__pf::NewEnumerator2: FTextStringHelper::ReadFromString(TEXT("NSLOCTEXT(\"[BFD831044611D7CB65673FA10FB6D0C2]\", \"DE8EE2104884782E1CEE8F90B6DAF8A7\", \"NoRotation\")"), Text); break;
		case E__SRotate__pf::E__SRotate__pf_MAX: FTextStringHelper::ReadFromString(TEXT("SRotate MAX"), Text); break;
		default: ensure(false);
	};
	return Text;
};
