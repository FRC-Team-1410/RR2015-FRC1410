#include "FinishAuto.h"
#include "FinishAuto/FinishAutoBackwards.h"

FinishAuto::FinishAuto(){
	AddSequential(new FinishAutoBackwards());
}
