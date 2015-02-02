#include "WPILib.h"
#include "Robot.h"

#include "Commands/Drive/TeleOpTankDrive.h"
#include "Commands/Intake Arms/ToggleIntakeWheels.h"
#include "Commands/Intake Arms/MoveElbowPosition.h"
#include "Commands/Tote Lifter/MoveToteLifter.h"
#include "Commands/Can Manipulator/MoveCanLifter.h"
#include "Commands/Can Manipulator/ArticulateCanManipulator.h"
#include "Commands/Autonomous/RaiseToteLifter.h"
#include "Commands/Autonomous/LowerToteLifter.h"
#include "Commands/Autonomous/DriveStraight.h"
#include "Commands/Autonomous/RaiseCanLifter.h"
#include "Commands/Autonomous/LowerCanLifter.h"
#include "Commands/Autonomous/DriveTurn.h"
#include "Commands/Autonomous/GrabCan.h"
#include "Commands/Autonomous/RemoveCans.h"
#include "Commands/Autonomous/Autonomous.h"

DriveBase * Robot::drivebase = NULL;
IntakeArms * Robot::intakearms = NULL;
ToteLifter * Robot::totelifter = NULL;
CanManipulator * Robot::canmanipulator = NULL;
OI * Robot::oi = NULL;

void Robot::RobotInit(){
	drivebase = new DriveBase();
	intakearms = new IntakeArms();
	totelifter = new ToteLifter();
	canmanipulator = new CanManipulator();
	oi = new OI();
	
	lw = LiveWindow::GetInstance();
	autonomouscommand = new Autonomous();
}

void Robot::AutonomousInit(){
	autonomouscommand->Start();
}

void Robot::AutonomousPeriodic(){

}

void Robot::TeleopInit(){
	autonomouscommand->Cancel();
}

void Robot::TeleopPeriodic(){
	Scheduler::GetInstance()->Run();
}

void Robot::TestPeriodic(){
	lw->Run();
}

START_ROBOT_CLASS(Robot);
