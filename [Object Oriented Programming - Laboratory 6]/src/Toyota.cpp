#include "Toyota.h"

using namespace std;

Toyota::Toyota(){

	this->fuel_cap = 220.5;
	this->fuel_cons = 5.5;
	this->time = 0;
	this->speed = 120;

}

double Toyota::getTimeToFinishTrack(){
	return 2.0;
}

Toyota::Toyota(const Toyota & myDac){

	fuel_cap = myDac.fuel_cap;
	fuel_cons = myDac.fuel_cons;
	time = myDac.time;
	speed = myDac.speed;

}

double Toyota::getSpeed(){
	return this->speed;
}
	
double Toyota::getTime(){
	return this->time;
}

double Toyota::getCap(){
	return this->fuel_cap;
}

double Toyota::getCons(){
	return this->fuel_cons;
}
		
void Toyota::setSpeed(double sp){
	this->speed = sp;
}

void Toyota::setTime(double tim){
	this->time = tim;
}

void Toyota::setCap(double cap){
	this->fuel_cap = cap;
}

void Toyota::setCons(double cons){
	this->fuel_cons = cons;
}
