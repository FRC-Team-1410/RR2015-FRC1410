#include <Subsystems/CanManipulator.h>
#include "Commands/Can Manipulator/MoveCanLifter.h"
#include "../RobotMap.h"

CanManipulator::CanManipulator() : Subsystem("ToteElevator"){
	elev_motor = new CANTalon(can_elev_motor);
	left_motor = new CANTalon(can_manipulator_left);
	right_motor = new CANTalon(can_manipulator_right);
}
void CanManipulator::InitDefaultCommand(){
	//SetDefaultCommand(new MoveCanLifter());
}

void CanManipulator::MoveElevator(float speed){
		elev_motor->Set(speed);
}

void CanManipulator::ArticulateArms(float speed){
	left_motor->Set(speed);
	right_motor->Set(-speed);
}

void CanManipulator::LowerElevator(float speed){
	elev_motor->Set(-speed);
}

void CanManipulator::RaiseElevator(float speed){
	elev_motor->Set(speed);
}

void CanManipulator::AutoGrabCan(float speed){
	while(left_motor->GetForwardLimitOK() != true && right_motor->GetReverseLimitOK() != true){
			left_motor->Set(speed);
			right_motor->Set(-speed);
		}
}

bool CanManipulator::UpperLimit(){
	return elev_motor->GetForwardLimitOK();
}

bool CanManipulator::LowerLimit(){
	return elev_motor->GetReverseLimitOK();
}
