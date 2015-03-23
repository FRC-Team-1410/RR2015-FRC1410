#include "SecondToteMoveRightOut.h"
#include "Robot.h"

SecondToteMoveRightOut::SecondToteMoveRightOut(){
	Requires(Robot::canmanipulator);
	end = false;
}

void SecondToteMoveRightOut::Initialize(){
	end = false;
}

void SecondToteMoveRightOut::Execute(){
	Robot::canmanipulator->MoveElbows(0, -0.8);
	Wait(0.5);
	end = true;
}

bool SecondToteMoveRightOut::IsFinished(){
	return end;
}

void SecondToteMoveRightOut::End(){
	Robot::canmanipulator->MoveElbows(0,0);
}

void SecondToteMoveRightOut::Interrupted(){
	End();
}
