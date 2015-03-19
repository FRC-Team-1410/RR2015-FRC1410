#include "FinishAuto.h"
#include "FinishAuto/FinishAutoLift.h"
#include "FinishAuto/FinishAutoBackwards.h"

FinishAuto::FinishAuto(){
	AddSequential(new FinishAutoLift());
	AddSequential(new FinishAutoBackwards());
}
