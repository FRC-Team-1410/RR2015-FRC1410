#include <Commands/Can Manipulator/MoveUpperArms.h>
#include "Robot.h"

MoveUpperArms::MoveUpperArms(){
	Requires(Robot::canmanipulator);
}

void MoveUpperArms::Initialize(){

}

void MoveUpperArms::Execute(){
	Robot::canmanipulator->MoveElbows(Robot::oi->GetArmAxis(false), (Robot::oi->GetArmAxis(false) * -1));
}

bool MoveUpperArms::IsFinished(){
	return false;
}

void MoveUpperArms::End(){
	Robot::canmanipulator->MoveElbows(0,0);
}

void MoveUpperArms::Interrupted(){
	End();
}
