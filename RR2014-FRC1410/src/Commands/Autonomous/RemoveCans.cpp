#include <Commands/Autonomous/RemoveCans.h>
#include "../../Robot.h"

RemoveCans::RemoveCans(){
	Requires(Robot::intakearms);
}

void RemoveCans::Initialize(){

}

void RemoveCans::Execute(){
	Robot::intakearms->AutoRemoveCans();
}

bool RemoveCans::IsFinished(){
	return false;
}

void RemoveCans::End(){

}

void RemoveCans::Interrupted(){
	End();
}
