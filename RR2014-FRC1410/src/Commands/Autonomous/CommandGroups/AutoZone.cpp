#include "AutoZone.h"
#include "AutoZone/AutoZoneComplete.h"
#include "Turn/ThirdTotePickUp.h"


AutoZone::AutoZone(){
	AddSequential(new AutoZoneComplete());
	//AddSequential(new ThirdTotePickUp());

}
