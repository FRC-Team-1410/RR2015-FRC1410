#include "AutoMoveLeftOut.h"
#include "Robot.h"

AutoMoveLeftOut::AutoMoveLeftOut(){
	Requires(Robot::canmanipulator);
	end = false;
}

void AutoMoveLeftOut::Initialize(){
	end = false;
}

void AutoMoveLeftOut::Execute(){
	Robot::canmanipulator->MoveElbows(-0.5, 0);
	Wait(0.75);
	end = true;
}

bool AutoMoveLeftOut::IsFinished(){
	return end;
}

void AutoMoveLeftOut::End(){
	Robot::canmanipulator->MoveElbows(0,0);
}

void AutoMoveLeftOut::Interrupted(){
	End();
}
