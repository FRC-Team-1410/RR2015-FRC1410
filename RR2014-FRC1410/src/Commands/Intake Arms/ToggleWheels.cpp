#include <Commands/Intake Arms/ToggleWheels.h>
#include "Robot.h"

ToggleWheels::ToggleWheels(){
	//Requires(Robot::intakearms);
	//does not require subsystem so it can be used in a command group
}

void ToggleWheels::Initialize(){
	Robot::intakearms->ToggleRollers(0); //when command inits it sets wheels to 0, just incase
}

void ToggleWheels::Execute(){
	Robot::intakearms->ToggleRollers(1); //sets the wheels to drive inwards, full speed
}

bool ToggleWheels::IsFinished(){
	return false;
}

void ToggleWheels::End(){
	Robot::intakearms->ToggleRollers(0); //sets wheels to off
}

void ToggleWheels::Interrupted(){
	End(); //ends command
}
