#include "SecondToteMoveRightIn.h"
#include "Robot.h"

SecondToteMoveRightIn::SecondToteMoveRightIn(){
	Requires(Robot::canmanipulator);
	end = false;
}

void SecondToteMoveRightIn::Initialize(){
	end = false;
}

void SecondToteMoveRightIn::Execute(){
	Robot::canmanipulator->MoveElbows(0, 0.45);
	Wait(0.5);
	end = true;
}

bool SecondToteMoveRightIn::IsFinished(){
	return end;
}

void SecondToteMoveRightIn::End(){
	Robot::canmanipulator->MoveElbows(0,0);
}

void SecondToteMoveRightIn::Interrupted(){
	End();
}
