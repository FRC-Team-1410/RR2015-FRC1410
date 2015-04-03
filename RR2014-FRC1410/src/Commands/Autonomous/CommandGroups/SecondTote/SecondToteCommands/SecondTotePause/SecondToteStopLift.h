#ifndef SecondToteStopLift_H
#define SecondToteStopLift_H

#include "Commands/Command.h"
#include "WPILib.h"

class SecondToteStopLift: public Command {
	bool end;
public:
	SecondToteStopLift();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
