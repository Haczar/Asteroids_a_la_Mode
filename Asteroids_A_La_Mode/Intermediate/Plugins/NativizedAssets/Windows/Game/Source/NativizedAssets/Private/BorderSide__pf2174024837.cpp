#include "NativizedAssets.h"
#include "BorderSide__pf2174024837.h"
FText E__BorderSide__pf__GetUserFriendlyName(int32 InValue)
{
	FText Text;
	const auto EnumValue = static_cast<E__BorderSide__pf>(InValue);
	switch(EnumValue)
	{
		case E__BorderSide__pf::NewEnumerator0: FTextStringHelper::ReadFromString(TEXT("NSLOCTEXT(\"[EC8A8D8A4B3A807B5E0C0196E322D8D7]\", \"DCF403D34DF8B2B7A77DAF853970E3ED\", \"Top\")"), Text); break;
		case E__BorderSide__pf::NewEnumerator1: FTextStringHelper::ReadFromString(TEXT("NSLOCTEXT(\"[EC8A8D8A4B3A807B5E0C0196E322D8D7]\", \"45B67FA64BD14D0A70ED6CBE4A1FA094\", \"Bottom\")"), Text); break;
		case E__BorderSide__pf::NewEnumerator2: FTextStringHelper::ReadFromString(TEXT("NSLOCTEXT(\"[EC8A8D8A4B3A807B5E0C0196E322D8D7]\", \"0EC8C6EA4573842E218BE4BA61E9F6E7\", \"Left\")"), Text); break;
		case E__BorderSide__pf::NewEnumerator3: FTextStringHelper::ReadFromString(TEXT("NSLOCTEXT(\"[EC8A8D8A4B3A807B5E0C0196E322D8D7]\", \"AA91B7C14AA248595A79FCB52D084644\", \"Right\")"), Text); break;
		case E__BorderSide__pf::E__BorderSide__pf_MAX: FTextStringHelper::ReadFromString(TEXT("Border Side MAX"), Text); break;
		default: ensure(false);
	};
	return Text;
};
