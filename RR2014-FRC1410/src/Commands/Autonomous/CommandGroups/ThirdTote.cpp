#include "ThirdTote.h"
#include "ThirdTote/ThirdToteArrival.h"

ThirdTote::ThirdTote(){
	AddSequential(new ThirdToteArrival());
}
