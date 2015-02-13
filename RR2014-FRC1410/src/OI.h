#ifndef OI_H
#define OI_H

#include "WPILib.h"

class OI
{
private:
	Joystick * driver_stick;
	Joystick * operator_stick;

	JoystickButton * toggle_inner_in;
	JoystickButton * toggle_inner_out;
	JoystickButton * reset_robot;
	JoystickButton * toggle_outer_rollers;
	JoystickButton * pick_up_can;
	JoystickButton * pick_up_tote;
	JoystickButton * toggle_can_lifter;
	JoystickButton * toggle_tote_lifter;

public:
	OI();
	double GetStickAxis(bool left);
	double DriveArms(bool upper);
	double GetDriveAllAxis();
};

#endif
