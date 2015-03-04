#include <Commands/Intake Arms/SimulMoveLowerArms.h>
#include "Robot.h"

SimulMoveLowerArms::SimulMoveLowerArms(){
	//Requires(Robot::intakearms);
}

void SimulMoveLowerArms::Initialize(){

}

void SimulMoveLowerArms::Execute(){
	Robot::intakearms->MoveElbows(Robot::oi->GetArmAxis(true), (Robot::oi->GetArmAxis(true) * -1));
}

bool SimulMoveLowerArms::IsFinished(){
	return false;
}

void SimulMoveLowerArms::End(){
	Robot::intakearms->MoveElbows(0,0);
}

void SimulMoveLowerArms::Interrupted(){
	End();
}
