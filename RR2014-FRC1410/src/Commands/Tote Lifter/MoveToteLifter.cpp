#include <Commands/Tote Lifter/MoveToteLifter.h>
#include "Robot.h"

MoveToteLifter::MoveToteLifter(){
	Requires(Robot::totelifter);
	move_up = true;
}

void MoveToteLifter::Initialize(){
	move_up = !move_up;
}

void MoveToteLifter::Execute(){
	if(move_up){
		if(Robot::totelifter->ReturnUpperLimit() == false){
			Robot::totelifter->MoveElevator(1);
		}
	}
	else{
		if(Robot::totelifter->ReturnLowerLimit() == false){
			Robot::totelifter->MoveElevator(-1);
		}
	}
}

bool MoveToteLifter::IsFinished(){
	if(move_up){
		return Robot::totelifter->ReturnUpperLimit();
	}
	else{
		return Robot::totelifter->ReturnLowerLimit();
	}
}

void MoveToteLifter::End(){
	Robot::totelifter->MoveElevator(0);
}

void MoveToteLifter::Interrupted(){
	End();
}
