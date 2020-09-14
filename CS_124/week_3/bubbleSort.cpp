/*
  authors:  Sal, Kulsoom, Tino
  program name: Bubble Sort
  description: takes an unsorted array of integers and prints
               them to the console in ascending order
  date authored: 9/10/2020
*/

#include "bubbleSort.h"
#include <iostream>

/**************************************
* takes an unsorted array of integers *
* and puts them in ascending order    *
* from smallest to largest            *
* @parm array of integers             *  
**************************************/
void bubbleSort::sortAndPrint(int x[]){

  // temporary variable for swapping index values
  int temp;

  // loop to iterate until the whole array is sorted
  for(int h = 0; h < 5; h++){

    // loop to compare/swap index's 0-4
    for(int i = 0; i < 4; i++){

      // test expression on i and i+1
      if(x[i] > x[i+1]){

        // places index i+1 in temporary variable
        temp = x[i+1];

        // places value of index i+1 into index i
        x[i+1] = x[i];

        // places value of temp inside index i
        x[i] = temp;
      }
    }
  }
  
  // line spacing for output
  std::cout << std::endl;

  // formatting output to console
  std::cout << "New sorted array: ";

  // loop to print out array to console
  for(int j = 0; j < 5; j++){

    std::cout << x[j] << " ";
  }

  // line spacing for output
  std::cout << std::endl;
  std::cout << std::endl;
}