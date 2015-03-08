#ifndef OI_H
#define OI_H

#include "WPILib.h"

class OI{
private:
	//create joystick objects
	Joystick * driver_stick; //for the driver
	Joystick * operator_stick; //for the operator

	//create the buttons objects for control
	JoystickButton * toggle_intake_wheels; //toggles rollers
	JoystickButton * move_tote_lifter; //toggles tote elevator
	JoystickButton * move_can_up; //moves it up
	JoystickButton * move_can_down; //moves down
public:
	OI();
	double GetDriveAxis(bool left); //returns the axis to drive the wheels on the bottom
	double GetArmAxis(bool lower); //method to return the axis value to drive the arms
	double GetElevatorAxis(); //returns the axis to drive the elevator. no longer used.
};

#endif
