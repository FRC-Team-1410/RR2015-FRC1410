#include "ThirdToteArrival.h"
#include "ThirdToteCommands/ThirdToteArrival/ThirdToteLowerTote.h"
ThirdToteArrival::ThirdToteArrival(){
	AddSequential(new ThirdToteLowerTote());
}
