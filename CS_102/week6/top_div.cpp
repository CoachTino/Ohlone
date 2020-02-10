/*
Program: top_div.cpp
Author: Valentino Lei'a
Online Class: cs102
Semester: Spring 2018
Description: calculate which division in a company has the greatest sales for a quarter
*/

    // Libraries
    #include <iostream>
    #include <string>
    #include <iomanip>

        using namespace std;

                    float inputDivision(string name);
                    void  findHighest(float a, float b, float c, float d);

                    int main(){
                            // declare local variable
                            float northEast, southEast, northWest, southWest;

                            // set format
                            cout << fixed << setprecision(2);

                            // print a title for the user
                            cout << "Sales of the four divisions of the company: \n" << endl;

                            // get values for the variables from inputDivision()
                            northEast = inputDivision( "North East" );
                            southEast = inputDivision( "South East" );
                            northWest = inputDivision( "North West" );
                            southWest = inputDivision( "South West" );

                            //prints the result also
                            findHighest(northEast, southEast, northWest, southWest);
                            return 0;
                    }

                    float inputDivision(string name){

                            // declare local variable
                            float sales;

                            // get user input
                            cout << "Enter the sales for the " << name << " division: $";
                            cin >> sales;

                            // validate user input
                            while (sales <= 0){

                                cout << "ERROR : You must enter a positive amount of sales.\n" << endl;
                                cout << "Re-enter the sales for the " << name << " division: ";
                                cin >> sales;
                                cout << "\n";
                            }
                        return sales;
                    }

                    void findHighest(float northEast, float southEast, float northWest, float southWest){

                            // declare local variables
                            float highest = northEast;

                            // declare local string
                            string name = "North East";


                            // processing for division with the highest sales
                            if (southEast > highest){
                                highest = southEast;
                                name = "South East";
                            }

                            if(northWest > highest){
                                highest = northWest;
                                name = "North West";
                            }

                            if(southWest > highest){
                                highest = southWest;
                                name = "South West";
                            }

                            // print the division with the most sales
                            cout << "\nThe " << name << " division of the company had the highest sales of $" << highest << endl;
                    }



