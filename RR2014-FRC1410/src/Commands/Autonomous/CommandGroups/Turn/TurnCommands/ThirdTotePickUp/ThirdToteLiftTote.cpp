#include "ThirdToteLiftTote.h"
#include "Robot.h"

ThirdToteLiftTote::ThirdToteLiftTote(){
	Requires(Robot::totelifter);
}

void ThirdToteLiftTote::Initialize(){
	Wait(0.1);
}

void ThirdToteLiftTote::Execute(){
	//Wait(0.1);
	Robot::totelifter->MoveElevator(1);
}

bool ThirdToteLiftTote::IsFinished(){
	return (Robot::totelifter->ReturnUpperLimit());
}

void ThirdToteLiftTote::End(){
	Robot::totelifter->MoveElevator(0);
}

void ThirdToteLiftTote::Interrupted(){
	End();
}
