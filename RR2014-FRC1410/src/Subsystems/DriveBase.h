#ifndef DriveBase_H
#define DriveBase_H

#include "WPILib.h"

class DriveBase: public Subsystem{
private:
	CANTalon * fl_motor;
	CANTalon * fr_motor;
	CANTalon * bl_motor;
	CANTalon * br_motor;
	Gyro * drive_gyro;
public:
	DriveBase();
	void InitDefaultCommand();
	void DriveTank(float left_speed, float right_speed);
	float ReturnEncoderDistance(float e1, float e2, float distance);
	void ResetEncoderPosition();
	float ReturnGyroPosition();
	void ResetGyro();
};

#endif
