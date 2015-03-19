#include "AutoMoveLeftIn.h"
#include "Robot.h"

AutoMoveLeftIn::AutoMoveLeftIn(){
	Requires(Robot::canmanipulator);
	end = false;
}

void AutoMoveLeftIn::Initialize(){
	end = false;
}

void AutoMoveLeftIn::Execute(){
	Robot::canmanipulator->MoveElbows(0.5, 0);
	Wait(0.75);
	end = true;
}

bool AutoMoveLeftIn::IsFinished(){
	return end;
}

void AutoMoveLeftIn::End(){
	Robot::canmanipulator->MoveElbows(0,0);
}

void AutoMoveLeftIn::Interrupted(){
	End();
}
