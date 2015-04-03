#include "SecondToteStopLift.h"
#include "Robot.h"

SecondToteStopLift::SecondToteStopLift(){
	Requires(Robot::canmanipulator);
	end = false;
}

void SecondToteStopLift::Initialize(){
	end = false;
}

void SecondToteStopLift::Execute(){
	Robot::canmanipulator->MoveElevator(1);
	Wait(1);
	end = true;
}

bool SecondToteStopLift::IsFinished(){
	return end;
}

void SecondToteStopLift::End(){
	Robot::canmanipulator->MoveElevator(0);
}

void SecondToteStopLift::Interrupted(){
	End();
}
