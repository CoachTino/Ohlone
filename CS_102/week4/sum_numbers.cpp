/*
Program: sum_numbers.cpp
Author: Valentino Lei'a
Online Class: cs102
Semester: Spring 2018
Description: calculates sum of numbers up to a number entered by the user
*/

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;


int main(){

            int number, sum = 0;

            cout << "This program will add all of the numbers between 1 and your input." << endl;
            cout << "Please enter a positive number: ";
            cin >> number;
            while (number <= 0){
                cout << "ERROR : You must enter a positive non-zero number." << endl;
                cout << "Re-enter a valid number: ";
                cin >> number;
            }

            for (int i = 1; i <= number; i++){
                sum += i;
                cout << i;
                if(i < number){
                    cout << " + ";
                }else{
                    cout << " = ";
                }
            }

            cout << sum << endl;

            return 0;
}
