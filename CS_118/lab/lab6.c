// calculate variance of an array of numbers

#include <stdio.h>
#include <stdint.h>

		//                rdi,         rsi,         rdx
	int standardDeviation(uint32_t *a, int *t, uint32_t x);

	int main(int argc, char** argv){

		// change to 10 later
		uint32_t myCoolArray[10] = {1,2,3,4,5,60,77,23,33,55};
		int tempArray[10] = {0};


		printf("Source Array: ");
		for(int i = 0; i < 10; i++){

			printf(" %d ", myCoolArray[i]);
		}
		printf("\n");

		// call the assembly standard variance function
		//                rdi,         rsi,     rdx
		int y = standardDeviation(myCoolArray, tempArray, 10);


		printf("Temp Array: ");
		for(int i = 0; i < 10; i++){

			printf(" %d ", tempArray[i]);
		}
		printf("\n");

		printf("Standard Variance: %d\n", y);

		return 0;
	}

// calculate average of elements in array
// x = subtract each value from average
	// store in temp array (signed array, ex. index0 -avg)
// square each number
// add total of temp array
// divide by total number of elements in temp array
// return avg of temp array

	// when do divide sitting in eax
