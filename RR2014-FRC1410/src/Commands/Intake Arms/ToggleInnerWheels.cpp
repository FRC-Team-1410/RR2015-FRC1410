#include <Commands/Intake Arms/ToggleInnerWheels.h>
#include "../../Robot.h"

ToggleInnerWheels::ToggleInnerWheels(float speed){
	Requires(Robot::intakearms);
	motor_speed = speed;
}

// Called just before this Command runs the first time
void ToggleInnerWheels::Initialize(){

}

// Called repeatedly when this Command is scheduled to run
void ToggleInnerWheels::Execute(){
	Robot::intakearms->ToggleWheels(motor_speed);
}

// Make this return true when this Command no longer needs to run execute()
bool ToggleInnerWheels::IsFinished(){
	return false;
}

// Called once after isFinished returns true
void ToggleInnerWheels::End(){
	Robot::intakearms->ToggleWheels(0);
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void ToggleInnerWheels::Interrupted(){
	End();
}
