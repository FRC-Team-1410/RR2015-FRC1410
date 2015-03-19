#ifndef FinishAutoDriveBackwards_H
#define FinishAutoDriveBackwards_H

#include "Commands/Command.h"
#include "WPILib.h"

class FinishAutoDriveBackwards: public Command {
public:
	FinishAutoDriveBackwards();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
