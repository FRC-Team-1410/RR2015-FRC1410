#include <Commands/Intake Arms/SimulMoveLowerArms.h>
#include <Commands/Intake Arms/SimultaneousIntakeOp.h>
#include "ToggleWheels.h"

SimultaneousIntakeOp::SimultaneousIntakeOp(){
	AddParallel(new ToggleWheels());
	AddParallel(new SimulMoveLowerArms());
}
