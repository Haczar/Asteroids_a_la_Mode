#include "NativizedAssets.h"
#include "Display__pf179872773.h"
FText E__Display__pf__GetUserFriendlyName(int32 InValue)
{
	FText Text;
	const auto EnumValue = static_cast<E__Display__pf>(InValue);
	switch(EnumValue)
	{
		case E__Display__pf::NewEnumerator0: FTextStringHelper::ReadFromString(TEXT("NSLOCTEXT(\"[A87086254F133E9210C51F9E9B9357DA]\", \"564DACAC47DC2A9652C5F7AD87E5BA35\", \"Resoultion\")"), Text); break;
		case E__Display__pf::NewEnumerator1: FTextStringHelper::ReadFromString(TEXT("NSLOCTEXT(\"[A87086254F133E9210C51F9E9B9357DA]\", \"BDE1431B4D586B0C1BD424A0A015A1A6\", \"Window Behavior\")"), Text); break;
		case E__Display__pf::NewEnumerator2: FTextStringHelper::ReadFromString(TEXT("NSLOCTEXT(\"[A87086254F133E9210C51F9E9B9357DA]\", \"0EC9FEF742D5BC5F57C450A4F7256560\", \"RefreshRate\")"), Text); break;
		case E__Display__pf::E__Display__pf_MAX: FTextStringHelper::ReadFromString(TEXT("Display MAX"), Text); break;
		default: ensure(false);
	};
	return Text;
};
