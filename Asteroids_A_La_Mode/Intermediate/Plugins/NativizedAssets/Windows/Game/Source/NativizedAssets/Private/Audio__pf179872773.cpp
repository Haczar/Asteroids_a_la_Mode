#include "NativizedAssets.h"
#include "Audio__pf179872773.h"
FText E__Audio__pf__GetUserFriendlyName(int32 InValue)
{
	FText Text;
	const auto EnumValue = static_cast<E__Audio__pf>(InValue);
	switch(EnumValue)
	{
		case E__Audio__pf::E__Audio__pf_MAX: FTextStringHelper::ReadFromString(TEXT("Audio MAX"), Text); break;
		default: ensure(false);
	};
	return Text;
};
