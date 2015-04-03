#ifndef FinishAutoLiftCan_H
#define FinishAutoLiftCan_H

#include "Commands/Command.h"
#include "WPILib.h"

class FinishAutoLiftCan: public Command {
	bool end;
public:
	FinishAutoLiftCan();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
