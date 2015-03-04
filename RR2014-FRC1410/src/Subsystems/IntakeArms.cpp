#include <Commands/Intake Arms/MoveLowerArms.h>
#include "IntakeArms.h"
#include "../RobotMap.h"

IntakeArms::IntakeArms() : Subsystem("IntakeArms"){
	left_arm = new CANTalon(leftLowerArm);
	right_arm = new CANTalon(rightLowerArm);
	left_wheel = new CANTalon(leftIntakeRoller);
	right_wheel = new CANTalon(rightIntakeRoller);
}

void IntakeArms::InitDefaultCommand(){
	SetDefaultCommand(new MoveLowerArms());
}

void IntakeArms::MoveElbows(float left_speed, float right_speed){
	left_arm->Set(left_speed);
	right_arm->Set(right_speed);
}

void IntakeArms::ToggleRollers(float speed){
	left_wheel->Set(speed);
	right_wheel->Set(-speed);
}

float IntakeArms::ReturnArmsAngle(){
	left_arm->SetFeedbackDevice(CANTalon::AnalogPot);
	right_arm->SetFeedbackDevice(CANTalon::AnalogPot);

	float angle = 0;
	angle = (left_arm->GetPosition() + (right_arm->GetPosition() * 1)) / 2;

	return angle;
}

void IntakeArms::ResetPotentiometers(){
	left_arm->SetPosition(0);
	right_arm->SetPosition(0);
}
