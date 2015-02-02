#include "MoveElbowPosition.h"
#include "../../Robot.h"

MoveElbowPosition::MoveElbowPosition(float speed){
	Requires(Robot::intakearms);
	elbowSpeed = speed;
}

// Called just before this Command runs the first time
void MoveElbowPosition::Initialize(){

}

// Called repeatedly when this Command is scheduled to run
void MoveElbowPosition::Execute(){
	Robot::intakearms->MoveElbows(elbowSpeed);
}

// Make this return true when this Command no longer needs to run execute()
bool MoveElbowPosition::IsFinished(){
	return false;
}

// Called once after isFinished returns true
void MoveElbowPosition::End(){
	Robot::intakearms->MoveElbows(0);
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void MoveElbowPosition::Interrupted(){
	End();
}
