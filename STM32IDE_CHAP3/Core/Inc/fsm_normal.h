/*
 * fsm_normal.h
 *
 *  Created on: Oct 26, 2024
 *      Author: datph
 */

#ifndef INC_FSM_NORMAL_H_
#define INC_FSM_NORMAL_H_

#include "main.h"
#include "fsm_traffic.h"
#include "timer.h"

extern int color;

#define INIT 1
#define RED 2
#define AMBER 3
#define GREEN 4

void display_num(char group, int index, int num);
void fsm_normal_run();

#endif /* INC_FSM_NORMAL_H_ */