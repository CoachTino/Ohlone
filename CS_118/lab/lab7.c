#include <stdio.h>
#include <stdint.h>

	unsigned int absoluteValue(int x);


	int main(int argc, char** argv){

		unsigned int firstNumber = absoluteValue(-7);
		unsigned int secondNumber = absoluteValue(45);

		printf("first number: %d\n", firstNumber);
		printf("second number: %d\n", secondNumber);

		return 0;
	}
/*
	unsigned int absoluteValue(int x){

		int y = 0;

		if(x < 0){

			for(int i = 0; i > x; x++){

				y++;
			}
		}

		if(x > 0){

			for(int i = 0; i < x; i++){

				y++;
			}
		}
		return y;
	}
*/