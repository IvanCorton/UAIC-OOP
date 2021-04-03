#ifndef TOYOTA_H
#define TOYOTA_H

#include "Car.h"

class Toyota:public Car{

	public:
		Toyota();
		Toyota(const Toyota & myDac);
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
