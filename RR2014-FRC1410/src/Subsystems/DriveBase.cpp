#include "DriveBase.h"
#include "Commands/Drive Base/TeleOpTankDrive.h"
#include "../RobotMap.h"

DriveBase::DriveBase() : Subsystem("DriveBase"){
	fl_motor = new CANTalon(frontLeftDrive);
	fr_motor = new CANTalon(frontRightDrive);
	bl_motor = new CANTalon(backLeftDrive);
	br_motor = new CANTalon(backRightDrive);
	drive_gyro = new Gyro(gyroPort);
}

void DriveBase::InitDefaultCommand(){
	SetDefaultCommand(new TeleOpTankDrive());
}

void DriveBase::DriveTank(float left_speed, float right_speed){
	fl_motor->Set(left_speed);
	fr_motor->Set(right_speed);
	bl_motor->Set(left_speed);
	br_motor->Set(right_speed);
}

float DriveBase::ReturnEncoderDistance(float e1, float e2, float distance){
	bl_motor->SetFeedbackDevice(CANTalon::QuadEncoder);
	br_motor->SetFeedbackDevice(CANTalon::QuadEncoder);
	//bl_motor->SetSensorDirection(true);
	//br_motor->SetSensorDirection(true);

	e1 = bl_motor->GetEncPosition();
	e2 = br_motor->GetEncPosition() * -1;

	distance = (e2 + e1) / 2;
	SmartDashboard::PutNumber("Encoder Distance", distance);
	return distance;
}

void DriveBase::ResetEncoderPosition(){
	bl_motor->SetPosition(0);
	br_motor->SetPosition(0);
}

float DriveBase::ReturnGyroPosition(){
	return drive_gyro->GetAngle();
}

void DriveBase::ResetGyro(){
	drive_gyro->Reset();
}
