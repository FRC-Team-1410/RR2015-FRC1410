#ifndef TurnDriveTurn_H
#define TurnDriveTurn_H

#include "Commands/Command.h"
#include "WPILib.h"

class TurnDriveTurn: public Command {
	bool end;
public:
	TurnDriveTurn();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
