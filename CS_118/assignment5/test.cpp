#include <stdio.h>
#include <stdint.h>
#include <iostream>
#include <string.h>
using namespace std;

int main(){
	
	uint32_t a = 0xDEADBEEF;
	uint32_t bufferCount = 1024;

		uint32_t* b = new uint32_t[bufferCount];
		for(int i = 0; i < bufferCount; i++){

			b[i] = a;
		}
		uint32_t* c = new uint32_t[bufferCount];	
		memcpy(&c[0], &b[0], bufferCount);
		for (int i = 0; i < bufferCount; ++i)
		{
			cout << c[i] << endl;
		}

	return 0;
}









/*
		for (int i = 0; i < bufferCount; ++i)
		{
			cout << &b[i] << endl;
		}
					cout << "og buffer[" << i <<"] = " << b[i] << endl;

			for(int i = 0; i < bufferCount; i++){
				cout << "copied buffer[" << i <<"] = " << c[i] << endl;
		}
		*/