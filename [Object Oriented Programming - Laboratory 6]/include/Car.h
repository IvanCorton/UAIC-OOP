#ifndef CAR_H
#define CAR_H

// en .cpp #include "Weather"

class Car{

	protected:
		double fuel_cap;
		double fuel_cons;
		double time;
		double speed;
	public:	
		virtual double getTimeToFinishTrack() = 0; //Should be implemented
		virtual double getTime(){ return time; }
		virtual double getCap(){ return fuel_cap; }
		virtual double getCons(){ return fuel_cons; }
		virtual double getSpeed(){ return speed; }
		//Car(const Car& myCar);

};

#endif
