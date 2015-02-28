/*
 * Template for C++ Command Based Robot
 * I created this because the template is wrong
 * By: Lord Supreme Programmer of Team 1410 Isaac
 * Please contact me on ChiefDelphi if youfind errors
 * Username is King Nerd III
 */
#include "WPILib.h"
#include "Robot.h"

//Include your auto command below
//For example:
//#include "Commands/ExampleCommand.h"
#include "Commands/Auto.h"

//Set all your subsystems to NULL below
//For example:
//ExampleSubsystem * Robot::examplesubsystem = NULL;
OI * Robot::oi = NULL;
DriveBase * Robot::drivebase = NULL;
IntakeArms * Robot::intakearms = NULL;
ToteLifter * Robot::totelifter = NULL;
CanManipulator * Robot::canmanipulator = NULL;

void Robot::RobotInit(){
	//Make new objects of your subsystems below
	//For example:
	//examplesubsystem = new ExampleSubsystem();
	oi = new OI();
	drivebase = new DriveBase();
	intakearms = new IntakeArms();
	totelifter = new ToteLifter();
	canmanipulator = new CanManipulator();
	
	lw = LiveWindow::GetInstance();
	//Create a new command for autonomous
	//Preferably it will be a command group
	//For example:
	//autocommand = new ExampleCommad();
	autocommand = new Auto();
}

void Robot::AutonomousInit(){
	//Start your auto command below
	//For example:
	//autocommand->Start();
	autocommand->Start();
}

void Robot::AutonomousPeriodic(){
	//Put things here that will run throughout auto
	//I don't have an example, sorry.
	Scheduler::GetInstance()->Run();
}

void Robot::TeleopInit(){
	//Cancel your auto command at the start of Teleop
	//For example:
	autocommand->Cancel();
}

void Robot::TeleopPeriodic(){
	//Put things to run here throughout Teleop
	//Once again, no example.
	//But do not delete the scheduler thing
	Scheduler::GetInstance()->Run();
}

void Robot::TestPeriodic(){
	//Add things to run during Test
	//Still no example
	//Do not delete the line below
	lw->Run();
}
//Start your robot class below
START_ROBOT_CLASS(Robot);
