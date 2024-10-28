/*
 * fsm_traffic.h
 *
 *  Created on: Oct 26, 2024
 *      Author: datph
 */

#ifndef INC_FSM_TRAFFIC_H_
#define INC_FSM_TRAFFIC_H_

#include <button1.h>
#include <button2.h>
#include <button3.h>
#include "main.h"
#include "fsm_normal.h"

#define NORMAL 			1
#define INITIAL			0
#define MODIFY_RED 		2
#define MODIFY_AMBER 	3
#define MODIFY_GREEN 	4
#define FAULT_CONDITION 5

#define ON GPIO_PIN_RESET
#define OFF GPIO_PIN_SET

extern int status;
extern int red_duration;
extern int amber_duration;
extern int green_duration;

void setColor(GPIO_TypeDef *GPIOx, uint16_t Led_1, uint16_t Led_2, uint16_t Led_3, GPIO_PinState Led_1_State, GPIO_PinState Led_2_State, GPIO_PinState Led_3_State);

#endif /* INC_FSM_TRAFFIC_H_ */