#include "Autonomous.h"
#include "Commands/Autonomous/RaiseToteLifter.h"
#include "Commands/Autonomous/LowerToteLifter.h"
#include "Commands/Autonomous/DriveStraight.h"
#include "Commands/Autonomous/RaiseCanLifter.h"
#include "Commands/Autonomous/LowerCanLifter.h"
#include "Commands/Autonomous/DriveTurn.h"
#include "Commands/Autonomous/GrabCan.h"
#include <iostream>

Autonomous::Autonomous() : CommandGroup("Autonomous"){
	AddSequential(new RaiseToteLifter());
	AddParallel(new GrabCan());
	AddSequential(new RaiseCanLifter());
	AddSequential(new DriveStraight());
	AddSequential(new LowerToteLifter());
	AddSequential(new RaiseToteLifter());
	AddSequential(new DriveStraight());
	AddSequential(new LowerToteLifter());
	AddSequential(new RaiseToteLifter());
	AddSequential(new DriveTurn());
	AddSequential(new DriveStraight());
}
