#include "NativizedAssets.h"
#include "Camera__pf179872773.h"
FText E__Camera__pf__GetUserFriendlyName(int32 InValue)
{
	FText Text;
	const auto EnumValue = static_cast<E__Camera__pf>(InValue);
	switch(EnumValue)
	{
		case E__Camera__pf::E__Camera__pf_MAX: FTextStringHelper::ReadFromString(TEXT("Camera MAX"), Text); break;
		default: ensure(false);
	};
	return Text;
};
