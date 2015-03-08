#ifndef IntakeArms_H
#define IntakeArms_H

#include "WPILib.h"

class IntakeArms: public Subsystem{
private:
	CANTalon * left_arm; //left lower arm
	CANTalon * right_arm; //right lower arm
	CANTalon * left_wheel; //left intake wheel
	CANTalon * right_wheel; //right intake wheel
public:
	IntakeArms();
	void InitDefaultCommand();
	void MoveElbows(float left_speed, float right_speed); //drive elbows
	void ToggleRollers(float speed); //turns on or off the rollers
	float ReturnArmsAngle(); //returns angle
	void ResetPotentiometers(); //resets the angles
};

#endif
