#include "Mazda.h"

using namespace std;

Mazda::Mazda(){

	this->fuel_cap = 200.5;
	this->fuel_cons = 4.0;
	this->time = 0;
	this->speed = 105;

}

double Mazda::getTimeToFinishTrack(){
	return 2.0;
}

Mazda::Mazda(const Mazda & myDac){

	fuel_cap = myDac.fuel_cap;
	fuel_cons = myDac.fuel_cons;
	time = myDac.time;
	speed = myDac.speed;

}

double Mazda::getSpeed(){
	return this->speed;
}
	
double Mazda::getTime(){
	return this->time;
}

double Mazda::getCap(){
	return this->fuel_cap;
}

double Mazda::getCons(){
	return this->fuel_cons;
}
		
void Mazda::setSpeed(double sp){
	this->speed = sp;
}

void Mazda::setTime(double tim){
	this->time = tim;
}

void Mazda::setCap(double cap){
	this->fuel_cap = cap;
}

void Mazda::setCons(double cons){
	this->fuel_cons = cons;
}
