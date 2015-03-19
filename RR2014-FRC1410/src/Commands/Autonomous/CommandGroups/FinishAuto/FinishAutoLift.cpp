#include "FinishAutoLift.h"
#include "FinishAutoCommands/FinishAutoLift/FinishAutoLiftCan.h"

FinishAutoLift::FinishAutoLift(){
	AddSequential(new FinishAutoLiftCan());
}
