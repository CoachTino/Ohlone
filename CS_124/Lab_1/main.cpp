#include "dayType.h"
#include <iostream>
#include <string>

using namespace std;

	int main(){

		int choice = 0;
        int userNumber = 0;

        cout << "1: Monday" << endl;
        cout << "2: Tuesday" << endl;
        cout << "3: Wednesday" << endl;
        cout << "4: Thursday" << endl;
        cout << "5: Friday" << endl;
        cout << "6: Saturday" << endl;
        cout << "7: Sunday\n" << endl;
        cout << "Please select enter the integer that represents the current day: ";

        cin >> choice;
        while (choice <= 0 || choice > 7){

            cout << "\nYou entered an invalid option. Please try again." << endl;
            cin >> choice;
        }
        choice = choice - 1;

		dayType dayObject;

		dayObject.setDay(choice);
		dayObject.setNextDay(choice);
		dayObject.setPreviousDay(choice);
		dayObject.printDay();

        cout << "\nNow enter a positive integer: ";

        cin >> userNumber;
        while (userNumber <= 0){

            cout << "\nYou entered an invalid option. Please try again." << endl;
            cin >> userNumber;
        }

        dayObject.calculateFutureDay(choice ,userNumber);
        dayObject.printFutureDay();

	    return 0;
	}
