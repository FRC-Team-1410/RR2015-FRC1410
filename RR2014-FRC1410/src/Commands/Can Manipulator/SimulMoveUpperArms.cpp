#include <Commands/Can Manipulator/SimulMoveUpperArms.h>
#include "Robot.h"

SimulMoveUpperArms::SimulMoveUpperArms(){
	//Requires(Robot::canmanipulator);
}

void SimulMoveUpperArms::Initialize(){

}

void SimulMoveUpperArms::Execute(){
	Robot::canmanipulator->MoveElbows(Robot::oi->GetArmAxis(false), (Robot::oi->GetArmAxis(false) * -1));
}

bool SimulMoveUpperArms::IsFinished(){
	return false;
}

void SimulMoveUpperArms::End(){
	Robot::canmanipulator->MoveElbows(0,0);
}

void SimulMoveUpperArms::Interrupted(){
	End();
}
