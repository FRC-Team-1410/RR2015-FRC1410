#include <Commands/Intake Arms/MoveLowerArms.h>
#include "Robot.h"

MoveLowerArms::MoveLowerArms(){
	Requires(Robot::intakearms); //this command will require the intakearms
}

void MoveLowerArms::Initialize(){

}

void MoveLowerArms::Execute(){
	Robot::intakearms->MoveElbows(Robot::oi->GetArmAxis(true), (Robot::oi->GetArmAxis(true) * -1)); //drives the arms using the values returned from the oi
}

bool MoveLowerArms::IsFinished(){
	return false;
}

void MoveLowerArms::End(){
	Robot::intakearms->MoveElbows(0,0); //sets the arm speed to 0
}

void MoveLowerArms::Interrupted(){
	End(); //ends the command if interrupted
}
