#include <Commands/Autonomous/DriveTurn.h>
#include "../../Robot.h"

DriveTurn::DriveTurn(){
	Requires(Robot::drivebase);
}

void DriveTurn::Initialize(){
	Robot::drivebase->ResetGyro();
}

void DriveTurn::Execute(){
	Robot::drivebase->AutoDriveTurn(1, 90);
	Wait(0.01);
	End();
}

bool DriveTurn::IsFinished(){
	return false;
}

void DriveTurn::End(){
	Robot::drivebase->AutoDriveTurn(0, 90);
}

void DriveTurn::Interrupted(){
	End();
}
