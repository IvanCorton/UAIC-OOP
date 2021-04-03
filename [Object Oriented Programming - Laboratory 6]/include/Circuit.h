#ifndef CIRCUIT_H
#define CIRCUIT_H

#include "Car.h"
#include "Weather.h"

class Circuit{

	private: 
		int length;
		Weather actual;
		Car ** players;
		int num_players;
		int centinel;
	
	public:
		Circuit();
		~Circuit();
		
		int getLength();
		void SetLength(int num);
		
		Weather getWeather();		
		void SetWeather(Weather setting);
		
		void AddCar(Car *myCar);
		Car ** getParticipants();
		
		void Race();
		void ShowFinalRanks();
		void ShowWhoDidNotFinis();

};



#endif
