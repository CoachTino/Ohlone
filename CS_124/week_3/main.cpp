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
  std::cout << "user input array: " << std::endl;

  // formatting output to console
  std::cout << "Array value BEFORE sorting: ";

  // print array before it is sorted
  bo.printArray(bo.userInputArray);

  // function call to sort array
  bo.sortArray(bo.userInputArray);

  // formatting output to console
  std::cout << "Array value AFTER sorting: ";

  // print array after it is sorted
  bo.printArray(bo.userInputArray);

  // line spacing for output
  std::cout << std::endl;







  // formatting output to console
  std::cout << "hard coded test array: " << std::endl;

  // formatting output to console
  std::cout << "Array value BEFORE sorting: ";

  // print hardcoded array before it is sorted
  bo.printArray(bo.unsortedArray);

  // function call to sort array
  bo.sortArray(bo.unsortedArray);

  // formatting output to console
  std::cout << "Array value AFTER sorting: ";

  // print hardcoded array after it is sorted
  bo.printArray(bo.unsortedArray);

  // line spacing for output
  std::cout << std::endl;
  


  return 0;
}