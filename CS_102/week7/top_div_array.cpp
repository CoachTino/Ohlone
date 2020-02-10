/*
Program: top_div_array.cpp
Author: Valentino Lei'a
Online Class: cs102
Semester: Spring 2018
Description: This app inputs sales for four regional division and displays the highest.
             To accomplish this, use two arrays of equal length - one for sales and the
             other for the divisions names.
             The data in these arrays will be positioned so that the divisions will share the same
             indexes in both arrays.
             Use three functions: one for input, one for determining highest sales, and one for
             displaying results.
*/

    // libraries
    #include <iostream>
    #include <string>
    #include <iomanip>

    using namespace std;

            // prototype functions
            void populateDivisionSales(float[], string[], int);
            void printResult(float[],string[], int);
            int findHighest(float[], int);


            int main (){


                    int topDivisionIndex = 0;	                                        // will be assigned the index of the top division sales
                    float divisionSales[4] = {};		                                // array holding the divisions' sales amounts

                    // declare and populate divisionRegion array
                    string divisionRegion[4] = {"Northeast", "Southeast",
                                                 "Northwest", "Southwest"};

                    populateDivisionSales(divisionSales, divisionRegion, topDivisionIndex);	    // params are already given to

                    // leave debug statement in final product
                    cout << "debug print for array div_sales_array" << endl;
                    for (int i=0; i<4; i++) {
                        cout << divisionSales[i] << endl;
                    }

                    topDivisionIndex = findHighest(divisionSales, topDivisionIndex);             //will no longer prints the result

                    // leave debug statement in final product
                    cout << "debug for topDivisionIndex: " << topDivisionIndex << endl;

                    printResult(divisionSales, divisionRegion, topDivisionIndex);

                return 0;
            }

            // processing for division sales
            void populateDivisionSales(float f_divSales[], string f_divRegions[], int f_topDivisionIndex){

                    // loop to get user input
                    for(int i = 0; i < 4; i++){

                            // ask user for sales
                            cout << "\nEnter the sales for the "
                                 << f_divRegions[i]
                                 << " division: $";

                            // get user input
                            cin >> f_divSales[i];

                            // validate user input
                            while (f_divSales[i] < 0){

                                cout << "ERROR : You must enter a positive amount of sales.\n" << endl;
                                cout << "Re-enter the sales for the " << f_divRegions[i] << " division: ";
                                cin >> f_divSales[i];
                                cout << "\n";
                            }
                    }

            }

            // processing to find the highest division sales
            int findHighest(float f_divSales[], int f_topDivisionIndex){

                    float greatestSalesAmount = 0;
                    //int saveIndex;

                    for(int i = 0; i < 4; i++){

                        if(f_divSales[i] >= greatestSalesAmount){

                            greatestSalesAmount = f_divSales[i];
                            f_topDivisionIndex = i;
                        }
                    }

                return f_topDivisionIndex;
            }


            // processing to display the region with the most sales
            void printResult(float f_divSales[],string  f_divRegions[], int f_topDivisionIndex){

                    // set format
                    cout << fixed << setprecision(2);

                    // print the division with the most sales
                    cout << "\nThe "
                         << f_divRegions[f_topDivisionIndex]
                         << " division of the company had the highest sales of $"
                         << f_divSales[f_topDivisionIndex]
                         << endl;
            }


