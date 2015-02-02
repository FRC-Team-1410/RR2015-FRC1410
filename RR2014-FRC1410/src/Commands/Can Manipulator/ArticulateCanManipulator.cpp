#include <Commands/Can Manipulator/ArticulateCanManipulator.h>
#include "Robot.h"

ArticulateCanManipulator::ArticulateCanManipulator(float speed){
	Requires(Robot::canmanipulator);
	armSpeed = speed;
}

void ArticulateCanManipulator::Initialize(){

}

void ArticulateCanManipulator::Execute(){
	Robot::canmanipulator->ArticulateArms(armSpeed);
}

// Make this return true when this Command no longer needs to run execute()
bool ArticulateCanManipulator::IsFinished(){
	return false;
}

// Called once after isFinished returns true
void ArticulateCanManipulator::End(){
	Robot::canmanipulator->ArticulateArms(0);
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void ArticulateCanManipulator::Interrupted(){
	End();
}
