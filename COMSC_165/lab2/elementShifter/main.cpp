#include "ElementShifter.h"
#include <iostream>

using namespace std;

	int main(){

		ElementShifter eso(eso.arraySize);

		eso.setBaseArrayElementValues(eso.baseArray, eso.arraySize);
		eso.shiftArrayElements(eso.baseArray, eso.arraySize);
		eso.displayShiftedArray(eso.elementShifterArrayPointer, eso.arraySize);
		eso.deleteDynamicArray(eso.baseArray);
		eso.deleteDynamicArray(eso.elementShifterArrayPointer);

		return 0;
	}
