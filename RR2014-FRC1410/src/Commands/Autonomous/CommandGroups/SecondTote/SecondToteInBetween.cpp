#include "SecondToteInBetween.h"
#include "SecondToteCommands/SecondToteInBetween/SecondToteLiftCan.h"

SecondToteInBetween::SecondToteInBetween(){
	AddSequential(new SecondToteLiftCan());
}
