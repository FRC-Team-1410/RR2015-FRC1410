#ifndef OI_H
#define OI_H

#include "WPILib.h"

class OI{
private:
	Joystick * driver_stick;
	Joystick * operator_stick;

	JoystickButton * toggle_intake_wheels;
	JoystickButton * move_tote_lifter;
	JoystickButton * move_can_lifter;
public:
	OI();
	double GetDriveAxis(bool left);
	double GetArmAxis(bool lower);
	double GetElevatorAxis();
};

#endif
