#include "cSimulator.h"
#include "cWorld.h"
#include "Vector3i.h"
#include "BlockID.h"
#include "Defines.h"
#include <vector>

cSimulator::cSimulator( cWorld* a_World )
	: m_World(a_World)
{

}

cSimulator::~cSimulator()
{
}

void cSimulator::WakeUp( int a_X, int a_Y, int a_Z )
{
	AddBlock( a_X, a_Y, a_Z );
	AddBlock( a_X-1, a_Y, a_Z );
	AddBlock( a_X+1, a_Y, a_Z );
	AddBlock( a_X, a_Y-1, a_Z );
	AddBlock( a_X, a_Y+1, a_Z );
	AddBlock( a_X, a_Y, a_Z-1 );
	AddBlock( a_X, a_Y, a_Z+1 );
}