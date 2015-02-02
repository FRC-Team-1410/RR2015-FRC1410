#ifndef DriveBase_H
#define DriveBase_H

#include "WPILib.h"

class DriveBase: public Subsystem{
private:
	CANTalon * fl_motor;
	CANTalon * fr_motor;
	CANTalon * bl_motor;
	CANTalon * br_motor;
	AnalogInput * drive_limit;
	Gyro * drive_gyro;
	Encoder * left_encoder;
	Encoder * right_encoder;
public:
	DriveBase();
	void InitDefaultCommand();
	void DriveTank(float speed1, float speed2);
	//void DriveOmni(float speed);
	bool IsLimitSwitchToggled();
	void ResetGyro();
	void AutoDriveStraight(float speed);
	void AutoDriveTurn(float speed, float angle);
	double EncoderDistance(double e1, double e2, double distance);
	void ResetEncoders();
};

#endif
