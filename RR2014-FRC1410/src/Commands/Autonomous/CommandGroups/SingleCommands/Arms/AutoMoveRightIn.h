#ifndef AutoMoveRightIn_H
#define AutoMoveRightIn_H

#include "Commands/Command.h"
#include "WPILib.h"

class AutoMoveRightIn: public Command {
	bool end;
public:
	AutoMoveRightIn();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
