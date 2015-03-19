#include "AutoZone.h"
#include "AutoZone/AutoZoneComplete.h"

AutoZone::AutoZone(){
	AddSequential(new AutoZoneComplete());
}
