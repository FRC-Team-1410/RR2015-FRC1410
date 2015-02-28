#ifndef ToteLifter_H
#define ToteLifter_H

#include "WPILib.h"

class ToteLifter: public Subsystem{
private:
	CANTalon * elev_motor; //Elevator motor
public:
	ToteLifter();
	void InitDefaultCommand();
	void MoveElevator(float speed); //Method to move the elevator up and down
	bool ReturnUpperLimit(); //Returns whether the upper limit is pressed
	bool ReturnLowerLimit(); //Returns whether the lower limit is pressed
};

#endif
