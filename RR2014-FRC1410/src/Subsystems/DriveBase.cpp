#include "DriveBase.h"
#include "../RobotMap.h"

DriveBase::DriveBase() :
		Subsystem("ExampleSubsystem")
{
	fl_motor = new CANTalon(1);
	fr_motor = new CANTalon(2);
	bl_motor = new CANTalon(3);
	br_motor = new CANTalon(4);
}

void DriveBase::InitDefaultCommand()
{
	// Set the default command for a subsystem here.
	//SetDefaultCommand(new MySpecialCommand());
}

// Put methods for controlling this subsystem
// here. Call these from Commands.
void DriveBase::DriveTank(float speed1, float speed2)
{
	fl_motor->Set(speed1);
	fr_motor->Set(speed2);
	bl_motor->Set(speed1);
	br_motor->Set(speed2);
}
