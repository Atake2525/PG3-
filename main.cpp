#include <stdio.h>
#include "Button.h"
#include "Light.h"
#include "WashingMachine.h"

int main() { 
	Button* button[3];

	for (int i = 0; i < 2; i++) {
		if (i < 1) {
			button[i] = new Light;
		} else {
			button[i] = new WashingMachine;
		}
	}

	for (int i = 0; i < 2; i++) {
		button[i]->On();
	}

	for (int i = 0; i < 2; i++) {
		delete button[i];
	}

	return 0;
}