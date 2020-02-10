#include "ElementShifter.h"
#include <iostream>

using namespace std;

    ElementShifter::ElementShifter(int arrSize){

        cout << "Constructor." << endl;
        baseArray = new int[arrSize];
    }

	void ElementShifter::setBaseArrayElementValues(int *arr, int arrSize){

		for(int i = 0; i < arrSize; i++){

			arr[i] = i+2;
		}
        cout << "\nBase Array Contents: \n";
		for(int i = 0; i < arrSize; i++){

			cout << "Element " << i << ": " << arr[i] << endl;
		}
	}

	int *ElementShifter::shiftArrayElements(int *arr, int arrSize){

		elementShifterArrayPointer = new int[arrSize+1];
		elementShifterArrayPointer[0] = 0;
		int j = 1;
		for(int i = 0; i < arrSize; i++){

			elementShifterArrayPointer[j] = arr[i];
			j++;
		}
		cout << "\nDebug new/dynamic array 0th element: "  << elementShifterArrayPointer[0];
		return elementShifterArrayPointer;
	}

	void ElementShifter::displayShiftedArray(int *arr, int arrSize){

		cout << "\nShifted Array Contents: \n";
		for(int i = 0; i < arrSize; i++){

			cout << "Element: " << arr[i] << endl;
		}
	}

    void ElementShifter::deleteDynamicArray(int *arr){

        delete[] arr;
    }

