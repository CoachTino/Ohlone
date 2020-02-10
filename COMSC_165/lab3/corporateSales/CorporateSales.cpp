#include "CorporateSales.h"
#include <iostream>
#include <string>


using namespace std;

		// create an object of the structure and return it
    	void CorporateSales::createDivisionAndReadDataAndDisplayData(string name){

    		DivisionSales divSalesObject;
    		divSalesObject.divisionName = name;
    		divSalesObject.quarterOne = 0;
            divSalesObject.quarterTwo = 0;
            divSalesObject.quarterThree = 0;
            divSalesObject.quarterFour = 0;
    		divSalesObject.annualSales = 0;
    		divSalesObject.averageQuarterlySales = 0;

    		cout << "Enter the " << name << "'s quarterly sales." << endl;
            cout << "Quarter 1: ";
            cin >> divSalesObject.quarterOne;
                while (divSalesObject.quarterOne < 0){
                    cout << "ERROR : You must enter a positive amount of sales.\n" << endl;
                    cout << "Re-enter the sales for the division: ";
                    cin >> divSalesObject.quarterOne;
                    cout << "\n";
                }
            cout << "Quarter 2: ";
            cin >> divSalesObject.quarterTwo;
                while (divSalesObject.quarterTwo < 0){
                    cout << "ERROR : You must enter a positive amount of sales.\n" << endl;
                    cout << "Re-enter the sales for the division: ";
                    cin >> divSalesObject.quarterTwo;
                    cout << "\n";
                }
            cout << "Quarter 3: ";
            cin >> divSalesObject.quarterThree;
                while (divSalesObject.quarterThree < 0){
                    cout << "ERROR : You must enter a positive amount of sales.\n" << endl;
                    cout << "Re-enter the sales for the division: ";
                    cin >> divSalesObject.quarterThree;
                    cout << "\n";
                }
    		cout << "Quarter 4: ";
            cin >> divSalesObject.quarterFour;
                while (divSalesObject.quarterFour < 0){
                        cout << "ERROR : You must enter a positive amount of sales.\n" << endl;
                        cout << "Re-enter the sales for the division: ";
                        cin >> divSalesObject.quarterFour;
                        cout << "\n";
                }

            cout << "Debug for annual sales: ";
            divSalesObject.annualSales += divSalesObject.quarterOne;
    		divSalesObject.annualSales += divSalesObject.quarterTwo;
    		divSalesObject.annualSales += divSalesObject.quarterThree;
    		divSalesObject.annualSales += divSalesObject.quarterFour;
    		cout << divSalesObject.annualSales << endl;

            divSalesObject.averageQuarterlySales = (divSalesObject.annualSales / 4);
            cout << "Debug for average sales: ";
            cout << divSalesObject.averageQuarterlySales << endl << endl;
    	}

