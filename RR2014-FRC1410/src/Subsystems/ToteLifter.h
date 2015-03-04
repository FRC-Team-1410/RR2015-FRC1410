#ifndef ToteLifter_H
#define ToteLifter_H

#include "WPILib.h"

class ToteLifter: public Subsystem{
private:
	CANTalon * elev_motor;
public:
	ToteLifter();
	void InitDefaultCommand();
	void MoveElevator(float speed);
	bool ReturnUpperLimit();
	bool ReturnLowerLimit();
};

#endif
