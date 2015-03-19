#include "AutoLiftCan.h"
#include "Robot.h"

AutoLiftCan::AutoLiftCan(){
	Requires(Robot::canmanipulator);
	end = false;
}

void AutoLiftCan::Initialize(){
	end = false;
}

void AutoLiftCan::Execute(){
	Robot::canmanipulator->MoveElevator(1);
	Wait(1);
	end = true;
}

bool AutoLiftCan::IsFinished(){
	return end;
}

void AutoLiftCan::End(){
	Robot::canmanipulator->MoveElevator(0);
}

void AutoLiftCan::Interrupted(){
	End();
}
