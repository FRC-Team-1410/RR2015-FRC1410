#include <Commands/Can Manipulator/MoveCanLifter.h>
#include "Robot.h"

MoveCanLifter::MoveCanLifter(float drive_speed){
	//Requires(Robot::canmanipulator);
	speed = drive_speed; //gets the value from the constructor. Is used later in command
}

void MoveCanLifter::Initialize(){

}

void MoveCanLifter::Execute(){
	Robot::canmanipulator->MoveElevator(speed); //drives the elevator at whatever speed is
}

bool MoveCanLifter::IsFinished(){
	//runs if the elevator is going up
	if(speed > 0){
		return Robot::canmanipulator->ReturnUpperLimit(); //returns if the upper is triggered
	}
	//runs if the elevator is going down
	else{
		return Robot::canmanipulator->ReturnLowerLimit(); //returns if the lower is triggered
	}
}

void MoveCanLifter::End(){
	Robot::canmanipulator->MoveElevator(0); //stops the elevator
}

void MoveCanLifter::Interrupted(){
	End(); //ends the command
}
