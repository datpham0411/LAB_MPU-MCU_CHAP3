/*
 * button3.c
 *
 *  Created on: Oct 27, 2024
 *      Author: datph
 */
#include <button3.h>

int KeyReg0Button3 = NORMAL_STATE;
int KeyReg1Button3 = NORMAL_STATE;
int KeyReg2Button3 = NORMAL_STATE;
int KeyReg3Button3 = NORMAL_STATE;

int TimerForKeyPressButton3 = 200;
int button3_flag = 0;

int isButton3Pressed() {
	if(button3_flag == 1) {
		button3_flag = 0;
		return 1;
	}
	return 0;
}

void subKeyProcessButton3(){
	button3_flag = 1;
}

void getKeyInputButton3() {
	KeyReg0Button3 = KeyReg1Button3;
	KeyReg1Button3 = KeyReg2Button3;
	KeyReg2Button3 = HAL_GPIO_ReadPin(BUTTON_3_GPIO_Port, BUTTON_3_Pin);

	if ((KeyReg0Button3 == KeyReg1Button3) && (KeyReg1Button3 == KeyReg2Button3)) {
		if (KeyReg3Button3 != KeyReg2Button3) {
			KeyReg3Button3 = KeyReg2Button3;
			if (KeyReg2Button3 == PRESSED_STATE) {
				// TODO
				subKeyProcessButton3();
				TimerForKeyPressButton3 = 200;
			}
		}
		else {
			--TimerForKeyPressButton3;
			if (TimerForKeyPressButton3 == 0) {
				//TODO
				if (KeyReg2Button3 == PRESSED_STATE) {
					KeyReg3Button3 = NORMAL_STATE;
				}
			}
		}
	}
}


