#ifndef ThirdToteLiftTote_H
#define ThirdToteLiftTote_H

#include "Commands/Command.h"
#include "WPILib.h"

class ThirdToteLiftTote: public Command {
public:
	ThirdToteLiftTote();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
