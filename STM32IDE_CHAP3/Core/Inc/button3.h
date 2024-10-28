/*
 * button3.h
 *
 *  Created on: Oct 27, 2024
 *      Author: datph
 */

#ifndef INC_BUTTON3_H_
#define INC_BUTTON3_H_

#include "main.h"

extern int button3_flag;

#define NORMAL_STATE GPIO_PIN_SET
#define PRESSED_STATE GPIO_PIN_RESET

int isButton3Pressed();

void getKeyInputButton3();

#endif /* INC_BUTTON3_H_ */
