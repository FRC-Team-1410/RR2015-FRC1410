/*
 * Template for C++ Command Based Robot
 * I created this because the template is wrong
 * By: Lord Supreme Programmer of Team 1410 Isaac
 * Please contact me on ChiefDelphi if youfind errors
 * Username is King Nerd III
 */
#ifndef MY_ROBOT_H_
#define MY_ROBOT_H_

#include "WPILib.h"

//Include your auto command below
//For example:
//#include "Commands/ExampleCommand.h"

//Include your subsystems below
//For example:
//#include "Subsystems/ExampleSubsystem.h"
#include "OI.h"
#include "Subsystems/DriveBase.h"
#include "Subsystems/IntakeArms.h"
#include "Subsystems/ToteLifter.h"
#include "Subsystems/CanManipulator.h"

class Robot: public IterativeRobot {
public:
	//Create new objects of your subsystems below
	//For example:
	//static ExampleSubsystem* examplesubsystem;
	static OI * oi;
	static DriveBase * drivebase;
	static IntakeArms * intakearms;
	static ToteLifter * totelifter;
	static CanManipulator * canmanipulator;

private:
	LiveWindow * lw;
	//Create a auto new command object
	//For example:
	//Command * autocommand;
	Command * autocommand;
	void RobotInit();
	void AutonomousInit();
	void AutonomousPeriodic();
	void TeleopInit();
	void TeleopPeriodic();
	void TestPeriodic();
};

#endif
