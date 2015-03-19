#include "SecondTote.h"
#include "SecondTote/SecondToteArrival.h"
#include "SecondTote/SecondTotePickUp.h"
#include "SecondTote/SecondToteInBetween.h"
#include "SecondTote/SecondToteDrive.h"

SecondTote::SecondTote(){
	AddSequential(new SecondToteArrival());
	AddSequential(new SecondTotePickUp());
	AddSequential(new SecondToteInBetween());
	AddSequential(new SecondToteDrive());
}
