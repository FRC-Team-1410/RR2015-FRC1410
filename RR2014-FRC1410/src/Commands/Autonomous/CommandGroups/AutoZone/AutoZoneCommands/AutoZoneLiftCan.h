#ifndef AutoZoneLiftCan_H
#define AutoZoneLiftCan_H

#include "Commands/Command.h"
#include "WPILib.h"

class AutoZoneLiftCan: public Command {
	bool end;
public:
	AutoZoneLiftCan();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
