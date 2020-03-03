#include <stdio.h>
#include <stdint.h>
#include <iostream>
#include <string.h>
#include <chrono>

using namespace std;
using namespace std::chrono;

	// global variables

	const uint32_t deadBeef = 0xDEADBEEF;
	const uint32_t bufferCount = 800000000;

	// function prototypes
	
	uint32_t* createBuffer();					// might be create buffer
	uint32_t* populateBuffer(uint32_t*);
	void copyBuffer(uint32_t*, uint32_t*);
	void deleteBuffer(uint32_t*);

	// driver code
	int main (){

		uint32_t* buffer;
		uint32_t* buffCopy;
		buffer = createBuffer();
		// debug below
		// cout << "\n\n\nnew buffer here\n\n\n"; 
		buffCopy = createBuffer();
		buffer = populateBuffer(buffer);		
		int loopCount = 0;
		do{
    		// get starting timepoint
    		auto start = high_resolution_clock::now(); 
			copyBuffer(buffCopy, buffer);
			// get ending timepoint 
    		auto stop = high_resolution_clock::now();
    		// Get duration. Substart timepoints to  
    		// get durarion. To cast it to proper unit 
    		// use duration cast method 
    		auto duration = duration_cast<microseconds>(stop - start); 
			cout << "Time taken by function: " << duration.count() << " microseconds" << endl;  
			loopCount++;
		}while(loopCount < 10);

		deleteBuffer(buffer);
		deleteBuffer(buffCopy);
		return 0;
	}

	uint32_t* createBuffer(){

		uint32_t* b = new uint32_t[bufferCount];
		// debug below
		// for (int i = 0; i < bufferCount; ++i){
			// cout << &b[i] << endl;
		// }
		return b;
	}

	uint32_t* populateBuffer(uint32_t* b){

		for(int i = 0; i < bufferCount; i++){

			b[i] = deadBeef;
			// dubug below
			//cout << "og buffer[" << i <<"] = " << b[i] << endl;
		}
		return b;
	}

	void copyBuffer(uint32_t* origin, uint32_t* copy){

		memcpy(&copy[0], &origin[0], bufferCount);

			// debug below
			// for(int i = 0; i < bufferCount; i++){
				// cout << "copied buffer[" << i <<"] = " << copy[i] << endl;
		// }
	}

	void deleteBuffer(uint32_t *b){

		delete[] b;
	}
	