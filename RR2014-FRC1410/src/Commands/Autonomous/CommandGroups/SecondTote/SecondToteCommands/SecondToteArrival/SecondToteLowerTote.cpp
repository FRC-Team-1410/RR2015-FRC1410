#include "SecondToteLowerTote.h"
#include "Robot.h"

SecondToteLowerTote::SecondToteLowerTote(){
	Requires(Robot::totelifter);
}

void SecondToteLowerTote::Initialize(){

}

void SecondToteLowerTote::Execute(){
	Robot::totelifter->MoveElevator(-1);
}

bool SecondToteLowerTote::IsFinished(){
	return (Robot::totelifter->ReturnLowerLimit());
}

void SecondToteLowerTote::End(){
	Robot::totelifter->MoveElevator(0);
}

void SecondToteLowerTote::Interrupted(){
	End();
}
