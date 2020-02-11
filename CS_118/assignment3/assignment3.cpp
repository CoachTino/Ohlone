/*
Program: assignment3.cpp
Author: Valentino Lei'a
Online Class: cs118
Semester: Spring 2020
Description: Write an C++/C function to convert a hexadecimal string to a decimal number.
			 http://www.asciitable.com/ for reference to ascii/hex/decimal values
*/

#include <iostream>
#include <stdio.h>

using namespace std;

	// declare global variables
	// const cstring
	const char a[4] = "cat";
	const char b[6] = {'0', '1', '2', '3', '4', '\0'};
	const char* c = "duh";

	// function prototype
	int cstringPointerToHex(const char*);
	void printCStringInHexAndDecimal(const char*, uint x);

	// driver code
	int main(){

		printCStringInHexAndDecimal(a,cstringPointerToHex(a));
		printCStringInHexAndDecimal(b,cstringPointerToHex(b));
		printCStringInHexAndDecimal(c,cstringPointerToHex(c));

		return 0;
	}

	// function definition 
	// takes a cstring and sums the ascii value 
	// of the char in each element
	int cstringPointerToHex(const char* tempString){

		uint tempInt = 0;
		for(int i = 0; i < 7; i++){

			if(tempString[i] >= 32){

				tempInt += tempString[i];
			}
		}
		return tempInt;
	}

	// function definition
	// takes a cstring and an integer as arguments and prints 
	// the cstring value, in hex, and in decimal to the console
	void printCStringInHexAndDecimal(const char* string, uint x){

		printf("cstring = %s\n", string);
		printf("cstring in hex = %x\n", x);
		printf("cstring in decimal = %d\n\n", x);
	}
