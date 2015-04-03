#include "SecondToteInBetween.h"
#include "SecondToteCommands/SecondToteInBetween/SecondToteLiftCan.h"

SecondToteInBetween::SecondToteInBetween(){
	AddParallel(new SecondToteLiftCan());
}
