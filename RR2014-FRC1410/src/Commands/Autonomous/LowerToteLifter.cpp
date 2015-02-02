#include <Commands/Autonomous/LowerToteLifter.h>
#include "../../Robot.h"

LowerToteLifter::LowerToteLifter(){
	Requires(Robot::totelifter);
}

void LowerToteLifter::Initialize(){

}

void LowerToteLifter::Execute(){
	Robot::totelifter->RaiseElevator(1);
}

bool LowerToteLifter::IsFinished(){
	return false;
}

void LowerToteLifter::End(){
	Robot::totelifter->RaiseElevator(0);
}

void LowerToteLifter::Interrupted(){
	End();
}
