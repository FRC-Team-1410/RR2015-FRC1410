#ifndef OI_H
#define OI_H

#include "WPILib.h"

class OI
{
private:
	Joystick * driverStick;
	Joystick * operatorStick;

	JoystickButton * toggleWheels;
	JoystickButton * moveElbowsOut;
	JoystickButton * moveElbowsIn;
	JoystickButton * toggleToteLifter;
	JoystickButton * toggleCanLifter;
	JoystickButton * articulateCanManipulator;

public:
	OI();
	double GetStickAxis(bool left);
	double GetOmniAxis();
};

#endif
