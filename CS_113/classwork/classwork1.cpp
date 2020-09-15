#include <iostream>

void printNumber(int);

int main(){

	int x = -123;
	int y = -560;
	int z = 78;

	printNumber(x);
	printNumber(y);
	printNumber(z);

	return 0;
}

void printNumber(int n){

	for (int i = 0; i < 32; i++){

		unsigned int g = n & 0x80000000;
		n <<= 1;

		if(g != 0){

			std::cout << "1 ";
		}else{

			std::cout << "0 ";
		}
	}
	std::cout << std::endl;
}