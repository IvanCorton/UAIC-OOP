#ifndef FORD_H
#define FORD_H

#include "Car.h"

class Ford:public Car{

	public:
		Ford();
		Ford(const Ford & myDac);
		double getTimeToFinishTrack();
		double getSpeed();
		double getTime();
		double getCap();
		double getCons();
		
		void setSpeed(double sp);
		void setTime(double tim);
		void setCap(double cap);
		void setCons(double cons);
};

#endif
