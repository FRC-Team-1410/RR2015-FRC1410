#ifndef CanManipulator_H
#define CanManipulator_H

#include "WPILib.h"

class CanManipulator: public Subsystem{
private:
	CANTalon * elev_motor;
	CANTalon * left_arm;
	CANTalon * right_arm;
public:
	CanManipulator();
	void InitDefaultCommand();
	void MoveElevator(float speed);
	bool ReturnUpperLimit();
	bool ReturnLowerLimit();
	void MoveElbows(float left_speed, float right_speed);
	float ReturnArmAngle();
	void ResetPotentiometers();
};

#endif
