#include "Autonomous.h"
#include "CommandGroups/FirstTote.h"
#include "CommandGroups/SecondTote.h"
#include "CommandGroups/ThirdTote.h"
#include "CommandGroups/Turn.h"
#include "CommandGroups/AutoZone.h"
#include "CommandGroups/DropTotes.h"
#include "CommandGroups/FinishAuto.h"
#include "CommandGroups/SimpleAuto.h"
#include "CommandGroups/SingleCommands/Drive/AutoDriveToTote.h"
#include "CommandGroups/SecondTote/SecondTotePickup.h"

Autonomous::Autonomous(){
	AddSequential(new FirstTote());
	AddSequential(new SecondTote());
	AddSequential(new ThirdTote());
	AddSequential(new Turn());
	AddSequential(new AutoZone());
	AddSequential(new DropTotes());
	AddSequential(new FinishAuto());
	//AddSequential(new SecondTotePickUp());

	//AddSequential(new SimpleAuto());

	//AddSequential(new AutoDriveToTote());
}
