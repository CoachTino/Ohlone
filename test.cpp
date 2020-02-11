//random text

#include <iostream>
#include <stdio.h>
#include <stdint.h>

using namespace std;

int main(){
	
	uint32_t x = 651;
	uint32_t a = 0x000000FF;    // 15              = 0x000000FF = 0000 0000 0000 0000 0000 0000 1111 1111
	uint32_t f = 0xFFFFFFFF;    // 4,294,967,295   = 0xFFFFFFFF = 1111 1111 1111 1111 1111 1111 1111 1111

	printf("uint32 x = %x\n", x);
	printf("uint32 a = %x\n", a);
	printf("uint32 f = %x\n", f);

	return 0;
}