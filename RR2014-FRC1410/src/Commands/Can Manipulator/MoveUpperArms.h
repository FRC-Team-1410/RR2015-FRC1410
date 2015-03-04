#ifndef MoveUpperArms_H
#define MoveUpperArms_H

#include "Commands/Command.h"
#include "WPILib.h"

class MoveUpperArms: public Command {
public:
	MoveUpperArms();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
