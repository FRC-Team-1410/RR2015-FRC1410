#include <Commands/Can Manipulator/MoveUpperArms.h>
#include "Robot.h"

MoveUpperArms::MoveUpperArms(){
	Requires(Robot::canmanipulator); //requires the canmanipulator subsystem
}

void MoveUpperArms::Initialize(){

}

void MoveUpperArms::Execute(){
	Robot::canmanipulator->MoveElbows(Robot::oi->GetArmAxis(false), (Robot::oi->GetArmAxis(false) * -1)); //drives the arms with the values from the oi
}

bool MoveUpperArms::IsFinished(){
	return false;
}

void MoveUpperArms::End(){
	Robot::canmanipulator->MoveElbows(0,0); //stops elbows moving
}

void MoveUpperArms::Interrupted(){
	End(); //ends the command
}
