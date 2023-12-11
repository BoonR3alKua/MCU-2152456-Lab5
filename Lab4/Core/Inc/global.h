/*
 * global.h
 *
 *  Created on: Dec 11, 2023
 *      Author: vtanc
 */

#ifndef INC_GLOBAL_H_
#define INC_GLOBAL_H_

#include "software_timer.h"
#include "button.h"
#include "main.h"

enum LedState {LED_INIT, RED, GREEN, YELLOW};
enum LedToggleState {TOGGLE_INIT, TOGGLE};
enum SegState {FIRST, SECOND};
enum IncreaseDelayState {INCREASE_INIT, INCREASE};

extern enum ModeState MODE;

extern enum SegState modeSeg;

extern enum LedState firstCoupleLedAutoState;
extern enum LedState secondCoupleLedAutoState;
extern enum SegState seg7AutoState;

extern int redDelay;
extern int greenDelay;
extern int yellowDelay;

extern int countdownFirstCoupleLed;
extern int countdownSecondCoupleLed;

void setValues(void);


#endif /* INC_GLOBAL_H_ */
