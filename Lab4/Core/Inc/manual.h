/*
 * manual.h
 *
 *  Created on: Dec 11, 2023
 *      Author: vtanc
 */

#ifndef INC_MANUAL_H_
#define INC_MANUAL_H_

#include <display.h>
#include "global.h"
#include "button.h"
#include "scheduler.h"
#include "auto.h"

void manual_run();
void displayIncreaseRed();
void displayIncreaseYellow();
void displayIncreaseGreen();
void MODE2();
void MODE3();
void MODE4();

#endif /* INC_MANUAL_H_ */
