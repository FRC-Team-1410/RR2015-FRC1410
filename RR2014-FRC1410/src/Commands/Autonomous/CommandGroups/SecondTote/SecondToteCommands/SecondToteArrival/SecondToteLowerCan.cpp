#include "SecondToteLowerCan.h"
#include "Robot.h"

SecondToteLowerCan::SecondToteLowerCan(){
	Requires(Robot::canmanipulator);
	end = false;
}

void SecondToteLowerCan::Initialize(){
	end = false;
}

void SecondToteLowerCan::Execute(){
	Robot::canmanipulator->MoveElevator(-1);
	end = true;
}

bool SecondToteLowerCan::IsFinished(){
	return Robot::canmanipulator->ReturnLowerLimit();
}

void SecondToteLowerCan::End(){
	Robot::canmanipulator->MoveElevator(0);
}

void SecondToteLowerCan::Interrupted(){
	End();
}
