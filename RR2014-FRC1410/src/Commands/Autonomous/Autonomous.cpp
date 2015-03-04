#include <Commands/Autonomous/AutoDriveStraight.h>
#include "Autonomous.h"
#include "LiftTote.h"
#include "LowerTote.h"
#include "AutoDriveTurn.h"

Autonomous::Autonomous(){
	AddSequential(new LowerTote());
	AddSequential(new LiftTote());
	AddSequential(new AutoDriveStraight(5900));
	AddSequential(new LowerTote());
	AddSequential(new LiftTote());
	AddSequential(new AutoDriveStraight(5900));
	AddSequential(new LowerTote());
	AddSequential(new LiftTote());
	AddSequential(new AutoDriveTurn());
	AddSequential(new AutoDriveStraight(12000));
}