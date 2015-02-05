#ifndef DriveBase_H
#define DriveBase_H

#include "WPILib.h"

class DriveBase: public Subsystem{
private:
	CANSpeedController * fl_motor;
	CANSpeedController * fr_motor;
	CANSpeedController * bl_motor;
	CANSpeedController * br_motor;
	//AnalogInput * drive_limit;
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
	double GetGyroAngle();
	double EncoderDistance(double e1, double e2, double distance);
	void ResetEncoders();
};

#endif
