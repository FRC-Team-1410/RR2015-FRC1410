#ifndef RaiseToteLifter_H
#define RaiseToteLifter_H

#include "Commands/Command.h"
#include "WPILib.h"

class RaiseToteLifter: public Command {
public:
	RaiseToteLifter();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
