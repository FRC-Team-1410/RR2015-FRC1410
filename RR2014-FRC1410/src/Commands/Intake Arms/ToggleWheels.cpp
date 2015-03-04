#include <Commands/Intake Arms/ToggleWheels.h>
#include "Robot.h"

ToggleWheels::ToggleWheels(){
	//Requires(Robot::intakearms);
}

void ToggleWheels::Initialize(){
	Robot::intakearms->ToggleRollers(0);
}

void ToggleWheels::Execute(){
	Robot::intakearms->ToggleRollers(1);
}

bool ToggleWheels::IsFinished(){
	return false;
}

void ToggleWheels::End(){
	Robot::intakearms->ToggleRollers(0);
}

void ToggleWheels::Interrupted(){
	End();
}
