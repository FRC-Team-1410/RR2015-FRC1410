#ifndef LowerTote_H
#define LowerTote_H

#include "Commands/Command.h"
#include "WPILib.h"

class LowerTote: public Command {
public:
	LowerTote();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
