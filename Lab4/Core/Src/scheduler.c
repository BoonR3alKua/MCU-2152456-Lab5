/*
 * scheduler.c
 *
 *  Created on: Nov 27, 2023
 *      Author: vtanc
 */


#include "scheduler.h"

sTasks SCH_Tasks_G[SCH_MAX_TASKS];
unit8_t current_index_task = 0;

void SCH_Init(void){
	current_index_task = 0;
}

void SCH_Add_Task	( 	void(*pFunction)(),
						unit32_t DELAY,
						unit32_t PERIOD){
	if(current_index_task < SCH_MAX_TASKS) {
		SCH_Tasks_G[current_index_task].pTask = pFunction;
		SCH_Tasks_G[current_index_task].Delay = DELAY;
		SCH_Tasks_G[current_index_task].Period = PERIOD;
		SCH_Tasks_G[current_index_task].RunMe = 0;

		SCH_Tasks_G[current_index_task].TaskID = current_index_task;

		current_index_task++;
	}
}

void SCH_Update(void){
	for(int i = 0; i < current_index_task; i++){
		if(SCH_Tasks_G[i].Delay > 0) {
			SCH_Tasks_G[i].Delay--;
		} else {
			SCH_Tasks_G[i].Delay = SCH_Tasks_G[i].Period;
			SCH_Tasks_G[i].RunMe += 1;
		}
	}
}

void SCH_Dispatch_Tasks(void){
	for (int i = 0; i < current_index_task; i++) {
		if (SCH_Tasks_G[i].RunMe > 0){
			SCH_Tasks_G[i].RunMe--;
			(*SCH_Tasks_G[i].pTask)();
		}
	}
}

