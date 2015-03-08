#include <Commands/Autonomous/AutoMoveElevator.h>
#include "Robot.h"

AutoMoveElevator::AutoMoveElevator(bool up){
	Requires(Robot::canmanipulator);
	move_up = up;
}

void AutoMoveElevator::Initialize(){

}

void AutoMoveElevator::Execute(){
	if(move_up){
		Robot::canmanipulator->MoveElevator(1);
		Wait(1);
		End();
	}
	else{
		Robot::canmanipulator->MoveElevator(-1);
		Wait(1);
		End();
	}
}

bool AutoMoveElevator::IsFinished(){
	return true;
}

void AutoMoveElevator::End(){
	Robot::canmanipulator->MoveElevator(0);
}

void AutoMoveElevator::Interrupted(){
	End();
}
