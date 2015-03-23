#include "FinishAutoDriveBackwards.h"
#include "Robot.h"

FinishAutoDriveBackwards::FinishAutoDriveBackwards(){
	Requires(Robot::drivebase);
}

void FinishAutoDriveBackwards::Initialize(){
	Robot::drivebase->ResetEncoderPosition();
}

void FinishAutoDriveBackwards::Execute(){
	Robot::drivebase->DriveTank(0.75,-0.75);
}

bool FinishAutoDriveBackwards::IsFinished(){
	return (Robot::drivebase->ReturnEncoderDistance(0,0,0) <= -1750);
}

void FinishAutoDriveBackwards::End(){
	Robot::drivebase->DriveTank(0,0);
}

void FinishAutoDriveBackwards::Interrupted(){
	End();
}
