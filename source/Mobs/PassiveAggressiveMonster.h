
#pragma once

#include "AggressiveMonster.h"





class cPassiveAggressiveMonster :
	public cAggressiveMonster
{
	typedef cAggressiveMonster super;
	
public:
	cPassiveAggressiveMonster(const AString & a_ConfigName, char a_ProtocolMobType, const AString & a_SoundHurt, const AString & a_SoundDeath, double a_Width, double a_Height);

	virtual void DoTakeDamage(TakeDamageInfo & a_TDI) override;
} ;




