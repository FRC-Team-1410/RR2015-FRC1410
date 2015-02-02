#include "ToggleIntakeWheels.h"
#include "../../Robot.h"

ToggleIntakeWheels::ToggleIntakeWheels(){
	Requires(Robot::intakearms);
}

// Called just before this Command runs the first time
void ToggleIntakeWheels::Initialize(){

}

// Called repeatedly when this Command is scheduled to run
void ToggleIntakeWheels::Execute(){
	Robot::intakearms->ToggleWheels(0.5);
}

// Make this return true when this Command no longer needs to run execute()
bool ToggleIntakeWheels::IsFinished(){
	return false;
}

// Called once after isFinished returns true
void ToggleIntakeWheels::End(){
	Robot::intakearms->ToggleWheels(0);
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void ToggleIntakeWheels::Interrupted(){
	End();
}
