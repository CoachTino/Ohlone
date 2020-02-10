/*
Program: assignment1.cpp
Author: Valentino Lei'a
Online Class: cs118
Semester: Spring 2020
Description: 1. Write a function to count number of high bits in an unsigned integer'
             2. write a function to find if a given bit position is high or low.
*/

#include <iostream>
#include <stdint.h>
#include <stdio.h>

using namespace std;

    // declare global variables
    uint32_t a = 0x000000FF;    // 15              = 0x000000FF = 0000 0000 0000 0000 0000 0000 1111 1111
    uint32_t b = 0x00000001;    // 01              = 0x00000001 = 0000 0000 0000 0000 0000 0000 0000 0001
    uint32_t c = 0;             // 00              = 0x00000000 = 0000 0000 0000 0000 0000 0000 0000 0000
    uint32_t d = 0x000049C1;    // 18881           = 0x000049C1 = 0000 0000 0000 0000 0100 1001 1100 0001
    uint32_t e = 0x00000080;    // 128             = 0x00000080 = 0000 0000 0000 0000 0000 0000 1000 0000
    uint32_t f = 0xFFFFFFFF;    // 4,294,967,295   = 0xFFFFFFFF = 1111 1111 1111 1111 1111 1111 1111 1111


    // function prototypes
    bool checkBit(uint32_t,  uint32_t);
    int countHighBits(uint32_t);

    // driver
    int main(){

      checkBit(d,e);
      cout << "There are " << countHighBits(f) << " set bits.\n";

    return 0;
    }

    /************************************************************
    * checkBit accepts two uint32_t arguments and will         *
    * check to see if the bit is high for a given uint32_t      *
    * and a given position. will return true if the bit is high *
    * or return false if the bit is 0.                          *
    ************************************************************/
    bool checkBit(uint32_t num,  uint32_t position){

      if(num & position){

        cout << "The bit is set.\n";
        return true;

      }else{

        cout << "The bit is clear.\n";
        return false;
      }
    }

    /************************************************************
    * countHighBits accepts one uint32_t argument and will      *
    * check if each bit is high or not then sum the high bits   *
    * in a local variable and return that sum.
    ************************************************************/
    int countHighBits(uint32_t num){

      int count = 0;
      for (int i = 0; i < 32; ++i){

        if(num & b){

          count++;
        }

        b <<= 1;
      }
      return count;
    }
