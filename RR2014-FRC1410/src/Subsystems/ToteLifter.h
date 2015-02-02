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
	void RaiseElevator(float speed);
	void LowerElevator(float speed);
};

#endif
