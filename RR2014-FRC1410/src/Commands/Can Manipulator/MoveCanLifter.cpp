#include <Commands/Can Manipulator/MoveCanLifter.h>
#include "Robot.h"

MoveCanLifter::MoveCanLifter(){
	Requires(Robot::canmanipulator);
	move_up = false;
}

void MoveCanLifter::Initialize(){
	move_up = !move_up;
}

void MoveCanLifter::Execute(){
	if(move_up){
			if(Robot::canmanipulator->UpperLimit() == true){
				Robot::canmanipulator->MoveElevator(1);
			}
		}

		else{
			if(Robot::canmanipulator->LowerLimit() == true){
				Robot::canmanipulator->MoveElevator(-1);
			}
		}}

// Make this return true when this Command no longer needs to run execute()
bool MoveCanLifter::IsFinished(){
	if(move_up){
		return !Robot::canmanipulator->UpperLimit();
	}

	else{
		return !Robot::canmanipulator->LowerLimit();
	}}

// Called once after isFinished returns true
void MoveCanLifter::End(){
	Robot::canmanipulator->MoveElevator(0);
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void MoveCanLifter::Interrupted(){
	End();
}
