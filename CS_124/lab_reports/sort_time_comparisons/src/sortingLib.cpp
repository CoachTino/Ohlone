#include "sortingLib.h"
#include <iostream>

    void sortingLib::bubbleSort(std::string unsortedArray[], int arraySize){

      // temporary variable for swapping index values
      std::string temp;

      // loop to iterate until the whole array is sorted
      for(int h = 0; h < arraySize; h++){

        // loop to compare/swap index's values 0-4
        for(int i = 0; i < arraySize - 1; i++){

          // test expression on i and i+1
          if(unsortedArray[i] > unsortedArray[i+1]){

            swap(unsortedArray[i], unsortedArray[i+1]);
          }
        }
      }
    }

    void sortingLib::selectionSort(std::string unsortedArray[], int arraySize){

      int minIndex;

      for(int i = 0; i < arraySize - 1; i++){

        minIndex = i;

        for(int h = i + 1; h < arraySize; h++){

          if(unsortedArray[h] < unsortedArray[minIndex]){

              minIndex = h;
          }
        }
        swap(unsortedArray[minIndex], unsortedArray[i]);
      }
    }

    void sortingLib::insertionSort(std::string unsortedArray[], int arraySize){

      std::string temp;

      for(int i = 1; i < arraySize; i++){
        //std::cout << "before sort: " << unsortedArray[i] << std::endl;
        temp = unsortedArray[i];
        int j = i - 1;

        while(j >= 0 && unsortedArray[j] > temp){

          unsortedArray[j+1] = unsortedArray[j];
          j = j-1;
        }
        unsortedArray[j+1] = temp;
      }
    }

    void sortingLib::mergeSort(std::string s[], int arraySize){


    }

    void sortingLib::quickSort(std::string s[], int arraySize){


    }