/*
Program: assignment4.cpp
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
	int extractSignBit(uint32_t*);
	int extractExponentBits(uint32_t*);
	int extractMantissa(uint32_t*);

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
		int extractSignBit(uint32_t* p){

			uint32_t signBit = *p;
			signBit >>= 31;
			printf("sign bit: %x\n", signBit);
			return signBit;
		}

		/*********************************************************
		* initialize an unsigned 32 bit integer to the value of  *
		* the pointer p. then print that value to the console    *
		* in hexadecimal. then shift the bits 31 bits to the     *
		* right starting at the signbit. then print that sign    *
		*bit to the console.                                     * 
		*********************************************************/
		int extractExponentBits(uint32_t* p){
		
			uint32_t exponentBits = *p;
			exponentBits <<= 1;
			exponentBits >>= 24;		
			printf("exponent bit: %x\n", exponentBits);
			return exponentBits;
		}	

		/*********************************************************
		* initialize an unsigned 32 bit integer to the value of  *
		* the pointer p. then print that value to the console    *
		* in hexadecimal. then shift the bits 31 bits to the     *
		* right starting at the signbit. then print that sign    *
		*bit to the console.                                     * 
		*********************************************************/
		int extractMantissa(uint32_t* p){
		
			uint32_t mantissa = *p;
			mantissa <<= 9;
			mantissa >>= 9;
			printf("mantissa bit: %x\n", mantissa);
			return mantissa;
		}