/*
 * button1.c
 *
 *  Created on: Oct 25, 2024
 *      Author: datph
 */
#include <button1.h>

int KeyReg0Button1 = NORMAL_STATE;
int KeyReg1Button1 = NORMAL_STATE;
int KeyReg2Button1 = NORMAL_STATE;
int KeyReg3Button1 = NORMAL_STATE;

int TimerForKeyPressButton1 = 200;
int button1_flag = 0;

int isButton1Pressed() {
	if(button1_flag == 1) {
		button1_flag = 0;
		return 1;
	}
	return 0;
}

void subKeyProcessButton1(){
	button1_flag = 1;
}

void getKeyInputButton1() {
	KeyReg0Button1 = KeyReg1Button1;
	KeyReg1Button1 = KeyReg2Button1;
	KeyReg2Button1 = HAL_GPIO_ReadPin(BUTTON_1_GPIO_Port, BUTTON_1_Pin);

	if ((KeyReg0Button1 == KeyReg1Button1) && (KeyReg1Button1 == KeyReg2Button1)) {
		if (KeyReg3Button1 != KeyReg2Button1) {
			KeyReg3Button1 = KeyReg2Button1;
			if (KeyReg2Button1 == PRESSED_STATE) {
				// TODO
				subKeyProcessButton1();
				TimerForKeyPressButton1 = 200;
			}
		}
		else {
			--TimerForKeyPressButton1;
			if (TimerForKeyPressButton1 == 0) {
				//TODO
				if (KeyReg2Button1 == PRESSED_STATE) {
					KeyReg3Button1 = NORMAL_STATE;
				}
			}
		}
	}
}

