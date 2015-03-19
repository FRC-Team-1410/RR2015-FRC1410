#include "FirstToteCommands/FirstToteDrive/FirstToteDriveToTote.h"
#include "FirstToteCommands/FirstToteDrive/FirstToteMoveLeftOut.h"
#include "FirstToteDrive.h"

FirstToteDrive::FirstToteDrive(){
	AddParallel(new FirstToteMoveLeftOut());
	AddParallel(new FirstToteDriveToTote());
}
