#ifndef DriveBase_H
#define DriveBase_H

#include "WPILib.h"

class DriveBase: public Subsystem{
private:
	CANTalon * fl_motor; //Front left drive motor
	CANTalon * fr_motor; //Front right drive motor
	CANTalon * bl_motor; //Back left drive motor
	CANTalon * br_motor; //Back right drive motor
	Gyro * drive_gyro; //Gyro for drive
public:
	DriveBase();
	void InitDefaultCommand();
	void DriveTank(float left_speed, float right_speed); //Method for driving tank
	float ReturnEncoderDistance(float e1, float e2, float distance); //Method to return distance driven
	float ReturnGyroPosition(); //Method to return the gyro angle
	void ResetGyro(); //Method to reset the gyro
};

#endif
