/*
 * button.h
 *
 *  Created on: Oct 25, 2024
 *      Author: datph
 */

#ifndef INC_BUTTON1_H_
#define INC_BUTTON1_H_

#include "main.h"

extern int button1_flag;

#define NORMAL_STATE GPIO_PIN_SET
#define PRESSED_STATE GPIO_PIN_RESET

int isButton1Pressed();

void getKeyInputButton1();

#endif /* INC_BUTTON1_H_ */
