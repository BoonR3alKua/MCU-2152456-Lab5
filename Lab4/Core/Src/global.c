/*
 * global.c
 *
 *  Created on: Dec 11, 2023
 *      Author: vtanc
 */

#include "global.h"

enum SegState modeSeg;

enum LedState firstCoupleLedAutoState;
enum LedState secondCoupleLedAutoState;
enum SegState seg7AutoState;

int redDelay = 10;
int greenDelay = 6;
int yellowDelay = 4;


int countdownFirstCoupleLed;
int countdownSecondCoupleLed;

void setValues(void){

	modeSeg = FIRST;

	firstCoupleLedAutoState = LED_INIT;
	secondCoupleLedAutoState = LED_INIT;
	seg7AutoState = FIRST;

	countdownFirstCoupleLed = redDelay;
	countdownSecondCoupleLed = greenDelay;
}
