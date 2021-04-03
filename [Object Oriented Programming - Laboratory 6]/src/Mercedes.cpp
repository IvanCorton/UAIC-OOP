#include "Mercedes.h"

using namespace std;

Mercedes::Mercedes(){

	this->fuel_cap = 260;
	this->fuel_cons = 7.5;
	this->time = 0;
	this->speed = 130;

}

double Mercedes::getTimeToFinishTrack(){
	return 2.0;
}

Mercedes::Mercedes(const Mercedes & myDac){

	fuel_cap = myDac.fuel_cap;
	fuel_cons = myDac.fuel_cons;
	time = myDac.time;
	speed = myDac.speed;

}

double Mercedes::getSpeed(){
	return this->speed;
}
	
double Mercedes::getTime(){
	return this->time;
}

double Mercedes::getCap(){
	return this->fuel_cap;
}

double Mercedes::getCons(){
	return this->fuel_cons;
}
		
void Mercedes::setSpeed(double sp){
	this->speed = sp;
}

void Mercedes::setTime(double tim){
	this->time = tim;
}

void Mercedes::setCap(double cap){
	this->fuel_cap = cap;
}

void Mercedes::setCons(double cons){
	this->fuel_cons = cons;
}
