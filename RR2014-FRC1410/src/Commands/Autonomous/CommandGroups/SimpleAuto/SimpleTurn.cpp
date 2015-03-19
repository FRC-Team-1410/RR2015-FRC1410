#include "SimpleTurn.h"
#include "../SingleCommands/Drive/AutoDriveTurn.h"

SimpleTurn::SimpleTurn(){
	AddSequential(new AutoDriveTurn());
}
