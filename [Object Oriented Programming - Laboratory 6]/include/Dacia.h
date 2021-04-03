#ifndef DACIA_H
#define DACIA_H

#include "Car.h"

class Dacia:public Car{

	public:
		Dacia();
		Dacia(const Dacia & myDac);	//Only needed when we have pointers
		double getTimeToFinishTrack();
		double getSpeed();	//Implemented on car.h
		double getTime();
		double getCap();
		double getCons();
		
		void setSpeed(double sp);
		void setTime(double tim);
		void setCap(double cap);
		void setCons(double cons);
};

#endif
