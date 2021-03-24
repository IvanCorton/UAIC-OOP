#ifndef MERCEDES_H
#define MERCEDES_H

#include "Car.h"

class Mercedes:public Car{

	public:
		Mercedes();
		Mercedes(const Mercedes & myDac);
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
