#include "SimultaneousManipulatorOp.h"
#include "MoveCanLifter.h"
#include "SimulMoveUpperArms.h"

//this command group is so we can move arms and elevator at the same time
SimultaneousManipulatorOp::SimultaneousManipulatorOp(float speed){
	AddParallel(new MoveCanLifter(speed)); //runs the command with the speed
	AddParallel(new SimulMoveUpperArms()); //moves arms
}
