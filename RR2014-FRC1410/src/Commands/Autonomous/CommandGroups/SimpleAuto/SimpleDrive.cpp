#include "SimpleDrive.h"
#include "../SingleCommands/Drive/AutoDriveToZone.h"

SimpleDrive::SimpleDrive(){
	AddSequential(new AutoDriveToZone());
}
