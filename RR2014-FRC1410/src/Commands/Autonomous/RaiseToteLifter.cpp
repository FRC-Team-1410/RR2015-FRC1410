#include <Commands/Autonomous/RaiseToteLifter.h>
#include "../../Robot.h"

RaiseToteLifter::RaiseToteLifter(){
	Requires(Robot::totelifter);
}

void RaiseToteLifter::Initialize(){

}

void RaiseToteLifter::Execute(){
		Robot::totelifter->RaiseElevator(1);
}

bool RaiseToteLifter::IsFinished(){
	return !Robot::totelifter->UpperLimit();
}

void RaiseToteLifter::End(){
	Robot::totelifter->RaiseElevator(0);
}

void RaiseToteLifter::Interrupted(){
	End();
}
