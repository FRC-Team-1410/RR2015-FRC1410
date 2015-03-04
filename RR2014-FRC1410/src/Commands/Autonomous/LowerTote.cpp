#include <Commands/Autonomous/LowerTote.h>
#include "Robot.h"

LowerTote::LowerTote(){
	Requires(Robot::totelifter);
}

void LowerTote::Initialize(){

}

void LowerTote::Execute(){
		Robot::totelifter->MoveElevator(1);
}

bool LowerTote::IsFinished(){
	if(Robot::totelifter->ReturnLowerLimit() == true){
		return true;
	}
	else{
		return false;
	}
}

void LowerTote::End(){
	//Robot::totelifter->MoveElevator(0);
}

void LowerTote::Interrupted(){
	//End();
}
