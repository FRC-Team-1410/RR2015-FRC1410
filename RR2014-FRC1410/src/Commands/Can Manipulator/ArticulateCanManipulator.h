#ifndef ArticulateCanManipulator_H
#define ArticulateCanManipulator_H

#include "Commands/Command.h"
#include "WPILib.h"

class ArticulateCanManipulator: public Command {
public:
	ArticulateCanManipulator();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
