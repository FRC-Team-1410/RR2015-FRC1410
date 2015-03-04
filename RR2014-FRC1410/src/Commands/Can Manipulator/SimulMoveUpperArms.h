#ifndef SimulMoveUpperArms_H
#define SimulMoveUpperArms_H

#include "Commands/Command.h"
#include "WPILib.h"

class SimulMoveUpperArms: public Command {
public:
	SimulMoveUpperArms();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
