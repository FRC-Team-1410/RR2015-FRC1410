#ifndef RaiseCanLifter_H
#define RaiseCanLifter_H

#include "Commands/Command.h"
#include "WPILib.h"

class RaiseCanLifter: public Command {
public:
	RaiseCanLifter();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
