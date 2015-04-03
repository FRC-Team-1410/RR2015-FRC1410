#include "ThirdTotePickUp.h"
#include "TurnCommands/ThirdTotePickUp/ThirdToteLiftTote.h"

ThirdTotePickUp::ThirdTotePickUp(){
	AddSequential(new ThirdToteLiftTote());
}
