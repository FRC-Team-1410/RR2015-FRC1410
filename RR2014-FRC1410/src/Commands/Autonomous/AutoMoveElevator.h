#ifndef AutoMoveElevator_H
#define AutoMoveElevator_H

#include "Commands/Command.h"
#include "WPILib.h"

class AutoMoveElevator: public Command {
	bool move_up;
public:
	AutoMoveElevator(bool up);
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
