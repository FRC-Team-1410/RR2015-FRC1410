/*
 * Template for C++ Command Based Robot
 * I created this because the template is wrong
 * By: Lord Supreme Programmer of Team 1410 Isaac
 * Please contact me on ChiefDelphi if youfind errors
 * Username is King Nerd III
 */
#include "DriveBase.h"\
//Include the default command below
//For example:
//#include "Commands/ExampleCommand.h"
#include "../RobotMap.h"

DriveBase::DriveBase() : Subsystem("DriveBase"){
	fl_motor = new CANTalon(frontLeftDrive);
	fr_motor = new CANTalon(frontRightDrive);
	bl_motor = new CANTalon(backLeftDrive);
	br_motor = new CANTalon(backRightDrive);
	drive_gyro = new Gyro(gyroPort);

}

void DriveBase::InitDefaultCommand(){
	//SetDefaultCommand(new ExampleCommand());
}

//Method for driving tank
void DriveBase::DriveTank(float left_speed, float right_speed){
	fl_motor->Set(left_speed);
	fr_motor->Set(right_speed);
	bl_motor->Set(left_speed);
	br_motor->Set(right_speed);
}

//Method to return distance driven
float DriveBase::ReturnEncoderDistance(float e1, float e2, float distance){
	e2 = bl_motor->GetEncPosition() / 256.0 * 3.14159265;
	e1 = br_motor->GetEncPosition() / 256.0 * 3.14159265;

	distance = (e2 + e1) / 2;

	return -distance;
}

//Method to return the gyro angle
//Method to reset the gyro
