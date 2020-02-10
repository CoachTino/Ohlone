#include "TestScores.h"
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

	void TestScores::setStudentData(){

        numberOfTests = 0;

		cout << "Enter the student's name: ";
		cin >> studentName;

		cout << "\nHow many tests did " << studentName << " take? ";
		cin >> numberOfTests;
	}

	int TestScores::getNumberOfTests(){

		return numberOfTests;
	}

    void TestScores::createArray(int x){

        testScoresArrayPointer = new double[x];
	}

	void TestScores::setTestScores(double arr[]){

		for (int i = 0; i < numberOfTests; i++){

			cout << "\nScore " << i+1 << ": " ;
			cin >> testScoresArrayPointer[i];

			while (testScoresArrayPointer[i] > maxTestScore || testScoresArrayPointer[i] < minTestScore){

				cout << "\nInvalid score. Test score needs to be between 0 and 100." << endl;
				cout << "Re-enter test score: ";
				cin >> testScoresArrayPointer[i];
			}
		}
	}

	void TestScores::selectionSort(double unsortedArray[], int arraySize){

        int minIndex, minValue, start, index;

        cout << "\nDebug: Unsorted array: ";
        for(index = 0; index < arraySize; index++){

            cout << unsortedArray[index] << " ";
        }
        for(start = 0; start < arraySize - 1; start++){

            minIndex = start;
            minValue = unsortedArray[start];
            for(index = start + 1; index < arraySize; index++){

                if(unsortedArray[index] < minValue){

                    minValue = unsortedArray[index];
                    minIndex = index;
                }
            }
            swap(unsortedArray[minIndex], unsortedArray[start]);
        }
        cout << "\nDebug: Sorted array: ";
        for(index = 0; index < arraySize; index++){

            cout << unsortedArray[index] << " ";
        }
    }

    double TestScores::calculateAverage(){

    	average = 0;

		for (int i = 0; i < numberOfTests; i++){

			average += testScoresArrayPointer[i];
		}
		average =  average/numberOfTests;

		return average;
	}

	void TestScores::displayStudentData(){

		cout << "\nStudent Name\tAverage Score" << endl;
        cout.setf(ios::fixed, ios::floatfield);
        cout.precision(2);
        cout << studentName<< "\t\t" << setprecision(2) << average << endl;
	}

    void TestScores::deleteDynamicArray(double *arr){

        delete[] arr;
    }

