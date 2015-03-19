#include "DropTotesComplete.h"
#include "DropTotesCommands/DropTotesLowerTote.h"

DropTotesComplete::DropTotesComplete(){
	AddSequential(new DropTotesLowerTote());
}
