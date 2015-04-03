#include "DropTotes.h"
#include "DropTotes/FinishAutoLift.h"
#include "DropTotes/DropTotesComplete.h"

DropTotes::DropTotes(){
	AddSequential(new FinishAutoLift());

	//AddSequential(new DropTotesComplete());
}
