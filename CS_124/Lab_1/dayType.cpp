#include "dayType.h"
#include <iostream>
#include <string>

using namespace std;

    	// constructor
    	dayType::dayType(){

            weekDay[0] = "Monday";
            weekDay[1] = "Tuesday";
            weekDay[2] = "Wednesday";
            weekDay[3] = "Thursday";
            weekDay[4] = "Friday";
            weekDay[5] = "Saturday";
            weekDay[6] = "Sunday";

    	}

    	// deconstructor
    	dayType::~dayType(){

    	}

    	// set the day of the week
    	void dayType::setDay(int d){

            today = weekDay[d];
    	}

        // set the next day
        void dayType::setNextDay(int d){

            if (d == 5){
                //debug - cout << "\n why wont sunday work :( ";
                nextDay = "Sunday";
                //debug - nextDay = weekDay[6];
            }else if (d == 6){
                nextDay = weekDay[0];
            }else {
            nextDay = weekDay[d+1];
            }
        }

        // set the previous day
        void dayType::setPreviousDay(int d){

            if (d == 0){
                //debug - cout << "\n why wont sunday work :( " << d << endl;
                previousDay = "Sunday";
                //debug - previousDay = weekDay[6];
                //debug - cout << previousDay << endl;
            }else {
            previousDay = weekDay[d-1];
            }
        }

    	// print the day of the week
   	    void dayType::printDay(){

            cout << today << " is the current day. \n";
            cout << nextDay << " is the next day. \n";
            cout << previousDay << " is the previous day. \n";

    	}

    	// return the day
    	string dayType::getCurrentDay(){

            return today;
    	}

    	// return the next day
    	string dayType::getNextDay(){

            return nextDay;
    	}

    	// return the previous day
    	string dayType::getPreviousDay(){

            return previousDay;
    	}

    	// calculate and return the day by adding days to current day
    	void dayType::calculateFutureDay(int d, int n){

            int temp = ((n % 7) + d);
            futureDay = weekDay[temp];
    	}

        // print the future day
        void dayType::printFutureDay(){

            cout << futureDay << " is the future day. \n";
        }