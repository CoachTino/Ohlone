#include "SortOrder.h"
#include <iostream>

using namespace std;

    void SortOrder::bubbleSort(int unsortedArray[], int arraySize){

        int maxElement, index;

        cout << "Unsorted array: ";
        for(index = 0; index < arraySize; index++){

            cout << unsortedArray[index] << " ";
        }
        for(maxElement = arraySize - 1; maxElement > 0; maxElement--){

            for(index = 0; index < maxElement; index++){

                if( unsortedArray[index] > unsortedArray[index + 1]){
                    swap(unsortedArray[index], unsortedArray[index + 1]);
                }
            }
        }
        cout << "\nSorted array: ";
        for(index = 0; index < arraySize; index++){

            cout << unsortedArray[index] << " ";
        }
    }

    void SortOrder::selectionSort(int unsortedArray[], int arraySize){

        int minIndex, minValue, start, index;

        cout << "\nUnsorted array: ";
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
        cout << "\nSorted array: ";
        for(index = 0; index < arraySize; index++){

            cout << unsortedArray[index] << " ";
        }
    }

