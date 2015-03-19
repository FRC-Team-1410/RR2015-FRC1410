#ifndef AutoLiftCan_H
#define AutoLiftCan_H

#include "Commands/Command.h"
#include "WPILib.h"

class AutoLiftCan: public Command {
	bool end;
public:
	AutoLiftCan();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
