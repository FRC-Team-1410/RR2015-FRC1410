#ifndef MoveLowerArms_H
#define MoveLowerArms_H

#include "Commands/Command.h"
#include "WPILib.h"

class MoveLowerArms: public Command {
public:
	MoveLowerArms();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
