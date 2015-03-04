#ifndef SimulMoveLowerArms_H
#define SimulMoveLowerArms_H

#include "Commands/Command.h"
#include "WPILib.h"

class SimulMoveLowerArms: public Command {
public:
	SimulMoveLowerArms();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
