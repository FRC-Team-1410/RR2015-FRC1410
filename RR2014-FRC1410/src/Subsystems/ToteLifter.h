#ifndef ToteLifter_H
#define ToteLifter_H

#include "WPILib.h"

class ToteLifter: public Subsystem{
private:
	CANTalon * elev_motor; //elevator motor
public:
	ToteLifter();
	void InitDefaultCommand();
	void MoveElevator(float speed); //moves elevator
	bool ReturnUpperLimit(); //returns upper state
	bool ReturnLowerLimit(); //returns lower state
};

#endif
