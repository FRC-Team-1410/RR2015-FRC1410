#ifndef TeleOpTankDrive_H
#define TeleOpTankDrive_H

#include "../CommandBase.h"
#include "WPILib.h"

class TeleOpTankDrive: public CommandBase
{
public:
	TeleOpTankDrive();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
