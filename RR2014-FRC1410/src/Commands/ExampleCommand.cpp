/*
 * Template for C++ Command Based Robot
 * I created this because the template is wrong
 * By: Lord Supreme Programmer of Team 1410 Isaac
 * Please contact me on ChiefDelphi if youfind errors
 * Username is King Nerd III
 */
#include "ExampleCommand.h"
#include "Robot.h"

ExampleCommand::ExampleCommand(){
	//Require a subsystem here
	//Format should be:
	//Requires(Robot::examplesubsystem);
}

void ExampleCommand::Initialize(){

}

void ExampleCommand::Execute(){
	//Call methods from subsystem required above here	
	//Format should be: 
	//Robot::examplesubsystem->ExampleVoidMethod(parameter);
}

bool ExampleCommand::IsFinished(){
	//By default returns false. Have it return true when you 	want it to finish.
	//For example:
	//if(Robot::examplesubsystem->ExampleBoolMethod() == true){
	//	return true
	//}
	return false;
}

void ExampleCommand::End(){
	//Put methods you want to run when the command finishes 	here.
	//For example:
	//Robot::examplesubsystem->ExampleVoidMethod->(0);
}

void ExampleCommand::Interrupted(){
	//This will run when a command that requires the same 	subsystem runs
	//For example:	
	//End();
}
