#include <Subsystems/ToteLifter.h>
#include "../RobotMap.h"

ToteLifter::ToteLifter() : Subsystem("ToteElevator"){
	elev_motor = new CANTalon(tote_elev_motor);
}

void ToteLifter::InitDefaultCommand(){
	//SetDefaultCommand(new ());
}

bool ToteLifter::UpperLimit(){
	return elev_motor->GetForwardLimitOK();
}

bool ToteLifter::LowerLimit(){
	return elev_motor->GetReverseLimitOK();
}
void ToteLifter::MoveElevator(float speed){
	elev_motor->Set(speed);
}

void ToteLifter::RaiseElevator(float speed){
	elev_motor->Set(speed);
}

void ToteLifter::LowerElevator(float speed){
	elev_motor->Set(-speed);
}
