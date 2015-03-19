#ifndef AutoDriveBackwards_H
#define AutoDriveBackwards_H

#include "Commands/Command.h"
#include "WPILib.h"

class AutoDriveBackwards: public Command {
public:
	AutoDriveBackwards();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
