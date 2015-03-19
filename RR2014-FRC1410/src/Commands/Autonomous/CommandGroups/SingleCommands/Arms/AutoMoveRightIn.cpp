#include "AutoMoveRightIn.h"
#include "Robot.h"

AutoMoveRightIn::AutoMoveRightIn(){
	Requires(Robot::canmanipulator);
	end = false;
}

void AutoMoveRightIn::Initialize(){
	end = false;

}

void AutoMoveRightIn::Execute(){
	Robot::canmanipulator->MoveElbows(0, 0.5);
	Wait(0.5);
	end = true;
}

bool AutoMoveRightIn::IsFinished(){
	return end;
}

void AutoMoveRightIn::End(){
	Robot::canmanipulator->MoveElbows(0,0);
}

void AutoMoveRightIn::Interrupted(){
	End();
}
