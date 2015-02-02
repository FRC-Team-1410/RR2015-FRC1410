#include <Subsystems/ToteLifter.h>
#include "../RobotMap.h"

ToteLifter::ToteLifter() : Subsystem("ToteElevator"){
	elev_motor = new CANTalon(tote_elev_motor);
}

void ToteLifter::InitDefaultCommand(){
	//SetDefaultCommand(new ());
}

void ToteLifter::MoveElevator(float speed){
	if(elev_motor->GetForwardLimitOK()){
		elev_motor->Set(speed);
	}
	else if (elev_motor->GetReverseLimitOK()){
		elev_motor->Set(-speed);
	}
	else{
		elev_motor->Set(-speed);
	}
}

void ToteLifter::RaiseElevator(float speed){
	elev_motor->Set(speed);
}

void ToteLifter::LowerElevator(float speed){
	elev_motor->Set(-speed);
}
