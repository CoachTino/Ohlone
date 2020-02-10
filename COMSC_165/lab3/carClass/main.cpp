#include "Car.h"
#include <iostream>
#include <string>

using namespace std;

	int main(){

		int tempYearModel;
		string tempMake;

		// get the make of the car
		cout << "What is the make of your car? ";
		getline(cin, tempMake);

		// get the year of the car
		cout << "What is the year of your car? ";
        cin >> tempYearModel;

		// create car object
	    Car co(tempYearModel, tempMake);

	    for (int i = 0; i < 5; ++i){

            int tempSpeed = co.getSpeed();
	    	co.accelerate(co.getSpeed());
	    	cout << "\nThe speed of the car is "
	    		 << tempSpeed
	    		 << " mph.";
	    }
	    for (int j = 0; j <= 5; ++j){

            int tempSpeed = co.getSpeed();
	    	co.brake(co.getSpeed());
	    	cout << "\nThe speed of the car is "
	    		 << tempSpeed
	    		 << " mph.";
	    }

	    return 0;
	}
