#ifndef FirstToteLiftCan_H
#define FirstToteLiftCan_H

#include "Commands/Command.h"
#include "WPILib.h"

class FirstToteLiftCan: public Command {
	bool end;
public:
	FirstToteLiftCan();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
