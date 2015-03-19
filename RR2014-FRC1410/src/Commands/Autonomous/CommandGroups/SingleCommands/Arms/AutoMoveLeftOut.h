#ifndef AutoMoveLeftOut_H
#define AutoMoveLeftOut_H

#include "Commands/Command.h"
#include "WPILib.h"

class AutoMoveLeftOut: public Command {
	bool end;
public:
	AutoMoveLeftOut();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
