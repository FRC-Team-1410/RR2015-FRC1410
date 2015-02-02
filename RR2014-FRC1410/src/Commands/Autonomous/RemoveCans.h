#ifndef RemoveCans_H
#define RemoveCans_H

#include "Commands/Command.h"
#include "WPILib.h"

class RemoveCans: public Command {
public:
	RemoveCans();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
