#ifndef MAZDA_H
#define MAZDA_H

#include "Car.h"

class Mazda:public Car{

	public:
		Mazda();
		Mazda(const Mazda & myDac);
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
