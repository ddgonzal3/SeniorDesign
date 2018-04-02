/*
 * DanLib.h
 *
 * Created: 12/22/2017 4:17:28 AM
 *  Author: Daniel Gonzalez
 */ 


#ifndef DANLIB_H_
#define DANLIB_H_

#include "audio.h"
#include "LCDLib.h"
#include "vocoder.h"
#include "DYWA/dywapitchtrack.h"
#include "psola.h"

typedef struct harmony 
{
	float freq; 
	uint32_t idx; // index of frequency... also midi note 
}harmony_t;

enum harmonies 
{
	OCTAVE_DOWN = -12, 
	MAJOR_2ND_BELOW = -10, 
	MAJOR_3RD_BELOW = -8, 
	PERFECT_4TH_BELOW = -7, 
	PERFECT_5TH_BELOW = -5, 
	MINOR_6TH_BELOW = -3, 
	DIMINISHED_7TH_BELOW = -1, 
	ROOT = 0, 
	MAJOR_2ND_ABOVE = 2, 
	MAJOR_3RD_ABOVE = 4, 
	PERFECT_4TH_ABOVE = 5, 
	PERFECT_5TH_ABOVE = 7, 
	MINOR_6TH_ABOVE = 9, 
	DIMINISHED_7TH_ABOVE = 11, 
	OCTAVE_UP = 12
};

#define HALF_STEP 1.059463094359f
#define POWER_THRESHOLD 0.000001f
#define ONE_OVER_64 0.015625000F

#define HARMONY_VOLUME_FLAG 255 
#define MASTER_VOLUME_FLAG 254
#define PITCH_BEND_FLAG 253
#define AUTOTUNE_FLAG 252 
#define REVERB_VOLUME_FLAG 251 
#define CHORUS_VOLUME_FLAG 250
#define DELAY_VOLUME_FLAG 249
#define DELAY_SPEED_FLAG 248





#endif /* DANLIB_H_ */