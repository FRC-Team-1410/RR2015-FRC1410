#include "SecondTotePause.h"
#include "SecondToteCommands/SecondTotePause/SecondToteStopLift.h"

SecondTotePause::SecondTotePause(){
	AddSequential(new SecondToteStopLift());
}
