/*
  authors:  Sal, Kulsoom, Tino
  program name: Bubble Sort
  description: takes an unsorted array of integers and prints
               them to the console in ascending order
  date authored: 9/10/2020
*/

#include "bubbleSort.h"
#include <iostream>

/*****************************************************
* constructor that takes user input of 5 numbers and *
* stores the values inside of an array of integers   *
* no @parms                                          *
*****************************************************/
bubbleSort::bubbleSort(){

  //print to console
  std::cout << "Enter 5 positive numbers to be sorted: " << std::endl;  

  // for loop to save user in each index of array
  for(int i = 0; i < 5; i++){

    // store user input
    std::cin >> userInputArray[i];
  }
}

/**************************************
* takes an unsorted array of integers *
* and puts them in ascending          *
* order from smallest to largest      *
* @parm array of integers             *  
**************************************/
void bubbleSort::sortArray(int x[]){

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
}

/***********************************
* prints the contents of an array  *
* to the console                   *
* @parm array of integers          *
***********************************/
void bubbleSort::printArray(int z[]){

  // loop to print out array to console
  for(int j = 0; j < 5; j++){

    // print out index value
    std::cout << z[j] << " ";
  }

  // line spacing for output
  std::cout << std::endl;
}
