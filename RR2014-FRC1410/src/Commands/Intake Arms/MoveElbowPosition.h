#ifndef MoveElbowPosition_H
#define MoveElbowPosition_H

#include "Commands/Command.h"
#include "WPILib.h"

class MoveElbowPosition: public Command {
	float elbowSpeed;
public:
	MoveElbowPosition(float speed);
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
