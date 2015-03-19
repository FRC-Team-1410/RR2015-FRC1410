#include "FinishAutoBackwards.h"
#include "FinishAutoCommands/FinishAutoBackwards/FinishAutoDriveBackwards.h"

FinishAutoBackwards::FinishAutoBackwards(){
	AddSequential(new FinishAutoDriveBackwards());
}
