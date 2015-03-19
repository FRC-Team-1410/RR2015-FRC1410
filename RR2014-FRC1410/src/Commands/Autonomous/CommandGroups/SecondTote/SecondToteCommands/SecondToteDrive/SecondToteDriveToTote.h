#ifndef SecondToteDriveToTote_H
#define SecondToteDriveToTote_H

#include "Commands/Command.h"
#include "WPILib.h"

class SecondToteDriveToTote: public Command {
public:
	SecondToteDriveToTote();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
