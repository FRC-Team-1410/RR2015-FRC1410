#ifndef FirstToteDriveToTote_H
#define FirstToteDriveToTote_H

#include "Commands/Command.h"
#include "WPILib.h"

class FirstToteDriveToTote: public Command {
public:
	FirstToteDriveToTote();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
