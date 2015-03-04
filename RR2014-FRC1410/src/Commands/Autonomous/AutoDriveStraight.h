#ifndef AutoDriveStraight_H
#define AutoDriveStraight_H

#include "Commands/Command.h"
#include "WPILib.h"

class AutoDriveStraight: public Command {
	int drive_distance;
public:
	AutoDriveStraight(int distance);
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
