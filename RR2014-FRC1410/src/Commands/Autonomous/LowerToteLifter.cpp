#include <Commands/Autonomous/LowerToteLifter.h>
#include "../../Robot.h"

LowerToteLifter::LowerToteLifter(){
	Requires(Robot::totelifter);
}

void LowerToteLifter::Initialize(){

}

void LowerToteLifter::Execute(){
	Robot::totelifter->LowerElevator(1);
}

bool LowerToteLifter::IsFinished(){
	return !Robot::totelifter->LowerLimit();
}

void LowerToteLifter::End(){
	Robot::totelifter->RaiseElevator(0);
}

void LowerToteLifter::Interrupted(){
	End();
}
