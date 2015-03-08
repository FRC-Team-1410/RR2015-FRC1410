#ifndef CanManipulator_H
#define CanManipulator_H

#include "WPILib.h"

class CanManipulator: public Subsystem{
private:
	CANTalon * elev_motor; //elevator motor
	CANTalon * left_arm; //left upper arm motor
	CANTalon * right_arm; //right upper arm motor
public:
	CanManipulator();
	void InitDefaultCommand();
	void MoveElevator(float speed); //moves elevator
	bool ReturnUpperLimit(); //returns the upper limit state
	bool ReturnLowerLimit(); //returns the lower limit state
	void MoveElbows(float left_speed, float right_speed); //moves elbows
	float ReturnArmAngle(); //returns the angles
	float ReturnArmAngle(bool left); //returns one of the arms angles
	void ResetPotentiometers(); //sets position to 0
};

#endif
