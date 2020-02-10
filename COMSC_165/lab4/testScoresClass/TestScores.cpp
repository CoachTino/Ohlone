#include "TestScores.h"
#include <iostream>
#include <string>

using namespace std;


    // constructor accepts array of test scores as parm
	TestScores::TestScores(double arr[], int arrSize){

		try{
			for (int i = 0; i < arrSize; ++i){
				if (arr[i] <0 || arr[i] > 100){

					throw InvalidScore();
				}else{}
			}
		}


        catch(InvalidScore){
            cout << "\nInvalid test score";
        }
	}

	double TestScores::findAverage(double arr[], int arrSize){

		double averageScore = 0;



		for (int i = 0; i < arrSize; ++i){

			averageScore += arr[i];
		}
		averageScore /= arrSize;
		return averageScore;
	}

