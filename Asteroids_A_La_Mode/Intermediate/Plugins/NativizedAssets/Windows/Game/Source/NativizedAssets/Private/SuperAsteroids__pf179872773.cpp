#include "NativizedAssets.h"
#include "SuperAsteroids__pf179872773.h"
FText E__SuperAsteroids__pf__GetUserFriendlyName(int32 InValue)
{
	FText Text;
	const auto EnumValue = static_cast<E__SuperAsteroids__pf>(InValue);
	switch(EnumValue)
	{
		case E__SuperAsteroids__pf::E__SuperAsteroids__pf_MAX: FTextStringHelper::ReadFromString(TEXT("Super Asteroids MAX"), Text); break;
		default: ensure(false);
	};
	return Text;
};
