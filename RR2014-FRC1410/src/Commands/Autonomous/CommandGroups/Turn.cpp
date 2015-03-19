#include "Turn.h"
#include "Turn/TurnToZone.h"

Turn::Turn(){
	AddSequential(new TurnToZone());
}
