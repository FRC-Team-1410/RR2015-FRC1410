#ifndef ToggleWheels_H
#define ToggleWheels_H

#include "Commands/Command.h"
#include "WPILib.h"

class ToggleWheels: public Command {
public:
	ToggleWheels();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
