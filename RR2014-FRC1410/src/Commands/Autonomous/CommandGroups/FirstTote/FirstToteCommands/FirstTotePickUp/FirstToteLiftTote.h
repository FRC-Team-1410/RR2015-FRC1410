#ifndef FirstToteLiftTote_H
#define FirstToteLiftTote_H

#include "Commands/Command.h"
#include "WPILib.h"

class FirstToteLiftTote: public Command {
public:
	FirstToteLiftTote();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
