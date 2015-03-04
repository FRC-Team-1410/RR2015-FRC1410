#include "CanManipulator.h"
#include "Commands/Can Manipulator/MoveUpperArms.h"
#include "../RobotMap.h"

CanManipulator::CanManipulator() : Subsystem("CanManipulator"){
	elev_motor = new CANTalon(canLifterMotor);
	left_arm = new CANTalon(leftUpperArm);
	right_arm = new CANTalon(rightUpperArm);
}

void CanManipulator::InitDefaultCommand(){
	SetDefaultCommand(new MoveUpperArms());
}

void CanManipulator::MoveElevator(float speed){
	elev_motor->Set(speed);
}

bool CanManipulator::ReturnUpperLimit(){
	return elev_motor->IsFwdLimitSwitchClosed();
}

bool CanManipulator::ReturnLowerLimit(){
	return elev_motor->IsRevLimitSwitchClosed();
}

void CanManipulator::MoveElbows(float left_speed, float right_speed){
	left_arm->Set(left_speed);
	right_arm->Set(right_speed);
}

float CanManipulator::ReturnArmAngle(){
	left_arm->SetFeedbackDevice(CANTalon::AnalogPot);
	right_arm->SetFeedbackDevice(CANTalon::AnalogPot);

	float angle = 0;
	angle = (left_arm->GetPosition() + (right_arm->GetPosition() * -1)) / 2;

	return angle;
}

void CanManipulator::ResetPotentiometers(){
	left_arm->SetPosition(0);
	right_arm->SetPosition(0);
}
