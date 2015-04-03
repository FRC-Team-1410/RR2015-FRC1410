#include "TurnDriveTurn.h"
#include "Robot.h"

TurnDriveTurn::TurnDriveTurn(){
	Requires(Robot::drivebase);
	end = false;
}

void TurnDriveTurn::Initialize(){
	Robot::drivebase->ResetGyro();
	end = false;
}

void TurnDriveTurn::Execute(){
	Robot::drivebase->DriveTank(-0.6,-0.6);
	//Wait(1.2);
	end = true;
}

bool TurnDriveTurn::IsFinished(){
	//return (end);
	return (Robot::drivebase->ReturnGyroPosition() >= 60);
}

void TurnDriveTurn::End(){
	Robot::drivebase->DriveTank(0,0);
}

void TurnDriveTurn::Interrupted(){
	End();
}
