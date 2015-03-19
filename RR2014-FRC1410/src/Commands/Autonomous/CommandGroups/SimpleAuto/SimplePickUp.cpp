#include "SimplePickUp.h"
#include "../SingleCommands/Elevators/AutoLiftTote.h"
#include "../SingleCommands/Elevators/AutoLiftCan.h"

SimplePickUp::SimplePickUp(){
	AddParallel(new AutoLiftTote());
	AddParallel(new AutoLiftCan());
}
