#include <Commands/Autonomous/RaiseCanLifter.h>
#include "../../Robot.h"

RaiseCanLifter::RaiseCanLifter(){
	Requires(Robot::canmanipulator);
}

void RaiseCanLifter::Initialize(){

}

void RaiseCanLifter::Execute(){
	Robot::canmanipulator->RaiseElevator(1);
}

bool RaiseCanLifter::IsFinished(){
	return false;
}

void RaiseCanLifter::End(){
	Robot::canmanipulator->RaiseElevator(0);
}

void RaiseCanLifter::Interrupted(){
	End();
}
