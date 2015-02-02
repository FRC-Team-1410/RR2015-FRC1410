#ifndef IntakeArms_H
#define IntakeArms_H

#include "WPILib.h"

class IntakeArms: public Subsystem {
private:
	CANTalon * left_wheel;
	CANTalon * right_wheel;
	CANTalon * left_elbow;
	CANTalon * right_elbow;

public:
	IntakeArms();
	void InitDefaultCommand();
	void MoveElbows(float speed);
	void ToggleWheels(float speed);
	void AutoRemoveCans();
};

#endif
