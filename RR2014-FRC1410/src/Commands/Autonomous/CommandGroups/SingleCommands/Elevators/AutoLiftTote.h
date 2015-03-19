#ifndef AutoLiftTote_H
#define AutoLiftTote_H

#include "Commands/Command.h"
#include "WPILib.h"

class AutoLiftTote: public Command {
public:
	AutoLiftTote();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
