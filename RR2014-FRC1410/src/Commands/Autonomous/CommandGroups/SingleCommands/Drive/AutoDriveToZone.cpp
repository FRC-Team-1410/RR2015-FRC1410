#include "AutoDriveToZone.h"
#include "Robot.h"

AutoDriveToZone::AutoDriveToZone(){
	Requires(Robot::drivebase);
}

void AutoDriveToZone::Initialize(){
	Robot::drivebase->ResetEncoderPosition();
}

void AutoDriveToZone::Execute(){
	Robot::drivebase->DriveTank(-0.5,0.5);
}

bool AutoDriveToZone::IsFinished(){
	return (Robot::drivebase->ReturnEncoderDistance(0,0,0) >= 4500);
}

void AutoDriveToZone::End(){
	Robot::drivebase->DriveTank(0,0);
}

void AutoDriveToZone::Interrupted(){
	End();
}
