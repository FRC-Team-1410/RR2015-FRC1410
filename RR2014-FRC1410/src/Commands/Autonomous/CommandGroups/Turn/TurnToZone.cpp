#include "TurnToZone.h"
#include "TurnCommands/TurnDriveTurn.h"

TurnToZone::TurnToZone(){
	AddSequential(new TurnDriveTurn());
}
