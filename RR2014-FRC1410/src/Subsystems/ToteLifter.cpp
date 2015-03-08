#include "ToteLifter.h"
#include "../RobotMap.h"

ToteLifter::ToteLifter() : Subsystem("ToteLifter"){
	elev_motor = new CANTalon(toteLifterMotor); //elevator motor
}

void ToteLifter::InitDefaultCommand(){
	//SetDefaultCommand(new);
}

//moves elevator
void ToteLifter::MoveElevator(float speed){
	elev_motor->Set(-speed); //sets the elevator to the speed but neagtive
}

//returns the upper state
bool ToteLifter::ReturnUpperLimit(){
	return elev_motor->IsRevLimitSwitchClosed(); //reverse because elevator is rev is up
}

//returns the lower state
bool ToteLifter::ReturnLowerLimit(){
	return elev_motor->IsFwdLimitSwitchClosed(); //forward because elevator is fwd is down
}
