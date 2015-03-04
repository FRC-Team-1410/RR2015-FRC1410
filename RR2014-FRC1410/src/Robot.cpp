#include "WPILib.h"
#include "Robot.h"

#include "Commands/Autonomous/Autonomous.h"

OI * Robot::oi = NULL;
DriveBase * Robot::drivebase = NULL;
IntakeArms * Robot::intakearms = NULL;
ToteLifter * Robot::totelifter = NULL;
CanManipulator * Robot::canmanipulator = NULL;

void Robot::RobotInit(){
	oi = new OI();
	drivebase = new DriveBase();
	intakearms = new IntakeArms();
	totelifter = new ToteLifter();
	canmanipulator = new CanManipulator();
	
	lw = LiveWindow::GetInstance();
	autocommand = new Autonomous();
}

void Robot::AutonomousInit(){
	autocommand->Start();
}

void Robot::AutonomousPeriodic(){
	Scheduler::GetInstance()->Run();
}

void Robot::TeleopInit(){
	autocommand->Cancel();
}

void Robot::TeleopPeriodic(){
	Scheduler::GetInstance()->Run();
}

void Robot::TestPeriodic(){
	lw->Run();
}
START_ROBOT_CLASS(Robot);
