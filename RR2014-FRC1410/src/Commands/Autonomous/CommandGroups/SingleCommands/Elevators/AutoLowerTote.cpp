#include "AutoLowerTote.h"
#include "Robot.h"

AutoLowerTote::AutoLowerTote(){
	Requires(Robot::totelifter);
}

void AutoLowerTote::Initialize(){

}

void AutoLowerTote::Execute(){
	Robot::totelifter->MoveElevator(-1);
}

bool AutoLowerTote::IsFinished(){
	return (Robot::totelifter->ReturnLowerLimit());
}

void AutoLowerTote::End(){
	Robot::totelifter->MoveElevator(0);
}

void AutoLowerTote::Interrupted(){
	End();
}
