#include "NativizedAssets.h"
#include "Difficulty__pf179872773.h"
FText E__Difficulty__pf__GetUserFriendlyName(int32 InValue)
{
	FText Text;
	const auto EnumValue = static_cast<E__Difficulty__pf>(InValue);
	switch(EnumValue)
	{
		case E__Difficulty__pf::E__Difficulty__pf_MAX: FTextStringHelper::ReadFromString(TEXT("Difficulty MAX"), Text); break;
		default: ensure(false);
	};
	return Text;
};
