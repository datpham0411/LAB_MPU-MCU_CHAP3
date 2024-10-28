/*
 * button2.h
 *
 *  Created on: Oct 27, 2024
 *      Author: datph
 */

#ifndef INC_BUTTON2_H_
#define INC_BUTTON2_H_

#include "main.h"

extern int button2_flag;

#define NORMAL_STATE GPIO_PIN_SET
#define PRESSED_STATE GPIO_PIN_RESET

int isButton2Pressed();

void getKeyInputButton2();

#endif /* INC_BUTTON2_H_ */
