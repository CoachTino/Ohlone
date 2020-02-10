#include <iostream>
#include "TestScores.h"

using namespace std;

	int main(){

		const int ten = 10;
		const int five = 5;
		const int seven = 7;

		double testOverOneHundredArray[ten] = {99, 100, 0, 88, 89, 90, 77, 92, 99, 101};
		double testBelowZeroArray[five] = {99, 100, 0, 88, -1};
		double testValidArray[seven] = {77, 77, 77, 77, 77, 77, 77};

		cout << "The average for the test scores " << endl;
		for (int i = 0; i < ten; ++i){

			cout << testOverOneHundredArray[i] << ", ";
		}
		TestScores tso1(testOverOneHundredArray, ten);
		cout << "is: " << tso1.findAverage(testOverOneHundredArray, ten) << endl;

		cout << "The average for the test scores " << endl;
		for (int i = 0; i < five; ++i){

			cout << testBelowZeroArray[i] << ", ";
		}
        TestScores tso2(testBelowZeroArray, five);
		cout << "is: " << tso2.findAverage(testBelowZeroArray, five) << endl;

		cout << "The average for the test scores " << endl;
		for (int i = 0; i < seven; ++i){

			cout << testValidArray[i] << ", ";
		}
		TestScores tso3(testValidArray, seven);
		cout << "is: " << tso3.findAverage(testValidArray, seven) << endl;

	    return 0;
	}
