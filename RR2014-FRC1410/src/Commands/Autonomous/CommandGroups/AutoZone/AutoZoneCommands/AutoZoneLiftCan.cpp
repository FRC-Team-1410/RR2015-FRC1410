#include "AutoZoneLiftCan.h"
#include "Robot.h"

AutoZoneLiftCan::AutoZoneLiftCan(){
	Requires(Robot::canmanipulator);
	end = false;
}

void AutoZoneLiftCan::Initialize(){
	end = false;
}

void AutoZoneLiftCan::Execute(){
	Robot::canmanipulator->MoveElevator(1);
	Wait(1);
	end = true;
}

bool AutoZoneLiftCan::IsFinished(){
	return end;
}

void AutoZoneLiftCan::End(){
	Robot::canmanipulator->MoveElevator(0);
}

void AutoZoneLiftCan::Interrupted(){
	End();
}
