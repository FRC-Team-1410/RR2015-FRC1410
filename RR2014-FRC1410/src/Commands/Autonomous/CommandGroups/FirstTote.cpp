#include "FirstTote.h"
#include "FirstTote/FirstTotePickUp.h"
#include "FirstTote/FirstToteDrive.h"

FirstTote::FirstTote(){
	AddSequential(new FirstTotePickUp());
	AddSequential(new FirstToteDrive());
}

