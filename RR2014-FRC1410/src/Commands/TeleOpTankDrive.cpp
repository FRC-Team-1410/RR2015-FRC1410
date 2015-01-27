#include "TeleOpTankDrive.h"

TeleOpTankDrive::TeleOpTankDrive()
{
	// Use Requires() here to declare subsystem dependencies
	Requires(drivebase);
}

// Called just before this Command runs the first time
void TeleOpTankDrive::Initialize()
{

}

// Called repeatedly when this Command is scheduled to run
void TeleOpTankDrive::Execute()
{
	drivebase->DriveTank(oi->GetStickAxis(true), oi->GetStickAxis(false));
}

// Make this return true when this Command no longer needs to run execute()
bool TeleOpTankDrive::IsFinished()
{
	return false;
}

// Called once after isFinished returns true
void TeleOpTankDrive::End()
{

}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void TeleOpTankDrive::Interrupted()
{

}
