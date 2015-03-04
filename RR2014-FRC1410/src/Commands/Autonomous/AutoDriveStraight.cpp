#include "AutoDriveStraight.h"
#include "../../Robot.h"
#include <iostream>
using namespace std;
AutoDriveStraight::AutoDriveStraight(int distance){
	Requires(Robot::drivebase);
	drive_distance = distance;
}

void AutoDriveStraight::Initialize(){
	Robot::drivebase->ResetEncoderPosition();
}

void AutoDriveStraight::Execute(){
	Robot::drivebase->DriveTank(-0.5, 0.5);
	std::cout << Robot::drivebase->ReturnEncoderDistance(0,0,0);
}

bool AutoDriveStraight::IsFinished(){
	if(Robot::drivebase->ReturnEncoderDistance(0, 0, 0) >= drive_distance){
		Robot::drivebase->ResetEncoderPosition();
		return true;
	}
	else{
		return false;
	}
}

void AutoDriveStraight::End(){
	Robot::drivebase->DriveTank(0,0);
}

void AutoDriveStraight::Interrupted(){
	End();
}
