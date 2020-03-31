#include <stdio.h>
#include <stdint.h>

	int32_t add_array_c(int32_t *myarray, int size) {
		
		int32_t sum = 0;
		for(int i=0; i<size; i++) {
			sum += myarray[i];
		}
		return sum;
	}
								//rdi          //rsi
	//int32_t add_array_asm(int32_t *myarray, int size);
	//int32_t rev_array(int32_t *myarray, int32_t *revarray, int size);

	// square each element in the array and return the sum of the array
	int32_t square_array(int32_t *myarray, int size);


	int main(int argc, char** avgs) {

		int32_t myarray[5] = {3, 5, 6, 7, 8};
		int32_t rev_myarray[5] = {0};


		//int32_t sum = add_array_c(myarray, 5);
		//int32_t sum = add_array_asm(NULL, 0);
		int32_t sum = square_array(myarray, 5);

		printf("sum of squares is: %d\n", sum);

		// debug pint out
		// printf("myarray: %d,%d,%d,%d,%d\n", myarray[0], myarray[1], myarray[2], myarray[3], myarray[4]);

		//rev_array(myarray, rev_myarray, 5);
		// debug print out
		// printf("rev_myarray: %d,%d,%d,%d,%d\n", rev_myarray[0], rev_myarray[1], rev_myarray[2], rev_myarray[3], rev_myarray[4]);


		return 0;
	}