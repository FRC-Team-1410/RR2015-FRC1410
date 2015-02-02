#include "IntakeArms.h"
#include "../RobotMap.h"

IntakeArms::IntakeArms() : Subsystem("IntakeArms"){
	left_wheel = new CANTalon(left_intake_wheel);
	right_wheel = new CANTalon(right_intake_wheel);
	left_elbow = new CANTalon(left_elbow_motor);
	right_elbow = new CANTalon(right_elbow_motor);
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
