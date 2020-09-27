#ifndef SORTINGALGORITHMS_H
#define SORTINGALGORITHMS_H

#include <string>

	class sortingLib{
		
		public:

			// hard coded test array
			std::string testArray[5] =  {" alphabet", "-apple", "\"abstract", "a", "acorn"};
			std::string testArrayNew[5] =  {"basketball", "bypass", "bounce", "b", "blasphemy"};

			// bubble sort
			void bubbleSort(std::string s[], int);

			// selection sort
			void selectionSort(std::string s[], int);
			
			// insertion sort
			void insertionSort(std::string s[], int);	
			
			// merge sort
			void mergeSort(std::string s[], int);		

			// quick sort
			void quickSort(std::string s[], int);

	};

#endif