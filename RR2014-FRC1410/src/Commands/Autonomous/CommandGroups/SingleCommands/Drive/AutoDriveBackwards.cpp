#include "AutoDriveBackwards.h"
#include "Robot.h"

AutoDriveBackwards::AutoDriveBackwards(){
	Requires(Robot::drivebase);
}

void AutoDriveBackwards::Initialize(){
	Robot::drivebase->ResetEncoderPosition();
}

void AutoDriveBackwards::Execute(){
	Robot::drivebase->DriveTank(0.5,-0.5);
}

bool AutoDriveBackwards::IsFinished(){
	return (Robot::drivebase->ReturnEncoderDistance(0,0,0) <= -2000);
}

void AutoDriveBackwards::End(){
	Robot::drivebase->DriveTank(0,0);
}

void AutoDriveBackwards::Interrupted(){
	End();
}
