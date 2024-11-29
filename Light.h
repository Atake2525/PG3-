#pragma once
#include "Button.h"

class Light : public Button {
public:
	Light();
	~Light();

	void On() override;

private:
};
