#include "ThirdToteLowerTote.h"
#include "Robot.h"

ThirdToteLowerTote::ThirdToteLowerTote(){
	Requires(Robot::totelifter);
}

void ThirdToteLowerTote::Initialize(){

}

void ThirdToteLowerTote::Execute(){
	Robot::totelifter->MoveElevator(-1);
}

bool ThirdToteLowerTote::IsFinished(){
	return (Robot::totelifter->ReturnLowerLimit());
}

void ThirdToteLowerTote::End(){
	Robot::totelifter->MoveElevator(0);
}

void ThirdToteLowerTote::Interrupted(){
	End();
}
