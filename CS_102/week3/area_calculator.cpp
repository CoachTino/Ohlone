/*
Program: area_calculator.cpp
Author: Valentino Lei'a
Online Class: cs102
Semester: Spring 2018
Description: this program calculates the area of either a circle, a rectangle, or a triangle
*/

#include <iostream>
#include <cmath>
#include <iomanip>
#include <stdlib.h>

using namespace std;

int main() {

            int optionNumber;
            double  radius, length, width, base, height,
                    areaCircle, areaRectangle, areaTriangle;
            const double pi = 3.14159;

            cout << "Calculate the area of a:" << endl;
            cout << "1. circle" << endl;
            cout << "2. rectangle" << endl;
            cout << "3. triangle" << endl;
            cout << endl;

            cout << "Enter option number: ";
            cin >> optionNumber;
            if (optionNumber == 1)
                {
                    cout << "Enter circle radius: ";
                    cin >> radius;
                        if(cin.fail())
                            {
                                cout << "Invalid entry.";
                                exit(EXIT_FAILURE);
                            }
                    areaCircle = pi * pow(radius,2);
                    cout << "The circle's area with radius " << radius;
                    cout << fixed << setprecision(2);
                    cout << " is: " << areaCircle << endl;
                }else if (optionNumber == 2)
                    {
                        cout << "Enter rectangle length: ";
                        cin >> length;
                            if(cin.fail())
                                {
                                    cout << "Invalid entry.";
                                    exit(EXIT_FAILURE);
                                }
                        cout << "Enter rectangle width: ";
                        cin >> width;
                            if(cin.fail())
                                {
                                    cout << "Invalid entry.";
                                    exit(EXIT_FAILURE);
                                }
                        areaRectangle = length * width;
                        cout << "The Rectangle's area with length " << length  << " and width " << width;
                        cout << fixed << setprecision(2);
                        cout << " is: " << areaRectangle << endl;
                    }else if (optionNumber == 3)
                    {
                        cout << "Enter triangle base: ";
                        cin >> base;
                            if(cin.fail())
                                {
                                    cout << "Invalid entry.";
                                    exit(EXIT_FAILURE);
                                }
                        cout << "Enter triangle height: ";
                        cin >> height;
                            if(cin.fail())
                                {
                                    cout << "Invalid entry.";
                                    exit(EXIT_FAILURE);
                                }
                        areaTriangle = base * height * .5;
                        cout << "The triangle's area with base " <<  base << " and height " << height;
                        cout << fixed << setprecision(2);
                        cout << " is: " << areaTriangle << endl;
                    }else if (optionNumber <= 0 || optionNumber >= 4)
                    {
                        cout << "Invalid entry.";
                        exit(EXIT_FAILURE);
                    }

            return 0;
}
