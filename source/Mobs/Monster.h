
#pragma once

#include "../Pawn.h"
#include "../Defines.h"
#include "../World.h"
#include "../BlockID.h"
#include "../Item.h"





class Vector3f;
class cClientHandle;




// tolua_begin
class cMonster :
	public cPawn
{
	typedef cPawn super;
public:
	// tolua_end
	float m_SightDistance;
	
	/** Creates the mob object.
	* If a_ConfigName is not empty, the configuration is loaded using GetMonsterConfig()
	* a_ProtocolMobType is the ID of the mob used in the protocol ( http://wiki.vg/Entities#Mobs , 2012_12_22)
	* a_SoundHurt and a_SoundDeath are assigned into m_SoundHurt and m_SoundDeath, respectively
	*/
	cMonster(const AString & a_ConfigName, char a_ProtocolMobType, const AString & a_SoundHurt, const AString & a_SoundDeath, double a_Width, double a_Height);

	CLASS_PROTODEF(cMonster);
	
	virtual void SpawnOn(cClientHandle & a_ClientHandle) override;

	virtual void Tick(float a_Dt, cChunk & a_Chunk) override;

	virtual void DoTakeDamage(TakeDamageInfo & a_TDI) override;
	
	virtual void KilledBy(cEntity * a_Killer) override;

	virtual void MoveToPosition(const Vector3f & a_Position);
	virtual bool ReachedDestination(void);
	
	char GetMobType(void) const {return m_MobType; }

	const char * GetState();
	void SetState(const AString & str);
	
	virtual void CheckEventSeePlayer(void);
	virtual void EventSeePlayer(cEntity * a_Player);
	virtual cPlayer * FindClosestPlayer();		// non static is easier. also virtual so other mobs can implement their own searching algo 
	
	/// Reads the monster configuration for the specified monster name and assigns it to this object.
	void GetMonsterConfig(const AString & a_Name);
	
	virtual void EventLosePlayer(void);
	virtual void CheckEventLostPlayer(void);
	
	virtual void InStateIdle    (float a_Dt);
	virtual void InStateChasing (float a_Dt);
	virtual void InStateEscaping(float a_Dt);
	
	virtual void Attack(float a_Dt);
	int GetMobType() {return m_MobType;}
	int GetAttackRate(){return (int)m_AttackRate;}
	void SetAttackRate(int ar);
	void SetAttackRange(float ar);
	void SetAttackDamage(float ad);
	void SetSightDistance(float sd);
	
	enum MState{ATTACKING, IDLE, CHASING, ESCAPING} m_EMState;
	enum MPersonality{PASSIVE,AGGRESSIVE,COWARDLY} m_EMPersonality;
	
protected:
	
	cEntity * m_Target;
	float m_AttackRate;
	float idle_interval;

	Vector3f m_Destination;
	bool m_bMovingToDestination;
	bool m_bPassiveAggressive;

	float m_DestinationTime;

	float m_DestroyTimer;
	float m_Jump;

	char m_MobType;

	AString m_SoundHurt;
	AString m_SoundDeath;

	float m_SeePlayerInterval;
	float m_AttackDamage;
	float m_AttackRange;
	float m_AttackInterval;

	void AddRandomDropItem(cItems & a_Drops, unsigned int a_Min, unsigned int a_Max, short a_Item, short a_ItemHealth = 0);
} ; // tolua_export




