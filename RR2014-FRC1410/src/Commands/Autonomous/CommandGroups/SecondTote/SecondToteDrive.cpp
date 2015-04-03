#include "SecondToteDrive.h"
#include "SecondToteCommands/SecondToteDrive/SecondToteDriveToTote.h"
#include "SecondToteCommands/SecondToteDrive/SecondToteLiftTote.h"
#include "SecondToteCommands/SecondToteDrive/SecondToteMoveRightOut.h"

SecondToteDrive::SecondToteDrive(){
	AddParallel(new SecondToteDriveToTote());
	AddParallel(new SecondToteLiftTote());
	//AddParallel(new SecondToteMoveRightOut());
}
