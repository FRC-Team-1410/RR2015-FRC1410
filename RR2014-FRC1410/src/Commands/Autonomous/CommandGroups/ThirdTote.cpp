#include "ThirdTote.h"
#include "ThirdTote/ThirdToteArrival.h"
#include "ThirdTote/ThirdTotePickUp.h"

ThirdTote::ThirdTote(){
	AddSequential(new ThirdToteArrival());
	AddSequential(new ThirdTotePickUp());
}
