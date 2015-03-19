#include "AutoDriveTurn.h"
#include "Robot.h"

AutoDriveTurn::AutoDriveTurn(){
	Requires(Robot::drivebase);
}

void AutoDriveTurn::Initialize(){
	Robot::drivebase->ResetGyro();
}

void AutoDriveTurn::Execute(){
	Robot::drivebase->DriveTank(-0.5,-0.5);
}

bool AutoDriveTurn::IsFinished(){
	return (Robot::drivebase->ReturnGyroPosition() >= 75);
}

void AutoDriveTurn::End(){
	Robot::drivebase->DriveTank(0,0);
}

void AutoDriveTurn::Interrupted(){
	End();
}
