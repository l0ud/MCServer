
#pragma once

#include "BlockHandler.h"
#include "../World.h"
#include "../Ladder.h"





class cBlockLadderHandler :
	public cBlockHandler
{
public:
	cBlockLadderHandler(BLOCKTYPE a_BlockType)
		: cBlockHandler(a_BlockType)
	{
	}	


	virtual void PlaceBlock(cWorld * a_World, cPlayer * a_Player, NIBBLETYPE a_BlockMeta, int a_BlockX, int a_BlockY, int a_BlockZ, char a_Dir) override
	{
		a_World->SetBlock(a_BlockX, a_BlockY, a_BlockZ, m_BlockType, cLadder::DirectionToMetaData(a_Dir));
		OnPlacedByPlayer(a_World, a_Player, a_BlockX, a_BlockY, a_BlockZ, a_Dir);
	}


	virtual bool CanBePlacedAt(cWorld * a_World, int a_BlockX, int a_BlockY, int a_BlockZ, char a_Dir) override
	{
		AddDirection( a_BlockX, a_BlockY, a_BlockZ, a_Dir, true );
		return a_World->GetBlock( a_BlockX, a_BlockY, a_BlockZ ) != E_BLOCK_AIR;
	}


	virtual bool CanBeAt(cWorld * a_World, int a_BlockX, int a_BlockY, int a_BlockZ) override
	{
		char Dir = cLadder::MetaDataToDirection(a_World->GetBlockMeta( a_BlockX, a_BlockY, a_BlockZ));
		return CanBePlacedAt(a_World, a_BlockX, a_BlockY, a_BlockZ, Dir);
	}


	virtual const char * GetStepSound(void) override
	{
		return "step.wood";
	}
} ;



