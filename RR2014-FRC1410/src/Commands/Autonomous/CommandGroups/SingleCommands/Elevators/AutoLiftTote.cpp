#include "AutoLiftTote.h"
#include "Robot.h"

AutoLiftTote::AutoLiftTote(){
	Requires(Robot::totelifter);

}

void AutoLiftTote::Initialize(){

}

void AutoLiftTote::Execute(){
	Robot::totelifter->MoveElevator(1);
}

bool AutoLiftTote::IsFinished(){
	return (Robot::totelifter->ReturnUpperLimit());
}

void AutoLiftTote::End(){
	Robot::totelifter->MoveElevator(0);
}

void AutoLiftTote::Interrupted(){
	End();
}
