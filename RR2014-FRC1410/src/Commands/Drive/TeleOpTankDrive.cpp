#include "TeleOpTankDrive.h"
#include "Robot.h"

TeleOpTankDrive::TeleOpTankDrive(){
	Requires(Robot::drivebase);
}

void TeleOpTankDrive::Initialize(){

}

void TeleOpTankDrive::Execute(){
	Robot::drivebase->DriveTank(Robot::oi->GetStickAxis(true), Robot::oi->GetStickAxis(false));
}

// Make this return true when this Command no longer needs to run execute()
bool TeleOpTankDrive::IsFinished(){
	return false;
}

// Called once after isFinished returns true
void TeleOpTankDrive::End(){
	Robot::drivebase->DriveTank(0, 0);
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void TeleOpTankDrive::Interrupted(){
	End();
}
