#include "Ford.h"

using namespace std;

Ford::Ford(){

	this->fuel_cap = 230.5;
	this->fuel_cons = 7.3;
	this->time = 0;
	this->speed = 110;

}

double Ford::getTimeToFinishTrack(){
	return 2.0;
}

Ford::Ford(const Ford & myDac){

	fuel_cap = myDac.fuel_cap;
	fuel_cons = myDac.fuel_cons;
	time = myDac.time;
	speed = myDac.speed;

}

double Ford::getSpeed(){
	return this->speed;
}
	
double Ford::getTime(){
	return this->time;
}

double Ford::getCap(){
	return this->fuel_cap;
}

double Ford::getCons(){
	return this->fuel_cons;
}
		
void Ford::setSpeed(double sp){
	this->speed = sp;
}

void Ford::setTime(double tim){
	this->time = tim;
}

void Ford::setCap(double cap){
	this->fuel_cap = cap;
}

void Ford::setCons(double cons){
	this->fuel_cons = cons;
}
