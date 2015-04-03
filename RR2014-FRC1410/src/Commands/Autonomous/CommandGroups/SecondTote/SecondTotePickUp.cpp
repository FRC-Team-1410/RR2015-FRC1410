#include "SecondTotePickUp.h"
#include "SecondToteCommands/SecondToteDrive/SecondToteLiftTote.h"
#include "SecondToteCommands/SecondTotePickUp/SecondToteMoveRightIn.h"

SecondTotePickUp::SecondTotePickUp(){
	AddParallel(new SecondToteLiftTote());
	//AddParallel(new SecondToteMoveRightIn());
}
