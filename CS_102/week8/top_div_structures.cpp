/*
Program: top_div_structure.cpp
Author: Valentino Lei'a
Online Class: cs102
Semester: Spring 2018
Description: This app inputs sales for four regional division and displays the highest.
             To accomplish this, use one struct and one array of that struct.
             Use three functions: one for input, one for determining highest sales, and one for
             displaying results.
*/

    // libraries
    #include <iostream>
    #include <string>
    #include <iomanip>

    using namespace std;

            // prototype functions
            void populateDivisionSales(struct DIV [], int);
            void printResult(struct DIV [], int);
            int findHighest(struct DIV [], int);

            // declare and define the structure for divisions
            struct DIV {
                    float sales;
                    string name;
            };


            int main (){

                    // will be assigned the index of the top division sales
                    int topDivisionIndex = 0;

                    // declare and initialize an array of the division structure
                    DIV divisionInfo[4] =  {{0, "Northeast"},
                                            {0, "Southeast"},
                                            {0, "Northwest"},
                                            {0, "Southwest"}};

                    // leave debug statement in final product
                    cout << "debug print for array div_sales_array" << endl;
                    for (int i=0; i<4; i++) {
                        cout << divisionInfo[i].name << endl;
                    }

                    // params are already given to
                    populateDivisionSales(divisionInfo, topDivisionIndex);

                    topDivisionIndex = findHighest(divisionInfo, topDivisionIndex);

                    // leave debug statement in final product
                    cout << "debug for topDivisionIndex: " << topDivisionIndex << endl;

                    printResult(divisionInfo, topDivisionIndex);

                return 0;
            }

            // processing for division sales
            void populateDivisionSales(DIV divisionInfo[], int f_topDivisionIndex){

                    // loop to get user input
                    for(int i = 0; i < 4; i++){

                            // ask user for sales
                            cout << "\nEnter the sales for the "
                                 << divisionInfo[i].name
                                 << " division: $";

                            // get user input
                            cin >> divisionInfo[i].sales;

                            // validate user input
                            while (divisionInfo[i].sales < 0){

                                cout << "ERROR : You must enter a positive amount of sales.\n" << endl;
                                cout << "Re-enter the sales for the " << divisionInfo[i].name << " division: ";
                                cin >> divisionInfo[i].sales;
                                cout << "\n";
                            }
                    }
            }

            // processing to find the highest division sales
            int findHighest(DIV divisionInfo[], int f_topDivisionIndex){

                    float greatestSalesAmount = 0;
                    //int saveIndex;

                    for(int i = 0; i < 4; i++){

                        if(divisionInfo[i].sales >= greatestSalesAmount){

                            greatestSalesAmount = divisionInfo[i].sales;
                            f_topDivisionIndex = i;
                        }
                    }
                return f_topDivisionIndex;
            }

            // processing to display the region with the most sales
            void printResult(DIV divisionInfo[], int f_topDivisionIndex){

                    // set format
                    cout << fixed << setprecision(2);

                    // print the division with the most sales
                    cout << "\nThe "
                         << divisionInfo[f_topDivisionIndex].name
                         << " division of the company had the highest sales of $"
                         << divisionInfo[f_topDivisionIndex].sales
                         << endl;
            }
