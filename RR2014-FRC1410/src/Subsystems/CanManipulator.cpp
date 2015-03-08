#include "CanManipulator.h"
#include "Commands/Can Manipulator/MoveUpperArms.h"
#include "../RobotMap.h"

CanManipulator::CanManipulator() : Subsystem("CanManipulator"){
	elev_motor = new CANTalon(canLifterMotor); //motor for the elevator
	left_arm = new CANTalon(leftUpperArm); //motor for the left upper arm
	right_arm = new CANTalon(rightUpperArm); //motor for the right upper arm
}

void CanManipulator::InitDefaultCommand(){
	SetDefaultCommand(new MoveUpperArms()); //default command drives the arms
}

//method will drive the elevator motor
void CanManipulator::MoveElevator(float speed){
	elev_motor->Set(speed); //sets the elevator speed
}

//method will return the upper limit
bool CanManipulator::ReturnUpperLimit(){
	return elev_motor->IsFwdLimitSwitchClosed(); //returns true if triggered
}

//method will return the lower limit
bool CanManipulator::ReturnLowerLimit(){
	return elev_motor->IsRevLimitSwitchClosed(); //returns true if triggered
}

//method will drive the elbows of the arms
void CanManipulator::MoveElbows(float left_speed, float right_speed){
	left_arm->Set(left_speed); //sets the left arm speed
	right_arm->Set(right_speed); //sets the right arm speed
}

//returns the angles of the elbows by change in position
float CanManipulator::ReturnArmAngle(){
	left_arm->SetFeedbackDevice(CANTalon::AnalogPot); //sets the feedback device to a potentiometer
	right_arm->SetFeedbackDevice(CANTalon::AnalogPot); //does the same for right arm

	float angle; //says there is now a float named angle, presumably for the angle
	angle = (left_arm->GetPosition() + (right_arm->GetPosition() * -1)) / 2; //finds the angle by addign and dividing

	return angle; //returns angle
}

//second method because why not and I needed another one
float CanManipulator::ReturnArmAngle(bool left){
	left_arm->SetFeedbackDevice(CANTalon::AnalogPot); //tells talon it has a potentiometer
	right_arm->SetFeedbackDevice(CANTalon::AnalogPot); //same but for other arm

	float angle; //creates the angle variable

	//if I say it is left arm it does this
	if(left){
		angle = left_arm->GetPosition(); //sets angle to value
		return angle; //returns the angle
	}
	//if I do not say left it does this.
	else{
		angle = right_arm->GetPosition() * -1; //sets angle to value times -1 because yay inverting
		return angle; //returns angle
	}
}

//method to reset the arm angles
void CanManipulator::ResetPotentiometers(){
	left_arm->SetPosition(0); //sets left to 0
	right_arm->SetPosition(0); //does same for right
}
