#ifndef SecondToteMoveRightOut_H
#define SecondToteMoveRightOut_H

#include "Commands/Command.h"
#include "WPILib.h"

class SecondToteMoveRightOut: public Command {
	bool end;
public:
	SecondToteMoveRightOut();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
