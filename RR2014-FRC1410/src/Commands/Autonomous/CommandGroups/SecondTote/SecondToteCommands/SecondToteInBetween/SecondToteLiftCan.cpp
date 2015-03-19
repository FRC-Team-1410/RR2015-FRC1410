#include "SecondToteLiftCan.h"
#include "Robot.h"

SecondToteLiftCan::SecondToteLiftCan(){
	Requires(Robot::canmanipulator);
	end = false;
}

void SecondToteLiftCan::Initialize(){
	end = false;
}

void SecondToteLiftCan::Execute(){
	Robot::canmanipulator->MoveElevator(1);
	Wait(1);
	end = true;
}

bool SecondToteLiftCan::IsFinished(){
	return end;
}

void SecondToteLiftCan::End(){
	Robot::canmanipulator->MoveElevator(0);
}

void SecondToteLiftCan::Interrupted(){
	End();
}
