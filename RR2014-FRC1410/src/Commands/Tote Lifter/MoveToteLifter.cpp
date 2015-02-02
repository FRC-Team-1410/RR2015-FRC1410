#include "MoveToteLifter.h"
#include "../../Robot.h"

MoveToteLifter::MoveToteLifter(){
	Requires(Robot::totelifter);
}

void MoveToteLifter::Initialize(){

}

void MoveToteLifter::Execute(){
	Robot::totelifter->MoveElevator(1);
}

bool MoveToteLifter::IsFinished(){
	return false;
}

void MoveToteLifter::End(){
	Robot::totelifter->MoveElevator(0);
}

void MoveToteLifter::Interrupted(){
	End();
}
