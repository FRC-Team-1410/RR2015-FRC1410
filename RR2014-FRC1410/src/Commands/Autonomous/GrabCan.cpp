#include <Commands/Autonomous/GrabCan.h>
#include "../../Robot.h"

GrabCan::GrabCan(){
	Requires(Robot::canmanipulator);
}

void GrabCan::Initialize(){

}

void GrabCan::Execute(){
	Robot::canmanipulator->AutoGrabCan(1);
}

bool GrabCan::IsFinished(){
	return false;
}

void GrabCan::End(){
	Robot::canmanipulator->AutoGrabCan(0);
}

void GrabCan::Interrupted(){
	End();
}
