#ifndef OI_H
#define OI_H

#include "WPILib.h"

class OI
{
private:
	Joystick * driverStick;
	Joystick * operatorStick;

public:
	OI();
	double GetStickAxis(bool left);
};

#endif
