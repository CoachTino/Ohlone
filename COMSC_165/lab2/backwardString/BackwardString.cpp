#include "BackwardString.h"
#include <iostream>


using namespace std;

    BackwardString::BackwardString(){

        backwardString[SIZE];
    }

	void BackwardString::getUserInput(){

		cout << "Please enter a string: " << endl;
		cin.getline(backwardString, SIZE);
        cout << "\n\ndebug: " << backwardString << "\n\n";
	}

	void BackwardString::displayBackwardString(char *arr){

        char *inverse = arr;
		while(*inverse != '\0'){

			inverse++;
		}
        cout << "The reverse string is: ";
        while(inverse != arr){

            inverse--;
            cout << *inverse;
        }
	}

