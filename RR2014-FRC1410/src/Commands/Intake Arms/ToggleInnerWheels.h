#ifndef ToggleInnerWheels_H
#define ToggleInnerWheels_H

#include "Commands/Command.h"
#include "WPILib.h"

class ToggleInnerWheels: public Command {
	float motor_speed;
public:
	ToggleInnerWheels(float speed);
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
