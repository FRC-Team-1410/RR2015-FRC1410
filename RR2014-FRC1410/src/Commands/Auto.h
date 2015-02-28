/*
 * Template for C++ Command Based Robot
 * I created this because the template is wrong
 * By: Lord Supreme Programmer of Team 1410 Isaac
 * Please contact me on ChiefDelphi if youfind errors
 * Username is King Nerd III
 */
#ifndef Auto_H
#define Auto_H

#include "Commands/Command.h"
#include "WPILib.h"

class Auto: public Command {
public:
	Auto();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
