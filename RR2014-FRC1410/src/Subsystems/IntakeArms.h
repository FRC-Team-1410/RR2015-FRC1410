#ifndef IntakeArms_H
#define IntakeArms_H

#include "WPILib.h"

class IntakeArms: public Subsystem {
private:
	CANSpeedController * left_wheel;
	CANSpeedController * right_wheel;
	CANSpeedController * left_elbow;
	CANSpeedController * right_elbow;
	CANSpeedController * left_inner;
	CANSpeedController * right_inner;

public:
	IntakeArms();
	void InitDefaultCommand();
	void MoveElbows(float speed);
	void ToggleWheels(float speed);
	void ToggleInnerWheels(float speed);
	void AutoRemoveCans();
};

#endif
