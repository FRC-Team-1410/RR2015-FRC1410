#include "TurnDriveTurn.h"
#include "Robot.h"

TurnDriveTurn::TurnDriveTurn(){
	Requires(Robot::drivebase);
}

void TurnDriveTurn::Initialize(){
	Robot::drivebase->ResetGyro();
}

void TurnDriveTurn::Execute(){
	Robot::drivebase->DriveTank(-0.5,-0.5);
}

bool TurnDriveTurn::IsFinished(){
	return (Robot::drivebase->ReturnGyroPosition() >= 75);
}

void TurnDriveTurn::End(){
	Robot::drivebase->DriveTank(0,0);
}

void TurnDriveTurn::Interrupted(){
	End();
}
