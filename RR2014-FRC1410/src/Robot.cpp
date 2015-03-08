#include "WPILib.h"
#include "Robot.h"

#include "Commands/Autonomous/Autonomous.h"

//Following lines set all the subsystems to NULL
OI * Robot::oi = NULL;
DriveBase * Robot::drivebase = NULL;
IntakeArms * Robot::intakearms = NULL;
ToteLifter * Robot::totelifter = NULL;
CanManipulator * Robot::canmanipulator = NULL;

void Robot::RobotInit(){
	//Creates new objects of subsystems
	oi = new OI();
	drivebase = new DriveBase();
	intakearms = new IntakeArms();
	totelifter = new ToteLifter();
	canmanipulator = new CanManipulator();
	
	//Other stuff
	lw = LiveWindow::GetInstance();
	autocommand = new Autonomous();
}

void Robot::AutonomousInit(){
	autocommand->Start(); //starts the auto command
}

void Robot::AutonomousPeriodic(){
	Scheduler::GetInstance()->Run(); //continually runs the scheduler during auto
}

void Robot::TeleopInit(){
	autocommand->Cancel(); //cancels the auto command
}

void Robot::TeleopPeriodic(){
	Scheduler::GetInstance()->Run(); //continually runs the scheduler during teleop
}

void Robot::TestPeriodic(){
	lw->Run(); //runs the livewindow during test
}
START_ROBOT_CLASS(Robot);
