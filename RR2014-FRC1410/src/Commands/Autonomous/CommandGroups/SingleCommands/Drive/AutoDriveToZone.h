#ifndef AutoDriveToZone_H
#define AutoDriveToZone_H

#include "Commands/Command.h"
#include "WPILib.h"

class AutoDriveToZone: public Command {
public:
	AutoDriveToZone();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
