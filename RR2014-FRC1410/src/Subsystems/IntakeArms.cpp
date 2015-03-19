#include <Commands/Intake Arms/MoveLowerArms.h>
#include "IntakeArms.h"
#include "../RobotMap.h"

IntakeArms::IntakeArms() : Subsystem("IntakeArms"){
	left_arm = new CANTalon(leftLowerArm); //left lower arm
	right_arm = new CANTalon(rightLowerArm); //right lower arm
	left_wheel = new CANTalon(leftIntakeRoller); //left intake wheel
	right_wheel = new CANTalon(rightIntakeRoller); //right intake wheel
}

void IntakeArms::InitDefaultCommand(){
	SetDefaultCommand(new MoveLowerArms()); //default command drives arms
}

//moves the elbows
void IntakeArms::MoveElbows(float left_speed, float right_speed){
	left_arm->Set(left_speed); //sets the left arm speed
	right_arm->Set(right_speed); //sets the right arm speed
}

//turns rollers on or off
void IntakeArms::ToggleRollers(float speed){
	left_wheel->Set(-speed); //sets the left to negative speed
	right_wheel->Set(-speed); //sets the right to speed
}

//returns the arm angles. may not be used
float IntakeArms::ReturnArmsAngle(){
	left_arm->SetFeedbackDevice(CANTalon::AnalogPot); //says theres a sensor
	right_arm->SetFeedbackDevice(CANTalon::AnalogPot); //same but for right arm

	float angle; //creates angle var
	angle = (left_arm->GetPosition() + (right_arm->GetPosition() * 1)) / 2; //averages angles

	return angle; //returns the angle
}

//resets angle
void IntakeArms::ResetPotentiometers(){
	left_arm->SetPosition(0); //set left to 0
	right_arm->SetPosition(0); //sets right to 0
}
