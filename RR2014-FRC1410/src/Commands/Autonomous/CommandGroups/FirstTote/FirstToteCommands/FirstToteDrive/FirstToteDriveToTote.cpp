#include <Commands/Autonomous/CommandGroups/FirstTote/FirstToteCommands/FirstToteDrive/FirstToteDriveToTote.h>
#include "Robot.h"

FirstToteDriveToTote::FirstToteDriveToTote(){
	Requires(Robot::drivebase);
}

void FirstToteDriveToTote::Initialize(){
	Robot::drivebase->ResetEncoderPosition();
}

void FirstToteDriveToTote::Execute(){
	Wait(0.1);
	Robot::drivebase->DriveTank(-0.5,0.5);
}

bool FirstToteDriveToTote::IsFinished(){
	return (Robot::drivebase->ReturnEncoderDistance(0,0,0) >= 5700); //orig = 5500
}

void FirstToteDriveToTote::End(){
	Robot::drivebase->DriveTank(0,0);
}

void FirstToteDriveToTote::Interrupted(){
	End();
}
