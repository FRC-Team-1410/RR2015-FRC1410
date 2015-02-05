#include "MoveToteLifter.h"
#include "../../Robot.h"

MoveToteLifter::MoveToteLifter(){
	Requires(Robot::totelifter);
	move_up = false;
}

void MoveToteLifter::Initialize(){
	move_up = !move_up;
}

void MoveToteLifter::Execute(){
	if(move_up){
		if(Robot::totelifter->UpperLimit() == true){
			Robot::totelifter->MoveElevator(1);
		}
	}

	else{
		if(Robot::totelifter->LowerLimit() == true){
			Robot::totelifter->MoveElevator(-1);
		}
	}
}

bool MoveToteLifter::IsFinished(){
	if(move_up){
		return !Robot::totelifter->UpperLimit();
	}

	else{
		return !Robot::totelifter->LowerLimit();
	}
}

void MoveToteLifter::End(){
	Robot::totelifter->MoveElevator(0);
}

void MoveToteLifter::Interrupted(){
	End();
}
