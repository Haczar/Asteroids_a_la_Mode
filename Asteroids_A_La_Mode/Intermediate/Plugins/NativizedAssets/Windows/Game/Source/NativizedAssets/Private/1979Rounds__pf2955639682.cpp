#include "NativizedAssets.h"
#include "1979Rounds__pf2955639682.h"
FText E__1979Rounds__pf__GetUserFriendlyName(int32 InValue)
{
	FText Text;
	const auto EnumValue = static_cast<E__1979Rounds__pf>(InValue);
	switch(EnumValue)
	{
		case E__1979Rounds__pf::NewEnumerator0: FTextStringHelper::ReadFromString(TEXT("NSLOCTEXT(\"[42EF76B042E2D321C1D905999D752728]\", \"05E008C04DB9A27CF2E28FA21D3AD505\", \"Round 1\")"), Text); break;
		case E__1979Rounds__pf::NewEnumerator1: FTextStringHelper::ReadFromString(TEXT("NSLOCTEXT(\"[42EF76B042E2D321C1D905999D752728]\", \"0913746D4B6E57ACD8AEB78DC8476BD6\", \"Round 2\")"), Text); break;
		case E__1979Rounds__pf::NewEnumerator2: FTextStringHelper::ReadFromString(TEXT("NSLOCTEXT(\"[42EF76B042E2D321C1D905999D752728]\", \"1792259446F675366EAD5CA638C3C41A\", \"Round 3\")"), Text); break;
		case E__1979Rounds__pf::NewEnumerator3: FTextStringHelper::ReadFromString(TEXT("NSLOCTEXT(\"[42EF76B042E2D321C1D905999D752728]\", \"0B3019CC4D868D8165BD2BB9C9176B7A\", \"Round 4\")"), Text); break;
		case E__1979Rounds__pf::NewEnumerator4: FTextStringHelper::ReadFromString(TEXT("NSLOCTEXT(\"[42EF76B042E2D321C1D905999D752728]\", \"993D3AAD4E07731276CDC29D28A4A078\", \"Round 5\")"), Text); break;
		case E__1979Rounds__pf::E__1979Rounds__pf_MAX: FTextStringHelper::ReadFromString(TEXT("1979Rounds MAX"), Text); break;
		default: ensure(false);
	};
	return Text;
};
