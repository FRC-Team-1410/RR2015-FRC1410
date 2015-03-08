#ifndef SimultaneousManipulatorOp_H
#define SimultaneousManipulatorOp_H

#include "Commands/CommandGroup.h"
#include "WPILib.h"

class SimultaneousManipulatorOp: public CommandGroup{
public:
	SimultaneousManipulatorOp(float speed);
};

#endif
