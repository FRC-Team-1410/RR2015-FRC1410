#include <Commands/Can Manipulator/SimulMoveUpperArms.h>
#include "Robot.h"

SimulMoveUpperArms::SimulMoveUpperArms(){
	//Requires(Robot::canmanipulator);
	//does not require subsystem for simulop
}

void SimulMoveUpperArms::Initialize(){

}

void SimulMoveUpperArms::Execute(){
	Robot::canmanipulator->MoveElbows(Robot::oi->GetArmAxis(false), (Robot::oi->GetArmAxis(false) * -1)); //drives the arms with value from the oi
}

bool SimulMoveUpperArms::IsFinished(){
	return false;
}

void SimulMoveUpperArms::End(){
	Robot::canmanipulator->MoveElbows(0,0); //stops the elbows
}

void SimulMoveUpperArms::Interrupted(){
	End(); //ends the command
}
