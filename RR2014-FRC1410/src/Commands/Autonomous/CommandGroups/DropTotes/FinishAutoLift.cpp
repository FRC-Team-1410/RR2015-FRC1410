#include "FinishAutoLift.h"
#include "DropTotesCommands/FinishAutoLift/FinishAutoLiftCan.h"

FinishAutoLift::FinishAutoLift(){
	AddSequential(new FinishAutoLiftCan());
}
