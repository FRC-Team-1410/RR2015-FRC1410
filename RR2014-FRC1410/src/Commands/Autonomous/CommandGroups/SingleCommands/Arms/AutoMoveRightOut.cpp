#include "AutoMoveRightOut.h"
#include "Robot.h"

AutoMoveRightOut::AutoMoveRightOut(){
	Requires(Robot::canmanipulator);
	end = false;
}

void AutoMoveRightOut::Initialize(){
	end = false;
}

void AutoMoveRightOut::Execute(){
	Robot::canmanipulator->MoveElbows(0, -0.5);
	Wait(0.75);
	end = true;
}

bool AutoMoveRightOut::IsFinished(){
	return end;
}

void AutoMoveRightOut::End(){
	Robot::canmanipulator->MoveElbows(0,0);
}

void AutoMoveRightOut::Interrupted(){
	End();
}
