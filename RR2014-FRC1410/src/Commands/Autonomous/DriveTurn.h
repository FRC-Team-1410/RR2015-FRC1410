#ifndef DriveTurn_H
#define DriveTurn_H

#include "Commands/Command.h"
#include "WPILib.h"

class DriveTurn: public Command {
public:
	DriveTurn();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
