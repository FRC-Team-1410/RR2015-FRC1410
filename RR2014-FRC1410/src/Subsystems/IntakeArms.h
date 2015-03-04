#ifndef IntakeArms_H
#define IntakeArms_H

#include "WPILib.h"

class IntakeArms: public Subsystem{
private:
	CANTalon * left_arm;
	CANTalon * right_arm;
	CANTalon * left_wheel;
	CANTalon * right_wheel;
public:
	IntakeArms();
	void InitDefaultCommand();
	void MoveElbows(float left_speed, float right_speed);
	void ToggleRollers(float speed);
	float ReturnArmsAngle();
	void ResetPotentiometers();
};

#endif
