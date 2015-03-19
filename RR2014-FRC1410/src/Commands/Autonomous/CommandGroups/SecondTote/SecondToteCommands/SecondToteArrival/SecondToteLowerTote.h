#ifndef SecondToteLowerTote_H
#define SecondToteLowerTote_H

#include "Commands/Command.h"
#include "WPILib.h"

class SecondToteLowerTote: public Command {
public:
	SecondToteLowerTote();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
