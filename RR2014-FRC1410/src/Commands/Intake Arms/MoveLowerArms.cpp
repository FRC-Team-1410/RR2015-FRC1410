#include <Commands/Intake Arms/MoveLowerArms.h>
#include "Robot.h"

MoveLowerArms::MoveLowerArms(){
	Requires(Robot::intakearms);
}

void MoveLowerArms::Initialize(){

}

void MoveLowerArms::Execute(){
	Robot::intakearms->MoveElbows(Robot::oi->GetArmAxis(true), (Robot::oi->GetArmAxis(true) * -1));
}

bool MoveLowerArms::IsFinished(){
	return false;
}

void MoveLowerArms::End(){
	Robot::intakearms->MoveElbows(0,0);
}

void MoveLowerArms::Interrupted(){
	End();
}
