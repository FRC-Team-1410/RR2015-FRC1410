#ifndef SecondToteLiftTote_H
#define SecondToteLiftTote_H

#include "Commands/Command.h"
#include "WPILib.h"

class SecondToteLiftTote: public Command {
public:
	SecondToteLiftTote();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
