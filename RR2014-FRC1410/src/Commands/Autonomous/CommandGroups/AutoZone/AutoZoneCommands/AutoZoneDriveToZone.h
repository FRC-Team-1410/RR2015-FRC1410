#ifndef AutoZoneDriveToZone_H
#define AutoZoneDriveToZone_H

#include "Commands/Command.h"
#include "WPILib.h"

class AutoZoneDriveToZone: public Command {
public:
	AutoZoneDriveToZone();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
