#include "SecondToteArrival.h"
#include "SecondToteCommands/SecondToteArrival/SecondToteLowerCan.h"
#include "SecondToteCommands/SecondToteArrival/SecondToteLowerTote.h"

SecondToteArrival::SecondToteArrival(){
	AddParallel(new SecondToteLowerCan());
	AddParallel(new SecondToteLowerTote());
}
