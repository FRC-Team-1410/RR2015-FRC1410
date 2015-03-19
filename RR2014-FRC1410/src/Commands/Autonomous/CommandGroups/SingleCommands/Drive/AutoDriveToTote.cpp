#include "AutoDriveToTote.h"
#include "Robot.h"

AutoDriveToTote::AutoDriveToTote(){
	Requires(Robot::drivebase);
}

void AutoDriveToTote::Initialize(){
	Robot::drivebase->ResetEncoderPosition();
}

void AutoDriveToTote::Execute(){
	Robot::drivebase->DriveTank(-0.5,0.5);
}

bool AutoDriveToTote::IsFinished(){
	return (Robot::drivebase->ReturnEncoderDistance(0,0,0) >= 3000);
}

void AutoDriveToTote::End(){
	Robot::drivebase->DriveTank(0,0);
}

void AutoDriveToTote::Interrupted(){
	End();
}
