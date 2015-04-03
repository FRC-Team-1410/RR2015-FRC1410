#include "SecondToteLiftTote.h"
#include "Robot.h"

SecondToteLiftTote::SecondToteLiftTote(){
	Requires(Robot::totelifter);
}

void SecondToteLiftTote::Initialize(){
	//Wait(0.05);
}

void SecondToteLiftTote::Execute(){
	//Wait(0.05);
	Robot::totelifter->MoveElevator(1);
}

bool SecondToteLiftTote::IsFinished(){
	return (Robot::totelifter->ReturnUpperLimit());
}

void SecondToteLiftTote::End(){
	Robot::totelifter->MoveElevator(0);
}

void SecondToteLiftTote::Interrupted(){
	End();
}
