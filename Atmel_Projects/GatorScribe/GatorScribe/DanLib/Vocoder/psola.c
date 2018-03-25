/*
 * psola.c
 *
 * Created: 3/13/2018 3:53:58 PM
 *  Author: Daniel Gonzalez
 */ 

#include "psola.h"
#include <stdlib.h>


#define RING_BUFFER_SIZE 16384 
#define RING_BUFFER_SIZE_D2 (RING_BUFFER_SIZE >> 1) 
#define RING_BUFFER_MASK (RING_BUFFER_SIZE-1)

#define PI_F 3.14159265358f 

/************************ Static variables *********************/ 
static float input_ring_buffer[RING_BUFFER_SIZE];
static float output_ring_buffer[RING_BUFFER_SIZE];

static uint32_t readPos; 
static uint32_t inPtr; 
static uint32_t outPtr;
static uint32_t samplesLeftInPeriod; 
static int32_t inputPeriodLength; 
static float currentPitch; 
static float window[10*WIN_SIZE]; // sufficiently large window array  
/************************ Static variables *********************/

void PSOLA_init(void)
{
	arm_fill_f32(0.0f, input_ring_buffer, RING_BUFFER_SIZE); 
	arm_fill_f32(0.0f, output_ring_buffer, RING_BUFFER_SIZE);
	arm_fill_f32(0.0f, window, 10*WIN_SIZE); 
	
	readPos = RING_BUFFER_SIZE - WIN_SIZE; // + WEIRD_OFFSET; 
	inPtr = 0; 
	outPtr = 0; 
	samplesLeftInPeriod = 0; 
	inputPeriodLength = PSOLA_SAMPLE_RATE / MINIMUM_PITCH; 
	currentPitch = MINIMUM_PITCH; 
}

// assumes valid pitch shifts 
void create_harmonies(float* input, float *output, float inputPitch, float *pitch_shifts_in)
{
	uint32_t i, w; 
	int32_t olaIdx; 
	
	uint32_t saved_inPtr = inPtr; 
	uint32_t saved_outPtr = outPtr; 
	uint32_t saved_samplesLeftInPeriod = samplesLeftInPeriod; 
	uint32_t pitch_idx = 0; 
	
	uint32_t starting_input_ptr = inPtr + WIN_SIZE; 
	for (i = 0; i < WIN_SIZE; i++)
	{
		input_ring_buffer[(starting_input_ptr++) & RING_BUFFER_MASK] = input[i]; 
	}
		
	uint32_t outLag;
	uint32_t inHalfAway;
	float periodRatio;
	float cum_samplesLeftInPeriod = 0;
	float inputPeriodLengthRecip = 1.0f / inputPeriodLength;
	
	// pre-compute window function	
	for (olaIdx = 0, w = 0; olaIdx < 2*inputPeriodLength; olaIdx++, w++)
	{
		window[w] = (1.0f - arm_cos_f32(PI_F * (float)olaIdx * inputPeriodLengthRecip)) * 0.5f;
	}
		
	// for each pitch shift 
	while(pitch_shifts_in[pitch_idx] > 0.0f && pitch_idx < MAX_NUM_SHIFTS)
	{
		periodRatio = 1.0f / pitch_shifts_in[pitch_idx++]; 
		samplesLeftInPeriod = saved_samplesLeftInPeriod; 
		inPtr = saved_inPtr; 
		outPtr = saved_outPtr; 
		for (i = 0; i < WIN_SIZE; i++)
		{		
			if (samplesLeftInPeriod == 0)
			{
				outLag = 1; 
			
				inHalfAway = (inPtr + RING_BUFFER_SIZE_D2) & RING_BUFFER_MASK;
                
				if (inHalfAway < RING_BUFFER_SIZE_D2) 
				{
					/* The zero element of the input buffer lies
						in (inptr, inHalfAway] */
					if (outPtr < inHalfAway || outPtr > inPtr) {
						// The current input element lags current
						// synthesis pitch marker.
						outLag = 0;
					}
				} 
				else 
				{
					/* The zero element of the input buffer lies
						in (inHalfAway, inptr] */
					if (outPtr > inPtr && outPtr < inHalfAway) {
						// The current input element lags current
						// synthesis pitch marker.
						outLag = 0;
					}
				}

				while(outLag == 1)
				{
					// set outPtr about the sample at which we OLA 
					outPtr = (outPtr + (uint32_t)((float)inputPeriodLength * periodRatio)) & RING_BUFFER_MASK; 
				
					// OLA 
					for (olaIdx = -inputPeriodLength, w = 0; olaIdx < inputPeriodLength; olaIdx++, w++)
					{
						output_ring_buffer[(uint32_t)(olaIdx + (int64_t)outPtr) & RING_BUFFER_MASK] +=
							window[w] * input_ring_buffer[(uint32_t)(olaIdx + (int64_t)inPtr + WEIRD_OFFSET) & RING_BUFFER_MASK];
					}
					
					if (inHalfAway < RING_BUFFER_SIZE_D2) 
					{
						/* The zero element of the input buffer lies
							in (inptr, inHalfAway] */
						if (outPtr < inHalfAway || outPtr > inPtr) {
							// The current input element lags current
							// synthesis pitch marker.
							outLag = 0;
						}
					} 
					else 
					{
						/* The zero element of the input buffer lies
							in (inHalfAway, inptr] */
						if (outPtr > inPtr && outPtr < inHalfAway) {
							// The current input element lags current
							// synthesis pitch marker.
							outLag = 0;
						}
					}		
				}
			
				// assume uniform frequency within window 
				samplesLeftInPeriod = inputPeriodLength;
			}
		
			--samplesLeftInPeriod; 
		
			// inc/wrap input ring buffer index 
			inPtr = (inPtr+1) & RING_BUFFER_MASK; 		
		}
		if (samplesLeftInPeriod > cum_samplesLeftInPeriod || pitch_idx == 1)
			cum_samplesLeftInPeriod = samplesLeftInPeriod; 
	}
	
	for(i = 0; i < WIN_SIZE; i++)
	{
		output[i] = output_ring_buffer[readPos]; 	
		output_ring_buffer[readPos] = 0.0f;
		readPos = (readPos+1) & RING_BUFFER_MASK;
	}
	
	// no need to average 
	//if (pitch_idx < 1) pitch_idx = 1; // just in case 
	//arm_scale_f32(output, 1.0f / (float)pitch_idx, output, WIN_SIZE); 
	
	// variables for next harmonization  
	//if ((pitch_idx-1) > 0)
		//samplesLeftInPeriod = cum_samplesLeftInPeriod / (pitch_idx-1); // average the number of samples left in period 
	
	currentPitch = inputPitch; 
	inputPeriodLength = (uint32_t)(PSOLA_SAMPLE_RATE / currentPitch);
	

	
	
}


