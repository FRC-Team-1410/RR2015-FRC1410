#include "DriveBase.h"
#include "Commands/Drive Base/TeleOpTankDrive.h"
#include "../RobotMap.h"

DriveBase::DriveBase() : Subsystem("DriveBase"){
	fl_motor = new CANTalon(frontLeftDrive); //front left drive motor
	fr_motor = new CANTalon(frontRightDrive); //front right drive motor
	bl_motor = new CANTalon(backLeftDrive); //back left drive motor
	br_motor = new CANTalon(backRightDrive); //back right drive motor
	drive_gyro = new Gyro(gyroPort); //gyro.
}

void DriveBase::InitDefaultCommand(){
	SetDefaultCommand(new TeleOpTankDrive()); //default command drives the robot I think
}

//method to drive the brobot
void DriveBase::DriveTank(float left_speed, float right_speed){
	fl_motor->Set(left_speed); //sets fl_motor speed
	fr_motor->Set(right_speed); //sets fr_motor speed
	bl_motor->Set(left_speed); //sets bl_motor speed
	br_motor->Set(right_speed); //sets br_motor speed
}

//tells us what the encoder distance is. returns in ticks.
float DriveBase::ReturnEncoderDistance(float e1, float e2, float distance){
	bl_motor->SetFeedbackDevice(CANTalon::QuadEncoder); //tells talon it has an encoder
	br_motor->SetFeedbackDevice(CANTalon::QuadEncoder); //does same for right side
	//bl_motor->SetSensorDirection(true);
	//br_motor->SetSensorDirection(true);

	e1 = bl_motor->GetEncPosition() * -1; //sets e1 to left value
	distance = br_motor->GetEncPosition() * -1; //sets e2 to right value times -1 because yay inverting

	//distance = (e2 + e1) / 2; //averages the distances
	SmartDashboard::PutNumber("Encoder Distance", distance);//puts the number on the smartdashboard
	SmartDashboard::PutNumber("Left Encoder Distance", e1 = bl_motor->GetEncPosition() * -1);
	SmartDashboard::PutNumber("Right Encoder Distance", e2 = br_motor->GetEncPosition() * -1);
	return distance; //returns distance
}

//sets the robot to position 0
void DriveBase::ResetEncoderPosition(){
	bl_motor->SetPosition(0); //sets left to 0
	br_motor->SetPosition(0); //sets right to 0
}

//tells us the gyro angle. Is negative.
float DriveBase::ReturnGyroPosition(){
	SmartDashboard::PutNumber("Gyro Angle", drive_gyro->GetAngle()); //puts the angle on the smartdashboard
	return drive_gyro->GetAngle(); //returns the angle in 0 to 1.1
}

//resets the gyro angle
void DriveBase::ResetGyro(){
	drive_gyro->Reset(); //resets gyro.
}
