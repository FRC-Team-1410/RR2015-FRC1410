#include "AutoLowerCan.h"
#include "Robot.h"

AutoLowerCan::AutoLowerCan(){
	Requires(Robot::canmanipulator);
}

void AutoLowerCan::Initialize(){

}

void AutoLowerCan::Execute(){
	Robot::canmanipulator->MoveElevator(-1);
}

bool AutoLowerCan::IsFinished(){
	return (Robot::canmanipulator->ReturnLowerLimit());
}

void AutoLowerCan::End(){
	Robot::canmanipulator->MoveElevator(0);
}

void AutoLowerCan::Interrupted(){
	End();
}
