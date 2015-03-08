#include <Commands/Autonomous/MoveSingleArm.h>
#include "Robot.h"

MoveSingleArm::MoveSingleArm(bool left, bool out){
	Requires(Robot::canmanipulator);
	move_left = left;
	move_out = out;
}

void MoveSingleArm::Initialize(){

}

void MoveSingleArm::Execute(){
	if(move_left){
		if(move_out){
			Robot::canmanipulator->MoveElbows(-0.5, 0);
		}
		else{
			Robot::canmanipulator->MoveElbows(0.5, 0);
		}
	}
	else{
		if(move_out){
			Robot::canmanipulator->MoveElbows(0, 0.5);
		}
		else{
			Robot::canmanipulator->MoveElbows(0, -0.5);
		}
	}
}

bool MoveSingleArm::IsFinished(){
	if(Robot::canmanipulator->ReturnArmAngle(move_left) >= 450 || Robot::canmanipulator->ReturnArmAngle(move_left) <= 0){
		return true;
	}
	else{
		return false;
	}
}

void MoveSingleArm::End(){
	Robot::canmanipulator->MoveElbows(0, 0);
}

void MoveSingleArm::Interrupted(){
	End();
}
