#ifndef TeleOpTankDrive_H
#define TeleOpTankDrive_H

#include "Commands/Command.h"
#include "WPILib.h"

class TeleOpTankDrive: public Command {
public:
	TeleOpTankDrive();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
