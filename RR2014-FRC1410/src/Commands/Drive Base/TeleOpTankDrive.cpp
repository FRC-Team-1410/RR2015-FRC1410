#include <Commands/Drive Base/TeleOpTankDrive.h>
#include "Robot.h"

TeleOpTankDrive::TeleOpTankDrive(){
	Requires(Robot::drivebase); //requires the drivebase subsystem
}

void TeleOpTankDrive::Initialize(){

}

void TeleOpTankDrive::Execute(){
	Robot::drivebase->DriveTank(Robot::oi->GetDriveAxis(true), Robot::oi->GetDriveAxis(false)); //drives the wheels with the values returned from oi
	Robot::drivebase->ReturnEncoderDistance(0,0,0);
}

bool TeleOpTankDrive::IsFinished(){
	return false;
}

void TeleOpTankDrive::End(){
	Robot::drivebase->DriveTank(0,0); //sets the wheels to 0. needed so there isn't drift or the wheels continue driving when not supposed to
}

void TeleOpTankDrive::Interrupted(){
	End(); //ends command
}
