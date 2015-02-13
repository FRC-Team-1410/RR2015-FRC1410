#ifndef MoveElbowPosition_H
#define MoveElbowPosition_H

#include "Commands/Command.h"
#include "WPILib.h"

class MoveElbowPosition: public Command {
public:
	MoveElbowPosition();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
