#ifndef MoveToteLifter_H
#define MoveToteLifter_H

#include "Commands/Command.h"
#include "WPILib.h"

class MoveToteLifter: public Command {
public:
	MoveToteLifter();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
