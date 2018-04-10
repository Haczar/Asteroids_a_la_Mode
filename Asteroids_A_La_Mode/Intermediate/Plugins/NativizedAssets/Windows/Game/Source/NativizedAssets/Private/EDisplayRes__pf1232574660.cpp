#include "NativizedAssets.h"
#include "EDisplayRes__pf1232574660.h"
FText E__EDisplayRes__pf__GetUserFriendlyName(int32 InValue)
{
	FText Text;
	const auto EnumValue = static_cast<E__EDisplayRes__pf>(InValue);
	switch(EnumValue)
	{
		case E__EDisplayRes__pf::NewEnumerator0: FTextStringHelper::ReadFromString(TEXT("NSLOCTEXT(\"[951FE0F046A40DAC23D9768CC817A977]\", \"00DC679446A99D25655A0B908C9D1E33\", \"1280x720\")"), Text); break;
		case E__EDisplayRes__pf::NewEnumerator1: FTextStringHelper::ReadFromString(TEXT("NSLOCTEXT(\"[951FE0F046A40DAC23D9768CC817A977]\", \"92B416F4430A52FC12366A998F8302AC\", \"1920x1080\")"), Text); break;
		case E__EDisplayRes__pf::NewEnumerator2: FTextStringHelper::ReadFromString(TEXT("NSLOCTEXT(\"[951FE0F046A40DAC23D9768CC817A977]\", \"88EEC10145456D4B89C2B3A489D41039\", \"2560x1440\")"), Text); break;
		case E__EDisplayRes__pf::NewEnumerator3: FTextStringHelper::ReadFromString(TEXT("NSLOCTEXT(\"[951FE0F046A40DAC23D9768CC817A977]\", \"972803A24A6CAB57A2387588314836AE\", \"3840x2160\")"), Text); break;
		case E__EDisplayRes__pf::E__EDisplayRes__pf_MAX: FTextStringHelper::ReadFromString(TEXT("EDisplay Res MAX"), Text); break;
		default: ensure(false);
	};
	return Text;
};
