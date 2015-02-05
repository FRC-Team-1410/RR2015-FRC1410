#ifndef ToteLifter_H
#define ToteLifter_H

#include "WPILib.h"

class ToteLifter: public Subsystem{
private:
	CANSpeedController * elev_motor;
public:
	ToteLifter();
	void InitDefaultCommand();
	bool UpperLimit();
	bool LowerLimit();
	void MoveElevator(float speed);
	void RaiseElevator(float speed);
	void LowerElevator(float speed);
};

#endif
