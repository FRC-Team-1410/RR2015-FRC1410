#include <Commands/Can Manipulator/MoveCanLifter.h>
#include "Robot.h"

MoveCanLifter::MoveCanLifter(){
	//Requires(Robot::canmanipulator);
}

void MoveCanLifter::Initialize(){

}

void MoveCanLifter::Execute(){
	Robot::canmanipulator->MoveElevator(Robot::oi->GetElevatorAxis());
}

bool MoveCanLifter::IsFinished(){
	if(Robot::canmanipulator->ReturnUpperLimit() || Robot::canmanipulator->ReturnLowerLimit() == true){
		return true;
	}
	else{
		return false;
	}
}

void MoveCanLifter::End(){
	Robot::canmanipulator->MoveElevator(0);
}

void MoveCanLifter::Interrupted(){
	End();
}
