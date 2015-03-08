#include <Commands/Intake Arms/SimulMoveLowerArms.h>
#include <Commands/Intake Arms/SimultaneousIntakeOp.h>
#include "ToggleWheels.h"

//this command is so that we can drive both the arms and wheels at the same time, but still toggle the wheels
SimultaneousIntakeOp::SimultaneousIntakeOp(){
	AddParallel(new ToggleWheels()); //calls command to toggle wheels
	AddParallel(new SimulMoveLowerArms()); //calls command to move arms
}
