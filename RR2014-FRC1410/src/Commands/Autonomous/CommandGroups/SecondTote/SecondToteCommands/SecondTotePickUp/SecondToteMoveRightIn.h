#ifndef SecondToteMoveRightIn_H
#define SecondToteMoveRightIn_H

#include "Commands/Command.h"
#include "WPILib.h"

class SecondToteMoveRightIn: public Command {
	bool end;
public:
	SecondToteMoveRightIn();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
