#include "AutoDriveTurn.h"
#include "../../Robot.h"
#include <iostream>
using namespace std;
AutoDriveTurn::AutoDriveTurn(){
	Requires(Robot::drivebase);
}

void AutoDriveTurn::Initialize(){
	Robot::drivebase->ResetGyro();
}

void AutoDriveTurn::Execute(){
	Robot::drivebase->DriveTank(-0.5, -0.5);
}

bool AutoDriveTurn::IsFinished(){
	if(Robot::drivebase->ReturnGyroPosition() <= -0.256){
		return true;
	}
	else{
		return false;
	}
}

void AutoDriveTurn::End(){
	Robot::drivebase->DriveTank(0,0);
}

void AutoDriveTurn::Interrupted(){
	End();
}
