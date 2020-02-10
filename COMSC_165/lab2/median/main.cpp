#include "Median.h"
#include <iostream>

using namespace std;

	int main(){

		Median mo;

        mo.createArray(mo.getArraySize());
        mo.setArrayValues(mo.medianArrayPointer);
        mo.selectionSort(mo.medianArrayPointer, mo.arraySize);
        mo.getMedian(mo.medianArrayPointer, mo.arraySize);

		return 0;
	}
