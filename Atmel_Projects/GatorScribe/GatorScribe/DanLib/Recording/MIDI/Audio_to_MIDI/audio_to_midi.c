/*
 * audio_to_midi.c
 *
 * Created: 1/3/2018 7:14:45 AM
 *  Author: Daniel Gonzalez
 */ 

#include <asf.h>
#include <math.h>
#include "audio_to_midi.h"
#include "Yin.h"
#include <string.h>

static const char midi_note_names[128][5] = {
	"C-1","C#-1","D-1","D#-1","E-1","F-1","F#-1","G-1","G#-1","A-1","A#-1","B-1","C0","C#0","D0","D#0","E0",
	"F0","F#0","G0","G#0","A0","A#0","B0","C1","C#1","D1","D#1","E1","F1","F#1","G1","G#1","A1","A#1",
	"B1","C2","C#2","D2","D#2","E2","F2","F#2","G2","G#2","A2","A#2","B2","C3","C#3","D3","D#3","E3","F3",
	"F#3","G3","G#3","A3","A#3","B3","C4 ","C#4","D4","D#4","E4","F4","F#4","G4","G#4","A4","A#4","B4","C5",
	"C#5","D5","D#5","E5","F5","F#5","G5","G#5","A5","A#5","B5","C6","C#6","D6","D#6","E6","F6","F#6","G6",
	"G#6","A6","A#6","B6","C7","C#7","D7","D#7","E7","F7","F#7","G7","G#7","A7","A#7","B7","C8","C#8",
	"D8","D#8","E8","F8","F#8","G8","G#8","A8","A#8","B8","C9","C#9","D9","D#9","E9","F9","F#9","G9"
	};
	
static const float32_t midi_note_frequencies[128] = {
	8.176,8.662,9.177,9.723,10.301,10.913,11.562,12.250,12.978,13.750,14.568,15.434,16.352,17.324,18.354,19.445,20.602,21.827,23.125,24.500,
	25.957,27.500,29.135,30.868,32.703,34.648,36.708,38.891,41.203,43.654,46.249,48.999,51.913,55.000,58.270,61.735,65.406,69.296,73.416,
	77.782,82.407,87.307,92.499,97.999,103.826,110.000,116.541,123.471,130.813,138.591,146.832,155.563,164.814,174.614,184.997,195.998,
	207.652,220.000,233.082,246.942,261.626,277.183,293.665,311.127,329.628,349.228,369.994,391.995,415.305,440.000,466.164,493.883,
	523.251,554.365,587.330,622.254,659.255,698.456,739.989,783.991,830.609,880.000,932.328,987.767,1046.502,1108.731,1174.659,1244.508,
	1318.510,1396.913,1479.978,1567.982,1661.219,1760.000,1864.655,1975.533,2093.005,2217.461,2349.318,2489.016,2637.020,2793.826,2959.955,
	3135.963,3322.438,3520.000,3729.310,3951.066,4186.009,4434.922,4698.636,4978.032,5274.041,5587.652,5919.911,6271.927,6644.875,7040.000,
	7458.620,7902.133,8372.018,8869.844,9397.273,9956.063,10548.080,11175.300,11839.820,12543.850
	}; 

/**************************** Private Functions Start *********************************/
static int16_t get_midi_velocity(int16_t *buffer)
{
	// TODO: analyze power of the signal 
	return 64; 
}

static uint8_t get_midi_number(float32_t frequency)
{	
	uint32_t lo = 12; // lowest at C0 
	uint32_t hi = 127; 
	uint32_t mid; 
	uint32_t d1; 
	uint32_t d2; 
	while (lo < hi)
	{
		mid = (hi + lo) >> 1; 
		d1 = abs(midi_note_frequencies[mid] - frequency); 
		d2 = abs(midi_note_frequencies[mid+1] - frequency);
        if (d2 <= d1)
        {
	        lo = mid+1;
        }
        else
        {
	        hi = mid;
        }
	}
	return hi; 
}

/**************************** Private Functions End *********************************/

/**************************** Public Functions Start *********************************/
void get_midi_note(int16_t *buffer, midi_note_t *note)
{
	float32_t freq = yin_getPitch(buffer);
	
	// Don't count notes below C1 
	if (freq < 32.0)
	{
		note->note_number = -1;
		note->velocity = -1;
		return;
	}
	note->note_number = get_midi_number(freq);
	note->velocity = get_midi_velocity(buffer);
}

void get_midi_note_name(char *note_name, int16_t note_number)
{
	if (note_number == -1)
	{
		strcpy(note_name, "None");
		return;
	}
	strcpy(note_name, &midi_note_names[note_number][0]);
}

/**************************** Public Functions End *********************************/
