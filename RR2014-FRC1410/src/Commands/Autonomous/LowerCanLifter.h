#ifndef LowerCanLifter_H
#define LowerCanLifter_H

#include "Commands/Command.h"
#include "WPILib.h"

class LowerCanLifter: public Command {
public:
	LowerCanLifter();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
