/*
  authors:  Sal, Kulsoom, Tino
  program name: Bubble Sort
  description: takes an unsorted array of integers and prints
               them to the console in ascending order
  date authored: 9/10/2020
*/

#ifndef CANNONBALL_H
#define CANNONBALL_H

#include <iostream>

class bubbleSort{

  public:
  
    /*****************************************************
    * constructor that takes user input of 5 numbers and *
    * stores the values inside of an array of integers   *
    * no @parms                                          *
    *****************************************************/
    bubbleSort();

    /**************************************
    * takes an unsorted array of integers *
    * and puts them in ascending          *
    * order from smallest to largest      *
    * @parm array of integers             *  
    **************************************/
    void sortArray(int []);

    /***********************************
    * prints the contents of an array  *
    * to the console                   *
    * @parm array of integers          *
    ***********************************/
    void printArray(int []);

    // hardcoded array for testing
    // create an array with 5 indexes with values 51 26 93 0 and 1337
    int unsortedArray[5] = {51, 26, 93, 0, 1337};

    // create array to hold user user input
    int userInputArray[5];
};


#endif