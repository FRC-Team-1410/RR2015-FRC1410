#ifndef DropTotesLowerTote_H
#define DropTotesLowerTote_H

#include "Commands/Command.h"
#include "WPILib.h"

class DropTotesLowerTote: public Command {
public:
	DropTotesLowerTote();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
