#include "SecondToteDrive.h"
#include "SecondToteCommands/SecondToteDrive/SecondToteDriveToTote.h"
#include "SecondToteCommands/SecondToteDrive/SecondToteMoveRightOut.h"

SecondToteDrive::SecondToteDrive(){
	AddParallel(new SecondToteDriveToTote());
	AddParallel(new SecondToteMoveRightOut());
}
