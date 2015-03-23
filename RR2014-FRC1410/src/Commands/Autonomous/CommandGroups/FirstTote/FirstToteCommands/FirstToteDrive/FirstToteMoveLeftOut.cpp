#include <Commands/Autonomous/CommandGroups/FirstTote/FirstToteCommands/FirstToteDrive/FirstToteMoveLeftOut.h>
#include "Robot.h"

FirstToteMoveLeftOut::FirstToteMoveLeftOut(){
	Requires(Robot::canmanipulator);
	end = false;
}

void FirstToteMoveLeftOut::Initialize(){
	end = false;
}

void FirstToteMoveLeftOut::Execute(){
	Robot::canmanipulator->MoveElbows(0.8, 0);
	Wait(0.5);
	end = true;
}

bool FirstToteMoveLeftOut::IsFinished(){
	return end;
}

void FirstToteMoveLeftOut::End(){
	Robot::canmanipulator->MoveElbows(0,0);
}

void FirstToteMoveLeftOut::Interrupted(){
	End();
}
