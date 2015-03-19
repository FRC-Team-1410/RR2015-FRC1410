#ifndef AutoMoveLeftIn_H
#define AutoMoveLeftIn_H

#include "Commands/Command.h"
#include "WPILib.h"

class AutoMoveLeftIn: public Command {
	bool end;
public:
	AutoMoveLeftIn();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
