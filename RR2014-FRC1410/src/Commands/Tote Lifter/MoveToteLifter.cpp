#include <Commands/Tote Lifter/MoveToteLifter.h>
#include "Robot.h"

MoveToteLifter::MoveToteLifter(){
	Requires(Robot::totelifter);
	move_up = true; //bool to move up
}

void MoveToteLifter::Initialize(){
	move_up = !move_up; //switches the bool value
}

void MoveToteLifter::Execute(){
	//runs if move_up is true
	if(move_up){
		//runs if top limit isn't triggered
		if(Robot::totelifter->ReturnUpperLimit() == false){
			Robot::totelifter->MoveElevator(1); //moves it up
		}
	}
	//runs if move_up isn't true
	else{
		//runs if bottom isn't triggered
		if(Robot::totelifter->ReturnLowerLimit() == false){
			Robot::totelifter->MoveElevator(-1); //moves down
		}
	}
}

bool MoveToteLifter::IsFinished(){
	//runs if move_up is true
	if(move_up){
		return Robot::totelifter->ReturnUpperLimit(); //returns if the limit is triggered
	}
	//runs if move_up is false
	else{
		return Robot::totelifter->ReturnLowerLimit(); //returns if the limit is triggered
	}
}

void MoveToteLifter::End(){
	Robot::totelifter->MoveElevator(0); //stops the elevator
}

void MoveToteLifter::Interrupted(){
	End(); //ends command
}
