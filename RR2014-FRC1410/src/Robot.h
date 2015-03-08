#ifndef MY_ROBOT_H_
#define MY_ROBOT_H_

#include "WPILib.h"

#include "OI.h"
#include "Subsystems/DriveBase.h"
#include "Subsystems/IntakeArms.h"
#include "Subsystems/ToteLifter.h"
#include "Subsystems/CanManipulator.h"

class Robot: public IterativeRobot {
public:
	//create static objects of the subsystems
	static OI * oi;
	static DriveBase * drivebase;
	static IntakeArms * intakearms;
	static ToteLifter * totelifter;
	static CanManipulator * canmanipulator;

private:
	//see above, but for commands
	LiveWindow * lw;
	Command * autocommand;
	void RobotInit();
	void AutonomousInit();
	void AutonomousPeriodic();
	void TeleopInit();
	void TeleopPeriodic();
	void TestPeriodic();
};

#endif
