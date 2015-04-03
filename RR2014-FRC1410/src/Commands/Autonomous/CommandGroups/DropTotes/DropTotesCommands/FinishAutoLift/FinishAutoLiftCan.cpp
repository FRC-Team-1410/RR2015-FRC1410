#include "FinishAutoLiftCan.h"
#include "Robot.h"

FinishAutoLiftCan::FinishAutoLiftCan(){
	Requires(Robot::canmanipulator);
	end = false;
}

void FinishAutoLiftCan::Initialize(){
	end = false;
}

void FinishAutoLiftCan::Execute(){
	Robot::canmanipulator->MoveElevator(1);
	Wait(1);
	end = true;
}

bool FinishAutoLiftCan::IsFinished(){
	return end;
}

void FinishAutoLiftCan::End(){
	Robot::canmanipulator->MoveElevator(0);
}

void FinishAutoLiftCan::Interrupted(){
	End();
}
