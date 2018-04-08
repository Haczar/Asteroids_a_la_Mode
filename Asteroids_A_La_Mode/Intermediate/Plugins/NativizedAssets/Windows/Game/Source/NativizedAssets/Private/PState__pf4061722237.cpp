#include "NativizedAssets.h"
#include "PState__pf4061722237.h"
FText E__PState__pf__GetUserFriendlyName(int32 InValue)
{
	FText Text;
	const auto EnumValue = static_cast<E__PState__pf>(InValue);
	switch(EnumValue)
	{
		case E__PState__pf::NewEnumerator0: FTextStringHelper::ReadFromString(TEXT("NSLOCTEXT(\"[B8C2EDD44E371E097D3773A0006F9CE5]\", \"4E316063426D8D950FDE878E5199C1BD\", \"Intact\")"), Text); break;
		case E__PState__pf::NewEnumerator1: FTextStringHelper::ReadFromString(TEXT("NSLOCTEXT(\"[B8C2EDD44E371E097D3773A0006F9CE5]\", \"456FECD94E4B974AFCA48DB5609451F3\", \"Destroyed\")"), Text); break;
		case E__PState__pf::NewEnumerator2: FTextStringHelper::ReadFromString(TEXT("NSLOCTEXT(\"[B8C2EDD44E371E097D3773A0006F9CE5]\", \"1A1BCF534A703186A58A28B7D6E76FA3\", \"InMenu\")"), Text); break;
		case E__PState__pf::NewEnumerator3: FTextStringHelper::ReadFromString(TEXT("NSLOCTEXT(\"[B8C2EDD44E371E097D3773A0006F9CE5]\", \"BC67092E4749192947DE8097E71BE57F\", \"GameOver\")"), Text); break;
		case E__PState__pf::E__PState__pf_MAX: FTextStringHelper::ReadFromString(TEXT("PState MAX"), Text); break;
		default: ensure(false);
	};
	return Text;
};
