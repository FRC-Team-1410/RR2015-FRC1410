#ifndef ThirdToteLowerTote_H
#define ThirdToteLowerTote_H

#include "Commands/Command.h"
#include "WPILib.h"

class ThirdToteLowerTote: public Command {
public:
	ThirdToteLowerTote();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
