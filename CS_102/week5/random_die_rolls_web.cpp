/*
Program: chew_gum.cpp
Author: Valentino Lei'a
Online Class: cs102
Semester: Spring 2018
Description: Simulates the rolling of a die 6000 times and displays in a
             table format the number of occurrences of each side of the die
*/

// Libraries
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>

using namespace std;


int main(){
            // First output statement to the browser - otherwise, error
            cout << "Content-type:text/html\n\n";
            // This html tag simulates shell output to the web
            cout << "<pre>";

            // declare arrays
            const int arraySize = 6000;

            int numberArray[arraySize],
                tallyArray[7] = {};

            // declare variables
            int randomDieNumber = 0,
                displayNumber = 1,
                numberOfRolls = 0;
            // set the seed
            srand(time(0));

            // processing for numberArray with random numbers
            for (int i = 0; i < arraySize; i++){
                numberArray[i] = (rand()%6)+1;
            }

            // processing for tallying the rolls
            for (int i = 0; i < arraySize; i++){
                randomDieNumber = numberArray[i];
                tallyArray[randomDieNumber]++;
            }

            for (int i = 1; i <7; i++){
                numberOfRolls += tallyArray[i];
            }

            // display the results of the random numbers
            cout << "Display Result for " << numberOfRolls << " Rolls" << endl;
            cout << "Die Face" << right << setw(21) << "Occurrences" << endl;
            cout << setw(30) << setfill('=') << " " << endl;
            for (int i = 1; i <= 6; i++){
                cout << displayNumber++ << right << setw(28)
                     << setfill(' ') << tallyArray[i] << endl;
            }
            cout << "</pre>";
            return 0;
}
