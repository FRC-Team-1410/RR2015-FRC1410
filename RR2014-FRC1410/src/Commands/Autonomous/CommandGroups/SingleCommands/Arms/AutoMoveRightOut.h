#ifndef AutoMoveRightOut_H
#define AutoMoveRightOut_H

#include "Commands/Command.h"
#include "WPILib.h"

class AutoMoveRightOut: public Command {
	bool end;
public:
	AutoMoveRightOut();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
