#pragma once

// Some settings
#define NOISE_USE_INLINE 1
#define NOISE_USE_SSE 0

// Do not touch
#if NOISE_USE_INLINE
	#ifdef _MSC_VER
		#define __NOISE_INLINE__ __forceinline
	#else
		#define __NOISE_INLINE__ inline
	#endif  // _MSC_VER
#else
	#define __NOISE_INLINE__
#endif

#if NOISE_USE_SSE
# include <emmintrin.h>
#endif





class cNoise
{
public:
	cNoise( unsigned int a_Seed );
	~cNoise();

#if NOISE_USE_SSE
	__m128 SSE_IntNoise2D( int a_X1, int a_Y1, int a_X2, int a_Y2, int a_X3, int a_Y3, int a_X4, int a_Y4 ) const;
#endif

	__NOISE_INLINE__ float IntNoise( int a_X ) const;
	__NOISE_INLINE__ float IntNoise2D( int a_X, int a_Y ) const;
	__NOISE_INLINE__ float IntNoise3D( int a_X, int a_Y, int a_Z ) const;

	// Note: These functions have a mod8-irregular chance - each of the mod8 remainders has different chance of occurrence. Divide by 8 to rectify.
	__NOISE_INLINE__ int IntNoise1DInt( int a_X ) const;
	__NOISE_INLINE__ int IntNoise2DInt( int a_X, int a_Y ) const;
	__NOISE_INLINE__ int IntNoise3DInt( int a_X, int a_Y, int a_Z ) const;

	float LinearNoise1D( float a_X ) const;
	float CosineNoise1D( float a_X ) const;
	float CubicNoise1D( float a_X ) const;
	float SmoothNoise1D( int a_X ) const;

	float LinearNoise2D( float a_X, float a_Y ) const;
	float CosineNoise2D( float a_X, float a_Y ) const;
	float CubicNoise2D( float a_X, float a_Y ) const;
	float SSE_CubicNoise2D( float a_X, float a_Y ) const;

	float CosineNoise3D( float a_X, float a_Y, float a_Z ) const;
	float CubicNoise3D( float a_X, float a_Y, float a_Z ) const;

	void SetSeed( unsigned int a_Seed ) { m_Seed = a_Seed; }

	__NOISE_INLINE__ static float CubicInterpolate( float a_A, float a_B, float a_C, float a_D, float a_Pct );
	__NOISE_INLINE__ static float CosineInterpolate( float a_A, float a_B, float a_Pct );
	__NOISE_INLINE__ static float LinearInterpolate( float a_A, float a_B, float a_Pct );

private:

#if NOISE_USE_SSE
	__m128 CubicInterpolate4( const __m128 & a_A, const __m128 & a_B, const __m128 & a_C, const __m128 & a_D, float a_Pct ) const;
#endif

	unsigned int m_Seed;
};





/// Linearly interpolates values in the array between the anchor points
extern void IntArrayLinearInterpolate2D(
	int * a_Array, 
	int a_SizeX, int a_SizeY,  // Dimensions of the array
	int a_AnchorStepX, int a_AnchorStepY  // Distances between the anchor points in each direction
);





#if NOISE_USE_INLINE
	#include "Noise.inc"
#endif



