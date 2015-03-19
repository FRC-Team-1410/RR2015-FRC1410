#include "SecondToteDriveToTote.h"
#include "Robot.h"

SecondToteDriveToTote::SecondToteDriveToTote(){
	Requires(Robot::drivebase);
}

void SecondToteDriveToTote::Initialize(){
	Robot::drivebase->ResetEncoderPosition();
}

void SecondToteDriveToTote::Execute(){
	Robot::drivebase->DriveTank(-0.5,0.5);
}

bool SecondToteDriveToTote::IsFinished(){
	return (Robot::drivebase->ReturnEncoderDistance(0,0,0) >= 3000);
}

void SecondToteDriveToTote::End(){
	Robot::drivebase->DriveTank(0,0);
}

void SecondToteDriveToTote::Interrupted(){
	End();
}
