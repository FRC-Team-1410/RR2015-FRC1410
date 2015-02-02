#include <Commands/Autonomous/LowerCanLifter.h>
#include "../../Robot.h"

LowerCanLifter::LowerCanLifter(){
	Requires(Robot::canmanipulator);
}

void LowerCanLifter::Initialize(){

}

void LowerCanLifter::Execute(){
	Robot::canmanipulator->LowerElevator(1);
}

bool LowerCanLifter::IsFinished(){
	return false;
}

void LowerCanLifter::End(){
	Robot::canmanipulator->LowerElevator(0);
}

void LowerCanLifter::Interrupted(){
	End();
}
