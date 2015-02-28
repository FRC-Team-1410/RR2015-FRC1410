/*
 * Template for C++ Command Based Robot
 * I created this because the template is wrong
 * By: Lord Supreme Programmer of Team 1410 Isaac
 * Please contact me on ChiefDelphi if youfind errors
 * Username is King Nerd III
 */
#include "CanManipulator.h"\
//Include the default command below
//For example:
//#include "Commands/ExampleCommand.h"
#include "../RobotMap.h"

CanManipulator::CanManipulator() : Subsystem("CanManipulator"){
	//Put motors and sensors below
	//For example:
	//example_motor = new CANTalon(1);
}

void CanManipulator::InitDefaultCommand(){
	//Set the default command here, it will run automatically
	//For Example:
	//SetDefaultCommand(new ExampleCommand());
}

//Create methods for your subsystem to be called by commands
//For example:
/**void ExampleSubsystem::ExampleVoidMethod(parameter){
	//Put what you want to happen here
	//For example:
	//example_motor->Set(parameter);
}**/

/**bool ExampleSubsystem::ExampleBoolMethod(){
	//Put what you want to be returned below
	//For example:
	//return example_motor->GetForwardLimitOK();
}**/

