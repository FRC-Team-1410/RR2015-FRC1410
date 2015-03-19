#include "DropTotesLowerTote.h"
#include "Robot.h"

DropTotesLowerTote::DropTotesLowerTote(){
	Requires(Robot::totelifter);
}

void DropTotesLowerTote::Initialize(){

}

void DropTotesLowerTote::Execute(){
	Robot::totelifter->MoveElevator(-1);
}

bool DropTotesLowerTote::IsFinished(){
	return (Robot::totelifter->ReturnLowerLimit());
}

void DropTotesLowerTote::End(){
	Robot::totelifter->MoveElevator(0);
}

void DropTotesLowerTote::Interrupted(){
	End();
}
