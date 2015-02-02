#ifndef ToggleIntakeWheels_H
#define ToggleIntakeWheels_H

#include "Commands/Command.h"
#include "WPILib.h"

class ToggleIntakeWheels: public Command {
public:
	ToggleIntakeWheels();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
