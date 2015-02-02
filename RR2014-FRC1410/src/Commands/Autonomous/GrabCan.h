#ifndef GrabCan_H
#define GrabCan_H

#include "Commands/Command.h"
#include "WPILib.h"

class GrabCan: public Command {
public:
	GrabCan();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
