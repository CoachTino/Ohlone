/*
Program: chew_gum.cpp
Author: Valentino Lei'a
Online Class: cs102
Semester: Spring 2018
Description: Input a sentence and an integer value, for the number of time the sentence will print
*/

// Libraries
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;


int main(){

            // declare variables
            string userSentence, newUserSentence;
            int number, stringLength;

            // get user input for a sentence to write
            cout << "Enter a sentence to write on the board: " << endl;
            getline(cin,userSentence);

            // get user input for sentence repetitions
            cout << "How many times should it be written: ";
            cin >> number;
            while (number <= 0){
                cout << "ERROR : You must enter a positive non-zero number." << endl;
                cout << "Re-enter a valid number: ";
                cin >> number;
            }

            // processing loop
            for(int i = 1; i <= number; i++){
                newUserSentence += userSentence + "\n";
            }

            // initialize stringLength
            stringLength = newUserSentence.length();

            // output data to console
            cout << newUserSentence;
            cout << "\nYou've typed " << stringLength << " characters" << endl;



            return 0;
}
