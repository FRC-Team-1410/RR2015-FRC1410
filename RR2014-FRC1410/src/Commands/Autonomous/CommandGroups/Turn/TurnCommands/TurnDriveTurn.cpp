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
	Robot::drivebase->DriveTank(-0.8,-0.8);
	Wait(0.5);
	end = true;
}

bool TurnDriveTurn::IsFinished(){
	return (end);
}

void TurnDriveTurn::End(){
	Robot::drivebase->DriveTank(0,0);
}

void TurnDriveTurn::Interrupted(){
	End();
}
