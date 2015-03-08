#ifndef MoveSingleArm_H
#define MoveSingleArm_H

#include "Commands/Command.h"
#include "WPILib.h"

class MoveSingleArm: public Command {
	bool move_left;
	bool move_out;
public:
	MoveSingleArm(bool left, bool out);
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
