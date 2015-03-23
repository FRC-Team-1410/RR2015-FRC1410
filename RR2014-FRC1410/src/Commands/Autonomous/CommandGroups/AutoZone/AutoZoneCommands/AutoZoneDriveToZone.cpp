#include "AutoZoneDriveToZone.h"
#include "Robot.h"

AutoZoneDriveToZone::AutoZoneDriveToZone(){
	Requires(Robot::drivebase);
}

void AutoZoneDriveToZone::Initialize(){
	//Robot::drivebase->ResetEncoderPosition();
}

void AutoZoneDriveToZone::Execute(){
	Robot::drivebase->DriveTank(-0.75,0.75);
}

bool AutoZoneDriveToZone::IsFinished(){
	return (Robot::drivebase->ReturnEncoderDistance(0,0,0) >= 18450); //orig = 19000
}

void AutoZoneDriveToZone::End(){
	Robot::drivebase->DriveTank(0,0);
}

void AutoZoneDriveToZone::Interrupted(){
	End();
}
