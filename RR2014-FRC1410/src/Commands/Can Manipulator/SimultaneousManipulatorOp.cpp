#include "SimultaneousManipulatorOp.h"
#include "MoveCanLifter.h"
#include "SimulMoveUpperArms.h"

SimultaneousManipulatorOp::SimultaneousManipulatorOp(){
	AddParallel(new MoveCanLifter());
	AddParallel(new SimulMoveUpperArms());
}
