#ifndef SecondToteLowerCan_H
#define SecondToteLowerCan_H

#include "Commands/Command.h"
#include "WPILib.h"

class SecondToteLowerCan: public Command {
	bool end;
public:
	SecondToteLowerCan();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
