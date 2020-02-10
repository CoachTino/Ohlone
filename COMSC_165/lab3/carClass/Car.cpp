#include "Car.h"
#include <iostream>
#include <string>

using namespace std;

   	/* 
   	* constructor that takes yearModel and make as arguments
   	* and assigns them to objects yearModel and make members
   	* and assigns 0 to the member speed
   	*/ 
    Car::Car(int model, string carMake){
	    
	    yearModel = model;
    	make = carMake;
    	speed = 0;
	}

	/*
	* accessor for yearModel to get the value stored
	* in an objects yearModel member variable
	*/
	int Car::getYearModel() const {

		return yearModel;
	}

	/*
	* accessor for speed to get the value stored
	* in an objects speed member variable
	*/
	int Car::getSpeed() const {

		return speed;
	}

	/*
	* accessor for make to get the value stored
	* in an objects make member variable
	*/
	string Car::getMake() const {

		return make;
	}

	/*
	* the accelerate function adds 5 to the speed
	* member variable each time it is called
	*/
	void Car::accelerate(int){

		speed = speed + 5;
	}

	/*
	* the brake function subtracts 5 from the 
	* speed member variable each time it's called
	*/
	void Car::brake(int){

		speed = speed - 5;
	}

