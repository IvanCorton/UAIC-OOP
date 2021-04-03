#include "Dacia.h"
#include <iostream>

using namespace std;

Dacia::Dacia(){

	this->fuel_cap = 250;
	this->fuel_cons = 5.5;
	this->time = 0;
	this->speed = 100;

}

Dacia::Dacia(const Dacia & myDac){

	fuel_cap = myDac.fuel_cap;
	fuel_cons = myDac.fuel_cons;
	time = myDac.time;
	speed = myDac.speed;

}

double Dacia::getTimeToFinishTrack(){
	return 2.0;
}

double Dacia::getSpeed(){
	return this->speed;
}
	
double Dacia::getTime(){
	return this->time;
}

double Dacia::getCap(){
	return this->fuel_cap;
}

double Dacia::getCons(){
	return this->fuel_cons;
}
		
void Dacia::setSpeed(double sp){
	this->speed = sp;
}

void Dacia::setTime(double tim){
	this->time = tim;
}

void Dacia::setCap(double cap){
	this->fuel_cap = cap;
}

void Dacia::setCons(double cons){
	this->fuel_cons = cons;
}
