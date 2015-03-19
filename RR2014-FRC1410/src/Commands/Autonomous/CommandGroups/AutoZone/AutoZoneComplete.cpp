#include "AutoZoneComplete.h"
#include "AutoZoneCommands/AutoZoneDriveToZone.h"
#include "AutoZoneCommands/AutoZoneLiftCan.h"

AutoZoneComplete::AutoZoneComplete(){
	AddParallel(new AutoZoneDriveToZone());
	AddParallel(new AutoZoneLiftCan());
}
