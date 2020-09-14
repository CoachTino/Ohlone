/*
  authors:  Sal, Kulsoom, Tino
  program name: Bubble Sort
  description: takes an unsorted array of integers and prints
               them to the console in ascending order
  date authored: 9/10/2020
*/

#include "bubbleSort.h"
#include <iostream>

int main(){

  // create object of bubbleSort class with no @parm(s)
  bubbleSort bo;

  // line spacing for output
  std::cout << std::endl;

  // formatting output to console
  std::cout << "Original unsorted array: ";

  // loop to print out sorted array to console
  for(int i = 0; i < 5; i++){

    std::cout << bo.unsortedArray[i] << " ";
  }

  // function call to sort array
  bo.sortAndPrint(bo.unsortedArray);

  return 0;
}