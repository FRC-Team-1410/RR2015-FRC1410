#include <Commands/Autonomous/CommandGroups/FirstTote/FirstToteCommands/FirstTotePickUp/FirstToteLiftCan.h>
#include "Robot.h"

FirstToteLiftCan::FirstToteLiftCan(){
	Requires(Robot::canmanipulator);
	end = false;
}

void FirstToteLiftCan::Initialize(){
	end = false;
}

void FirstToteLiftCan::Execute(){
	Robot::canmanipulator->MoveElevator(1);
	Wait(1);
	end = true;
}

bool FirstToteLiftCan::IsFinished(){
	return end;
}

void FirstToteLiftCan::End(){
	Robot::canmanipulator->MoveElevator(0);
}

void FirstToteLiftCan::Interrupted(){
	End();
}
