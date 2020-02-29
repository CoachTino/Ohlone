#include <stdio.h>
#include <stdint.h>
#include <iostream>
using namespace std;

int main(){
	
	uint32_t a = 0xDEADBEEF;
//	uint32_t* b = 3735928559;
	uint32_t* c = new uint32_t[1024];

	printf("int a = %x\n", a);
	//printf("int b = %x\n", b);

	for(int i = 0; i < count; i++){

		c[i] = a;
		cout << "c[" << i <<"] = " << c[i] << endl;
	}

	return 0;
}