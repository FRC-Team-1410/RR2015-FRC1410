#include <Commands/Autonomous/LiftTote.h>
#include "Robot.h"

LiftTote::LiftTote(){
	Requires(Robot::totelifter);
}

void LiftTote::Initialize(){

}

void LiftTote::Execute(){
		Robot::totelifter->MoveElevator(-1);
}

bool LiftTote::IsFinished(){
	if(Robot::totelifter->ReturnUpperLimit() == true){
		return true;
	}
	else{
		return false;
	}
}

void LiftTote::End(){
	//Robot::totelifter->MoveElevator(0);
}

void LiftTote::Interrupted(){
	//End();
}
