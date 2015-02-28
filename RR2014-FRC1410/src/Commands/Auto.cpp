/*
 * Template for C++ Command Based Robot
 * I created this because the template is wrong
 * By: Lord Supreme Programmer of Team 1410 Isaac
 * Please contact me on ChiefDelphi if youfind errors
 * Username is King Nerd III
 */
#include "Auto.h"
#include "../Robot.h"
#include <iostream>
using namespace std;
Auto::Auto(){
	//Require a subsystem here
	//Format should be:
	Requires(Robot::drivebase);
}

void Auto::Initialize(){

}

void Auto::Execute(){
	//Call methods from subsystem required above here	
	//Format should be: 
	//Robot::examplesubsystem->ExampleVoidMethod(parameter);
	Robot::drivebase->DriveTank(-0.3, 0.3);
	std::cout << Robot::drivebase->ReturnEncoderDistance(0,0,0);
}

bool Auto::IsFinished(){
	//By default returns false. Have it return true when you 	want it to finish.
	//For example:
	//if(Robot::examplesubsystem->ExampleBoolMethod() == true){
	//	return true
	//}
	if(Robot::drivebase->ReturnEncoderDistance(0, 0, 0) >= 1){
		return true;
	}
	else{
		return false;
	}
}

void Auto::End(){
	//Put methods you want to run when the command finishes 	here.
	//For example:
	//Robot::examplesubsystem->ExampleVoidMethod->(0);
	Robot::drivebase->DriveTank(0,0);
}

void Auto::Interrupted(){
	//This will run when a command that requires the same 	subsystem runs
	//For example:	
	//End();
	End();
}
