#include "ToteLifter.h"
#include "../RobotMap.h"

ToteLifter::ToteLifter() : Subsystem("ToteLifter"){
	elev_motor = new CANTalon(toteLifterMotor); //Elevator motor
}

void ToteLifter::InitDefaultCommand(){
	//SetDefaultCommand(new);
}

//Method to move the elevator up and down
void ToteLifter::MoveElevator(float speed){
	elev_motor->Set(speed);
}

//Returns whether the upper limit is pressed
bool ToteLifter::ReturnUpperLimit(){
	return elev_motor->IsRevLimitSwitchClosed();
}

//Returns whether the lower limit is pressed
bool ToteLifter::ReturnLowerLimit(){
	return elev_motor->IsFwdLimitSwitchClosed();
}
