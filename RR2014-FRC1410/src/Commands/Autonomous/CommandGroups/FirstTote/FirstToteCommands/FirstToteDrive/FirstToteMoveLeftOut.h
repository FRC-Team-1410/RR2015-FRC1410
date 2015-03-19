#ifndef FirstToteMoveLeftOut_H
#define FirstToteMoveLeftOut_H

#include "Commands/Command.h"
#include "WPILib.h"

class FirstToteMoveLeftOut: public Command {
	bool end;
public:
	FirstToteMoveLeftOut();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
