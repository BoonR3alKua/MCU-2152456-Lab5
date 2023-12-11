/*
 * auto.h
 *
 *  Created on: Dec 11, 2023
 *      Author: vtanc
 */

#ifndef INC_AUTO_H_
#define INC_AUTO_H_

#include "display.h"
#include "global.h"
#include "software_timer.h"
#include "button.h"
#include "scheduler.h"
#include "manual.h"


void RED_GREEN();
void RED_YELLOW();
void GREEN_RED();
void YELLOW_RED();
void led_fsm();
void seg_fsm();
void auto_run();

#endif /* INC_AUTO_H_ */
