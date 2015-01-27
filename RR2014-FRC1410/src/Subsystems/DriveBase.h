#ifndef DriveBase_H
#define DriveBase_H

#include "Commands/Subsystem.h"
#include "WPILib.h"

class DriveBase: public Subsystem
{
private:
	// It's desirable that everything possible under private except
	// for methods that implement subsystem capabilities
	CANTalon * fl_motor;
	CANTalon * fr_motor;
	CANTalon * bl_motor;
	CANTalon * br_motor;
public:
	DriveBase();
	void InitDefaultCommand();
	void DriveTank(float speed1, float speed2);
};

#endif
