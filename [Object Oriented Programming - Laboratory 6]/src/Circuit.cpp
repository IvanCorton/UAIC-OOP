#include <iostream>
#include "Circuit.h"

using namespace std;

Circuit::Circuit(){
	this->length = 0;
	this->actual = Weather::Sun;
	this->centinel = 0;
	this->players = new Car*[this->num_players];
}


Circuit::~Circuit(){
	for(auto i=0; i<this->centinel; i++){
		delete this->players[i];
	}
	delete []this->players;
	this->players=0;
}


int Circuit::getLength(){
	return this->length;
}

void Circuit::SetLength(int num){
	this->length = num;
}
		
		
Weather Circuit::getWeather(){
	return this->actual;
}		
		
void Circuit::SetWeather(Weather setting){
	this->actual = setting;
}
		
void Circuit::AddCar(Car *myCar){

	//if no enough memory, reallocate memory.

	players[centinel] = myCar;
	centinel++;
}
		
Car ** Circuit::getParticipants(){
	return this->players;
}
		
void Circuit::Race(){

	// Iterar por los coches para getTimeToFinishTrack, al comienzo tenemos longitud.

	for(auto i=0; i<num_players; i++){
		
	}

}
		
// Should be replace for operator <<.		
void Circuit::ShowFinalRanks(){

	for(auto i=0; i<this->num_players; i++){
		cout<<this->players[i]->getCap()<<" "<<this->players[i]->getCons()<<" "<<this->players[i]->getTime()<<" "<<this->players[i]->getSpeed()<<endl;

	}
}

void Circuit::ShowWhoDidNotFinis(){

	bool noF[this->num_players];

	for(auto i=0; i<num_players; i++){
		if(this->players[i]->getCap() == 0){
			noF[i]=true;
		}else{
			noF[i]=false;
		}
	}
	
	for(auto i=0; i<num_players; i++){
		if(noF[i] == true){
			cout<<"Car number "<<i<<" has no finished the race..."<<endl;
		}else{
			cout<<"Car number "<<i<<" has finished the race..."<<endl;
		}
	}

}
