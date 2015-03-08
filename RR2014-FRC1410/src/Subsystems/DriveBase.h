#ifndef DriveBase_H
#define DriveBase_H

#include "WPILib.h"

class DriveBase: public Subsystem{
private:
	CANTalon * fl_motor; //front left
	CANTalon * fr_motor; //front right
	CANTalon * bl_motor; //back left
	CANTalon * br_motor; //back right
	Gyro * drive_gyro; //gyro
public:
	DriveBase();
	void InitDefaultCommand();
	void DriveTank(float left_speed, float right_speed); //drives tank
	float ReturnEncoderDistance(float e1, float e2, float distance); //returns the distance
	void ResetEncoderPosition(); //resets encoders
	float ReturnGyroPosition(); //returns the angle
	void ResetGyro(); //resets gyro
};

#endif
