#include <stdio.h>
#include <stdint.h>
#include <string.h>

int main(){
	
	uint32_t a = 0xDEADBEEF;
	uint32_t bufferCount = 1024*1024;

		// create buffer1
		uint32_t* b = new uint32_t[bufferCount];


		// initialize buffer 1
		for(int i = 0; i < bufferCount/4; i++){

			b[i] = a;
		}

		// declare buffer 2
		uint32_t* c = new uint32_t[bufferCount];	

		// copy buffer 1 into buffer 2
		memcpy(c, b, bufferCount);

	return 0;
}


