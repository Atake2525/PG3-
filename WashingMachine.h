#pragma once
#include "Button.h"

class WashingMachine : public Button {
public:
	WashingMachine();
	~WashingMachine();

	void On() override;

private:
};
