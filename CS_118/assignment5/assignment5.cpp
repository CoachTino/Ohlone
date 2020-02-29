#include <stdio.h>
#include <stdint.h>
#include <iostream>
#include <string.h>

using namespace std;

	// global variables

	const uint32_t deadBeef = 0xDEADBEEF;
	const uint32_t bufferCount = 1024;

	// function prototypes
	
	uint32_t* createBuffer();					// might be create buffer
	void populateBuffer(uint32_t*);
	void copyBuffer(uint32_t*, uint32_t*);
	void deleteBuffer(uint32_t*);

	// driver code
	int main (){

		uint32_t* buffer;
		uint32_t* buffCopy;

		buffer = createBuffer();

		cout << "\n\n\nnew buffer here\n\n\n"; 
		buffCopy = createBuffer();
		populateBuffer(buffer);
		//copyBuffer(buffCopy,buffer);
		
		int loopCount = 0;
		do{
			copyBuffer(buffer, buffCopy);
			loopCount++;

		}while(loopCount < 1);

		deleteBuffer(buffer);
		return 0;
	}

	uint32_t* createBuffer(){

		uint32_t* b = new uint32_t[1024];
		for (int i = 0; i < bufferCount; ++i)
		{
			cout << &b[i] << endl;
		}
		return b;
	}

	void populateBuffer(uint32_t* b){

		for(int i = 0; i < bufferCount; i++){

			b[i] = deadBeef;
			cout << "og buffer[" << i <<"] = " << b[i] << endl;
		}
	}

	void copyBuffer(uint32_t* b, uint32_t*buf){

		memcpy(&b[0], &buf[0], bufferCount);

			for(int i = 0; i < bufferCount; i++){
				cout << "new buffer[" << i <<"] = " << b[i] << endl;
		}
	}

	void deleteBuffer(uint32_t *b){

		delete[] b;
	}
	