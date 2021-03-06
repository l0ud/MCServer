
#include "Globals.h"  // NOTE: MSVC stupidness requires this to be the same across all modules

#include "Vector3d.h"
#include "Vector3f.h"





Vector3d::Vector3d(const Vector3f & v )
	: x( v.x )
	, y( v.y )
	, z( v.z )
{
}

Vector3d::Vector3d(const Vector3f * v )
	: x( v->x )
	, y( v->y )
	, z( v->z )
{
}