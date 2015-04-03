#include "FirstToteCommands/FirstToteDrive/FirstToteDriveToTote.h"
#include "FirstToteCommands/FirstToteDrive/FirstToteMoveLeftOut.h"
#include "FirstToteCommands/FirstTotePickUp/FirstToteLiftCan.h"
#include "FirstToteDrive.h"

FirstToteDrive::FirstToteDrive(){
	//AddParallel(new FirstToteMoveLeftOut());
	AddParallel(new FirstToteLiftCan());
	AddParallel(new FirstToteDriveToTote());
}
