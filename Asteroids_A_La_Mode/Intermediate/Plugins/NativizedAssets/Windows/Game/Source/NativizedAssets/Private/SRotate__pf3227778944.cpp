#include "NativizedAssets.h"
#include "SRotate__pf3227778944.h"
FText E__SRotate__pf__GetUserFriendlyName(int32 InValue)
{
	FText Text;
	const auto EnumValue = static_cast<E__SRotate__pf>(InValue);
	switch(EnumValue)
	{
		case E__SRotate__pf::NewEnumerator0: FTextStringHelper::ReadFromString(TEXT("NSLOCTEXT(\"[1AF556D24C70FFCD819181BB0C5B6A27]\", \"90905395466CD5A9250019925417CF4A\", \"RotateRight\")"), Text); break;
		case E__SRotate__pf::NewEnumerator1: FTextStringHelper::ReadFromString(TEXT("NSLOCTEXT(\"[1AF556D24C70FFCD819181BB0C5B6A27]\", \"290843E642F21FF3F3D9989295038AC5\", \"RotateLeft\")"), Text); break;
		case E__SRotate__pf::NewEnumerator2: FTextStringHelper::ReadFromString(TEXT("NSLOCTEXT(\"[1AF556D24C70FFCD819181BB0C5B6A27]\", \"B03ADC064981C451E1F5DAAE7ACED286\", \"NoRotation\")"), Text); break;
		case E__SRotate__pf::E__SRotate__pf_MAX: FTextStringHelper::ReadFromString(TEXT("SRotate MAX"), Text); break;
		default: ensure(false);
	};
	return Text;
};
