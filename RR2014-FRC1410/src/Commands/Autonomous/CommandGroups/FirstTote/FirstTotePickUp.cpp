#include <Commands/Autonomous/CommandGroups/FirstTote/FirstToteCommands/FirstTotePickUp/FirstToteLiftCan.h>
#include <Commands/Autonomous/CommandGroups/FirstTote/FirstToteCommands/FirstTotePickUp/FirstToteLiftTote.h>
#include "FirstTotePickUp.h"

FirstTotePickUp::FirstTotePickUp(){
	AddParallel(new FirstToteLiftTote());
	AddParallel(new FirstToteLiftCan());
}
