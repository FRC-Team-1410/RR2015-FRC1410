#include "ThirdTotePickUp.h"
#include "ThirdToteCommands/ThirdTotePickUp/ThirdToteLiftTote.h"

ThirdTotePickUp::ThirdTotePickUp(){
	AddSequential(new ThirdToteLiftTote());
}
