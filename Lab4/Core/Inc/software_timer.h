/*
 * software_timer.h
 *
 *  Created on: Dec 11, 2023
 *      Author: vtanc
 */

#ifndef INC_SOFTWARE_TIMER_H_
#define INC_SOFTWARE_TIMER_H_

extern int timer_flag[10];

void setTimer(int timer_ID, int duration);
void timerRun(int timer_ID);

#endif /* INC_SOFTWARE_TIMER_H_ */
