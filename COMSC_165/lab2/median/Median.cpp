#include "Median.h"
#include <iostream>

using namespace std;

	int Median::getArraySize(){

		cout << "Enter an integer for the size of the array: ";
		cin >> arraySize;
		return arraySize;
	}

	void Median::createArray(int x){

		medianArrayPointer = new double[x];
	}

	void Median::setArrayValues(double *arr){

		cout << "Enter an integer for each array element.\n";
		for(int i = 0; i < arraySize; i++){

			cout << "element " << i << ": ";
			cin >> arr[i];
		}
	}

	void Median::selectionSort(double *unsortedArray, int arraySize){

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

	void Median::getMedian(double *arr, int x){

        median = 0;
        if(x % 2 == 0){

        cout << "\nDebug: " << endl;
        cout << *(arr+(x/2)) << endl;
        cout << *(arr+(x/2+1)) << endl;
            median = (*(arr + (x/2)) + *(arr + (x/2+1)))/2;
        }else{
            median = *(arr + (x/2));
        }
        cout << "\n\nThe median is: " << median << endl;
	}
