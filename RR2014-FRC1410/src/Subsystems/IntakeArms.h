/*
 * Template for C++ Command Based Robot
 * I created this because the template is wrong
 * By: Lord Supreme Programmer of Team 1410 Isaac
 * Please contact me on ChiefDelphi if youfind errors
 * Username is King Nerd III
 */
#ifndef IntakeArms_H
#define IntakeArms_H

#include "WPILib.h"

class IntakeArms: public Subsystem{
private:
	//Declare motors and sensors below
	//For example:
	//CANTalon * example_motor;
public:
	IntakeArms();
	void InitDefaultCommand();
	//Create methods for the subsystem to be called by commands 	here
	//For Example:
	//void ExampleVoidMethod(parameter);
	//bool ExampleBoolMethod();
};

#endif
