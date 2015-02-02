#include <Commands/Autonomous/DriveStraight.h>
#include "../../Robot.h"
#include "../../RobotMap.h"

DriveStraight::DriveStraight(){
	Requires(Robot::drivebase);
}

void DriveStraight::Initialize(){

}

void DriveStraight::Execute(){
	while(Robot::drivebase->EncoderDistance(0,0,0) >= auto_drive_distance){
		Robot::drivebase->AutoDriveStraight(1);
	}
}

bool DriveStraight::IsFinished(){
	return false;
}

void DriveStraight::End(){
	Robot::drivebase->AutoDriveStraight(0);
	Robot::drivebase->ResetEncoders();
}

void DriveStraight::Interrupted(){
	End();
}
