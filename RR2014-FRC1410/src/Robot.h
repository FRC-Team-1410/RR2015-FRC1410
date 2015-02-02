#ifndef MY_ROBOT_H_
#define MY_ROBOT_H_

#include "WPILib.h"

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

#include "Subsystems/DriveBase.h"
#include "Subsystems/IntakeArms.h"
#include "Subsystems/ToteLifter.h"
#include "Subsystems/CanManipulator.h"
#include "OI.h"

class Robot: public IterativeRobot {
public:
	static DriveBase * drivebase;
	static IntakeArms * intakearms;
	static ToteLifter * totelifter;
	static CanManipulator * canmanipulator;
	static OI * oi;

private:
	LiveWindow * lw;
	Command * autonomouscommand;

	void RobotInit();
	void AutonomousInit();
	void AutonomousPeriodic();
	void TeleopInit();
	void TeleopPeriodic();
	void TestPeriodic();
};

#endif
