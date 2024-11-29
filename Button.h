#pragma once
class Button {
public:
	Button();
	virtual ~Button();
	virtual void On();

protected:
	const char* name;
};
