#ifndef AutoLowerTote_H
#define AutoLowerTote_H

#include "Commands/Command.h"
#include "WPILib.h"

class AutoLowerTote: public Command {
public:
	AutoLowerTote();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
