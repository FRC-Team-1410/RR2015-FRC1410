#ifndef LiftTote_H
#define LiftTote_H

#include "Commands/Command.h"
#include "WPILib.h"

class LiftTote: public Command {
public:
	LiftTote();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
