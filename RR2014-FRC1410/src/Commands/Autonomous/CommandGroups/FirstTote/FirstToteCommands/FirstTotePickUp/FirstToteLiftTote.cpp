#include <Commands/Autonomous/CommandGroups/FirstTote/FirstToteCommands/FirstTotePickUp/FirstToteLiftTote.h>
#include "Robot.h"

FirstToteLiftTote::FirstToteLiftTote(){
	Requires(Robot::totelifter);
}

void FirstToteLiftTote::Initialize(){

}

void FirstToteLiftTote::Execute(){
	Robot::totelifter->MoveElevator(1);
}

bool FirstToteLiftTote::IsFinished(){
	return (Robot::totelifter->ReturnUpperLimit());
}

void FirstToteLiftTote::End(){
	Robot::totelifter->MoveElevator(0);
}

void FirstToteLiftTote::Interrupted(){
	End();
}
