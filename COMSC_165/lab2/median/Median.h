#ifndef MEDIAN_H
#define MEDIAN_H

class Median
{
	public:

		int arraySize;
		double median;
		double *medianArrayPointer;

		int getArraySize();
		void createArray(int);
		void setArrayValues(double *arr);
		void selectionSort(double *arr, int);
		void getMedian(double *arr, int);
};

#endif // MEDIAN_H
