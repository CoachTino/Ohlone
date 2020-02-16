/*
Program: assignment3.cpp
Author: Valentino Lei'a
Online Class: cs118
Semester: Spring 2020
Description: Write C/C++ code to extract exponent, 
			 mantissa and sign bit from a 32 bit float number.
*/

#include <iostream>
#include <stdio.h>
#include <stdint.h>


	// global variables
	const float decimal = -7.75;				// 0111.0100 1101
	uint32_t* ptr = (uint32_t*)&decimal;

	// function prototypes
	void extractSignBit(uint32_t*);
	void extractExponentBits(uint32_t*);
	void extractMantissa(uint32_t*);

using namespace std;

	// driver code
	int main(){

		printf("float: %x\n", *ptr);
		extractSignBit(ptr);
		extractExponentBits(ptr);
		extractMantissa(ptr);
		
		return 0;
	}


		/*********************************************************
		* initialize an unsigned 32 bit integer to the value of  *
		* the pointer p. then print that value to the console    *
		* in hexadecimal. then shift the bits 31 bits to the     *
		* right starting at the signbit. then print that sign    *
		*bit to the console.                                     * 
		*********************************************************/
		void extractSignBit(uint32_t* p){

			uint32_t signBit = *p;
			signBit >>= 31;
			printf("sign bit: %x\n", signBit);
		}

		/*********************************************************
		* initialize an unsigned 32 bit integer to the value of  *
		* the pointer p. then print that value to the console    *
		* in hexadecimal. then shift the bits 31 bits to the     *
		* right starting at the signbit. then print that sign    *
		*bit to the console.                                     * 
		*********************************************************/
		void extractExponentBits(uint32_t* p){
		
			uint32_t exponentBits = *p;
			exponentBits <<= 1;
			exponentBits >>= 24;		
			printf("exponent bit: %x\n", exponentBits);
		}	

		/*********************************************************
		* initialize an unsigned 32 bit integer to the value of  *
		* the pointer p. then print that value to the console    *
		* in hexadecimal. then shift the bits 31 bits to the     *
		* right starting at the signbit. then print that sign    *
		*bit to the console.                                     * 
		*********************************************************/
		void extractMantissa(uint32_t* p){
		
			uint32_t mantissa = *p;
			mantissa <<= 9;
			mantissa >>= 9;
			printf("mantissa bit: %x\n", mantissa);
		}