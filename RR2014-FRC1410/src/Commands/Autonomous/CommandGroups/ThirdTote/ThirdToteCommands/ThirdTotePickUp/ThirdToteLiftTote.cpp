#include "ThirdToteLiftTote.h"
#include "Robot.h"

ThirdToteLiftTote::ThirdToteLiftTote(){
	Requires(Robot::totelifter);
}

void ThirdToteLiftTote::Initialize(){

}

void ThirdToteLiftTote::Execute(){
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
