#ifndef AutoDriveTurn_H
#define AutoDriveTurn_H

#include "Commands/Command.h"
#include "WPILib.h"

class AutoDriveTurn: public Command {
public:
	AutoDriveTurn();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
