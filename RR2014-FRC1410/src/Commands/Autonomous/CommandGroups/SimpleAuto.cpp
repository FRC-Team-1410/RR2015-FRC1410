#include "SimpleAuto.h"
#include "SimpleAuto/SimplePickUp.h"
#include "SimpleAuto/SimpleTurn.h"
#include "SimpleAuto/SimpleDrive.h"

SimpleAuto::SimpleAuto(){
	AddSequential(new SimplePickUp());
	AddSequential(new SimpleTurn());
	AddSequential(new SimpleDrive());
}
