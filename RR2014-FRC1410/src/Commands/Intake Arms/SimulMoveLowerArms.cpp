#include <Commands/Intake Arms/SimulMoveLowerArms.h>
#include "Robot.h"

SimulMoveLowerArms::SimulMoveLowerArms(){
	//Requires(Robot::intakearms);
	//will not require a subsystem so it can work simultaneously
}

void SimulMoveLowerArms::Initialize(){

}

void SimulMoveLowerArms::Execute(){
	Robot::intakearms->MoveElbows(Robot::oi->GetArmAxis(true), (Robot::oi->GetArmAxis(true) * -1)); //also drives the arms with values from oi
}

bool SimulMoveLowerArms::IsFinished(){
	return false;
}

void SimulMoveLowerArms::End(){
	Robot::intakearms->MoveElbows(0,0); //stops arms from driving
}

void SimulMoveLowerArms::Interrupted(){
	End(); //ends command
}
