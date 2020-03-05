#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>

	void myMemCpy(uint32_t*, uint32_t*, uint32_t);

int main(){
	
	uint32_t a = 0xDEADBEEF;
	uint32_t bufferCount = (1024*1024);

		// create buffer1
		uint32_t* b = malloc(bufferCount);


		// initialize buffer 1
		for(int i = 0; i < bufferCount/4; i++){

			b[i] = a;
		}

		// declare buffer 2
		uint32_t* c = malloc(bufferCount);

		// copy buffer 1 into buffer 2
		// memcpy(c, b, bufferCount);

		// use myMemCpy
		myMemCpy(c, b, bufferCount);
		for (int i = 0; i < bufferCount/4; ++i)
		{
			printf("copied buffer index :%x\n", c[i]);
		}

	return 0;
}


