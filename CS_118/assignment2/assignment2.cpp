/*
Program: assignment2.cpp
Author: Valentino Lei'a
Online Class: cs118
Semester: Spring 2020
Description: Take user input of a number. (a negative number)
			 get the absolute of the number using abs() function
			 flip bits (one's complement)
			 and 1 (two's complement)
			 print the number in Hex printf("%x", number)
*/

#include <iostream>
#include <stdint.h>
#include <stdio.h>

using namespace std;

	// signed integer to store user entered number
	int32_t userNum = 0;

	// unsigned integer to hold abs() of user entered number
	uint32_t onesComplement = 0;

	// unsigned integer to hold value of two's complement
	uint32_t twosComplement = 0;

	// driver code
	int main(){

		// do while loop to validate user input being non-negative
		do{
			// ask for user input
			cout << "Please enter a negative integer:\n";
			
			// store user input 
			cin >> userNum;

		}while(userNum >= 0);

		// get the asbolute of userNum and assign it to onesComplement
		onesComplement = abs(userNum);

		// flip bits (one's complement) by using ~ bitwise operator
		// get two's complement by adding 1 to one's complement
		twosComplement  = ~onesComplement + 1;

		// print twosComplement in hexadecimal to the console
		printf("two's complement = %x\n", twosComplement);

		return 0;
	}