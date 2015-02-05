#include "IntakeArms.h"
#include "../RobotMap.h"

IntakeArms::IntakeArms() : Subsystem("IntakeArms"){
	left_wheel = new CANTalon(left_intake_wheel);
	right_wheel = new CANTalon(right_intake_wheel);
	left_elbow = new CANTalon(left_elbow_motor);
	right_elbow = new CANTalon(right_elbow_motor);
	left_inner = new CANTalon(left_inner_wheel);
	right_inner = new CANTalon(right_inner_wheel);
}

void IntakeArms::InitDefaultCommand(){
	//SetDefaultCommand(new ToggleIntakeWheels());
}

void IntakeArms::MoveElbows(float speed){
	left_elbow->Set(speed);
	right_elbow->Set(-speed);
}

void IntakeArms::ToggleWheels(float speed){
	left_wheel->Set(speed);
	right_wheel->Set(-speed);
}

void IntakeArms::AutoRemoveCans(){

}

void IntakeArms::ToggleInnerWheels(float speed){
	left_inner->Set(speed);
	right_inner->Set(-speed);
}
