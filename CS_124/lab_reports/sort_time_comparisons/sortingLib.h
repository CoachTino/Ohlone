#ifndef SORTINGALGORITHMS_H
#define SORTINGALGORITHMS_H

#include <string>

class sortingLib{
	
	public:

		// hard coded test array
		std::string testArray[5] =  {"alphabet", "apple", "abstract", "a", "acorn"};
		std::string testArrayNew[5] =  {"basketball", "bypass", "bounce", "b", "blasphemy"};

		// bubble sort
		void bubbleSort(std::string (&s)[]);

		// selection sort
		void selectionSort(std::string (&s)[]);
		
		// insertion sort
		void insertionSort(std::string (&s)[]);	
		
		// merge sort
		void mergeSort(std::string (&s)[]);		

		// quick sort
		void quickSort(std::string (&s)[]);

};

#endif