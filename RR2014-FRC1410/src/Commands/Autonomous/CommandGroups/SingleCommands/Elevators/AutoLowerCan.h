#ifndef AutoLowerCan_H
#define AutoLowerCan_H

#include "Commands/Command.h"
#include "WPILib.h"

class AutoLowerCan: public Command {
public:
	AutoLowerCan();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
