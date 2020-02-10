// syntax for creating a dynamic array
/*
	dataType *nameOfTheDynamicArray;
	nameOfTheDynamicArray = new dataType[numberOfElements];
	nameOfTheDynamicArray[0] = value;
	delete [] nameOfTheDynamicArray;
*/

#include <iostream>

using namespace std;

int main(){

	int *myDynamicArray;

	myDynamicArray = new int[3];

	myDynamicArray[0] = 100;
	myDynamicArray[1] = 200;
	myDynamicArray[2] = 300;

	for(int i = 0; i < 3; i++){

		cout << myDynamicArray[i] << endl;
	}

	return 0;
}