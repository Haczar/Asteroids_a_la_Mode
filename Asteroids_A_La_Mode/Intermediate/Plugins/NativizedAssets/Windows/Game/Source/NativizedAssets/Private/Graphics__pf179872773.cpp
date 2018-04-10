#include "NativizedAssets.h"
#include "Graphics__pf179872773.h"
FText E__Graphics__pf__GetUserFriendlyName(int32 InValue)
{
	FText Text;
	const auto EnumValue = static_cast<E__Graphics__pf>(InValue);
	switch(EnumValue)
	{
		case E__Graphics__pf::NewEnumerator0: FTextStringHelper::ReadFromString(TEXT("NSLOCTEXT(\"[023B0A04494CAF9113E6589BA2CB3103]\", \"09E76CDB4B2859701E49D0BB70272A3F\", \"Render Resolution\")"), Text); break;
		case E__Graphics__pf::NewEnumerator1: FTextStringHelper::ReadFromString(TEXT("NSLOCTEXT(\"[023B0A04494CAF9113E6589BA2CB3103]\", \"00633D8B434110760995CAB1306E29DC\", \"Render Rate\")"), Text); break;
		case E__Graphics__pf::NewEnumerator2: FTextStringHelper::ReadFromString(TEXT("NSLOCTEXT(\"[023B0A04494CAF9113E6589BA2CB3103]\", \"4D25BB1844F5688CAF6C898FAF9BDFFB\", \"AA Method\")"), Text); break;
		case E__Graphics__pf::NewEnumerator4: FTextStringHelper::ReadFromString(TEXT("NSLOCTEXT(\"[023B0A04494CAF9113E6589BA2CB3103]\", \"011FE71A420A9B5A80B007AB90A76EB3\", \"Ansio\")"), Text); break;
		case E__Graphics__pf::NewEnumerator3: FTextStringHelper::ReadFromString(TEXT("NSLOCTEXT(\"[023B0A04494CAF9113E6589BA2CB3103]\", \"520BD9194B97245C86769DBD4D5D3E44\", \"Draw Distance\")"), Text); break;
		case E__Graphics__pf::NewEnumerator5: FTextStringHelper::ReadFromString(TEXT("NSLOCTEXT(\"[023B0A04494CAF9113E6589BA2CB3103]\", \"C9A11C184046A13DFC8D08A0C358CA66\", \"Particle Effects\")"), Text); break;
		case E__Graphics__pf::NewEnumerator6: FTextStringHelper::ReadFromString(TEXT("NSLOCTEXT(\"[023B0A04494CAF9113E6589BA2CB3103]\", \"E59149964BF46891DF9FB6B049E21789\", \"Bloom\")"), Text); break;
		case E__Graphics__pf::NewEnumerator9: FTextStringHelper::ReadFromString(TEXT("NSLOCTEXT(\"[023B0A04494CAF9113E6589BA2CB3103]\", \"81B56DD541AE9F56F56A5C92A838DD53\", \"Ambient Occulusion\")"), Text); break;
		case E__Graphics__pf::NewEnumerator10: FTextStringHelper::ReadFromString(TEXT("NSLOCTEXT(\"[023B0A04494CAF9113E6589BA2CB3103]\", \"E79BB3AA4C92B1B3AD4EE3966E8660BD\", \"HDR\")"), Text); break;
		case E__Graphics__pf::NewEnumerator7: FTextStringHelper::ReadFromString(TEXT("NSLOCTEXT(\"[023B0A04494CAF9113E6589BA2CB3103]\", \"75AC3E1843CBBE729A4A14A1C7D82F70\", \"MotionBlur\")"), Text); break;
		case E__Graphics__pf::NewEnumerator8: FTextStringHelper::ReadFromString(TEXT("NSLOCTEXT(\"[023B0A04494CAF9113E6589BA2CB3103]\", \"0806467C4E43DACACBCBEEB3EBF4301B\", \"Depth of Field\")"), Text); break;
		case E__Graphics__pf::E__Graphics__pf_MAX: FTextStringHelper::ReadFromString(TEXT("Graphics MAX"), Text); break;
		default: ensure(false);
	};
	return Text;
};
