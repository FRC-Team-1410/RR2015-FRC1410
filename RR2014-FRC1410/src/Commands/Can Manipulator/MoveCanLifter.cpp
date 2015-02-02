#include <Commands/Can Manipulator/MoveCanLifter.h>
#include "Robot.h"

MoveCanLifter::MoveCanLifter(){
	Requires(Robot::canmanipulator);
}

void MoveCanLifter::Initialize(){

}

void MoveCanLifter::Execute(){
	Robot::canmanipulator->MoveElevator(1);
}

// Make this return true when this Command no longer needs to run execute()
bool MoveCanLifter::IsFinished(){
	return false;
}

// Called once after isFinished returns true
void MoveCanLifter::End(){
	Robot::canmanipulator->MoveElevator(0);
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void MoveCanLifter::Interrupted(){
	End();
}
