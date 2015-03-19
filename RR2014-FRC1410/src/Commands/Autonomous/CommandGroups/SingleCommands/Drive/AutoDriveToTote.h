#ifndef AutoDriveToTote_H
#define AutoDriveToTote_H

#include "Commands/Command.h"
#include "WPILib.h"

class AutoDriveToTote: public Command {
public:
	AutoDriveToTote();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
