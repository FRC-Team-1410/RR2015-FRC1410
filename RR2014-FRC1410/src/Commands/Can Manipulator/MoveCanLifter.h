#ifndef MoveCanLifter_H
#define MoveCanLifter_H

#include "Commands/Command.h"
#include "WPILib.h"

class MoveCanLifter: public Command {
public:
	MoveCanLifter();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
