#ifndef CanManipulator_H
#define CanManipulator_H

#include "WPILib.h"

class CanManipulator: public Subsystem{
private:
	CANTalon * elev_motor;
	CANTalon * left_motor;
	CANTalon * right_motor;
public:
	CanManipulator();
	void InitDefaultCommand();
	void MoveElevator(float speed);
	void ArticulateArms(float speed);
	void LowerElevator(float speed);
	void RaiseElevator(float speed);
	void AutoGrabCan(float speed);
};

#endif
