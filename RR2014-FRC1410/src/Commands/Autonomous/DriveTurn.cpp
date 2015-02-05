#include <Commands/Autonomous/DriveTurn.h>
#include "../../Robot.h"

DriveTurn::DriveTurn(){
	Requires(Robot::drivebase);
	angle = (90);
}

void DriveTurn::Initialize(){
	Robot::drivebase->ResetGyro();
}

void DriveTurn::Execute(){
	Robot::drivebase->DriveTank(1, 1);
	Wait(0.01);
	End();
}

bool DriveTurn::IsFinished(){
	if(Robot::drivebase->GetGyroAngle() < angle){
		return false;
	}
	else{
		return true;
	}
}

void DriveTurn::End(){
	Robot::drivebase->DriveTank(0, 0);
}

void DriveTurn::Interrupted(){
	End();
}
