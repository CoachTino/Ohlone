/*
Program: roman_numerals.cpp
Author: Valentino Lei'a
Online Class: cs102
Semester: Spring 2018
Description: display roman numeral version of number entered by user
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main() {

            int numberToRoman;

            cout << "Enter a number to convert to Roman Numeral: ";
            cin >> numberToRoman;

            switch(numberToRoman)
            {
                case 1:
                   cout << "The Roman Numeral conversion is: I." << endl;
                   break;
                case 2:
                   cout << "The Roman Numeral conversion is: II." << endl;
                   break;
                case 3:
                   cout << "The Roman Numeral conversion is: III." << endl;
                   break;
                case 4:
                   cout << "The Roman Numeral conversion is: IV." << endl;
                   break;
                case 5:
                   cout << "The Roman Numeral conversion is: V." << endl;
                   break;
                case 6:
                   cout << "The Roman Numeral conversion is: VI." << endl;
                   break;
                case 7:
                   cout << "The Roman Numeral conversion is: VII." << endl;
                   break;
                case 8:
                   cout << "The Roman Numeral conversion is: VIII." << endl;
                   break;
                case 9:
                   cout << "The Roman Numeral conversion is: IX." << endl;
                   break;
                case 10:
                   cout << "The Roman Numeral conversion is: X." << endl;
                   break;
                default:
                    cout << "Your entry is invalid" << endl;
            }

}
