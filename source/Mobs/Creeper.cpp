
#include "Globals.h"  // NOTE: MSVC stupidness requires this to be the same across all modules

#include "Creeper.h"





cCreeper::cCreeper(void) :
	super("Creeper", 50, "mob.creeper.say", "mob.creeper.say", 0.6, 1.8)
{
}





void cCreeper::GetDrops(cItems & a_Drops, cEntity * a_Killer)
{
	AddRandomDropItem(a_Drops, 0, 2, E_ITEM_GUNPOWDER);

	// TODO Check if killed by a skeleton, then drop random music disk
}




