#include <iostream>
#include <stdint.h>
#include <stdio.h>

int countHighBits(uint32_t);
void flipBits();

// declare global variables
uint32_t b = 0x00000001;    // 01              = 0x00000001 = 0000 0000 0000 0000 0000 0000 0000 0001
uint32_t c = 0;             // 00              = 0x00000000 = 0000 0000 0000 0000 0000 0000 0000 0000
uint32_t d = 0x000049C1;    // 18881           = 0x000049C1 = 0000 0000 0000 0000 0100 1001 1100 0001
uint32_t f = 0xFFFFFFFF;    // 4,294,967,295   = 0xFFFFFFFF = 1111 1111 1111 1111 1111 1111 1111 1111

// signed integer to store user entered number
int32_t userNum = 0;

// unsigned integer to hold abs() of user entered number
uint32_t onesComplement = 0;

// unsigned integer to hold value of two's complement
uint32_t twosComplement = 0;


int main(){

    std::cout << "There are " << countHighBits(f) << " set bits.\n";
    flipBits();

	return 0;
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


    void flipBits(){
    	// do while loop to validate user input being non-negative
		do{
			// ask for user input
			std::cout << "Please enter a negative integer:\n";
			
			// store user input 
			std::cin >> userNum;

		}while(userNum >= 0);

		// get the asbolute of userNum and assign it to onesComplement
		onesComplement = abs(userNum);

		// flip bits (one's complement) by using ~ bitwise operator
		// get two's complement by adding 1 to one's complement
		twosComplement  = ~onesComplement + 1;

		// print twosComplement in hexadecimal to the console
		printf("two's complement = %x\n", twosComplement);
    }