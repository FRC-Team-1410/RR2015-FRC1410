#ifndef TurnDriveTurn_H
#define TurnDriveTurn_H

#include "Commands/Command.h"
#include "WPILib.h"

class TurnDriveTurn: public Command {
public:
	TurnDriveTurn();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
