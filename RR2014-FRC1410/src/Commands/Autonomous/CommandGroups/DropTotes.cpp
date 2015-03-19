#include "DropTotes.h"
#include "DropTotes/DropTotesComplete.h"

DropTotes::DropTotes(){
	AddSequential(new DropTotesComplete());
}
