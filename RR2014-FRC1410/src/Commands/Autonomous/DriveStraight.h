#ifndef DriveStraight_H
#define DriveStraight_H

#include "Commands/Command.h"
#include "WPILib.h"

class DriveStraight: public Command {
public:
	DriveStraight();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
