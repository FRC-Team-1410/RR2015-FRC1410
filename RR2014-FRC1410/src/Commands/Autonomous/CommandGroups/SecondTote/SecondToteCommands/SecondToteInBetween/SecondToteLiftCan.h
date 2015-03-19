#ifndef SecondToteLiftCan_H
#define SecondToteLiftCan_H

#include "Commands/Command.h"
#include "WPILib.h"

class SecondToteLiftCan: public Command {
	bool end;
public:
	SecondToteLiftCan();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
