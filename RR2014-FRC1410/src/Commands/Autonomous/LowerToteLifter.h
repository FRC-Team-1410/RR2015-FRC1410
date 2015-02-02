#ifndef LowerToteLifter_H
#define LowerToteLifter_H

#include "Commands/Command.h"
#include "WPILib.h"

class LowerToteLifter: public Command {
public:
	LowerToteLifter();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
