//random text

#include <iostream>
#include <stdio.h>
#include <stdint.h>
#include <cmath>

using namespace std;

// from 31 to 23 is the base
    uint32_t b = 0x80000000;    		// 01              = 0x00000001 = 0000 0000 0000 0000 0000 0000 0000 0001
	const float decimal = 12.8; 		// 7.75            = 0x00000000 = 0000 0000 0000 0000 0000 0111.0100 1011
    int countHighBits(const float);


	int main(){
		/*
		uint32_t x = 651;
		uint32_t a = 0x000000FF;    // 15              = 0x000000FF = 0000 0000 0000 0000 0000 0000 1111 1111
		uint32_t f = 0xFFFFFFFF;    // 4,294,967,295   = 0xFFFFFFFF = 1111 1111 1111 1111 1111 1111 1111 1111

		printf("uint32 x = %x\n", x);
		printf("uint32 a = %x\n", a);
		printf("uint32 f = %x\n", f);
	*/

		if(isnan(decimal) == false){
			cout << "false\n";
		}

		cout << "high bits: " << countHighBits(decimal) << endl;
		
		printf("float: %f\n", decimal);
		return 0;
	}

	/************************************************************
    * countHighBits accepts one uint32_t argument and will      *
    * check if each bit is high or not then sum the high bits   *
    * in a local variable and return that sum.
    ************************************************************/
    int countHighBits(const float num){

      int count = 0;
      for (int i = 0; i < 32; ++i){

        if(num & b){

          count++;
        }

        b >>= 1;
      }
      return count;
    }
