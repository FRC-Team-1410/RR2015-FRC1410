#include "SecondToteDriveToTote.h"
#include "Robot.h"

SecondToteDriveToTote::SecondToteDriveToTote(){
	Requires(Robot::drivebase);
}

void SecondToteDriveToTote::Initialize(){
	//Robot::drivebase->ResetEncoderPosition();
}

void SecondToteDriveToTote::Execute(){
	Robot::drivebase->DriveTank(-0.75,0.75);
}

bool SecondToteDriveToTote::IsFinished(){
	return (Robot::drivebase->ReturnEncoderDistance(0,0,0) >= 11950); //orig = 12700
}

void SecondToteDriveToTote::End(){
	Robot::drivebase->DriveTank(0,0);
}

void SecondToteDriveToTote::Interrupted(){
	End();
}
