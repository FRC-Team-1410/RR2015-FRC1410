#include "ToteLifter.h"
#include "../RobotMap.h"

ToteLifter::ToteLifter() : Subsystem("ToteLifter"){
	elev_motor = new CANTalon(toteLifterMotor);
}

void ToteLifter::InitDefaultCommand(){
	//SetDefaultCommand(new);
}

void ToteLifter::MoveElevator(float speed){
	elev_motor->Set(-speed);
}

bool ToteLifter::ReturnUpperLimit(){
	return elev_motor->IsRevLimitSwitchClosed();
}

bool ToteLifter::ReturnLowerLimit(){
	return elev_motor->IsFwdLimitSwitchClosed();
}
