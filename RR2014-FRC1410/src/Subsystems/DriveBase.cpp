#include "DriveBase.h"
#include "Commands/Drive/TeleOpTankDrive.h"
#include "../RobotMap.h"
#include <math.h>

DriveBase::DriveBase() : Subsystem("DriveBase"){
	fl_motor = new CANTalon(front_left_drive);
	fr_motor = new CANTalon(front_right_drive);
	bl_motor = new CANTalon(back_left_drive);
	br_motor = new CANTalon(back_right_drive);
	drive_limit = new AnalogInput(drive_limit_switch);
	drive_gyro = new Gyro(drive_gyro_channel);
	left_encoder = new Encoder(left_encoder_a, left_encoder_b);
	right_encoder = new Encoder(right_encoder_a, right_encoder_b, true);

	left_encoder->Reset();
	right_encoder->Reset();
}

void DriveBase::InitDefaultCommand(){
	SetDefaultCommand(new TeleOpTankDrive());
}

// Put methods for controlling this subsystem
// here. Call these from Commands.
void DriveBase::DriveTank(float speed1, float speed2){
	fl_motor->Set(speed1);
	fr_motor->Set(speed2);
	bl_motor->Set(speed1);
	br_motor->Set(speed2);
}

bool DriveBase::IsLimitSwitchToggled(){
	return drive_limit;
}

void DriveBase::ResetGyro(){
	drive_gyro->Reset();
}

void DriveBase::AutoDriveStraight(float speed){
	fl_motor->Set(speed);
	fr_motor->Set(-speed);
	bl_motor->Set(speed);
	br_motor->Set(-speed);
}

void DriveBase::AutoDriveTurn(float speed, float angle){
	while(drive_gyro->GetAngle() >= angle){
		fl_motor->Set(speed);
		fr_motor->Set(speed);
		bl_motor->Set(speed);
		br_motor->Set(speed);
	}
}

double DriveBase::EncoderDistance(double e1, double e2, double distance) {
	e1=left_encoder->GetDistance()/ 256.0 * 3 * 3.14159265;
	e2=right_encoder->GetDistance()/ 256.0 * 3 * 3.14159265;
	distance = (e1 + e2) / 2;
	return(distance);
}

void DriveBase::ResetEncoders(){
	left_encoder->Reset();
	right_encoder->Reset();
}
