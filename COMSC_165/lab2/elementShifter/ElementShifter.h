#ifndef ELEMENTSHIFTER_H
#define ELEMENTSHIFTER_H

class ElementShifter
{
	public:

        int arraySize = 10;
		int *baseArray;
		int *elementShifterArrayPointer;

		ElementShifter(int);
		void setBaseArrayElementValues(int *arr, int);
		int *shiftArrayElements(int *arr, int);
		void displayShiftedArray(int *arr, int);
		void deleteDynamicArray(int *arr);
};

#endif // ELEMENTSHIFTER_H
