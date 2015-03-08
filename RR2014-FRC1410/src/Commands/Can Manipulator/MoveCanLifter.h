#ifndef MoveCanLifter_H
#define MoveCanLifter_H

#include "Commands/Command.h"
#include "WPILib.h"

class MoveCanLifter: public Command {
	float speed; //speed for driving the elevator
public:
	MoveCanLifter(float drive_speed);
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
