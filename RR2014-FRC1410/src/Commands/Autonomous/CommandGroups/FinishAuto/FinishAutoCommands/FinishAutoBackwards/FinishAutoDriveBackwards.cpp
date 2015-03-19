#include "FinishAutoDriveBackwards.h"
#include "Robot.h"

FinishAutoDriveBackwards::FinishAutoDriveBackwards(){
	Requires(Robot::drivebase);
}

void FinishAutoDriveBackwards::Initialize(){
	Robot::drivebase->ResetEncoderPosition();
}

void FinishAutoDriveBackwards::Execute(){
	Robot::drivebase->DriveTank(0.5,-0.5);
}

bool FinishAutoDriveBackwards::IsFinished(){
	return (Robot::drivebase->ReturnEncoderDistance(0,0,0) <= -2000);
}

void FinishAutoDriveBackwards::End(){
	Robot::drivebase->DriveTank(0,0);
}

void FinishAutoDriveBackwards::Interrupted(){
	End();
}
